////�Ľ�Stock�ࣨ�ź������壩
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include "ten.h"
//
//Stock::Stock(){
//	std::cout << "���캯����Ĭ��:\n";
//	std::strcpy(company, "no name");
//	shares = 0;
//	share_val = 0;
//	total_val = 0;
//}
//
// Stock::Stock(const char* co, int n, double pr){
//	 std::cout << "Constructor using " << co << " called.\n";
//	std::strncpy(company, co, 29);//���29����Ϊ����һ����\0��
//	company[29] = '\0';
//	if (n < 0){
//		std::cerr << "Number of shares can't be negative."//��ֹ���븺��
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
// Stock::~Stock(){//��������
//	 std::cout << "Bye, " << company << "!\n";
// }
//	
//	void Stock::buy(int num, double price){
//		if (num < 0){
//			std::cerr << "Number of shares purchased can't be negative."
//				<< "Transaction is aborted.\n";//aborted��ֹ
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
//				<< "Transaction is aborted.\n";//aborted��ֹ
//		}
//		else if(num>shares){
//			cerr << "Your can't sell more then you have!"
//				<< "Transaction is aborted.\n";//aborted��ֹ
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
//			<< "\n Total Worth : $" << total_val << endl;//worth��ֵ
//	}
//
//	//����һ���ȽϺ�������thisָ��
//	const Stock & Stock::topval(const Stock & s) const
//	{
//		if (s.total_val > total_val)
//			return s;
//		else
//			return *this;//thisָ��ָ�����Ա�ĵ�ַ��*this�Ƕ�����
//	}

////��ջ����ĺ���
//#include "ten.h"
//Stack::Stack(){
//	top = 0;
//}
//
//bool Stack::isempty()const{
//	return top == 0;//��Ϊ��ʱ������1��ȷ��Ϊ��ջ
//}
//
//bool Stack::isfull()const{
//	return top == MAX;//˵�������������ֵ
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

////������
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

//////���ֿ��ܵĹ��캯������
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

////golf�������
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
//	cin >> golf::handicap;//���ܺͺ�������
//	while (!cin){
//		cin.clear();//��cin��ʶ�����»ص���
//		cin.sync();//Ȼ�������������
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

////���ƿռ�����
//#include <iostream>
//#include "ten.h"
//
//namespace SALES{
//	using namespace std;
//	Sales::Sales(const double ar[], int n){//��Ϊ�����ƿռ�����࣬���Ժ�������ҲҪ�ڿռ���
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
//	void Sales::setSales(){//�����汾
//		double sa[QUARTERS];
//		int i;
//		for (i = 0; i < QUARTERS; i++){
//			cout << "Enter sales for quater" << i + 1 << ":";
//			cin >> sa[i];//���û�����sa��ֵ��������۸�
//		}
//		*this = Sales(sa, QUARTERS);//������ʱ���󴢴棬��ֵ�����ö���
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

////�ٶȸĽ�Stack���û��ļ�����ṹ�Ͷ�ջ(����Ķ�)
////��ջ����ĺ���
//#include "ten.h"
//#include <iostream>
//Stack::Stack(){
//	top = 0;
//}
//
//bool Stack::isempty()const{
//	return top == 0;//��Ϊ��ʱ������1��ȷ��Ϊ��ջ
//}
//
//bool Stack::isfull()const{
//	return top == MAX;//˵�������������ֵ
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
//void get_customer(customer & cu){//Ҫ�õ�һ���ṹ��
//	using namespace std;
//	cout << "Enter customer name :";
//	cin.getline(cu.fullname, 35);
//	cout << "Enter customer payment:";
//	cin >> cu.payment;
//	while (cin.get() != '\n')
//		continue;
//}

////����һ��list��
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
//void simplist::transverse(void(*pfun)(Item item)){//����ת��
//	for (int i = 0; i < count; i++)
//		(*pfun)(items[i]);
//}