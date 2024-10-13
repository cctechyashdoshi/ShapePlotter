#pragma once
#include<iostream>
#include<vector>
#include "point.h"

class Input{
    public:
    int ch=0;
    int points_count=0;
    double x=0,y=0,length=0,breadth=0,side=0,radius=0;
    Input();
    int get_input(std::vector<double> &input_arr);
    ~Input();
};