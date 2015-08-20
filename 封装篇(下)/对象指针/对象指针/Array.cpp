//
//  Array.cpp
//  对象指针
//
//  Created by 游义男 on 15/8/20.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Array.hpp"
#include <iostream>
using namespace::std;

Array::Array(int len){
    this->Len = len;
}
Array::~Array(){

}

Array* Array::setLen(int len){
    this->Len = len;
    return this;
}
int Array::getLen(){
    return Len;
}

//Array& Array::printInfo(){
//    cout<<"len = "<<Len<<endl;
//    return *this;
//}
Array* Array::printInfo(){
    cout<<this<<endl;
    cout<<"len = "<<Len<<endl;
    return this;
}