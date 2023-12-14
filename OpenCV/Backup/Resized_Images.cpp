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
    cv::Mat img = cv::imread(path), tiger_Resized, cut_tiger;


    cout << "\nDimensoes da imagem: "<< img.size()<< endl;
    cout << "Largura da imagem: " << img.size().width<< endl;
    cout << "Altura da imagem: " << img.size().height << endl;
    cout << "Area da imagem : " << img.size().area() << endl;
    cout << endl; 

    //cv::resize(img, tiger_Resized, cv::Size(img.size().width/2, img.size().height/2));
    //or
    cv::resize(img, tiger_Resized, cv::Size(), 1.2, 1.2);
    cut_tiger = img(cv::Rect(img.size().width/2, img.size().height/2, 120,120));

    cv::imshow("Normal Tiger", img);
    cv::imshow("Resized Tiger", tiger_Resized);
    cv::imshow("Cut Tiger", cut_tiger);
   

    cv::waitKey(0);


    return 0;
    
}