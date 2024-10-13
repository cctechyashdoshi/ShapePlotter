#pragma once
#include "shape.h"
#include "point.h"
#include<iostream>
#include "communicator.h"

class Triangle : public Shape{
    public:
        std::string coordinates;
        std::vector<double> input_arr;
        Triangle(std::vector<double> input_arr1);
        void display();
        void draw();
        ~Triangle();
};