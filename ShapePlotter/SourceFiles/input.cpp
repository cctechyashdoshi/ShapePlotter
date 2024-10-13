#include "../HeaderFiles/input.h"

Input::Input()
{
}

int Input::get_input(std::vector<double> &input_arr)
{
    std::cout<<"Which shape do you want to draw? (Enter number 1-6)"<< std::endl
        <<"1. Point"<< std::endl
        <<"2. Line"<< std::endl
        <<"3. Rectangle (4 points)"<< std::endl
        <<"4. Rectangle (point and length, breadth)"<< std::endl
        <<"5. Square (4 points)"<< std::endl
        <<"6. Square (point and side)"<< std::endl
        <<"7. Circle"<< std::endl
        <<"8. Polygon"<< std::endl
        <<"9. Triangle"<< std::endl;
    std::cin>>ch;
    switch (ch)
    {

    case 1:
        std::cout<<"Enter Point Data :"<< std::endl;
        std::cout<<"x : ";
        std::cin>>x;
        std::cout<<"y : ";
        std::cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        break;

    case 2:
        std::cout<<"Enter Line Data :"<< std::endl;
        for(int i=0;i<2;i++){
            std::cout<<"x : ";
            std::cin>>x;
            std::cout<<"y : ";
            std::cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 3:
        std::cout<<"Enter Rectangle Data :"<< std::endl;
        for(int i=0;i<4;i++){
            std::cout<<"x : ";
            std::cin>>x;
            std::cout<<"y : ";
            std::cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;
    
    case 4:
        std::cout<<"Enter Rectangle Data :"<< std::endl;
        std::cout<<"x : ";
        std::cin>>x;
        std::cout<<"y : ";
        std::cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout<<"Length : ";
        std::cin>>length;
        std::cout<<"Breadth : ";
        std::cin>>breadth;
        input_arr.push_back(length);
        input_arr.push_back(breadth);
        break;

    case 5:
        std::cout<<"Enter Square Data :"<< std::endl;
        for(int i=0;i<4;i++){
            std::cout<<"x : ";
            std::cin>>x;
            std::cout<<"y : ";
            std::cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 6:
        std::cout<<"Enter Square Data :"<< std::endl;
        std::cout<<"x : ";
        std::cin>>x;
        std::cout<<"y : ";
        std::cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout<<"Side : ";
        std::cin>>side;
        input_arr.push_back(side);
        break;

    case 7:
        std::cout<<"Enter Circle Data :"<< std::endl;
        std::cout<<"x : ";
        std::cin>>x;
        std::cout<<"y : ";
        std::cin>>y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout<<"Radius : ";
        std::cin>>radius;
        input_arr.push_back(radius);
        break;

    case 8:
        std::cout<<"Enter number of points for the polygon data :"<< std::endl;
        std::cin>>points_count;
        for(int i=0;i<points_count;i++){
            std::cout<<"x : ";
            std::cin>>x;
            std::cout<<"y : ";
            std::cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;
    
    case 9:
        std::cout<<"Enter triangle data : "<< std::endl;
        for(int i=0;i<3;i++){
            std::cout<<"x : ";
            std::cin>>x;
            std::cout<<"y : ";
            std::cin>>y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    default:
        std::cout<<"Enter a number between 1-6"<< std::endl;
        break;
    }
    return ch;
}

Input::~Input()
{
}