#include "./cylinder.h"

cylinder::cylinder()
    {
        this->radius=0;
        this->height=0;
    }
cylinder::cylinder(double radius,double height)
    {
        this->radius=radius;
        this->height=height;
    }

double cylinder:: getRadius()
    {
        return this->radius;
    }

void cylinder:: setRadius(double radius)
    {
        this->radius=radius;
    }

double cylinder:: getHeight()
    {
        return this->height;
    }

void cylinder:: setHeight(double height)
    {
        this->height=height;
    }
    
double cylinder:: getVolume()
    {
        return 3.14 * this->radius * this->radius * this->height;
    }

void cylinder:: printVolume()
    {
        cout<<"volume of cylinder is "<<this->getVolume()<<endl;
    }
