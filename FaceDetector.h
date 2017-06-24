//
// Created by Chihiro on 2017/06/24.
//

#ifndef CVFACEFINDER_FACEDETECTOR_H
#define CVFACEFINDER_FACEDETECTOR_H

#include <iostream>
#include <string>
#include <opencv/cv.hpp>
#include <opencv2/tracking.hpp>
#include "opencv2/xfeatures2d.hpp"


class FaceDetector {
public:
    FaceDetector();
    std::vector<cv::Rect> getFaceRect (cv::Mat &image, std::string &cascade_file);
    cv::Mat cropImage (cv::Mat &image, std::vector<cv::Rect> facerect);
    cv::Mat resizeImage(cv::Mat &image, int reduction_ratio);
};


#endif //CVFACEFINDER_FACEDETECTOR_H
