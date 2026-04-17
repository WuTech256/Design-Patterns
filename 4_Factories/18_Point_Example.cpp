#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <fstream>
#include <tuple>
#include <sstream>
#include <memory>
#include <cmath>

using namespace std;


enum class PointType
{
    cartesian,
    polar
};


struct Point
{
    // Point(float x, float y) : x(x), y(y) {}  
    // \param a this is either x or rho
    // \param b this is either y or theta
    // \param type 
    float x, y;
    Point(float a, float b, PointType type = PointType::cartesian)
    {
        if(type == PointType::cartesian)
        {
            x = a;
            y = b;
        } else {
            x = a * cos(a);
            y = a * sin(b);
        }
    }
};

int main()
{
    
    return 0;
}
