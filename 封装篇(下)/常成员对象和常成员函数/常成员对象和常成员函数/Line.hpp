//
//  Line.hpp
//  常成员对象和常成员函数
//
//  Created by 游义男 on 15/8/21.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef Line_cpp
#define Line_cpp

#include <stdio.h>
#include "Coordinate.hpp"

class Line{
public:
    Line(int x1,int y1,int x2,int y2);
    ~Line();
    void setA(int x,int y);
    Coordinate getA();
    void setB(int x,int y);
    Coordinate getB();
    void printInfo();
    void printInfo() const;

private:
    Coordinate m_coorA;
    Coordinate m_coorB;
};

#endif /* Line_cpp */
