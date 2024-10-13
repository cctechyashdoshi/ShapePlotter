#pragma once
#include "shape.h"
#include<iostream>
#include<string>
#include<vector>
#include "communicator.h"

class Square : public Shape {
    public:
        std::string coordinates;
        std::vector<double> input_arr;
        Square(std::vector<double> input_arr1);
        void draw();
        ~Square();
};