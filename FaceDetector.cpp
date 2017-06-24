//
// Created by Chihiro on 2017/06/24.
//

#include "FaceDetector.h"

FaceDetector::FaceDetector() {
}

std::vector<cv::Rect> FaceDetector::getFaceRect (cv::Mat &image, std::string &cascade_file) {
    cv::CascadeClassifier cascade;
    cascade.load(cascade_file);

    std::vector<cv::Rect> faces;
    cascade.detectMultiScale(image, faces, 1.1,3,0,cv::Size(20,20));
    return faces;
}

cv::Mat FaceDetector::cropImage (cv::Mat &image, std::vector<cv::Rect> facerect) {
    cv::Mat dst;
    dst = image(facerect[0]);
    return dst;
}

cv::Mat FaceDetector::resizeImage(cv::Mat &image, int reduction_ratio = 2) {
    int h = image.rows;
    int w = image.cols;
    cv::Mat dst;
    cv::resize(image, dst, cv::Size(h/reduction_ratio, w/reduction_ratio));
    return dst;
}