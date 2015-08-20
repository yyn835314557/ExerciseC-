//
//  Array.hpp
//  对象指针
//
//  Created by 游义男 on 15/8/20.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef Array_cpp
#define Array_cpp

#include <stdio.h>

class Array{
public:
    Array(int len);
    ~Array();
    Array * setLen(int len);
    int getLen();
    // &引用符号
    Array* printInfo();
private:
    int Len;
};


#endif /* Array_cpp */
