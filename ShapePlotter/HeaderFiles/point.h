#pragma once
#include "shape.h"
#include<vector>
#include<string>
#include "communicator.h"
#include <iostream>

class Point : public Shape{
    public :
        std::string coordinates;
        std::vector<double> input_arr;
        Point(std::vector<double> input_arr1);
        ~Point();
        void draw();
};