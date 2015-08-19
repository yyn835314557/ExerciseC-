//
//  Array.hpp
//  对象数组
//
//  Created by 游义男 on 15/8/19.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef Array_cpp
#define Array_cpp

#include <stdio.h>

class Array{
public:
    Array(int count);
    Array(const Array&arr);
    ~Array();
    void setCount(int count);
    int getCount();
    void printAddr();
    void printArr();
private:
    int m_iCount;
    int *m_pArr;
};

#endif /* Array_cpp */
