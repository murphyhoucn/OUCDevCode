# -*- coding : utf-8 -*-
# Author     : MurphyHou
# =======Here We Go!=======
import cv2
from handleFigure import handlefigure


def takepic(picname, praList):
	# side:
	# praList[0][0] ret
	# praList[0][1] fra
	
	# front 
	# praList[1][0] ret
	# praList[1][1] fra

	if praList[0][0] == True:
		cv2.imwrite(picname, praList[0][1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print('sid:' + picname[-24:-4] + ' - done')
	else:
		print('sid:' + picname[-24:-4] + ' - wrong')


	picname = picname.replace('sid', 'fro')
	if praList[1][0] == True:
		cv2.imwrite(picname, praList[1][1],[int(cv2.IMWRITE_JPEG_QUALITY), 100])  # 无损保存
		print('fro:' + picname[-24:-4] + ' - done')
		handlefigure(picname)
	else:
		print('fro:' + picname[-24:-4] + ' - wrong')
