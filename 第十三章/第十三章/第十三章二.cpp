////一个简单的基类
//#define _CRT_SECURE_NO_WARNINGS
//#include "thirteen.h"
//#include <iostream>
//#include <cstring>
//
//TableTennisPlayer::TableTennisPlayer(const char* fn, const char* ln, bool ht){
//	std::strncpy(firstname, fn, LIM - 1);
//	firstname[LIM - 1] = '\0';
//	std::strncpy(lastname, ln, LIM - 1);
//	lastname[LIM - 1] = '\0';
//	hasTable = ht;
//}
//
//void TableTennisPlayer::Name()const{
//	std::cout << lastname << ", " << firstname;
//}
////派生类方法
//RatedPlayer::RatedPlayer(unsigned int r, const char* fn,
//	const char* ln, bool ht) :TableTennisPlayer(fn, ln, ht){
//	rating = r;
//}
//RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
//: TableTennisPlayer(tp), rating(r){
//
//}

////多态公有类继承
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include "thirteen.h"
//using namespace std;
//Brass::Brass(const char* s, long an, double bal){
//	strncpy(fullName, s, MAX - 1);
//	fullName[MAX - 1] = '\0';
//	acctNum = an;
//	balance = bal;
//}
//void Brass::Deposit(double amt){
//	if (amt < 0)
//		cout << "Neqative deposit not allowed: "
//		<< "deposit is cancelled.\n";
//	else
//		balance += amt;
//}
//void Brass::Withdraw(double amt){
//	if (amt < 0)
//		cout << "Withdrawal amount must be positive:"
//		<< "withdrawal canceled.\n";
//	else if (amt <= balance)
//		balance -= amt;
//	else
//		cout << "Withdrawal amount of $" << amt <<
//		" exceeds your balance.\n"
//		<< "Withdrawal canceled.\n";
//}
//double Brass::Balance()const{
//	return balance;
//}
//void Brass::ViewAcct()const{
//	ios_base::fmtflags initialState =
//		cout.setf(ios_base::fixed, ios_base::floatfield);//能不以科学计数法显示
//	cout.precision(2);
//	cout << "Client: " << fullName << endl;
//	cout << "Account Number: " << acctNum << endl;
//	cout << "Balance : $" << balance << endl;
//	cout.setf(initialState);
//}
//
//BrassPlus::BrassPlus(const char* s, long an, double bal, double m1, double r) :Brass(s, an, bal)
//{
//	maxLoan = m1;
//	owesBank = 0.0;
//	rate = r;
//}
//BrassPlus::BrassPlus(const Brass& ba, double m1, double r) :Brass(ba){
//	maxLoan = m1;
//	owesBank = 0.0;
//	rate = r;
//}
//void BrassPlus::ViewAcct()const{
//	ios_base::fmtflags initialState =
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout.precision(2);
//	Brass::ViewAcct();
//	cout << "Maximum loan: $" << maxLoan << endl;//最大贷款
//	cout << "Owed to bank: $" << owesBank << endl;//欠钱数
//	cout << "Loan Rate: " << 100 * rate << "%\n";//利率
//	cout.setf(initialState);//恢复原来格式
//}
//void BrassPlus::Withdraw(double amt){
//	ios_base::fmtflags initialState =
//		cout.setf(ios_base::showpoint);
//	cout.precision(2);
//
//	double bal = Balance();
//	if (amt <= bal)
//		Brass::Withdraw(amt);
//	else if (amt <= bal + maxLoan - owesBank){
//		double advance = amt - bal;
//		owesBank += advance*(1.0 + rate);//欠银行的钱本金加利息
//		cout << "Bank advance: $" << advance << endl;
//		cout << "Finance charge: $" << advance * rate << endl;
//		Deposit(advance);
//		Brass::Withdraw(amt);//将储存金额归零
//	}
//	else
//		cout << "Credit limit exceeded.Transaction cancelled.\n";
//	cout.setf(initialState);
//}

