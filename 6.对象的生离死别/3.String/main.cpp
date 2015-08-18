//
//  main.cpp
//  3.String
//
//  Created by 游义男 on 15/8/17.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.hpp"
using namespace std;




int main(int argc, const char * argv[]) {
    // insert code here...
//    Teacher t1("merry",12);
//    Teacher t1;
//    Teacher t2 = t1;//调用拷贝构造函数
//    Teacher t3(t1);//拷贝
    Teacher t1;
//    Teacher *p = new Teacher();
//    delete p;
//    p = NULL;
    Teacher t2(t1);
    
//    cout<<t1.getName()<< " "<<t1.getAge() <<" "<<t1.getGender()<<" "<<t1.getMax() <<endl;

    system("pause");
    return 0;
}
