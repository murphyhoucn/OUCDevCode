import cv2
import numpy as np
from cvzone.HandTrackingModule import HandDetector
import time
import autopy

import pyautogui

wScr, hScr =  pyautogui.size()

wCam, hCam = 1280, 720
pt1, pt2 = (int(wCam * 0.1) , int(hCam * 0.1)), (int(wCam * 0.9) , int(hCam * 0.9))
 
cap = cv2.VideoCapture(2)
cap.set(3, wCam)
cap.set(4, hCam)
 
pTime = 0
pLocx, pLocy = 0, 0
smooth = 4
detector = HandDetector(mode=False, 
                        maxHands=1, 
                        detectionCon=0.5,  # 最小检测置信度 
                        minTrackCon=0.5)   # 最小跟踪置信度
 
#（3）处理每一帧图像
while True:
    success, img = cap.read()
    img = cv2.flip(img, flipCode=1)

    cv2.rectangle(img, pt1, pt2, (0,255,255), 5)
    
    hands, img = detector.findHands(img, flipType=False)

    if hands:
        # 获取手部信息hands中的21个关键点信息
        lmList0 = hands[0]['lmList']
        
        # 获取食指指尖坐标，和中指指尖坐标
        bx, by = lmList0[8][0:2]  # 食指指尖

        bx6, by6 = lmList0[6][0:2]
        bx10, by10 = lmList0[10][0:2]
        
        fingers0 = detector.fingersUp(hands[0])
        # print(fingers0) 返回 [0,1,1,0,0] 代表 只有食指和中指竖起

        # 如果食指竖起且中指弯下，就认为是移动鼠标
        if fingers0[1] == 1:
            cv2.circle(img, (bx,by), 10, (255,255,0), cv2.FILLED)

            x3 = np.interp(bx, (pt1[0], pt2[0]), (0, wScr))
            y3 = np.interp(by, (pt1[1], pt2[1]), (0, hScr))
 
            cLocx = pLocx + (x3 - pLocx) / smooth
            cLocy = pLocy + (y3 - pLocy) / smooth            

            autopy.mouse.move(cLocx, cLocy)  # 给出鼠标移动位置坐标

            pLocx, pLocy = cLocx, cLocy

            distance, info, img = detector.findDistance((bx10, by10), (bx6, by6), img)
            if distance < 30:
                cv2.circle(img, (bx6, by6), 10, (0,255,0), cv2.FILLED)
                autopy.mouse.click()

        if fingers0[2] == 1:
            pyautogui.keyDown('w')
            time.sleep(0.1)
            pyautogui.keyUp('w')    
        if fingers0[3] == 1:
            pyautogui.keyDown('s')
            time.sleep(0.1)
            pyautogui.keyUp('s') 
        if fingers0[4] == 1:
            pyautogui.keyDown('d')
            time.sleep(0.1)
            pyautogui.keyUp('d')
        if fingers0[0] == 0:
            pyautogui.keyDown('a')
            time.sleep(0.1)
            pyautogui.keyUp('a')
            


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