//
//  Coordinate.cpp
//  常成员对象和常成员函数
//
//  Created by 游义男 on 15/8/21.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Coordinate.hpp"
#include <iostream>
using namespace std;

Coordinate::Coordinate(int x,int y){
    m_iX = x;
    m_iY = y;
}
Coordinate::~Coordinate(){
    //?
}
void Coordinate::setX(int x){
    m_iX = x;
}
int Coordinate::getX() const{
    return m_iX;
}
void Coordinate::setY(int y){
    m_iY = y;
}
int Coordinate::getY() const{
    return m_iY;
}
