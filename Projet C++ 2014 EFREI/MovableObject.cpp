//
//  MovableObject.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 17/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "MovableObject.h"


MovableObject::MovableObject():Object()
{
    _parent = NULL;
    _visible = false;
}

MovableObject::MovableObject(string name):Object(name)
{
    _parent = NULL;
    _visible = false;
}

void MovableObject::setParent(MovableObject* parent)
{
    _parent = parent;
}

void MovableObject::setVisibleEnabled()
{
    _visible = true;
}

void MovableObject::transform(Matrice MatTransfo)
{
    setPosition(MatTransfo*getPosition());
}

void MovableObject::setVisibleDisabled()
{
    _visible = false;
}

MovableObject::~MovableObject()
{
    
}