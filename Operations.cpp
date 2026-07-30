#include <iostream>
#include <cmath>
#include <windows.h>
#include "Operations.h"

using namespace std;

void Operations::add_lask(double value)
{
    current +=value;
}

void Operations::minus_lask(double value)
{
    current -= value;
}

void Operations::multiply_lask(double value)
{
    current *= value;
}

void Operations::divide_lask(double value)
{
    if(value == 0){
        throw runtime_error("Division by zero");
    }
    current /= value;
}

void Operations::mod_lask(double value)
{
    
    if(value == 0){
        throw runtime_error("Division by zero");
    }
    current = fmod(current, value);
}

void Operations::log_lask()
{
    if(current <= 0){
        throw runtime_error("log of negative number");

    }
    current = log(current);

}

void Operations::square_lask()
{
    current = current * current;
}

void Operations::cube_lask()
{
    current = current * current * current;
}

void Operations::power_lask(double value)
{
    current = pow(current, value);
}

void Operations::sin_lask()
{
    current = sin(current);
}

void Operations::cos_lask()
{
    current = cos(current);
}

void Operations::tan_lask()
{
    current = tan(current);
}

void Operations::sq_root()
{
    if(current < 0){
        throw runtime_error("square root of negative number");

    }
     current = sqrt(current);
}

void Operations::clear_lask()
{
    current = 0;
    //katotaan mitä tästäki tulee
}

void Operations::close_lask()
{
    //katotaan faijfipajfwijia
}