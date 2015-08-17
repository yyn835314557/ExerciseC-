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
    Teacher t1;
    Teacher t2("Merry",15,"female");
    Teacher t3("JIN",23);

    cout<<t1.getName()<< " "<<t1.getAge() <<" "<<t1.getGender()<<endl;
    cout<<t2.getName()<< " "<<t2.getAge()<<" "<<t2.getGender()<<endl;

    system("pause");
    return 0;
}
