#include "imProcessor.h"
#include <iostream> 
#include <vector>

using namespace std;
using namespace cv;

int main()
{
    std::cout << "Program start ...\n"; 
	imProcessor impro;
	//impro.generalOps("sample_image.jpeg");
	Mat image = impro.createImage(350,320);
	vector<int> params;
	params.push_back(IMWRITE_PNG_COMPRESSION);
	params.push_back(1);
	imwrite("sample_output.png", image, params);
	cout << "Done." << endl;

	return 0;
}
