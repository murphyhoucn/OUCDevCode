# import required libraries
import cv2


cap = cv2.VideoCapture(2)

ret, img = cap.read()
frame = cv2.flip(img, 1)
print(img.shape)


# # read input image
# img = cv2.imread('smile1.jpg')

# convert the image to grayscale
# gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)


gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)

# read haar cascade for face detection
face_cascade = cv2.CascadeClassifier(r'D:\Miniconda\envs\novelai\Lib\site-packages\cv2\data\haarcascade_frontalface_default.xml')

# read haar cascade for smile detection
smile_cascade = cv2.CascadeClassifier(r'D:\Miniconda\envs\novelai\Lib\site-packages\cv2\data\haarcascade_smile.xml')

# Detects faces in the input image
faces = face_cascade.detectMultiScale(gray, 1.3, 5)
print('Number of detected faces:', len(faces))

# loop over all the faces detected
for (x,y,w,h) in faces:
   
   # draw a rectangle in a face
   cv2.rectangle(img,(x,y),(x+w,y+h),(0,255,255),2)
   cv2.putText(img, "Face", (x, y), cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 255, 255), 2)
   roi_gray = gray[y:y+h, x:x+w]
   roi_color = img[y:y+h, x:x+w]
 
   # detecting smile within the face roi
   smiles = smile_cascade.detectMultiScale(roi_gray, 1.8, 20)
   if len(smiles) > 0:
      print("smile detected")
      for (sx, sy, sw, sh) in smiles:
         cv2.rectangle(roi_color, (sx, sy), ((sx + sw), (sy + sh)), (0, 0, 255), 2)
         cv2.putText(roi_color, "smile", (sx, sy),
         cv2.FONT_HERSHEY_SIMPLEX, 1, (0, 0, 255), 2)
   else:
      print("smile not detected")

# Display an image in a window
cv2.imshow('Smile Image',img)
cv2.waitKey(0)
cv2.destroyAllWindows()