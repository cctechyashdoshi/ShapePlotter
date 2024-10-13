#pragma once
#include<vector>
#include<string>
#include "square.h"
#include "rectangle.h"
#include "write.h"
#include "point.h"
#include "line.h"
#include "circle.h"
#include "triangle.h"
#include "polygon.h"

class Communicator{
    public:
    Communicator();
    void caller(int decision, std::vector<double> input_arr);
    void outputwriter(std::string coordinates);
    ~Communicator();
};
