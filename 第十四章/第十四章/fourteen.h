//Student�෶��
#ifndef FOURTEEN_H_
#define FOURTEEN_H_

#include <iostream>
#include <string>
#include <valarray>
class Student{
private:
	typedef std::valarray<double> ArrayDb;//���Դ�����ֵ�����ֵ
	std::string name;
	ArrayDb scores;//�����ɼ�
	std::ostream & arr_out(std::ostream & os)const;//����valarray�����ת��
public:
	Student() :name("Null Student"), scores(){}//��ʼ���б�
	Student(const std::string & s) :name(s), scores(){}
	explicit Student(int n) :name("Nully"), scores(n){}//ȡ����ʽ���캯����int��ת��
	Student(const std::string & s, int n) :name(s), scores(n){}
	Student(const std::string & s, const ArrayDb & a) :name(s), scores(a){}
	Student(const char* str, const double* pd, int n) :name(str), scores(pd, n){}
	//scores(pd,n)˵��������ֵΪpd��ָ������,��ȡ����Ϊn
	~Student();
	double Average()const;
	const std::string & Name()const;
	double operator[](int i)const;
	double & operator[](int i);
	//friend
	friend std::istream & operator>>(std::istream & is, Student & stu);//һ������
	friend std::istream & getline(std::istream & is, Student & stu);//һ��
	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
};

#endif