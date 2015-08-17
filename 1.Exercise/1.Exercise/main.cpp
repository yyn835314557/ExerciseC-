//
//  main.cpp
//  1.Exercise
//
//  Created by 游义男 on 15/8/17.
//  Copyright © 2015年 游义男. All rights reserved.
//

#include <iostream>
#include <stdlib.h> // syste
using namespace std;
namespace CompanyA{
int getMaxOrMin(int *arr,int count,bool isMax){
    int temp = arr[0];
    for (int i = 1; i <count; i++) {
        if (isMax) {
            if (temp < arr[i]) {
                temp = arr[i];
            }
        }else{
            if (temp > arr[i]){
                temp = arr[i];
            }
        }
    }
    return temp;
}
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr1[4] = {3,5,1,7};
    bool isMax = false;
    cout << "请输入最大值或者最小值"<<endl;
    cin >> isMax;
    cout<<CompanyA::getMaxOrMin(arr1, 4, isMax)<< endl;
    system("pause");
    std::cout << "Hello, World!\n";
    return 0;
}
