//
//  main.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 15/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include <iostream>
#include "vector.h"
#include "Matrice.h"
#include "Object.h"
#include "Cuboide.h"
#include "MovableObject.h"
#include "Node.h"
#define PI 3.1415926535897932384
int Object::_count = 0;

int main(int argc, const char * argv[])
{

    // insert code here...
    std::cout << "Hello, World!\n";
    Vector *tab[4];
    tab[0] = new Vector(1,2,3,4);
    tab[1] = new Vector(5,6,7,8);
    tab[2] = new Vector(9,10,11,11);
    tab[3] = new Vector(12,13,14,15);
    
    return 0;
}

