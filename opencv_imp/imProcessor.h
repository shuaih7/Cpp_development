#pragma once

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class imProcessor
{
public:
	imProcessor();
	~imProcessor();
	Mat createImage(int, int); // uchar is the opencv-specified data type
	void generalOps(string);
};
