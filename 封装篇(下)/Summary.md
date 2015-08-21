#封装篇(下)
类 对象  
对象，数据成员  对象成员
对象，数组	对象数组
对象 深拷贝 浅拷贝
对象指针  对象成员指针
this 指针
const + 对象 -> 常对象
const + 函数 -> 常成员函数
const + 对象成员 -> 常对象成员

* 对象数组
实例化一组数据
```C++
class Coordinate{
public:
	int m_iX;
	int m_iY;
};
int main(){
// 调用三次构造函数
	Coordinate coord[3];
	coor[1].m_iX = 10;
	Coordinate *p = new Coordinate[3];
	p[1].m_iY = 20;
	p ->m_iY = 20;
	p+1 ->m_iX = 20;
// 调用三次析构函数
	delete []p;
	p = NULL
	return 0
}
```
浅拷贝( 成员的值进行拷贝):
```C++
class Arry{
public:
	Array(){
		m_iCount = 5;
		m_pArr = new int[m_iCount];
	}

	Array(const Array&arr){
// 浅拷贝
		m_iCount = arr.m_iCount;
// 深拷贝(堆中数据也进行拷贝)
		m_pArr = new int[m_iCount];
		for(int i = 0;i<m_iCount;i++){
			m_pArr[i] = arr.m_pArr[i];
		}
	}
private:
	int m_iCount;
	int *m_pArr;
}
int main(void){
	Array arr1;
	Array arr2 = arr1;
	return 0;
}
```

对象指针:
```C++
class Coordinate{
public:	
	int m_iX;
	int m_iY;
}
int main(void){
	Coordinate *p = new Coordinate;
	p -> m_iX = 10;// (*p).m_iX = 10;
	p -> m_iY = 20;
	delete p;
	p = NULL;
	return 0;
}
```
对象成员指针:

this指针：(参数与数据成员同名) 指向数据自身的指针(取决于所饭位置)
通过引用，指针调用
```C++
class{
public:
	Array(int len){
		this->len = len;
	}
	int getLen(){
		return len;
	}
	void setLen(int len){
		this->len = len;
	}
private:
	int len;
};
```
常对象成员和常成员函数
使用常成员函数必须调用常成员函数
`const Coordinate coordinate(3,5);coordinate.changeX()`
```C++
class Coordinate{
	Coordinate(int x,int y);
	//常成员函数
	void changeX() const;
	void changeX();
	// 互为重载
private:
	int m_iX;
	int m_iY;
};
class Line{
public:
	Line(int x1,int y1,int x2,int y2);
private:
	const Coordinate m_coorA;
	const Coordinate m_coorB;
};
Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2){
	cout<<"Line()"<<endl;
}
void Coordinate::changeX() const:
```
对象常指针，对象常引用
```C++
class Coordinate{
public:
	Coordinate(int x,int y);
	~Coordinate();
	int getX();
	int getY();
	void printInfo() const;
private:
	int m_iX;
	int m_iY;
};

int main(){
	Coordinate coor1(3,5);
	const Coordinate &coor2 = coor1;
	const Coordinate *pCoor = &coor1;
	// 常指针，不能再指向其他地方
	Coordinate const pCoor = &coor1
	coor1.printInfo();
	coor2.printInfo();
	pCoor ->printInfo();
	return 0;
}

```












