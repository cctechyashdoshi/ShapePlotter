#include "../HeaderFiles/write.h"

Write::Write()
{
}

Write::~Write()
{
}

void Write::writer(std::string output)
{
    std::ofstream myFile;
    myFile.open("output.dat");
    myFile << output;
    myFile.close();
}
