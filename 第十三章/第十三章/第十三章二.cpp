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

//多态公有类继承
#include <iostream>
#include <cstring>
#include "thirteen.h"
using namespace std;
Brass::Brass(const char* s, long an, double bal){
	strncpy(fullName, s, MAX - 1);
	fullName[MAX - 1] = '\0';
	acctNum = an;
	balance = bal;
}
void Brass::Deposit(double amt){
	if (amt < 0)
		cout << "Neqative deposit not allowed: "
		<< "deposit is cancelled.\n";
	else
		balance += amt;
}
void Brass::Withdraw(double amt){
	if (amt < 0)
		cout << "Withdrawal amount must be positive:"
		<< "withdrawal canceled.\n";
	else if (amt <= balance)
		balance -= amt;
	else
		cout << "Withdrawal amount of $" << amt <<
		" exceeds your balance.\n"
		<< "Withdrawal canceled.\n";
}
double Brass::Balance()const{
	return balance;
}
void Brass::ViewAcct()const{
	ios_base::fmtflags initialState =
		cout.setf(ios_base::showpoint);
	cout.precision(2);
	cout << "Client: " << fullName << endl;
	cout << "Account Number: " << acctNum << endl;
	cout << "Balance : $" << balance << endl;
	cout.setf(initialState);
}

BrassPlus::BrassPlus(const char* s, long an, double bal, double m1, double r) :Brass(s, an, bal)
{
	maxLoan = m1;
	owesBank = 0.0;
	rate = r;
}
BrassPlus::BrassPlus(const Brass& ba, double m1, double r) :Brass(ba){
	maxLoan = m1;
	owesBank = 0.0;
	rate = r;
}
void BrassPlus::ViewAcct()const{
	ios_base::fmtflags initialState =
		cout.setf(ios_base::fixed, ios_base::floatfield);
	cout.precision(2);
	Brass::ViewAcct();
	cout << "Maximum loan: $" << maxLoan << endl;//最大贷款
	cout << "Owed to bank: $" << owesBank << endl;//欠钱数
	cout << "Loan Rate: " << 100 * rate << "%\n";//利率
	cout.setf(initialState);//恢复原来格式
}
void BrassPlus::Withdraw(double amt){
	ios_base::fmtflags initialState =
		cout.setf(ios_base::showpoint);
	cout.precision(2);

	double bal = Balance();
	if (amt <= bal)
		Brass::Withdraw(amt);
	else if (amt <= bal + maxLoan - owesBank){
		double advance = amt - bal;
		owesBank += advance*(1.0 + rate);
		cout << "Bank advance: $" << advance << endl;
		cout << "Finance charge: $" << advance * rate << endl;
		Deposit(advance);
		Brass::Withdraw(amt);
	}
	else
		cout << "Credit limit exceeded.Transaction cancelled.\n";
	cout.setf(initialState);
}