//
//  Teacher.cpp
//  3.String
//
//  Created by 游义男 on 15/8/17.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include "Teacher.hpp"
#include <iostream>
#include <string>
using namespace std;

// 构造函数
Teacher::Teacher(string name,int age,string gender,int max):m_strName(name),m_iAge(age),m_strGender(gender),m_iMax(age){
    cout<<"Teacher(string name,int age,string gender)"<<endl;
}
// 拷贝构造函数
Teacher::Teacher(const Teacher&tea):m_iMax(10){
    cout<<"Teacher::Teacher(const Teacher&tea)"<<endl;
}
// 析构函数
Teacher::~Teacher(){
    cout<<"~Teacher()"<<endl;
}

int Teacher::getMax(){
    return m_iMax;
}

void Teacher::setName(string _name){
    m_strName = _name;
}
string Teacher::getName(){
    return m_strName;
}

void Teacher::setAge(int _age){
    m_iAge = _age;
}

int Teacher::getAge(){
    return m_iAge;
}

void Teacher::setGender(string _gender){
    m_strGender = _gender;
}

string Teacher::getGender(){
    return m_strGender;
}
void Teacher::teach(){
    cout<< "上课了......"<<endl;
}
