#include "imProcessor.h"
#include <vector>
#include <omp.h>
#include <iostream>
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp> 

using namespace std;
using namespace cv;

imProcessor::imProcessor()
{

}

imProcessor::~imProcessor()
{

}

// Creating a vector contains the image pixel values and then convert to Mat
Mat imProcessor::createImage(int height, int width)
{
	if (height < 100) height = 100; // Set up the minimum height
	if (width < 100)  width = 100;  // Set up the minimum width

	int band = int(float(height)/5.0);
	int middle = int(float(height) / 2.0);
	vector<uchar> image_vec;

	uchar value;
	#pragma omp parallel
	for (int h = 0; h < height; h++) {
		if (h - middle > -band && h - middle < band) value = 255;
		else value = 0;

		for (int w = 0; w < width; w++) {
			image_vec.push_back(value);
		}
	}

	Mat m = Mat(height, width, CV_8UC1);
	memcpy(m.data, image_vec.data(), image_vec.size() * sizeof(uchar));

	return m;
}

// Testing for basic functions such as imread, imshow, and imwrite
void imProcessor::generalOps(string filename)
{
	Mat image = imread(filename, -1); // Loading image of the default format
	if (!image.data){
		cout << "Could not open or find the image." << endl;
		return;
	}

	imshow("Sample Image Show", image);
	waitKey(0);

	vector<int> params; // Note: The third parameter of the imwrite is of type "const vector<int>"
	params.push_back(IMWRITE_PNG_COMPRESSION);
	params.push_back(3);
	imwrite("sample_output.png", image, params);
}