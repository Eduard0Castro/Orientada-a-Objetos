#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"

using namespace std;

int main(){
    
    cv::VideoCapture cap(0);
    cv::Mat img, img_invert;

    while (true){
        cap.read(img);
        cv::flip(img, img, 1);
        cv::cvtColor(img, img_invert, 7);
        cv::imshow("Normal", img);
        cv::imshow("Invert", img_invert);
        cv::waitKey(1);
    }

    return 0;
    
}