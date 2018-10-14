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

////友元函数的继承以及动态内存分配
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include "thirteen.h"
//abcDMA::abcDMA(const char* l, int r){
//	label = new char[std::strlen(l) + 1];
//	std::strcpy(label, l);
//	rating = r;//评级
//}
//abcDMA::abcDMA(const abcDMA & rs){
//	label = new char[std::strlen(rs.label) + 1];
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//}
//abcDMA::~abcDMA(){
//	delete[] label;
//}
//abcDMA & abcDMA::operator=(const abcDMA & rs){
//	if (this == &rs)
//		return *this;
//	delete[]label;
//	label = new char[std::strlen(rs.label) + 1];
//	std::strcpy(label, rs.label);
//	rating = rs.rating;
//	return *this;
//}
// void abcDMA::View() const{
//	std::cout << "Label: " << label << std::endl;
//	std::cout << "Rating: " <<rating << std::endl;
//}
// baseDMA:: ~baseDMA(){
//	
// }
// baseDMA & baseDMA::operator=(const baseDMA & rs){
//	 if (this == &rs)
//		 return *this;
//	 abcDMA::operator=(rs);
//	 return *this;
// }
// void baseDMA::View() const{
//	 abcDMA::View();
// }
//lacksDMA::lacksDMA(const char* c, const char* l, int r) :abcDMA(l, r){
//	std::strncpy(color, c, 39);
//	color[39] = '\0';
//}
//lacksDMA::lacksDMA(const char* c, const abcDMA & rs) : abcDMA(rs){
//	std::strncpy(color, c, COL_LEN - 1);
//	color[COL_LEN - 1] = '\0';
//}
//void lacksDMA::View() const{
//	std::cout << "Label: " << Label() << std::endl;
//	std::cout << "Rating: " << Rating() << std::endl;
//	std::cout << "Color: " << color << std::endl;
//}
//hasDMA::hasDMA(const char* s, const char* l, int r) :abcDMA(l, r){
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//hasDMA::hasDMA(const char* s, const abcDMA & rs) : abcDMA(rs){
//	style = new char[std::strlen(s) + 1];
//	std::strcpy(style, s);
//}
//hasDMA::hasDMA(const hasDMA & hs) : abcDMA(hs){
//	style = new char(std::strlen(hs.style) + 1);
//	std::strcpy(style, hs.style);
//}
//hasDMA::~hasDMA(){
//	delete[]style;
//}
//hasDMA & hasDMA::operator=(const hasDMA & hs){
//	if (this == &hs)
//		return *this;
//	abcDMA::operator=(hs);
//	style = new char[std::strlen(hs.style) + 1];
//	std::strcpy(style, hs.style);
//	return *this;
//}
//void hasDMA::View() const{
//	std::cout << "Label: " << Label() << std::endl;
//	std::cout << "Rating: " << Rating() << std::endl;
//	std::cout << "Style: " << style << std::endl;
//}

