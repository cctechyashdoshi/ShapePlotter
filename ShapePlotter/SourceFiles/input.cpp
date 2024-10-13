#include "../HeaderFiles/input.h"
#include <iomanip> 
#include <limits> 

Input::Input()
{
}

int Input::get_input(std::vector<double> &input_arr)
{
    int ch = 0;
    double x, y, length, breadth, side, radius;
    int points_count = 0;

    std::cout << "Which shape do you want to draw? (Enter number 1-9)" << std::endl
              << "1. Point" << std::endl
              << "2. Line" << std::endl
              << "3. Rectangle (4 points)" << std::endl
              << "4. Rectangle (point and length, breadth)" << std::endl
              << "5. Square (4 points)" << std::endl
              << "6. Square (point and side)" << std::endl
              << "7. Circle" << std::endl
              << "8. Polygon" << std::endl
              << "9. Triangle" << std::endl;

    while (true) {
        std::cout << "Enter your choice (1-9): ";
        std::cin >> ch;

        // Validate input
        if (std::cin.fail() || ch < 1 || ch > 9) {
            std::cin.clear(); // Clear the error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 9." << std::endl;
        } else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
            break; // Valid input, exit the loop
        }
    }

    switch (ch)
    {
    case 1:
        std::cout << "Enter Point Data:" << std::endl;
        std::cout << "x: ";
        std::cin >> x;
        std::cout << "y: ";
        std::cin >> y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        break;

    case 2:
        std::cout << "Enter Line Data (2 points):" << std::endl;
        for (int i = 0; i < 2; i++) {
            std::cout << "Point " << (i + 1) << " - x: ";
            std::cin >> x;
            std::cout << "Point " << (i + 1) << " - y: ";
            std::cin >> y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 3:
        std::cout << "Enter Rectangle Data (4 points):" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << "Point " << (i + 1) << " - x: ";
            std::cin >> x;
            std::cout << "Point " << (i + 1) << " - y: ";
            std::cin >> y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 4:
        std::cout << "Enter Rectangle Data:" << std::endl;
        std::cout << "Starting Point - x: ";
        std::cin >> x;
        std::cout << "Starting Point - y: ";
        std::cin >> y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout << "Length: ";
        std::cin >> length;
        std::cout << "Breadth: ";
        std::cin >> breadth;
        input_arr.push_back(length);
        input_arr.push_back(breadth);
        break;

    case 5:
        std::cout << "Enter Square Data (4 points):" << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << "Point " << (i + 1) << " - x: ";
            std::cin >> x;
            std::cout << "Point " << (i + 1) << " - y: ";
            std::cin >> y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 6:
        std::cout << "Enter Square Data:" << std::endl;
        std::cout << "Starting Point - x: ";
        std::cin >> x;
        std::cout << "Starting Point - y: ";
        std::cin >> y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout << "Side: ";
        std::cin >> side;
        input_arr.push_back(side);
        break;

    case 7:
        std::cout << "Enter Circle Data:" << std::endl;
        std::cout << "Center - x: ";
        std::cin >> x;
        std::cout << "Center - y: ";
        std::cin >> y;
        input_arr.push_back(x);
        input_arr.push_back(y);
        std::cout << "Radius: ";
        std::cin >> radius;
        input_arr.push_back(radius);
        break;

    case 8:
        std::cout << "Enter number of points for the polygon: ";
        std::cin >> points_count;
        std::cout << "Enter Polygon Data:" << std::endl;
        for (int i = 0; i < points_count; i++) {
            std::cout << "Point " << (i + 1) << " - x: ";
            std::cin >> x;
            std::cout << "Point " << (i + 1) << " - y: ";
            std::cin >> y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    case 9:
        std::cout << "Enter Triangle Data:" << std::endl;
        for (int i = 0; i < 3; i++) {
            std::cout << "Point " << (i + 1) << " - x: ";
            std::cin >> x;
            std::cout << "Point " << (i + 1) << " - y: ";
            std::cin >> y;
            input_arr.push_back(x);
            input_arr.push_back(y);
        }
        break;

    default:
        std::cout << "An unexpected error occurred." << std::endl;
        break;
    }

    return ch;
}

Input::~Input()
{
}