//////抽象类和具体类
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include "thirteen.h"
//using namespace std;
//AcctABC::AcctABC(const char* s, long an, double bal){
//	strncpy(fullName, s, MAX - 1);
//	fullName[MAX - 1] = '\0';
//	acctNum = an;
//	balance = bal;
//}
//void AcctABC::Deposit(double amt){
//	if (amt < 0)
//		cout << "Negative deposit not allowed: "
//		<< "deposit is cancelled.\n";
//	else
//		balance += amt;
//}
//void AcctABC::Withdraw(double amt){
//	balance -= amt;
//}
//ios_base::fmtflags AcctABC::SetFormat()const{
//	ios_base::fmtflags initialState =
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout.setf(ios_base::showpoint);
//	cout.precision(2);
//	return initialState;
//}
//void Brass::Withdraw(double amt){
//	if (amt < 0)
//		cout << "Withdraw must be positive;withdraw canceled.\n";
//	else if (amt <= Balance())
//		AcctABC::Withdraw(amt);
//	else
//		cout << "Withdraw amount of $" << amt
//		<< " exceeds your balance.\n"
//		<< "Withdrawal canceled.\n";
//}
//void Brass::ViewAcct()const{
//	ios_base::fmtflags initialState = SetFormat();
//	cout << "Brass Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//	cout.setf(initialState);
//}
//BrassPlus::BrassPlus(const char* s, long an, double bal,
//	double m1, double r) :AcctABC(s, an, bal){//单冒号为初始化列表
//	maxLoan = m1;
//	owesBank = 0.0;
//	rate = r;
//}
//BrassPlus::BrassPlus(const Brass & ba, double m1, double r) : AcctABC(ba){
//	maxLoan = m1;
//	owesBank = 0.0;
//	rate = r;
//}
//void BrassPlus::ViewAcct()const{
//	ios_base::fmtflags initialState = SetFormat();
//	cout << "Brass Client: " << FullName() << endl;
//	cout << "Account Number: " << AcctNum() << endl;
//	cout << "Balance: $" << Balance() << endl;
//	cout << "Maximum loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << owesBank << endl;
//	cout << "Loan Pate: " << 100 * rate << "%\n";
//	cout.setf(initialState);
//}
//void BrassPlus::Withdraw(double amt){
//	ios_base::fmtflags initialState = SetFormat();
//	double bal = Balance();
//	if (amt <= bal)
//		AcctABC::Withdraw(amt);
//	else if (amt <= bal + maxLoan - owesBank)
//	{
//		double advance = amt - bal;
//		owesBank += advance*(1.0 + rate);
//		cout << "Bank advance: $" << advance << endl;
//		cout << "Finance charge: $" << advance*rate << endl;
//		Deposit(advance);
//		AcctABC::Withdraw(amt);
//	}
//else
//	cout << "Credit limit exceeded.Transaction cancelled.\n";
//	cout.setf(initialState);
//}

//友元函数的继承以及动态内存分配
#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include "thirteen.h"
baseDMA::baseDMA(const char* l, int r){
	label = new char[std::strlen(l) + 1];
	std::strcpy(label, l);
	rating = r;//评级
}
baseDMA::baseDMA(const baseDMA & rs){
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
}
baseDMA::~baseDMA(){
	delete[] label;
}
baseDMA & baseDMA::operator=(const baseDMA & rs){
	if (this == &rs)
		return *this;
	delete[]label;
	label = new char[std::strlen(rs.label) + 1];
	std::strcpy(label, rs.label);
	rating = rs.rating;
	return *this;
}
std::ostream & operator<<(std::ostream & os, const baseDMA & rs){
	os << "Label: " << rs.label << std::endl;
	os << "Rating: " << rs.rating << std::endl;
	return os;
}
lacksDMA::lacksDMA(const char* c, const char* l, int r) :baseDMA(l, r){
	std::strncpy(color, c, 39);
	color[39] = '\0';
}
lacksDMA::lacksDMA(const char* c, const baseDMA & rs) : baseDMA(rs){
	std::strncpy(color, c, COL_LEN - 1);
	color[COL_LEN - 1] = '\0';
}
std::ostream & operator<<(std::ostream & os, const lacksDMA & ls){
	os << (const baseDMA &)ls;//因为不是派生类只能利用强制转换搞定基类
	os << "Color: " << ls.color << std::endl;
	return os;
}
hasDMA::hasDMA(const char* s, const char* l, int r) :baseDMA(l, r){
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const char* s, const baseDMA & rs) : baseDMA(rs){
	style = new char[std::strlen(s) + 1];
	std::strcpy(style, s);
}
hasDMA::hasDMA(const hasDMA & hs) : baseDMA(hs){
	style = new char(std::strlen(hs.style) + 1);
	std::strcpy(style, hs.style);
}
hasDMA::~hasDMA(){
	delete[]style;
}
hasDMA & hasDMA::operator=(const hasDMA & hs){
	if (this == &hs)
		return *this;
	baseDMA::operator=(hs);
	style = new char[std::strlen(hs.style) + 1];
	std::strcpy(style, hs.style);
	return *this;
}
std::ostream & operator<<(std::ostream & os, const hasDMA & hs){
	os << (const baseDMA &)hs;
	os << "Style: " << hs.style << std::endl;
	return os;
}