#include <pybind11/pybind11.h>
#include <string>

std::string hello()
{
    return "Hello from native C++";
}

PYBIND11_MODULE(image_engine, m)
{
    m.def("hello", &hello);
}