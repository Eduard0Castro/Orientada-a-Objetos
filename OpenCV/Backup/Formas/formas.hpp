#ifndef FORMAS_HPP
#define FORMAS_HPP
#include <iostream>
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/core.hpp"

using namespace std;

class Formas{

    private:

        cv::String path, name = "Nao saber";
        cv::Mat img, dilate, canny, nucleo;
        bool camera;
        vector<vector<cv::Point>> contornos, lados;
        vector<cv::Vec4i> hierarquia;
        vector<cv::Rect> retangulo;
        float perimetro;

    public:

        Formas(cv::String p = "/Users/sirle/OneDrive/Documentos/OpenCV/Teste/src/images/formas.jpg"){
            path = p;
            camera = false;
            images();

        }

        Formas (int n){
            cv::VideoCapture cap (n);
               
            camera = true;
            while (true){
                cap.read(img);
                cv::flip(img, img, 1);
                images();
                draw();
                Formas::~Formas();
                
            }
        }


        ~Formas(){
            if (camera)
                cv::waitKey(1);
            
            else
                cv::waitKey(0);
        }

        void images(){
            if (!camera)
                img = cv::imread(path);
            nucleo = cv::getStructuringElement(1, cv::Size(3,3));

            cv::Canny(img, canny, 0, 200);
            cv::dilate(canny, dilate, nucleo);

        }

        void draw();

};


#endif
