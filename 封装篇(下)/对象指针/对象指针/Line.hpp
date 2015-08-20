//
//  Line.hpp
//  对象指针
//
//  Created by 游义男 on 15/8/20.
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
    void printInfo();
private:
    Coordinate *m_pCoorA;
    Coordinate *m_pCoorB;
};

#endif /* Line_cpp */
