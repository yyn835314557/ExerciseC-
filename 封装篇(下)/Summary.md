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
	p ->m_iX = 10;// (*p).m_iX = 10;
	p ->m_iY = 20;
	delete p;
	p = NULL;
	return 0;
}
```














