#ifndef DETECCAO_H
#define DETECCAO_H
#include <iostream>
#include "opencv2/opencv.hpp"


using namespace std;

class Deteccao{
    private:
        
        cv::String path = "/Users/sirle/OneDrive/Documentos/Orientada-a-Objetos/OpenCV/Teste/src/images/red_plated.jpg";
        cv::Mat img;
        vector<cv::Rect> detects;
        cv::CascadeClassifier detec;
        bool camera;

    public:

        Deteccao(bool cam = false, int num_detection = 2, 
                 int n = 0, string video = ""){

                string haar_cascade;
                camera = cam;


                switch (num_detection){
                    case 1:
                        haar_cascade = "/Users/sirle/OneDrive/Documentos/Orientada-a-Objetos/OpenCV/Teste/src/XML/haarcascade_russian_plate_number.xml";
                        break;
                    case 2:
                        haar_cascade = "/Users/sirle/OneDrive/Documentos/Orientada-a-Objetos/OpenCV/Teste/src/XML/haarcascade_frontalface_default.xml";
                        break;
                }

                detec.load(haar_cascade);
                if (detec.empty()){
                    cout << "Não foi possível carregar o XML" << endl;

                }

                if(cam){
                    cv::VideoCapture cap(n);
                    if (video !=""){
                        cap.open(video);
                    }

                    while (true){
                        cap.read(img);
                        detection_steps();
                        cv::waitKey(1);
                    }

                }

                else{
                    
                    img = cv::imread(path);
                    if (img.empty()){
                        cerr<< "Erro ao carregar a imagem\n";
                        return;
                    }

                    else

                        detection_steps();

                }

        }

        ~Deteccao(){

            cout <<"Destruindo o objeto!" << endl;
            if(camera){
                cv::waitKey(1);
            }

            else{

                cv::waitKey(0);
            }
        }

        void Negative(){
       
            cv:: Mat neg;

            neg = img.clone();
            for (int i = 0; i < neg.rows; i++ ){
                for (int j = 0; j < neg.cols; j++){
                    neg.at<cv::Vec3b>(i,j)[0] = 255 - neg.at<cv::Vec3b>(i,j)[0];
                    neg.at<cv::Vec3b>(i,j)[1] = 255 - neg.at<cv::Vec3b>(i,j)[1];
                    neg.at<cv::Vec3b>(i,j)[2] = 255 - neg.at<cv::Vec3b>(i,j)[2];
                }

            }
            cv::imshow("Negativo: ", neg);

        }
        void detection_steps(){

            detec.detectMultiScale(img, detects);

            cout << "\nDeteccoes: " << detects.size() << endl;
            cout << endl;

            for (int i = 0; i < detects.size(); i++){
                cv::rectangle(img, detects[i].tl(), detects[i].br(), cv::Scalar(0,255,0), 2);
                
            }

            cv::imshow("Deteccao: ", img);

        }

        void resize(){
            
            cv::Mat resized;
            int rows = img.rows;
            int cols = img.cols;

            cout << rows << " x " << cols << endl;

            cv::resize(img, resized, cv::Size(cols/2, rows/2));

            cv::imshow("Redimensionada: ", resized);
        }

};

#endif