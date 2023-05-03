# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======

import cv2

def VideoCapture_shuxing():
	cap = cv2.VideoCapture(0)
	print("CV_CAP_PROP_POS_MSEC:" + str(cap.get(0)))
	print("CV_CAP_PROP_POS_FRAMES:" + str(cap.get(1)))
	print("CV_CAP_PROP_POS_AVI_RATIO :" + str(cap.get(2)))
	print("CV_CAP_PROP_FRAME_WIDTH :" + str(cap.get(3)))
	print("CV_CAP_PROP_FRAME_HEIGHT :" + str(cap.get(4)))
	print("CV_CAP_PROP_FPS :" + str(cap.get(5)))
	print("CV_CAP_PROP_FOURCC :" + str(cap.get(6)))
	print("CV_CAP_PROP_FRAME_COUNT :" + str(cap.get(7)))
	print("CV_CAP_PROP_FORMAT :" + str(cap.get(8)))
	print("CV_CAP_PROP_MODE :" + str(cap.get(9)))
	print("CV_CAP_PROP_BRIGHTNESS :" + str(cap.get(10)))
	print("CV_CAP_PROP_CONTRAST  :" + str(cap.get(11)))		
	print("CV_CAP_PROP_SATURATION  :" + str(cap.get(12)))
	print("CV_CAP_PROP_HUE :" + str(cap.get(13)))
	print("CV_CAP_PROP_GAIN :" + str(cap.get(14)))
	print("CV_CAP_PROP_EXPOSURE :" + str(cap.get(15)))
	print("CV_CAP_PROP_CONVERT_RGB :" + str(cap.get(16)))
	print("CV_CAP_PROP_WHITE_BALANCE :" + str(cap.get(17)))
	print("CV_CAP_PROP_RECTIFICATION :" + str(cap.get(18)))
	
	cap.release()
	cv2.destroyAllWindows()
	return 0

if __name__=='__main__':
	VideoCapture_shuxing()