import cv2
import numpy as np
from cvzone.HandTrackingModule import HandDetector
import time
import autopy


import pyautogui
 

wScr, hScr =  pyautogui.size()

wCam, hCam = 640, 480
pt1, pt2 = (int(wCam * 0.1) , int(hCam * 0.1)), (int(wCam * 0.9) , int(hCam * 0.9))
 
cap = cv2.VideoCapture(2)
cap.set(3, wCam)
cap.set(4, hCam)
 
pTime = 0
 
pLocx, pLocy = 0, 0
 
smooth = 4
 
detector = HandDetector(mode=False, 
                        maxHands=2, 
                        detectionCon=0.8,  # 最小检测置信度 
                        minTrackCon=0.5)   # 最小跟踪置信度
 
#（3）处理每一帧图像
while True:
    success, img = cap.read()
    img = cv2.flip(img, flipCode=1)

    cv2.rectangle(img, pt1, pt2, (0,255,255), 5)
    
    hands, img = detector.findHands(img, flipType=False)
    print(hands)

    if hands:
        # 获取手部信息hands中的21个关键点信息
        lmList0 = hands[0]['lmList']
        
        # 获取食指指尖坐标，和中指指尖坐标
        x1, y1 = lmList0[8][0:2]  # 食指尖的关键点索引号为8
        x2, y2 = lmList0[12][0:2] # 中指指尖索引12
 
        fingers0 = detector.fingersUp(hands[0])
        # print(fingers0) 返回 [0,1,1,0,0] 代表 只有食指和中指竖起

        # 如果食指竖起
        if fingers0[1] == 1:
            cv2.circle(img, (x1,y1), 15, (255,255,0), cv2.FILLED)

            x3 = np.interp(x1, (pt1[0], pt2[0]), (0, wScr))
            y3 = np.interp(y1, (pt1[1], pt2[1]), (0, hScr))
 
            cLocx = pLocx + (x3 - pLocx) / smooth
            cLocy = pLocy + (y3 - pLocy) / smooth            

            autopy.mouse.move(cLocx, cLocy)  # 给出鼠标移动位置坐标
            # 更新前一帧的鼠标所在位置坐标，将当前帧鼠标所在位置，变成下一帧的鼠标前一帧所在位置
            pLocx, pLocy = cLocx, cLocy
 
        if fingers0[1] == 1 and fingers0[2] == 1:  # 食指和中指都竖起
            distance, info, img = detector.findDistance((x1, y1), (x2, y2), img)
            
            # 当指间距离小于50（像素距离）就认为是点击鼠标
            if distance < 50:
                cv2.circle(img, (x1,y1), 15, (0,255,0), cv2.FILLED)
                autopy.mouse.click()

        if len(hands) == 2:
            lmList1 = hands[1]['lmList']
            fingers1 = detector.fingersUp(hands[1])
            
            if fingers1[1] == 1:
                pyautogui.keyDown('w')
            else:
                pyautogui.keyUp('w')

            if fingers1[2] == 1:
                pyautogui.keyDown('s')
            else:
                pyautogui.keyUp('s')        

            if fingers1[3] == 1:
                pyautogui.keyDown('a')
            else:
                pyautogui.keyUp('a')

            if fingers1[4] == 1:
                pyautogui.keyDown('d')
            else:
                pyautogui.keyUp('d')
 

    cTime = time.time() #处理完一帧图像的时间
    fps = 1/(cTime-pTime)
    pTime = cTime  #重置起始时间
    
    # 在视频上显示fps信息，先转换成整数再变成字符串形式，文本显示坐标，文本字体，文本大小
    cv2.putText(img, str(int(fps)), (70,50), cv2.FONT_HERSHEY_PLAIN, 3, (255,0,0), 3)  
    
    # 显示图像，输入窗口名及图像数据
    cv2.imshow('image', img)    
    if cv2.waitKey(1) & 0xFF==27:  #每帧滞留20毫秒后消失，ESC键退出
        break
 
# 释放视频资源
cap.release()
cv2.destroyAllWindows()