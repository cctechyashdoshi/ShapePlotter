#include "../HeaderFiles/polygon.h"

Polygon::Polygon(std::vector<double> input_arr1)
{
	input_arr = input_arr1;
}

void Polygon::draw()
{
    for (int i = 0;i<input_arr.size();i++) {
        coordinates += std::to_string(input_arr[i]);
        coordinates += " ";
        coordinates += std::to_string(input_arr[i + 1]);
        coordinates += "\n";
        i=i++;
    }
    coordinates += std::to_string(input_arr[0]);
    coordinates += " ";
    coordinates += std::to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}

Polygon::~Polygon()
{
}
