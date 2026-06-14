#include <pybind11/pybind11.h>
#include <opencv2/opencv.hpp>
#include <string>

std::string hello()
{
    return "Hello from native C++";
}

std::string opencv_version()
{
    return CV_VERSION;
}

std::string image_info(const std::string& image_path)
{
    cv::Mat image = cv::imread(image_path);

    if (image.empty())
    {
        return "Failed to load image";
    }

    return "Width: " +
           std::to_string(image.cols) +
           ", Height: " +
           std::to_string(image.rows) +
           ", Channels: " +
           std::to_string(image.channels());
}

PYBIND11_MODULE(image_engine, m)
{
    m.def("hello", &hello);
    m.def("opencv_version", &opencv_version);
    m.def("image_info", &image_info);
}

