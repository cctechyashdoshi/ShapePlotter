#include "../HeaderFiles/read.h"

Read::Read()
{
}

Read::~Read()
{
}

void Read::read(std::string file_name)
{
    std::ifstream myFile (file_name);
    if(myFile.is_open()){
        while(getline(myFile, line)){
            std::cout<<line<<std::endl;
        }
        myFile.close();
    }
    else{
        std::cout<<"Unable to open file";
    }
}