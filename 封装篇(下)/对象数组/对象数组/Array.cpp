//
//  Array.cpp
//  对象数组
//
//  Created by 游义男 on 15/8/19.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Array.hpp"
#include <stdlib.h>
#include <iostream>
using namespace std;

Array::Array(int count){
    m_iCount = count;
    m_pArr = new int[m_iCount];
    for (int i = 0; i<m_iCount; i++) {
        m_pArr[i] = i;
    }
    cout<<"Array()"<<endl;
}

Array::Array(const Array&arr){
    
    // 浅拷贝
    m_iCount = arr.m_iCount;
    
    // 深拷贝
    m_pArr = new int[m_iCount];
    for (int i=0; i< m_iCount; i++) {
        m_pArr[i] = arr.m_pArr[i];
    }
    
    cout<<"Array &"<<endl;
}

Array::~Array(){
    delete []m_pArr;
    m_pArr = NULL;
    cout<<"~Array()"<<endl;
}

void Array::setCount(int count){
    m_iCount = count;
}

int Array::getCount(){
    return m_iCount;
}

void Array::printAddr(){
    cout<<"m_pArr = "<<m_pArr<<endl;
}

void Array::printArr(){
    for (int i =0; i<m_iCount; i++) {
        cout<<m_pArr[i] <<endl;
    }
}