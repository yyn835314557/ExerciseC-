//
//  Coordinate.hpp
//  对象数组
//
//  Created by 游义男 on 15/8/19.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef Coordinate_cpp
#define Coordinate_cpp

#include <stdio.h>
class Coordinate{
public:
    Coordinate(int x,int y);
    ~Coordinate();
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
public:
    int m_iX;
    int m_iY;
};

#endif /* Coordinate_cpp */
