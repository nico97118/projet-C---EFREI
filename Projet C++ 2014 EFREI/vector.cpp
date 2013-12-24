//
//  vector.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 15/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "vector.h"

Vector::Vector()
{
    for(int i = 0;i<4;i++)
        _coeff[i] = 0;
}

Vector::Vector(double x, double y, double z, double t)
{
    _coeff[0] = x;
    _coeff[1] = y;
    _coeff[2] = z;
    _coeff[3] = t;
}

Vector::Vector(double tab[])
{
    for(int i = 0;i<4;i++)
        _coeff[i] = tab[i];
}


Vector::Vector(const Vector &vect)
{
    for(int i = 0;i<4;i++)
        _coeff[i] = vect._coeff[i];
}

void Vector::setVect(double x,double y,double z,double t)
{
    _coeff[0] = x;
    _coeff[1] = y;
    _coeff[2] = z;
    _coeff[3] = t;
}
void operator<<(std::ostream &flux, Vector const &a)
{   flux<<"< ";
    for(int i =0; i<3; i++)
        flux<<a._coeff[i]<<", ";
    flux<<a._coeff[3]<<" >";
}
Vector operator+(Vector const &a, Vector const &b)
{
    double add[4];
    for(int i = 0;i<4;i++)
        add[i] = a._coeff[i] + b._coeff[i];
    Vector c(add);
    return c;
}

double operator*(Vector const &a, Vector const &b)
{
    double scal(0.0);
    
    for(int i = 0;i<4;i++)
        scal+= a._coeff[i] * b._coeff[i];
    
    return scal;
}