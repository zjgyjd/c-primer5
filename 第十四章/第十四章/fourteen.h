////Student�෶��
//#ifndef FOURTEEN_H_
//#define FOURTEEN_H_
//
//#include <iostream>
//#include <string>
//#include <valarray>
//class Student{
//private:
//	typedef std::valarray<double> ArrayDb;//���Դ�����ֵ�����ֵ
//	std::string name;
//	ArrayDb scores;//�����ɼ�
//	std::ostream & arr_out(std::ostream & os)const;//����valarray�����ת��
//public:
//	Student() :name("Null Student"), scores(){}//��ʼ���б�
//	Student(const std::string & s) :name(s), scores(){}
//	explicit Student(int n) :name("Nully"), scores(n){}//ȡ����ʽ���캯����int��ת��
//	Student(const std::string & s, int n) :name(s), scores(n){}
//	Student(const std::string & s, const ArrayDb & a) :name(s), scores(a){}
//	Student(const char* str, const double* pd, int n) :name(str), scores(pd, n){}
//	//scores(pd,n)˵��������ֵΪpd��ָ������,��ȡ����Ϊn
//	~Student(){}
//	double Average()const;
//	const std::string & Name()const;
//	double operator[](int i)const;
//	double & operator[](int i);
//	//friend
//	friend std::istream & operator>>(std::istream & is, Student & stu);//һ������
//	friend std::istream & getline(std::istream & is, Student & stu);//һ��
//	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
//};
//
//#endif

////˽����̳�Student��
//#ifndef FOURTEEN_H_
//#define FOURTEEN_H_
//#include <iostream>
//#include <string>
//#include <valarray>
//using namespace std;
//class Student :private std::string, private std::valarray<double>{
//	//���ؼ̳м��MI
//	typedef std::valarray<double> ArrayDb;
//	std::ostream & arr_out(std::ostream & os)const;
//public:
//	Student() :string("NULL Student"), ArrayDb(){}
//	Student(const string & s) :string(s), ArrayDb(){}
//	Student(int n):string ("NuLLy"), ArrayDb(n){}
//	Student(const std::string & s, int n) :string(s), ArrayDb(n){}
//	Student(const std::string & s, const ArrayDb & a) :string(s), ArrayDb(a){}
//	Student(const char* str, const double* pd, int n) :string(str), ArrayDb(pd, n){}
//	~Student(){}
//	double Average()const;
//	double & operator[](int i);
//	double operator[](int i)const;
//	const std::string & Name()const;
//	friend std::istream & operator>>(std::istream & is, Student & stu);//һ������
//	friend std::istream & getline(std::istream & is, Student & stu);//һ��
//	friend std::ostream & operator<<(std::ostream & os, const Student & stu);
//};
//
//#endif

////worker��MIд��
//#ifndef FOURTEEN_H_
//#define FOURTEEN_H_
//
//#include <string>
//class Worker{
//private:
//	std::string fullname;
//	long id;
//public:
//	Worker() :fullname("no one"), id(0L){}
//	Worker(const std::string & s, long n) :
//		fullname(s), id(n){}
//	virtual ~Worker() = 0;
//	virtual void Set();
//	virtual void Show()const;
//};
//class Waiter : public Worker{
//private:
//	int panache;
//public:
//	Waiter() :Worker(), panache(0){}
//	Waiter(const std::string & s, long n, int p = 0) :Worker(s, n)
//		, panache(p){}
//	Waiter(const Worker & wk, int p = 0) :Worker(wk), panache(p){}
//	void Set();
//	void Show()const;
//};
//class Singer :public Worker{
//protected:
//	enum{other,alto,contralto,soprano,bass
//	,baritone,tenor};
//	enum{ Vtypes = 7 };
//private:
//	static char* pv[Vtypes];
//	int voice;
//public:
//	Singer() :Worker(), voice(other){}
//	Singer(const std::string & s, long n, int v = other) :
//		Worker(s, n), voice(v){}
//	Singer(const Worker & wk, int v = other) :
//		Worker(wk), voice(v){}
//	void Set();
//	void Show()const;
//};
//
//#endif

//worker��MI�Ľ�
#ifndef FOURTEEN_H_
#define FOURTEEN_H_
#include <string>
class Worker{
private:
	std::string fullname;
	long id;
protected:
	virtual void Data()const;
	virtual void Get();
public:
	Worker() :fullname("no one"), id(0L){}
	Worker(const std::string & s, long n)
	:fullname(s), id(n){}
	virtual ~Worker() = 0;
	virtual void Set() = 0;
	virtual void Show() = 0;
};
class Waiter :virtual public Worker{
private:
	int panache;
protected:
	void Data()const;
	void Get();
public:
	Waiter() :Worker(), panache(0){}
	Waiter(const std::string & s, long n, int p = 0) :
		Worker(s, n), panache(p){}
	Waiter(const Worker & wk, int p = 0) :
		Worker(wk), panache(p){}
	void Set();
	void Show()const;
};
class Singer :virtual public Worker{
protected:
	enum{other,alto,contralto,soprano,
	bass,baritone,tenor};
	enum{ Vtypes = 7 };
	void Data()const;
	void Get();
private:
	static char* pv[Vtypes];
	int voice;
public:
	Singer() :Worker(), voice(other){}
	Singer(const std::string & s, long n, int v = other) :
		Worker(s, n), voice(v){}
	Singer(const Worker & wk, int v = other) :Worker(wk),
		voice(v){}
	void Set();
	void Show()const;
};
class SingingWaiter :public Singer, public Waiter{
protected:
	void Data()const;
	void Get();
public:
	SingingWaiter(){}
	SingingWaiter(const std::string & s, long n, int p = 0
		, int v = other) :Worker(s, n), Waiter(s, n, p),
		Singer(s, n, v){}
	SingingWaiter(const Worker & wk, int p = 0, int v = other) :
		Worker(wk), Waiter(wk, p), Singer(wk, v){}
	SingingWaiter(const Waiter & wk, int v = other) :
		Worker(wk), Waiter(wk), Singer(wk, v){}
	SingingWaiter(const Singer & wk, int p = 0) :
		Worker(wk), Waiter(wk, p), Singer(wk){}
	void Set();
	void Show()const;
};

#endif