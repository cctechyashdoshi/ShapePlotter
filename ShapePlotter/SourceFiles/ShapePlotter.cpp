#include<iostream>
#include "../HeaderFiles/input.h"
#include "../HeaderFiles/manager.h"

int main() {
    int choice;
    std::vector<double> input_arr;
    Input input;
    choice = input.get_input(input_arr);
    Manager m;
    m.manage(input_arr, choice);
}