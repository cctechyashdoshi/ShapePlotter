#pragma once
#include<iostream>
#include<string>
#include <vector>
#include<math.h>
#include "communicator.h"
#include "shape.h"
#include "point.h"
#define M_PI 3.14159265358979323846

class Circle : public Shape{
    public:
        double radius;
        std::string coordinates;
        std::vector<double> input_arr;
        std::vector<double> output_arr;
        Circle(std::vector<double> input_arr1);
        ~Circle();
        void draw();
};