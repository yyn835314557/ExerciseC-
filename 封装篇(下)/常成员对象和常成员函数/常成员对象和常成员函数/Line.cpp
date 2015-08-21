//
//  Line.cpp
//  常成员对象和常成员函数
//
//  Created by 游义男 on 15/8/21.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Line.hpp"
#include <iostream>
using namespace std;

Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2){

    cout<<"Line()"<<endl;
}


Line::~Line(){
    cout<<"~Line()"<<endl;
}
void Line::setA(int x,int y){
    //m_coorA.setX(x);
//    m_coorB.setY(y);
    
}
//Coordinate getA();
void Line:: setB(int x,int y){
//    m_coorB.setX();
//    m_coorB.setY();
}
//Coordinate getB();

void Line::printInfo(){
    cout<<"printInfo()"<<endl;
    cout<<"("<< m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"("<< m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}

void Line::printInfo() const{
    cout<<"printInfo() const"<<endl;
    cout<<"("<< m_coorA.getX()<<","<<m_coorA.getY()<<")"<<endl;
    cout<<"("<< m_coorB.getX()<<","<<m_coorB.getY()<<")"<<endl;
}