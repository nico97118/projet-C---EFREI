//
//  Object.h
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 16/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#ifndef __Projet_C___2014_EFREI__Object__
#define __Projet_C___2014_EFREI__Object__

#include <iostream>
#include <map>
#include "vector.h"
using namespace std;
class Object;
static map<string, Object*> _pool;

class Object
{
protected:
    
    string _name;
    static int _count;
    Vector _position;
    
public :
    Object();
    Object(string name);
    Object(string name,double x,double y,double z);
    Object(Object const &ob);
    
    void setPosition(double x, double y, double z);
    void setPosition(Vector v);
    Vector getPosition();
    
    void poolRegister();
    void poolUnregister();
  static  Object* poolFind(string key);
   static void poolclear();
    
~Object();

    
};

#endif /* defined(__Projet_C___2014_EFREI__Object__) */
