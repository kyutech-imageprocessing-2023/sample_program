#include <iostream>
#include <string>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

int main(int argc, char* argv[]){

    const std::string window_name("OpenCV Sample");
    cv::Mat img = cv::imread(argv[1]);

    if ( img.empty() ) {
        return -1;
    }

    cv::namedWindow(window_name, cv::WINDOW_AUTOSIZE);
    cv::imshow(window_name, img);
    cv::waitKey(0);
    cv::destroyWindow(window_name);

    return 0;
}

