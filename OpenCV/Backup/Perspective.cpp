#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"

using namespace std;

//v1 = 302,245
//v2 = 509,160
//v3 = 304,513
//v4 = 501,408  
int main(){
    
   
    float width = 200, height = 175;
    string path = "C:/Users/sirle/OneDrive/Documentos/OpenCV/Teste/src/cudomagico.jpg";
    cv::Mat cudo = cv::imread(path), warp;

    cv::Point2f src [4] = {{302,245}, {509,160}, {308,515}, {503,412}};
    cv::Point2f des [4] = {{0,0}, {width, 0}, {0, height}, {width, height}};
    cv::warpPerspective(cudo, warp, cv::getPerspectiveTransform(src, des), {200, 175});

    for (int i = 0; i <= 4; i++){
        cv::circle(cudo, src[i], 10, cv::Scalar(0,0,255), -1);
    }

    cv::imshow("Normal cudomagico: ", cudo);
    cv::imshow("Perspectiva: " , warp);

    cv::waitKey(0);


    return 0;
    
}




