#include "../HeaderFiles/square.h"

Square::Square(std::vector<double> input_arr1)
{
    input_arr = input_arr1;
}

void Square::draw()
{
    for(int i=0;i<8;i++){
        coordinates += std::to_string(input_arr[i]);
        coordinates += " ";
        coordinates += std::to_string(input_arr[i+1]);
        coordinates += "\n";
        i++;
    }
    coordinates += std::to_string(input_arr[0]);
    coordinates += " ";
    coordinates += std::to_string(input_arr[1]);
    Communicator c;
    c.outputwriter(coordinates);
}

Square::~Square()
{
}
