#include "../HeaderFiles/communicator.h"

Communicator::Communicator()
{
    
}

void Communicator::caller(int decision, std::vector<double> input_arr)
{
    if(decision == 1 || decision == 7){
        Square s(input_arr);
        s.draw();
    }
    else if(decision == 2 || decision == 6){
        Rectangle r(input_arr);
        r.draw();
    }
    else if(decision == 3){
        Point p(input_arr);
        p.draw();
    }
    else if(decision == 4){
        Line l(input_arr);
        l.draw();
    }
    else if(decision == 5){
        Circle c(input_arr);
        c.draw();
    }
    else if(decision == 8){
        Triangle t(input_arr);
        t.draw();
    }
    else if (decision == 9) {
        Polygon p(input_arr);
        p.draw();
    }
}

void Communicator::outputwriter(std::string coordinates)
{
    Write w;
    w.writer(coordinates);
}

Communicator::~Communicator()
{
}