//
//  main.cpp
//  常成员对象和常成员函数
//
//  Created by 游义男 on 15/8/21.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include "Coordinate.hpp"
#include "Line.hpp"
#include <stdlib.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...

    Line line(1,2,3,4);
    
    line.printInfo();
   
    // 调用const函数
    Line line1(1,2,3,4);
    
    line1.printInfo();
    
    
    return 0;
}
