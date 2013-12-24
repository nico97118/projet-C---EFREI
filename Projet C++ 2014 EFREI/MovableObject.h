//
//  MovableObject.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 17/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__MovableObject__
#define __Projet_C___2014_EFREI__MovableObject__

#include <iostream>
#include "Object.h"
#include "Matrice.h"

class MovableObject : public Object
{
protected:
    MovableObject* _parent;
    bool _visible;
    
public:
    MovableObject();
    MovableObject(string name);
    
    void setParent(MovableObject* parent);
    void setVisibleEnabled();
    void setVisibleDisabled();
    
    void transform(Matrice MatTransfo);
    ~MovableObject();
    
};

#endif /* defined(__Projet_C___2014_EFREI__MovableObject__) */
