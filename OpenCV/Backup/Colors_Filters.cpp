#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"

using namespace std;

int main(){
    
    string  path = "C:/Users/sirle/OneDrive/Documentos/OpenCV/Teste/src/Tiger.jpg";
    cv::Mat img = cv::imread(path), img_rainbow, gaussian, canny_tiger;
    cv::cvtColor(img, img_rainbow, 7);
    //cv::GaussianBlur(img, gaussian, cv::Size(7,7), 7 );
    cv::Canny(img, canny_tiger, 6, 93);
    
    cv::dilate(canny_tiger, canny_tiger, cv::getStructuringElement(1, cv::Size(2,2))); //or erode
    cv::imshow("Tiger", img);
    cv::imshow("Canny Tiger", canny_tiger);
   
   

    cv::waitKey(0);


    return 0;
    
}