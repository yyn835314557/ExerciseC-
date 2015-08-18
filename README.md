## 数据类型
* C++ 命名空间

## C++ 封装(选择性暴露) public protected private
* class(数据成员(属性)，成员变量)
* object(构造函数，析构函数)
* class define(对象复制，对象赋值)
* 应用形态(object array,object indicator)
* this 指针 (类与对象有机结合) 封装
```
class Dog{
	// 属性（数据成员）
	char name[20];
	int age;
	//方法(成员函数)
	void speak();
	void run();
}
// 从栈中实例化对象
int main(){
	Dog dog;
	Dog dog[10];//定义对象数组
	// 对象成员的访问
	dog.age = 0;
	dog.speak();

	return 0;
}
// 从堆中实例化{
	Dog *p = new Dog();
	Dog *q = new Dog[20];
	if(NULL == p){
		return 0;
	}
	// 对象成员的访问
	p->age = 0;
	p->speak();
	for(int i =0;i < 20;i++){
		q[i] -> age = 0;
		q[i] -> speak();
	}
	//todo 释放对象
	delete p;
	// 入库
	p = NULL;
	delete []q;
	q = NULL;
}
```
## Chapter 3 : 初始字符串类型
* string 初始化
	`string s1`,`string s2("ABC")`,`string s3(s2)`,`string s4(n,'c')`
* string 常用操作
`s.empty()`,`s.size()`,`s[n]`,
```C++
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    string name;
    cout<<"请输入你的名字:"<<endl;
    getline(cin,name);
    if (name.empty()) {
        cout<< "输入为空" <<endl;
        system("pause");
        return 0;
    }
    if (name == "imooc") {
        cout << "you are a administrator" << endl;
    }
    cout << "hello " + name <<endl;
    cout<<"your name length:"<<name.size()<< endl;
    //字符串首字母；
    cout<<"your name first letter is :"<<name[0]<<endl;
    system("pause");
    return 0;
}
```

## Chapter 4 : 属性封装的艺术：
```C++
class Student{
public:
	// 写
	void setAge(int _age){
		if(_age>0&& _age<100){
			age = _age;
		}
	}
	// 读
	int getAge(){
		return age;
	}
private:
	string name;
	int age;
}
```
```C++
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

class Student{
public:
    void setName(string _name){
        m_strName = _name;
    }
    string getName(){
        return m_strName;
    }
    
    void setGender(string _gender){
        m_strGender = _gender;
    }
    string getGender(){
        return m_strGender;
    }
    
    int getScore(){
        return m_iScore;
    }
    void initScore(){
        m_iScore = 0;
    }
    void study(int _score){
        m_iScore += _score;
    }
private:
    string m_strName;
    string m_strGender;
    int m_iScore;
};

int main(int argc, const char * argv[]) {
    // insert code here...
    Student stu;
    stu.initScore();
    stu.setName("zhangsan");
    stu.setGender("female");
    stu.study(5);
    stu.study(3);
    
    cout<<stu.getName()<<" "<<stu.getGender()<<stu.getScore()<< endl;
    
    system("pause");
    return 0;
}
```
## chapter5: 类外定义(同文件，分文件类外定义)
类内定义与内联函数
内联函数：inline
类内定义: 优先编译为 inline

## chapter6 对象的生死离别
栈区`int x = 0;int *p = NULL;`
堆区`int *p = new int[20];`
全局区：存储全局变量以及静态变量
常量区`string str = "hello";`
代码区：存储逻辑代码的二进制

对象的初始化(有且仅有一次，根据条件初始化)
```
class Tank{
public:
	void init(){
	m_iPosX = 0;
	m_iPosY = 0;
}
private:
	int m_iPosX;
	int m_iPosY;
}
int main(){
	Tank t1;
	t1.init();
	Tank t2;
	t2.init();
	return 0;
}
```
####用构造函数的话那个对象在产生的时候就已经执行了，而用成员函数的话则需要你调用了它才执行。
*构造函数的规则以及特点:(无参 有参)*
1. 构造函数在对象实例化时被自动调用(仅仅调用一次)
2. 构造函数与类同名
3. 构造函数没有返回值(连void的也没有)
4. 构造函数可以有多个重载形式
5. 实例化对象时仅用到一个构造函数
6. 当用户没有定义构造函数时，编译器自动生成一个构造函数(不做任何事情)
默认构造函数(无参数)
初始化列表(效率高速度快)
* 初始化列表优先于构造函数执行
* 初始化列表只能用于构造函数
* 初始化列表可以同时初始化多个数据成员
```
class Circle{
public:
// 初始化列表存在的必要性
	Circle():m_dPi(3.1415){}
private:	
	const double m_dPi;
}

```

拷贝构造函数（只调用一次）,没有定义时自动生成默认拷贝构造函数，系统采用直接初始化，复制初始化 实例化对象时，自动调用拷贝构造函数
拷贝构造函数的参数是确定的，不能重载.
```
class Student{
public:	
	Student(){m_strName = "Jin"}
	Student(const Student&student){}
private:
	string m_strName;
};
```

##析构函数:~class() 自动调用,无参数,不能重载
class Student(
public:
	Student() {m_pName = new char char[20];}
	~Student(){delete []m_pName;}
private:
	char *m_pName
);





















