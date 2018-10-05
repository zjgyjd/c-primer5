////改进Stock类（放函数定义）
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include "ten.h"
//
//Stock::Stock(){
//	std::cout << "构造函数的默认:\n";
//	std::strcpy(company, "no name");
//	shares = 0;
//	share_val = 0;
//	total_val = 0;
//}
//
// Stock::Stock(const char* co, int n, double pr){
//	 std::cout << "Constructor using " << co << " called.\n";
//	std::strncpy(company, co, 29);//最多29个因为还有一个‘\0’
//	company[29] = '\0';
//	if (n < 0){
//		std::cerr << "Number of shares can't be negative."//防止输入负数
//			<< company << " shares set to 0.\n";
//		shares = 0;
//	}
//	else{
//		shares = n;
//		share_val = pr;
//		set_tot();
//	}
//}
//
// Stock::~Stock(){//析构函数
//	 std::cout << "Bye, " << company << "!\n";
// }
//	
//	void Stock::buy(int num, double price){
//		if (num < 0){
//			std::cerr << "Number of shares purchased can't be negative."
//				<< "Transaction is aborted.\n";//aborted终止
//		}
//		else{
//			shares += num;
//			share_val = price;
//			set_tot();
//		}
//	}
//
//	void Stock::sell(int num, double price){
//		using std::cerr;
//		if (num < 0){
//			cerr << "Number of shares sold can't be negative."
//				<< "Transaction is aborted.\n";//aborted终止
//		}
//		else if(num>shares){
//			cerr << "Your can't sell more then you have!"
//				<< "Transaction is aborted.\n";//aborted终止
//		}
//		else{
//			shares -= num;
//			share_val = price;
//			set_tot();
//		}
//	}
//
//	void Stock::update(double price){
//		share_val = price;
//		set_tot();
//	}
//
//	void Stock::show(){
//		using std::cout;
//		using std::endl;
//		cout << "Company: " << company
//			<< "\n Shares: " << shares
//			<< "\n Share Price : $" << share_val
//			<< "\n Total Worth : $" << total_val << endl;//worth价值
//	}
//
//	//新增一个比较函数运用this指针
//	const Stock & Stock::topval(const Stock & s) const
//	{
//		if (s.total_val > total_val)
//			return s;
//		else
//			return *this;//this指针指向类成员的地址，*this是对象本身
//	}

////堆栈的类的函数
//#include "ten.h"
//Stack::Stack(){
//	top = 0;
//}
//
//bool Stack::isempty()const{
//	return top == 0;//当为零时，返回1，确认为空栈
//}
//
//bool Stack::isfull()const{
//	return top == MAX;//说明到达数组最大值
//}
//
//bool Stack::push(const Item & item){
//	if (top < MAX){
//		items[top++] = item;
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//
//bool Stack::pop(Item & item){
//	if (top>0){
//		item = items[--top];
//		return true;
//	}
//else
//	return false;
//}

////银行类
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include "ten.h"
//#include <cstring>
//
//Bank::Bank(const char* a, const char* b, double c){
//	std::strcpy(name, a);
//	std::strcpy(account, b);
//	deposit = c;
//}
//
//void Bank::show()const{
//	std::cout << "The name = " << name << std::endl;
//	std::cout << "The number = " << account << std::endl;
//	std::cout << "The deposit = " << deposit << std::endl;
//}
//
//void Bank::inmoney(double b){
//	std::cout << "Your will increase " << b << " money!\n";
//	deposit += b;
//}
//
//void Bank::outmoney(double b){
//	std::cout << "Your will lose  " << b << " money!\n";
//	deposit -= b;
//}

//////三种可能的构造函数调用
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include "ten.h"
//#include <string>
//#include <cstring>
//using namespace std;
//
//Person::Person(const string & In, const char *fn){
//	lname = In;
//	strncpy(fname, fn,24);
//	fname[24] = '\0';
//}
//
//void Person::Show()const{
//	std::cout << "The first name = " << fname
//		<< "\nThe last name = " << lname << std::endl;
//}
//
//void Person::FormalShow()const{
//	std::cout << "The last name = " << lname
//		<< "\nThe first name = " << fname << std:: endl;
//}

