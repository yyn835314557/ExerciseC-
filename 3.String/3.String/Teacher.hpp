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
    Teacher();
    Teacher(string name,int age ,string gender = "male");
    void setName(string _name);
    string getName();
    
    void setAge(int _age);
    int getAge();
    
    void setGender(string _gender);
    string getGender();
    
    void teach();
    
private:
    string m_strName;
    int m_iAge;
    string m_strGender;
};


#endif /* Teacher_cpp */
