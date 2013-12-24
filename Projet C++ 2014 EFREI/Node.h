//
//  Node.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 19/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Node__
#define __Projet_C___2014_EFREI__Node__

#include <iostream>
#include "MovableObject.h"
#include <list>

class Node :public MovableObject {
protected:
    list<MovableObject*> _fils;
    
    
public:
    Node();
    void addFils(MovableObject* nfils);
    void delFils(MovableObject* dfils);
    
    
};

#endif /* defined(__Projet_C___2014_EFREI__Node__) */
