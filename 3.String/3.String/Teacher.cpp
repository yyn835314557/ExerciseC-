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

Teacher::Teacher(){
    m_strName = "Jim";
    m_iAge = 5;
    m_strGender = "male";
    cout<<"Teacher()"<<endl;
}
Teacher::Teacher(string name,int age,string gender){
    m_strName = name;
    m_iAge = age;
    m_strGender = gender;
    cout<<"Teacher(string name,int age,string gender)"<<endl;
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
