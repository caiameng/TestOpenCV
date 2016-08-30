// TestOpenCV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <opencv2/opencv.hpp>  
#include <iomanip>
#include <vector>

using namespace cv; 

vector<float> vec;
vector< Mat(2,2,CV_32F) > mVec;

int main() 
{ 

	Mat n = Mat::zeros(2,3,CV_32SC3);//CV_32SC1:int
	uchar *dat = n.ptr<uchar>(0);

	n.at<Vec3i>(0,0)[0] = 1;
	n.at<Vec3i>(0,0)[1] = 2;
	n.at<Vec3i>(0,0)[2] = 3;

	n.at<Vec3i>(0,1)[0] = 4;
	n.at<Vec3i>(0,1)[1] = 5;
	n.at<Vec3i>(0,1)[2] = 6;
	
	n.at<Vec3i>(0,2)[0] = 7;
	n.at<Vec3i>(0,2)[1] = 8;
	n.at<Vec3i>(0,2)[2] = 9;

	n.at<Vec3i>(1,0)[0] = 10;
	n.at<Vec3i>(1,0)[1] = 11;
	n.at<Vec3i>(1,0)[2] = 12;

	n.at<Vec3i>(1,1)[0] = 13;
	n.at<Vec3i>(1,1)[1] = 14;
	n.at<Vec3i>(1,1)[2] = 15;

	n.at<Vec3i>(1,2)[0] = 16;
	n.at<Vec3i>(1,2)[1] = 17;
	n.at<Vec3i>(1,2)[2] = 18;

	for(size_t nrow = 0;nrow<n.rows;nrow++)
	{
		int *data = n.ptr<int>(nrow);
		for(size_t ncol  =0;ncol < n.cols;ncol++)
		{
			for(int n = 0;n<3;n++)
				std::cout<< std::setw(4)<<int( *(data+ncol*3+n));
		}
		std::cout<<std::endl;
	}
	std::cout<<std::endl;
	Mat mymat = Mat::zeros(2,3,CV_32SC1);//CV_32SC1:int
	uchar *dat1 = mymat.ptr<uchar>(0);
	mymat.at<Vec3i>(0,0)[0] = 1;
	mymat.at<Vec3i>(0,0)[1] = 2;
	mymat.at<Vec3i>(0,0)[2] = 3;

	mymat.at<Vec3i>(1,0)[0] = 4;
	mymat.at<Vec3i>(1,0)[1] = 5;
	mymat.at<Vec3i>(1,0)[2] = 6;
	for(size_t nrow = 0;nrow < mymat.rows;nrow++)
	{
		int *data =mymat.ptr<int>(nrow);
		for(size_t ncol  =0;ncol <mymat.cols;ncol++)
		{
			
				std::cout<< std::setw(4)<<int( *(data+ncol));
		}
		std::cout<<std::endl;
	}


	for(int i = 0;i<10;i++)
		vec.push_back(i);
	Mat img = Mat(vec);
	std::cout << "size:"<<img.size<<std::endl;
	std::cout << "rows:"<<img.rows<<std::endl;
	std::cout << "cols:"<<img.cols<<std::endl;
	//IplImage* src = cvLoadImage(".\\test.jpg");

 //   cvNamedWindow("show_image",0);

 //   cvShowImage("show_image",src);

 //   cvWaitKey(0);

 //   cvReleaseImage(&src);

 //   cvDestroyWindow("show_image");


	getchar();
  
   return 0; 
} 

