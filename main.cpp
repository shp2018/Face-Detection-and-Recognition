#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<opencv2/objdetect/objdetect.hpp>
#include<opencv2/imgproc/imgproc.hpp>
#include<opencv2/highgui/highgui.hpp>
#include "opencv2/core.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>
#include "opencv2/face.hpp"
#include <fstream>
#include <sstream>
#include "FaceRecognition.h"


using namespace std;
using namespace cv;
using namespace cv::face;

int main()
{
	int choice;
	cout << "1. Recognise Face\n";
	cout << "2. Add Face\n";
	cout << "Choose One: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		FaceRecognition();
		break;
	case 2:
		addFace();
		eigenFaceTrainer();
		break;
	default:
		return 0;
	}
    
	return 0;
}