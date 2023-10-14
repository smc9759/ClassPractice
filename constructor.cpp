/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Point
{
private:
    int xpos, ypos;
public:
    Point(int x, int y) : xpos(x), ypos(y)
    {
    //empty
    }
};

class Circle
{
private:
    int rad;
    Point center;
public:			//center(x,y), rad(r)
    Circle(int x, int y, int r) : center(x,y), rad(r)
    {
    }
};

class Ring
{
private:
    Circle inCircle;
    Circle outCircle;
public:
    Ring(int inX, int inY, int inR, int outX, int outY, int outR) : inCircle(inX, inY, inR) , outCircle(outX, outY, outR)
    {   

    
    }
};



int main()
{
    cout<<"Hello World";

    return 0;
}
