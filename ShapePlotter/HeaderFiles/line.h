#pragma once
#include "shape.h"
#include "point.h"
#include "communicator.h"
#include<iostream>

class Line : public Shape{
    public :
        std::string coordinates;
        std::vector<double> input_arr;
        Line(std::vector<double> input_arr1);
        ~Line();
        void draw();
};