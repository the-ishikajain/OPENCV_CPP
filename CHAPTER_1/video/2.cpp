#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main()
{
	Mat img;
	string path = "Resources/test_video.mp4";
	VideoCapture cap(path);
	while (true)
	{
		cap.read(img);
		imshow("IMAGE",img);
		waitKey(10);
	}
}
