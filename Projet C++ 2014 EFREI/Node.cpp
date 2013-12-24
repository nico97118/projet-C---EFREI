//
//  Node.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 19/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "Node.h"


Node::Node():MovableObject()
{
    _fils.clear();
    
}

void Node::addFils(MovableObject *nfils)
{
    _fils.push_back(nfils);
}

void Node::delFils(MovableObject* dfils)
{
    _fils.remove(dfils);
    
}

