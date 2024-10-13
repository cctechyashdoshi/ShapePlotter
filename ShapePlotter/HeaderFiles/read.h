#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<iostream>

class Read{
    public:
    Read();
    ~Read();
        std::string line;
        std::string file_name;
        void read(std::string path);
};