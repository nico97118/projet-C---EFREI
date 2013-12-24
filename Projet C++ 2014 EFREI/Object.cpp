//
//  Object.cpp
//  Projet C++ 2014 EFREI
//
//  Created by Nicolas Loridon on 16/12/13.
//  Copyright (c) 2013 Nicolas Loridon. All rights reserved.
//

#include "Object.h"

Object::Object()
{
    Object::_count++;
    _name="Object ";
    _name += Object::_count;
    poolRegister();
}

Object::Object(string name):_name(name)
{
    Object::_count++;
    poolRegister();
}

Object::Object(string name,double x, double y, double z){
    Object::_count++;
    _name = name;
    _position.setVect(x, y, z, 1);
    poolRegister();
}

Object::Object(Object const &ob)
{
     Object::_count++;
    _name = ob._name.c_str();
    poolRegister();
}

void Object::setPosition(double x, double y, double z)
{
    _position.setVect(x, y, z, 1);
}

void Object::setPosition(Vector v)
{
    _position = v;
}

Vector Object::getPosition()
{
    return _position;
}

void Object::poolRegister()
{
    _pool[_name]= this;
}

void Object::poolUnregister()
{
    _pool.erase(_name);
}

Object* Object::poolFind(string key)
{
    return _pool.find(key)->second;
}

void Object::poolclear()
{
    map<string,Object*>::iterator it;
    for(it = _pool.begin(); it != _pool.end();it++)
        delete(it->second);
}

Object::~Object()
{
    poolUnregister();
    Object::_count--;
}


