#pragma once
#include "shape.h"
#include<iostream>
#include<vector>
#include<string>
#include "communicator.h"

class Rectangle : public Shape{
    public :
        std::string coordinates;
        std::vector<double> input_arr;
        Rectangle(std::vector<double> input_arr1);
        void draw();
        ~Rectangle();
};