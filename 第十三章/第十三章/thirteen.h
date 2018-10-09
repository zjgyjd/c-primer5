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

//多态公有类继承
#ifndef THIRTEEN_H_
#define THIRTEEN_H_

class Brass{
private:
	enum{ MAX = 35 };
	char fullName[MAX];
	long acctNum;
	double balance;
public:
	Brass(const char * s = "Nullbody", long an = -1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance()const;
	virtual void ViewAcct()const;
	virtual ~Brass(){}
};
class BrassPlus : public Brass{
private:
	double maxLoan;
	double rate;
	double owesBank;
public:
	BrassPlus(const char * s = "Nullboby", long an = -1,
		double bal = 0.0, double ml = 500,
		double r = 0.10);
	BrassPlus(const Brass & ba, double ml = 500, double r = 0.1);
	virtual void ViewAcct()const;
	virtual void Withdraw(double amt);//虚方法
	void ResetMax(double m){ maxLoan = m; }
	void ResetRate(double r){ rate = r; }
	void ResetOwes(){ owesBank = 0; }
};

#endif