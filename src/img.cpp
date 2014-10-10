#include <iostream>
#include <opencv/cv.h>
#include <opencv/highgui.h>

void ReadAndDisplayImage()
{
    cv::Mat image;
    image = cv::imread("../data/google.png", CV_LOAD_IMAGE_UNCHANGED);   // Read the file

    if (!image.data)
    {
        std::cout << "Could not open the image!" << std::endl;
        return;
    }

    cv::namedWindow("Display window", CV_WINDOW_AUTOSIZE); // Create a window for display.
    cv::imshow("Display window", image);                   // Show our image inside it.

    cv::waitKey(0);
}
