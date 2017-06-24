#include <opencv2/opencv.hpp>
#include <iostream>
#include "FaceDetector.h"

using namespace std;
using namespace cv;


int main(int argc, char const *argv[]) {
    const string WORKING_DIR = "/Users/chihiro/Programs/cpp/cvFaceFinder/";
    const string DEFAULT_SAMPLE_PIC = "Image/fb_profile_pic_sample.jpg";
    string DEFAULT_CASCADE_FILE = "/usr/local/Cellar/opencv3/3.2.0/share/OpenCV/haarcascades/haarcascade_frontalface_alt.xml";

    FaceDetector detector;
    Mat image = imread(WORKING_DIR+DEFAULT_SAMPLE_PIC);
    image = detector.resizeImage(image, 4);
    vector<Rect> facerects = detector.getFaceRect(image, DEFAULT_CASCADE_FILE);
    Mat cropped_image = detector.cropImage(image, facerects);

    imshow("cropped image", cropped_image);
    waitKey(0);
    destroyAllWindows();

    return 0;
}