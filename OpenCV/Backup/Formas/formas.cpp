#include "formas.hpp"


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