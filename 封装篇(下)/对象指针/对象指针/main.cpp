//
//  main.cpp
//  对象指针
//
//  Created by 游义男 on 15/8/20.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include "Coordinate.hpp"
#include "Line.hpp"
#include "Array.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    
//    Coordinate *p1 = NULL;
//    p1 = new Coordinate();
//    
//    Coordinate *p2 = new Coordinate;
//    
//    p1 -> setY(20);
//    p1 -> setX(10);
//    
//    (*p2).setX(30);
//    (*p2).setY(40);
//    
//    cout<< p1 ->getX() + (*p2).getX()<<endl;
//    cout<< p1 ->getY() + (*p2).getY()<<endl;
//    
//    // ~Coordinate()
//    delete p1;
//    p1 = NULL;
//    delete p2;
//    p2 = NULL;

//    Coordinate p1;
//    Coordinate *p2 = &p1;
//    // 通过p2操纵p1
//    
//    p2 ->setX(10);
//    p2 ->setY(20);
//    
//    cout<<p1.getX()<<endl;
//    cout<<p1.getY()<<endl;

//    Line *p = new Line(1,2,3,4);
//    
//    p->printInfo();
//    cout<<sizeof(p)<<endl;
//    cout<<sizeof(Line)<<endl;
//    
//    
//    delete  p ;
//    p = NULL;
    
    
    Array arr1(10);
//    arr1.getLen();
    // 取地址
    cout<<&arr1<<endl;
    // 调用Array的引用实际上就是arr1
    arr1.printInfo()->setLen(5)->printInfo();
    
//    cout<<"len = "<<arr1.getLen()<<endl;
    system("pause");
    return 0;
}