////golf的类改造
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include"ten.h"
//#include <cstring>
//
//int golf::setgolf( ){
//	using namespace std;
//	cout << "Please enter golfer's full name: ";
//	cin.getline(fullname, Len);
//	if (fullname[0] == '\0')
//		return 0;
//	cout << "Plase enter handicap for " << fullname << ": ";
//	cin >> golf::handicap;//不能和函数重名
//	while (!cin){
//		cin.clear();//让cin标识符重新回到零
//		cin.sync();//然后再清空数据流
//		cout << "Plase enter an integer:";
//		cin >> handicap;
//	}
//	while (cin.get() != '\n')
//		continue;
//	return 1;
//}
//
//golf::golf(const char* name, int hc){
//	strcpy(fullname, name);
//	handicap = hc;
//}
//
//void golf::handi(int hc) {
//	handicap = hc;
//}
//
//void golf::showgolf( )const{
//	std::cout << "Golfer: " << fullname << "\n";
//	std::cout << "Handicap: " << handicap << "\n\n";
//}

////名称空间与类
//#include <iostream>
//#include "ten.h"
//
//namespace SALES{
//	using namespace std;
//	Sales::Sales(const double ar[], int n){//因为是名称空间里的类，所以函数定义也要在空间里
//		if (n < 0)
//		n = 0;
//		int limit = n < QUARTERS ? n : QUARTERS;
//		double total = 0;
//		min = 0;
//		max = 0;
//		average = 0;
//		if (limit>0)
//			min = max = ar[0];
//		int i;
//		for (i = 0; i < limit; i++){
//			sales[i] = ar[i];
//			total += ar[i];
//			if (ar[i]>max)
//				max = ar[i];
//			else if (ar[i] < min)
//				min = ar[i];
//		}
//		for (i = limit; i < QUARTERS; i++)
//			sales[i] = 0;
//		if (limit > 0)
//			average = total / limit;
//	}
//
//	Sales::Sales(){
//		min = 0;
//		max = 0;
//		average = 0;
//		for (int i = 0; i < QUARTERS; i++)
//			sales[i] = 0;
//	}
//
//	void Sales::setSales(){//交互版本
//		double sa[QUARTERS];
//		int i;
//		for (i = 0; i < QUARTERS; i++){
//			cout << "Enter sales for quater" << i + 1 << ":";
//			cin >> sa[i];//让用户输入sa的值，即数组价格
//		}
//		*this = Sales(sa, QUARTERS);//利用临时对象储存，赋值给调用对象
//	}
//
//	void Sales::showSales(){
//		cout << "Sales:\n";
//		for (int i = 0; i < QUARTERS; i++)
//			cout << "Quarter " << i + 1 << ": $"
//			<< sales[i] << endl;
//		cout << "Average: $" << average << endl;
//		cout << "Minimum: $" << min << endl;
//		cout << "Maximum: $" << max << endl;
//	}
//}

////再度改进Stack类用户文件加入结构和堆栈(无需改动)
////堆栈的类的函数
//#include "ten.h"
//#include <iostream>
//Stack::Stack(){
//	top = 0;
//}
//
//bool Stack::isempty()const{
//	return top == 0;//当为零时，返回1，确认为空栈
//}
//
//bool Stack::isfull()const{
//	return top == MAX;//说明到达数组最大值
//}
//
//bool Stack::push(const Item & item){
//	if (top < MAX){
//		items[top++] = item;
//		return true;
//	}
//	else{
//		return false;
//	}
//}
//
//bool Stack::pop(Item & item){
//	if (top>0){
//		item = items[--top];
//		return true;
//	}
//else
//	return false;
//}
//
//void get_customer(customer & cu){//要得到一个结构体
//	using namespace std;
//	cout << "Enter customer name :";
//	cin.getline(cu.fullname, 35);
//	cout << "Enter customer payment:";
//	cin >> cu.payment;
//	while (cin.get() != '\n')
//		continue;
//}

////创建一个list类
//#include "ten.h"
//
//simplist::simplist(){
//	count = 0;
//}
//
//bool simplist::isempty(){
//	return count == 0;
//}
//
//bool simplist::isfull(){
//	return count == MAXSIZE;
//}
//
//int simplist::itemcount(){
//	return count;
//}
//
//bool simplist::additem(Item item){
//	if (count == MAXSIZE)
//		return false;
//	else
//		items[count++] = item;
//	return true;
//}
//
//void simplist::transverse(void(*pfun)(Item item)){//用作转换
//	for (int i = 0; i < count; i++)
//		(*pfun)(items[i]);
//}