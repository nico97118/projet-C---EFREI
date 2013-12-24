//
//  Mesh.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 16/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Mesh__
#define __Projet_C___2014_EFREI__Mesh__

#include <iostream>
#include "Object.h"
#include "Matrice.h"
#include <list>

class Mesh : public Object
{
protected:
    list<Vector> lpoint;
    int _nbVertice;
    
    bool _displayPoint;
    bool _displayLine;
    
public:
    Mesh();
    Mesh(string name);
    Mesh(string name,Vector tab[],int taille);

    void pointDisplayEnable() { _displayPoint = true; }
    void pointDisplayDisable(){ _displayPoint = false; }

    void LineDisplayEnable() {_displayLine = true;}
    void LineDisplayDisable() {_displayLine = false;}
    void addPoint(Vector v);
    //affiage !!!!é

};
#endif /* defined(__Projet_C___2014_EFREI__Mesh__) */
