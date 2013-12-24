//
//  Cuboib.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 17/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "Cuboide.h"



Cuboide::Cuboide(string name):Mesh(name)
{
    double taille = 1.0;
    
    lpoint.push_back(*new Vector(taille/2,taille/2,taille/2,1));
    lpoint.push_back(*new Vector(taille/2,taille/2,-taille/2,1));
    
    lpoint.push_back(*new Vector(taille/2,-taille/2,taille/2,1));
    lpoint.push_back(*new Vector(taille/2,-taille/2,taille/2,1));
    
    
    lpoint.push_back(*new Vector(-taille/2,taille/2,taille/2,1));
    lpoint.push_back(*new Vector(-taille/2,taille/2,-taille/2,1));
    
    lpoint.push_back(*new Vector(-taille/2,-taille/2,taille/2,1));
    lpoint.push_back(*new Vector(-taille/2,-taille/2,-taille/2,1));
    
    
}

Cuboide::Cuboide(string name,double l,double h,double p):Mesh(name)
{
    lpoint.push_back(*new Vector(l/2,h/2,p/2,1));
    lpoint.push_back(*new Vector(l/2,h/2,-p/2,1));
    
    lpoint.push_back(*new Vector(l/2,-h/2,p/2,1));
    lpoint.push_back(*new Vector(l/2,-h/2,p/2,1));
    
    
    lpoint.push_back(*new Vector(-l/2,h/2,p/2,1));
    lpoint.push_back(*new Vector(-l/2,h/2,-p/2,1));
    
    lpoint.push_back(*new Vector(-l/2,-h/2,p/2,1));
    lpoint.push_back(*new Vector(-l/2,-h/2,-p/2,1));
}