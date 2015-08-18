//
//  Teacher.hpp
//  3.String
//
//  Created by 游义男 on 15/8/17.
//  Copyright © 2015年 游义男. All rights reserved.
//

#ifndef Teacher_cpp
#define Teacher_cpp

#include <stdio.h>
#include <string>
using namespace std;
class Teacher{
public:
    Teacher(string name = "Jim" ,int age = 1 ,string gender = "male",int max = 100);
    Teacher(const Teacher&tea);
    ~Teacher();
    
    
    void setName(string _name);
    string getName();
    
    void setAge(int _age);
    int getAge();
    
    void setGender(string _gender);
    string getGender();
    
    int getMax();
    
    void teach();
    
private:
    string m_strName;
    int m_iAge;
    string m_strGender;
    const int m_iMax;
};


#endif /* Teacher_cpp */
