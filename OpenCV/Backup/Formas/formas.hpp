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

void Formas::draw(){
    
    int cont = 0;
    cv::findContours(dilate, contornos, hierarquia, cv::RETR_EXTERNAL,cv::CHAIN_APPROX_NONE);
    lados = contornos;

    
    retangulo.resize(contornos.size());
    cout <<"Contornos: " << contornos.size() << endl;
    
    for (int i = 0; i < contornos.size(); i++){
        perimetro = cv::arcLength(contornos[i], true);
        cv::approxPolyDP(contornos[i], lados[i], 0.01*perimetro, true );
        retangulo[i] = cv::boundingRect(lados[i]);
     
        if (lados[i].size() == 4) {
          
                if (retangulo[i].width == retangulo [i].height){
                    name = "Quadrado";
                    cout << "Quadrado\n";
                    
                }

                else
                    name = "Retangulo";

                
                if (perimetro > 120){
                    cv::drawContours(img, contornos, i, cv::Scalar(211,0,148), 3);
                    cv::putText(img, name, cv::Point (retangulo[i].x, retangulo[i].y), 
                    cv::FONT_HERSHEY_DUPLEX, 1, cv::Scalar(0,0,0), 1, 2);
                    cont ++;
                }

            }

    }

    cv::imshow("Dilate: ", dilate);
    cv::imshow("Normal: ", img);
    cout << cont << endl;

}


#endif
