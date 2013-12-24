//
//  Matrice.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 15/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "Matrice.h"
#include <math.h>

Matrice::Matrice()
{
    for(int i = 0;i<4;i++)
        for(int j = 0;j<4;j++)
            _m[i]._coeff[j] = 0;
}

Matrice::Matrice(Vector const tab[])
{
    for(int i = 0;i<4;i++)
        _m[i] = tab[i];
}

Matrice::Matrice(Matrice const &mat)
{
    for(int i(0);i<4;i++)
        _m[i] = mat._m[i];
}
Matrice::Matrice(char c,char axe,double angle,double distance)
{
    for (int i(0);i<4;i++)
        for(int j(0);j<4;j++)
            _m[i]._coeff[j] = 0;
    switch (c) {
        case 'I':
            
            for (int i(0);i<4;i++)
                for(int j(0);j<4;j++)
                    _m[i]._coeff[j] =  (i==j ? 1 : 0);
            break;
            
        case 'R' :
            for(int i(0);i<4;i++)
                for(int j(0);j<4;j++)
                {
                    _m[i]._coeff[j] = 0;
                }
            switch(axe){
                case 'x' :
                    _m[0]._coeff[0] = 1;
                    _m[3]._coeff[3] = 1;
                    _m[1]._coeff[1] = cos(angle);
                    _m[2]._coeff[2] = cos(angle);
                    _m[2]._coeff[1] = -sin(angle);
                    _m[1]._coeff[2] = sin(angle);
                break;
                case 'y' :
                    _m[0]._coeff[0] = cos(angle);
                    _m[2]._coeff[2] = cos(angle);
                    _m[1]._coeff[1] = 1;
                    _m[3]._coeff[3] = 1;
                    _m[2]._coeff[0] = sin(angle);
                    _m[0]._coeff[2] = -sin(angle);
                break;
                    
                case 'z' :
                    _m[0]._coeff[0] = cos(angle);
                    _m[1]._coeff[1] = cos(angle);
                    _m[2]._coeff[2] = 1;
                    _m[3]._coeff[3] = 1;
                    _m[1]._coeff[0] = -sin(angle);
                    _m[0]._coeff[1] = sin(angle);
                    break;
                default:
                    break;
            }
            break;
            
        case 'T' :
            for (int i(0);i<4;i++)
                for(int j(0);j<4;j++)
                    _m[i]._coeff[j] =  (i==j ? 1 : 0);
            switch (axe) {
                case 'x':
                    _m[3]._coeff[0] = distance;
                    break;
                case 'y' :
                    _m[3]._coeff[1] = distance;
                    break;
                case 'z' :
                    _m[3]._coeff[2] = distance;
                default:
                    break;
            }
            
            
        default:
            break;
    }
}

Matrice Matrice::InvR()
{
    Matrice irot;
    for(int i(0);i<4;i++)
        for(int j(0);j<4;j++)
            irot._m[i]._coeff[j]  = _m[j]._coeff[i];
    return irot;
}

Matrice Matrice::InvT()
{
    Matrice iT(*this);
    for(int i(0);i<3;i++)
        iT._m[3]._coeff[i] = -_m[3]._coeff[i];
    return iT;
}

Matrice Matrice::InvS()
{
    Matrice iS(*this);
    for(int i(0);i<3;i++)
        iS._m[i]._coeff[i] = 1/(_m[i]._coeff[i]);
    return iS;
}

Matrice operator+(Matrice const &a, Matrice const &b)
{
    Matrice c;
    for(int i(0);i<4;i++)
        c._m[i] = a._m[i] + b._m[i];
    
    return c;
}

Matrice operator*(Matrice const &a, Matrice const &b)
{
    Matrice c;
    for(int i(0);i<4;i++)
    {
        for (int j(0);j<4;j++)
        {
            for(int k(0);k<4;k++)
            {
                    c._m[i]._coeff[j] += (a._m[i]._coeff[k] )*(b._m[k]._coeff[j]);
            }
        }
    }
    return c;
}

Vector operator*(Matrice const &mat,Vector const &v)
{
    Vector r;
    for(int i(0);i<4;i++)
        for(int j(0);j<4;j++)
            r._coeff[i] += v._coeff[j]* mat._m[j]._coeff[i];
    return r;
}

void operator<<(std::ostream &flux, Matrice const &mat)
{
    for (int i(0);i<4;i++)
    {
        flux<<"[";
        for(int j(0);j<4;j++)
            flux<<mat._m[j]._coeff[i]<<" ";
        flux<<"]"<<std::endl;
    }
   
}
