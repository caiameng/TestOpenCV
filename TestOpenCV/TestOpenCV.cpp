// TestOpenCV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <opencv2/opencv.hpp>  
  
using namespace cv; 
 
int main() 
{ 


	IplImage* src = cvLoadImage(".\\test.jpg");

    cvNamedWindow("show_image",0);

    cvShowImage("show_image",src);

    cvWaitKey(0);

    cvReleaseImage(&src);

    cvDestroyWindow("show_image");


	getchar();
  
   return 0; 
} 

