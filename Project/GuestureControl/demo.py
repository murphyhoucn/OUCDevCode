import cv2
import pyautogui
import sys

cap = cv2.VideoCapture(2)

pyautogui.FAILSAFE=False

def main():
    while(True):
        # Capture frame-by-frame
        ret, frame = cap.read()
        frame = cv2.flip(frame, 1)
        print(frame.shape)

        # Our operations on the frame come here
        gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
        
        frontalface = r'D:\Miniconda\envs\novelai\Lib\site-packages\cv2\data\haarcascade_frontalface_default.xml'
        eye = r'D:\Miniconda\envs\novelai\Lib\site-packages\cv2\data\haarcascade_eye_tree_eyeglasses.xml'
        smile = r'D:\Miniconda\envs\novelai\Lib\site-packages\cv2\data\haarcascade_smile.xml'

        face_cascade = cv2.CascadeClassifier(frontalface)
        eyes_cascade = cv2.CascadeClassifier(eye)
        smile_cascade = cv2.CascadeClassifier(smile)

        faces = face_cascade.detectMultiScale(
            gray,
            scaleFactor=1.15,
            minNeighbors=5,
            minSize=(5, 5),
        )
        eyes = eyes_cascade.detectMultiScale(
            gray,
            scaleFactor=1.15,
            minNeighbors=5,
            minSize=(5, 5),
        )

        print("发现{0}个目标!".format(len(faces)))

        for (x, y, w, h) in faces:
            cv2.rectangle(frame, (x, y), (x + w, y + w), (0, 255, 0), 2)
            # xx = max(0, min(10*(x - 100), 1980))
            # yy = max(0, min(20*(y - 100), 1080))
            # pyautogui.moveTo(10*(x - 100), 10*(y - 100), duration=0.01)
        
        print("{0} 个眼睛!".format(len(eyes)))
        for (x, y, w, h) in eyes:
            cv2.rectangle(frame, (x, y), (x + w, y + w), (0, 255, 0), 2)
        
        # if len(eyes) < 1:
        #     pyautogui.click()
        cv2.imshow("frame", frame)
        # Display the resulting frame


        if cv2.waitKey(1) & 0xFF == ord('q'):
            break
    
    # When everything done, release the capture
    cap.release()
    cv2.destroyAllWindows()



if __name__ == '__main__':
    try:
        main()
    except KeyboardInterrupt:
        print('Interrupted')
        sys.exit(0)


