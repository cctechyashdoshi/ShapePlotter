#pragma once
#include<iostream>
#include<vector>
#include<algorithm>
#include "communicator.h"

class Manager{
    public :
        Manager();
        void manage(std::vector<double> &input_arr, int choice);
        void manage_rectangle_case1(std::vector<double> &input_arr);
        void manage_rectangle_case2(std::vector<double> &input_arr);
        void manage_square_case1(std::vector<double> &input_arr);
        void manage_square_case2(std::vector<double> &input_arr);
        void manage_point(std::vector<double> &input_arr);
        void manage_line(std::vector<double> &input_arr);
        void manage_triangle(std::vector<double> &input_arr);
        void manage_polygon(std::vector<double>& input_arr);
        void manage_circle(std::vector<double> &input_arr);
        double distanceSq(double x1, double y1, double x2, double y2);
        double slope(double x1, double y1, double x2, double y2);
        ~Manager();
};