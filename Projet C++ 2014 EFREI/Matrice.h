//
//  Matrice.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 15/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Matrice__
#define __Projet_C___2014_EFREI__Matrice__

#include <iostream>
#include "vector.h"

class Matrice
{
    
    
protected:
    Vector _m[4];
    
public:
    Matrice();
    Matrice(Vector const tab[]);
    Matrice(Matrice const &mat);
    Matrice(char c,char axe ='0',double angle=0.0,double distance=0.0);
    
    Matrice InvR();
    Matrice InvT();
    Matrice InvS();
    
    friend Matrice operator+(Matrice const &a,Matrice const &b);
    friend Matrice operator*(Matrice const &a,Matrice const &b);
    friend Vector operator*(Matrice const &mat,Vector const &v);
    
    friend void operator<<(std::ostream &flux, Matrice const &mat);
    
};

#endif /* defined(__Projet_C___2014_EFREI__Matrice__) */
