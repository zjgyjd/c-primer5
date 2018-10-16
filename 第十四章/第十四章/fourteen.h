//Student类范例
#ifndef FOURTEEN_H_
#define FOURTEEN_H_

#include <iostream>
#include <string>
#include <valarray>
class Student{
private:
	typedef std::valarray<double> ArrayDb;//可以处理数值存放数值
	std::string name;
	ArrayDb scores;//创建成绩
	std::ostream & arr_out(std::ostream & os)const;//隐藏valarray的输出转换
public:
	Student() :name("Null Student"), scores(){}//初始化列表
	Student(const std::string & s) :name(s), scores(){}
	explicit Student(int n) :name("Nully"), scores(n){}//取消隐式构造函数到int的转换
	Student(const std::string & s, int n) :name(s), scores(n){}
	Student(const std::string & s, const ArrayDb & a) :name(s), scores(a){}
	Student(const char* str, const double* pd, int n) :name(str), scores(pd, n){}
	//scores(pd,n)说明创建数值为pd所指的数组,所取长度为n
	~Student();
	double Average()const;
	const std::string & Name()const;
	double operator[](int i)const;
	double & operator[](int i);
	//friend
	friend std::istream & operator>>(std::istream & is, Student & stu);//一个单词
	friend std::istream & getline(std::istream & is, Student & stu);//一行
	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};

#endif