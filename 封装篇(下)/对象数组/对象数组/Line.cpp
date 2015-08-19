//
//  Line.cpp
//  对象数组
//
//  Created by 游义男 on 15/8/19.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Line.hpp"
#include <iostream>
using namespace std;
Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2){
    cout<<"Line()构造函数"<<endl;
}
Line::~Line(){
    cout<<"~Line()析构函数"<<endl;
}

void Line::setA(int x, int y){
    m_coorA.setX(x);
    m_coorA.setY(y);
}
void Line::setB(int x, int y){
    m_coorB.setX(x);
    m_coorB.setY(y);
}

void Line::printInfo(){
    cout<<"("<<m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"("<<m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}