////一个简单的基类和派生类
//#ifndef THIRTEEN_H_
//#define THIRTEEN_H_
//
//class TableTennisPlayer{
//private:
//	enum{ LIM = 20 };
//	char firstname[LIM];
//	char lastname[LIM];
//	bool hasTable;
//public:
//	TableTennisPlayer(const char* fn = "none",
//		const char* ln = "none", bool ht = false);
//	void Name()const;
//	bool HasTable()const{ return hasTable; };
//	void ResetTable(bool v){ hasTable = v; };
//};
//
//class RatedPlayer :public TableTennisPlayer//公有派生类
//{
//private:
//	unsigned int rating;
//public:
//	RatedPlayer(unsigned int r = 0, const char * fn = "none",
//		const char * ln = "none", bool ht = false);
//	RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
//	unsigned int Rating(){ return rating; }
//	void ResetRating(unsigned int r){ rating = r; }
//};
//
//#endif

////多态公有类继承
//#ifndef THIRTEEN_H_
//#define THIRTEEN_H_
//
//class Brass{
//private:
//	enum{ MAX = 35 };
//	char fullName[MAX];
//	long acctNum;
//	double balance;
//public:
//	Brass(const char * s = "Nullbody", long an = -1, double bal = 0.0);
//	void Deposit(double amt);
//	virtual void Withdraw(double amt);
//	double Balance()const;
//	virtual void ViewAcct()const;
//	virtual ~Brass(){}
//};
//class BrassPlus : public Brass{
//private:
//	double maxLoan;
//	double rate;
//	double owesBank;
//public:
//	BrassPlus(const char * s = "Nullboby", long an = -1,
//		double bal = 0.0, double ml = 500,
//		double r = 0.10);
//	BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
//	virtual void ViewAcct()const;
//	virtual void Withdraw(double amt);//虚方法
//	void ResetMax(double m){ maxLoan = m; }
//	void ResetRate(double r){ rate = r; }
//	void ResetOwes(){ owesBank = 0; }
//};
//
//#endif

////抽象类和具体类
//#ifndef THIRTEEN_H_
//#define THIRTEEN_H_
//#include <iostream>
//class AcctABC{//抽象类
//private:
//	enum{ MAX = 35 };
//	char fullName[MAX];
//	long acctNum;
//	double balance;
//protected://只有派生类可以读取
//	const char * FullName()const{ return fullName; }
//	long AcctNum()const{ return acctNum; }
//	std::ios_base::fmtflags SetFormat()const;
//public:
//	AcctABC(const char* s = "Nullbody", long an = -1,
//		double bal = 0.0);
//	void Deposit(double amt);
//	virtual void Withdraw(double amt) = 0;
//	double Balance()const{ return balance; };
//	virtual void ViewAcct()const = 0;//纯虚函数
//	virtual ~AcctABC(){}
//};
//class Brass :public AcctABC{
//public:
//	Brass(const char * s = "Nullbody", long an = -1,
//		double bal = 0.0) :AcctABC(s, an, bal){}
//	virtual void Withdraw(double amt);
//	virtual void ViewAcct()const;
//	virtual ~Brass(){}
//};
//class BrassPlus :public AcctABC{
//private:
//	double maxLoan;
//	double rate;
//	double owesBank;
//public:
//	BrassPlus(const char * s = "Nullbody", long an = -1,
//		double bal = 0.0, double m1 = 500, double r = 0.10);
//	BrassPlus(const Brass & ba, double m1 = 500, double r = 0.1);
//	virtual void ViewAcct()const;
//	virtual void Withdraw(double amt);
//	void ResetMax(double m){ maxLoan = m; }
//	void ResetRate(double r){ rate = r; }
//	void ResetOwes(){ owesBank = 0; }
//};
//
//#endif

//友元函数的继承以及动态内存分配
#ifndef THIRTEEN_H_
#define THIRTEEN_H_
#include <iostream>
class baseDMA{
private:
	char * label;
	int rating;
public:
	baseDMA(const char * l = "null", int r = 0);
	baseDMA(const baseDMA & rs);
	virtual ~baseDMA();
	baseDMA & operator=(const baseDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const baseDMA & rs);
};
class lacksDMA :public baseDMA{
private:
	enum { COL_LEN = 40 };
	char color[COL_LEN];
public:
	lacksDMA(const char * c = "blank", const char * l = "null",
		int r = 0);
	lacksDMA(const char* c, const baseDMA &rs);
	friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
};
class hasDMA :public baseDMA{
private:
	char* style;
public:
	hasDMA(const char* s = "none", const char* l = "null", int r = 0);
	hasDMA(const char* s, const baseDMA & rs);
	hasDMA(const hasDMA & hs);
	~hasDMA();
	hasDMA & operator=(const hasDMA & rs);
	friend std::ostream & operator<<(std::ostream & os, const hasDMA & rs);
};

#endif