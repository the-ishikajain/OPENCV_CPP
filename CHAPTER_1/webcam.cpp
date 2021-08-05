#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
//webcam//
int main()
{
	Mat img;
	VideoCapture cap(0);
	while (true)
	{
		cap.read(img);
		imshow("IMAGE", img);
		waitKey(1);
	}
}