////练习
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include <iostream>
//#include "thirteen.h"
//using namespace std;
//Cd::Cd(char * s1, char * s2, int n, double x){
//	int len = strlen(s1);
//	performers = new char[len + 1];
//	strcpy(performers, s1);
//	label = new char[strlen(s2) + 1];
//	strcpy(label, s2);
//	selections = n;
//	playtime = x;
//}
//Cd::Cd(const Cd & d){
//	performers = new char[strlen(d.performers) + 1];
//	strcpy(performers, d.performers);
//	label = new char[strlen(d.label) + 1];
//	strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//}
//Cd::~Cd(){
//	delete[]label;
//	delete[]performers;
//}
//void Cd::Report()const{
//	cout << "The performers is " << performers << endl;
//	cout << "The label is " << label << endl;
//	cout << "The selections is " << selections << endl;
//	cout << "The playtime is " << playtime << endl;
//}
//Cd & Cd::operator=(const Cd & d){
//	if (this == &d)
//		return *this;
//	delete[]label;
//	delete[]performers;
//	performers = new char[strlen(d.performers) + 1];
//	strcpy(performers, d.performers);
//	label = new char[strlen(d.label) + 1];
//	strcpy(label, d.label);
//	selections = d.selections;
//	playtime = d.playtime;
//	return *this;
//}
//Classic::Classic(const char * s, char * s1, char * s2, int n, double x):Cd(s1,s2,n,x){
//	fevorate = new char[strlen(s) + 1];
//	strcpy(fevorate, s);
//}
//Classic::~Classic(){
//	delete[]fevorate;
//}
//Classic::Classic(const Classic & s):Cd(s){
//	fevorate = new char[strlen(s.fevorate) + 1];
//	strcpy(fevorate, s.fevorate);
//}
//void Classic::Report()const{
//	Cd::Report();
//	cout << "The favorate is " << fevorate << endl;
//}
//Classic & Classic::operator=(const Classic & d){
//	if (this == &d)
//		return *this;
//	Cd::operator=(d);
//	fevorate = new char[strlen(d.fevorate) + 1];
//	strcpy(fevorate, d.fevorate);
//	return *this;
//}

////练习2
//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include "thirteen.h"
//using namespace std;
//Port::Port(const char* br, const char* st, int b){
//	brand = new char[strlen(br) + 1];
//	strcpy(brand, br);
//	if (strlen(st) > 20)
//		cout << "worry!!";
//	strcpy(style, st);
//	bottles = b;
//}
//Port::Port(){
//	brand = new char[10];
//	strcpy(brand,"null");
//	style[0] = '\0';
//	bottles = 0;
//}
//Port::Port(const Port & p){
//	brand = new char[strlen(p.brand) + 1];
//	strcpy(brand, p.brand);
//	strcpy(style,p.style);
//	bottles = p.bottles;
//}
//Port & Port::operator=(const Port & p){
//	if (this == &p)
//		return *this;
//	delete[]brand;
//	brand = new char[strlen(p.brand) + 1];
//	strcpy(brand, p.brand);
//	strcpy(style, p.style);
//	bottles = p.bottles;
//	return *this;
//}
//Port & Port::operator+=(int b){
//	bottles += b;
//	return *this;
//}
//Port & Port::operator-=(int b){
//	bottles -= b;
//	return *this;
//}
//void Port::Show()const{
//	cout << "Brand: " << brand << endl;
//	cout << "Kind: " << style << endl;
//	cout << "Bottles: " << bottles << endl;
//}
//ostream & operator<<(ostream & os, const Port & p){
//	os << p.brand << ", " << p.style << ", " << p.bottles << endl;
//	return os;
//}
//VintagePort::VintagePort(){
//	Port();
//	int len=strlen("NULL");
//	nickname = new char[5];
//	strcpy(nickname , "NULL");
//	year = 0;
//}
//VintagePort::VintagePort(const char* br, int b, const char* nn, int y) :Port(br,nn,b){
//	nickname = new char[strlen(nn) + 1];
//	strcpy(nickname, nn);
//	year = y;
//}
//VintagePort::VintagePort(const VintagePort & vp):Port(vp){
//	nickname = new char[strlen(vp.nickname + 1)];
//	strcpy(nickname, vp.nickname);
//	year = vp.year;
//}
//VintagePort & VintagePort::operator=(const VintagePort & vp){
//	if (this == &vp)
//		return *this;
//	delete[]nickname;
//	Port::operator=(vp);
//	nickname = new char[strlen(vp.nickname)+1];
//	strcpy(nickname, vp.nickname);
//	year = vp.year;
//	return *this;
//}
//void VintagePort::Show()const{
//	Port::Show();
//	cout << "Nickname: " << nickname << endl;
//	cout << "Year: " << year << endl;
//}
//ostream & operator<<(ostream & os, const VintagePort & p){
//	os<<(const Port &)p;
//	os << p.nickname << ", " << p.year  << endl;
//	return os;
//}