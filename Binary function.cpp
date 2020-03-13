#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("C:\\Users\\duzhi\\Pictures\\Saved Pictures\\1.jpg", 0);	
	imshow("原始图", img);

	Mat img1, img2;

	//大津法
	threshold(img, img1, 100, 255, THRESH_BINARY);
	//区域自适应二值化
	adaptiveThreshold(img, img2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);

	imshow("大津法", img1);
	imshow("区域自适应二值化", img2);

	waitKey(0);
	return 0;
}
