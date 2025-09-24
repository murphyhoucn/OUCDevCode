#include "opencv/cv.h" 
#include "opencv/highgui.h" 
using namespace std;
using namespace cv;

int main()
{

	Mat srcimg = imread("./22.jpg");
	Mat dst;
	cvtColor(srcimg, dst, CV_BGR2GRAY);
	threshold(dst, dst, 120, 255, 1);
	vector<vector<Point> > edgepoint;
	vector<Vec4i> lclass;

	findContours(dst, edgepoint, lclass, RETR_EXTERNAL, CHAIN_APPROX_NONE, Point());
	Mat mat[edgepoint.size()];

	for (int i = 0; i < edgepoint.size(); i++)
	{

		Rect rec = boundingRect(Mat(edgepoint[i]));
		mat[i] = dst(rec);
		rectangle(dst, rec, Scalar(100, 80, 90), 1, 1, 0);
		drawContours(dst, edgepoint, i, Scalar(200), 1, 8, lclass);
		string str = to_string(i);
		imshow(str, mat[i]);

	}
	imshow("tt", dst);
	cout << edgepoint.size() << endl;
	waitKey(0);

}