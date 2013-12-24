//
//  Cuboib.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 17/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Cuboib__
#define __Projet_C___2014_EFREI__Cuboib__

#include <iostream>
#include "Mesh.h"
#include "vector.h"

class Cuboide : public Mesh
{
public:
    Cuboide(string name);
    Cuboide(double l,double h,double p);
    Cuboide(string name,double l,double h,double p);
    
    
    
 
};
#endif /* defined(__Projet_C___2014_EFREI__Cuboib__) */
