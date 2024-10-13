#include "../HeaderFiles/point.h"

Point::Point(std::vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Point::draw()
{
    coordinates += std::to_string(input_arr[0]);
    coordinates += " ";
    coordinates += std::to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}

Point::~Point()
{
}