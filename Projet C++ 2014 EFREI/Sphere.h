//
//  Sphere.h
//  Projet C++ 2014 EFREI
//
//  Created by ulysse on 06/01/2014.
//  Copyright (c) 2014 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Sphere__
#define __Projet_C___2014_EFREI__Sphere__

#include <iostream>
#include "Mesh.h"

class Sphere : public Mesh {
    
    Sphere(string name);
    Sphere(double r,double a,double s);
    Sphere(string name,double r,double a,double s);
    
};

#endif /* defined(__Projet_C___2014_EFREI__Sphere__) */
