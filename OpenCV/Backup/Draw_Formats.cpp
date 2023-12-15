#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"

using namespace std;

int main(){
    
   
    cv::Mat fundo(640, 980, CV_8UC3, cv::Scalar(150,240,255));
    cv::circle (fundo, cv::Point (490,320), 200, cv::Scalar(0,0,255), 2);
    cv::rectangle(fundo, cv::Point(290, 120), cv::Point(690, 520), cv::Scalar(0,0,0), 2);
    cv::line(fundo, cv::Point(290, 120), cv::Point(690, 520), cv::Scalar(0,0,0), 2 );
    cv::line(fundo, cv::Point(690,120), cv::Point(290, 520), cv::Scalar(0,0,0), 2);
    cv::putText(fundo, "Quem voce pensa que e?", cv::Point(285, 120), cv::QT_FONT_NORMAL, 1, 
                cv::Scalar(255,255,255), 2);
    cv::imshow("Fundo", fundo);

    cv::waitKey(0);


    return 0;
    
}




