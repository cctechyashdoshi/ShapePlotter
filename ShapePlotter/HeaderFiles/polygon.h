#pragma once
#include "shape.h"
#include<vector>
#include<string>
#include"communicator.h"

class Polygon : public Shape{
    public:
        std::string coordinates;
        std::vector<double> input_arr;
        Polygon(std::vector<double> input_arr1);
        void draw();
        ~Polygon();
};