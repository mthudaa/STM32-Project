#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(){
	Mat foto;
	namedWindow("Webcam ON dong");
	VideoCapture cap(0);
	if (!cap.isOpened()) {
		cout << "Kamera gak siap";
	}
	
	while(true){
		cap >> foto;
		imshow("Webcam ON dong", foto);
		waitKey(1);
	}
	return 0;
}
