//
//  Mesh.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 16/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "Mesh.h"

using namespace std;
Mesh::Mesh():Object()
{
    _nbVertice = 0;
    _displayLine = false;
    _displayPoint = false;
}

Mesh::Mesh(string name):Object(name)
{
    _nbVertice = 0;
    _displayPoint = false;
    _displayLine = false;
    
}

Mesh::Mesh(string name, Vector tab[],int taille):Object(name)
{
    for(int i(0);i<taille;i++)
        lpoint.push_back(tab[i]);
    _nbVertice = taille;
    _displayLine = false;
    _displayPoint = false;
}

void Mesh::addPoint(Vector v)
{
    lpoint.push_back(*new Vector(v));
    _nbVertice++;
}