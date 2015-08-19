//
//  main.cpp
//  对象数组
//
//  Created by 游义男 on 15/8/19.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "Coordinate.hpp"
#include "Line.hpp"
#include "Array.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
//    Coordinate coord[3];
//    coord[0].m_iX = 1;
//    coord[0].m_iY = 1;
//    coord[1].m_iX = 2;
//    coord[1].m_iY = 2;
//    coord[2].m_iX = 3;
//    coord[2].m_iY = 3;
//    
//    Coordinate *p = new Coordinate[3];
//    p -> m_iX = 1;
//    p -> m_iY = 1;
//    (p+1) -> m_iY =1;
//    p[1].m_iX = 2;
//    p[2].m_iY = 1;
//    
//    for (int i = 0; i< 3 ; i++) {
//        cout<<"coord_x＝"<<coord[i].m_iX<<endl;
//        cout<<"coord_y＝"<<coord[i].m_iY<<endl;
//    }
//    // 执行析构函数进行销毁
//    delete []p;
//    p = NULL;
    
//    Line *p = new Line(1,2,3,4);
//    p->printInfo();
//    delete p;
//    p = NULL;
//
    
    Array arr1(5);
//    arr1.setCount(5);
    Array arr2(arr1);

    arr1.printArr();
    arr2.printArr();
//    cout<<"arr2.m_iCount = "<<arr2.getCount()<<endl;
    
    system("pause");
    return 0;
}

