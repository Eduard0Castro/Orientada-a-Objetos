#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/core.hpp"
#include "formas.hpp"


int main(){
    
    Formas forma;
    
    //Formas cam(0);
    forma.draw();
    cout << "Oi, estou funcionando!" << endl;

    return 0;
    
}
