//
//  Coordinate.cpp
//  对象指针
//
//  Created by 游义男 on 15/8/20.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Coordinate.hpp"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x,int y){
    m_iX = x;
    m_iY = y;
    cout<<"Coordinate() "<<m_iX<<","<<m_iY<<endl;
}

Coordinate::~Coordinate(){
    cout<<"~Coordinate() "<<m_iX<<","<<m_iY<<endl;
}

void Coordinate::setX(int x){
    m_iX = x;
}
int Coordinate::getX(){
    return m_iX;
}

void Coordinate::setY(int y){
    m_iY = y;
}
int Coordinate::getY(){
    return m_iY;
}