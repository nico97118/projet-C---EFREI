//
//  vector.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 15/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__vector__
#define __Projet_C___2014_EFREI__vector__

#include <iostream>

class Matrice;

class Vector{
protected:
    double _coeff[4];

public:
    Vector();
    Vector(double x,double y,double z,double t);
    Vector(double tab[]);
    Vector(const Vector &vect);
    
    void setVect(double x,double y,double z,double t);
    
    friend Vector operator+(Vector const &a, Vector const &b);
    friend void operator<<(std::ostream &flux,Vector const &a);
    friend double operator*(Vector const &a, Vector const &b);
    
   
    
    friend class Matrice;
    
    friend void operator<<(std::ostream &flux, Matrice const &mat);
    friend Matrice operator*(Matrice const &a, Matrice const &b);
    friend Vector operator*(Matrice const &mat,Vector const &v);
};


#endif /* defined(__Projet_C___2014_EFREI__vector__) */

