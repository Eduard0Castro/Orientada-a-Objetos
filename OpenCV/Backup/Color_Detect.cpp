#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"

using namespace std;

int main(){
    
    string path = "C:/Users/sirle/OneDrive/Documentos/OpenCV/Teste/src/cudomagico.jpg";
 
    cv::VideoCapture cap(0);
    cv::Mat cam, img = cv::imread(path), img_hsv, mask;
    int mat_min = 87, mat_max = 146, 
        sat_min = 147, sat_max = 255,
        br_min = 95, br_max = 255; //Cor azul  

        cv::namedWindow("Barra de selecao", cv::WINDOW_AUTOSIZE);

        cv::createTrackbar("Matiz min: ", "Barra de selecao", &mat_min, 255);
        cv::createTrackbar("Mat max: ", "Barra de selecao", &mat_max, 255);

        cv::createTrackbar("Saturação min: ", "Barra de selecao", &sat_min, 255);
        cv::createTrackbar("Saturação max: ", "Barra de selecao", &sat_max, 255);

        cv::createTrackbar("Brilho min: ", "Barra de selecao", &br_min, 255);
        cv::createTrackbar("Brilho max", "Barra de selecao", &br_max, 255);

    while (true){

        cap.read(cam);
        
        cv::flip(cam, cam , 1);
        cv:: imshow("Normal", cam);
        cv::cvtColor(cam, img_hsv, cv::COLOR_BGR2HSV);
        cv::Scalar min (mat_min, sat_min, br_min);
        cv::Scalar max (mat_max, sat_max, br_max);

        cv::inRange(img_hsv, min, max, mask);

        cv::imshow("Mascara: ", mask);

        cv::waitKey(1);

    }

    return 0;
    
}
