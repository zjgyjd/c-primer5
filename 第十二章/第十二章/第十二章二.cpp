//////StringBad类
//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include "twelve.h"
//using std::cout;
//
//int StringBad::num_strings = 0;//初始静态变量
//StringBad::StringBad(const char* s){
//	len = std::strlen(s);//计算字符长度
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	num_strings++;
//	cout << num_strings << ": \"" << str << "\"object created\n";
//}
//
//StringBad::StringBad(){
//	len = 4;
//	str = new char[4];
//	std::strcpy(str, "C++");
//	num_strings++;
//	cout << num_strings << ": \"" << str << "\" defualt object created\n";
//}
//
//StringBad::~StringBad(){
//	cout << "\"" << str << "\" object deleted, ";
//	--num_strings;
//	cout << num_strings << " left\n";
//	delete[] str;
//}
//
//std::ostream & operator << (std::ostream & os, const StringBad & st){
//	os << st.str;
//	return os;
//}
//
//StringBad::StringBad(const StringBad & s){//深刻复制
//	num_strings++;
//	len = s.len;
//	str = new char[len + 1];//使其拥有自己的地址，释放不会影响他人
//	std::strcpy(str, s.str);
//	cout << num_strings << ": \"" << str << "\"object created\n";
//}
//
//StringBad & StringBad::operator =(const StringBad & s){//深刻赋值
//	if (this == &s)
//		return *this;//防止多重赋值
//	delete[]str;//释放可能存储的内存
//	len = s.len;
//	str = new char[len + 1];
//	std::strcpy(str, s.str);
//	return *this;
//}

////修改后的string类
//#define  _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//#include "twelve.h"
//using std::cin;
//using std::cout;
//int String::num_strings = 0;
//int String::HowMany(){
//	return num_strings;
//}
//String::String(const char* s){
//	len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	num_strings++;
//}
//String::String(){
//	len = 4;
//	str = new char[1];
//	str[0] = '\0';
//	num_strings++;
//}
//String::String(const String& s){
//	num_strings++;
//	len = s.len;
//	str = new char[len + 1];
//	std::strcpy(str, s.str);
//}
//String::~String(){
//	num_strings--;
//	delete[]str;
//}
//String & String::operator=(const String & s){
//	if (this == &s)
//		return *this;
//	delete []str;
//	len = s.len;
//	str = new char[len + 1];
//	std::strcpy(str, s.str);
//	return *this;
//}
//String & String::operator=(const char* s){
//	delete[]str;
//	len = std::strlen(s);
//	str = new char[len + 1];
//	std::strcpy(str, s);
//	return *this;
//}
//char & String::operator[](int i){
//	return str[i];
//}
//const char & String::operator[](int i)const{
//	return str[i];//为const这样只读类型的字符串准备的
//}
//bool operator<(const String &st1, const String &st2){
//	return (std::strcmp(st1.str, st2.str) < 0);
//}
//bool operator>(const String &st1, const String &st2){
//	return st2.str < st1.str;
//}
//bool operator==(const String &st1, const String &st2){
//	return (std::strcmp(st1.str, st2.str) == 0);
//}
//ostream & operator <<(ostream & os, const String & st){
//	os << st.str;
//	return os;
//}
//istream & operator >>(istream & is,  String & st){
//	char temp[String::CINLIM];
//	is.get(temp, String::CINLIM);
//	if (is)
//		st = temp;
//	while (is&&is.get() != '\n')
//		continue;
//	return is;
//}

////超市队列模拟
//#include <iostream>
//#include <cstdlib>//用于显示随机数
//#include "twelve.h"
//
//Queue::Queue(int qs) :qsize(qs){//成员初始化列表，用于提前定义const值以及嵌套类时被声明引用的类成员，但不仅仅限于此431
//	front = rear = NULL;//头尾指针为空
//	items = 0;//当前项为零
//}
//
//Queue::~Queue(){//需要删除所有节点	
//	Node * temp;
//	temp = front;//从头到尾删除
//	while (temp != NULL){
//		front = front->next;
//		delete temp;
//	}
//}
//
//bool Queue::isempty()const{
//	return items == 0;
//}
//
//bool Queue::isfull()const{
//	return items == qsize;
//}
//
//int Queue::queuecount()const{
//	return items;
//}
//
//bool Queue::enqueue(const Item & item){//入队
//	if (isfull())
//		return false;
//	Node * add = new Node;
//	if (add == NULL)
//		return false;
//	add->item = item;
//	add->next = NULL;//设置为队尾
//	items++;//计数加一
//	if (front == NULL)//判断是否为第一个
//		front = add;
//	else
//		rear->next = add;//连接节点
//	rear = add;//设置为最后一个
//	return true;
//
//}
//
//bool Queue::dequeue( Item & item){
//	if (front == NULL)
//		return false;
//	item = front->item;
//	items--;
//	Node*temp = front;
//	front = front->next;
//	delete temp;
//	if (items == 0)
//		rear = NULL;
//	return true;
//}
//
//void Customer::set(long when){
//	processing = std::rand() % 3 + 1;//将随机数控制在1-3之间，即停留时间
//	arrive = when;//到达时间
//}

////String类的改进函数
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//#include "twelve.h"
//#include <cstring>
//String::String(){
//	len = 0;
//	str= NULL;
//}
//String::String(const char* s ){
//	len = strlen(s);
//	str = new char[len + 1];
//	strcpy(str, s);
//}
//String::~String(){
//	delete[]str;
//}
//String::String(const String & a){
//		len = a.len;
//		str = new char[len + 1];//使其拥有自己的地址，释放不会影响他人
//		std::strcpy(str, a.str);
//}
//void String::stringup(){
//	for (int i = 0; i < len; i++)
//		str[i] = toupper(str[i]);
//}
//void String::stringlow(){
//	for (int i = 0; i < len; i++)
//		str[i] = tolower(str[i]);
//}
//int String::has(char a){
//	int h = 0;
//	for (int i = 0; i < len; i++){
//		if (str[i] == a)
//			h++;
//	}
//	return h;
//}
//String & String::operator=(const char* s){
//		delete[]str;
//		len = std::strlen(s);
//		str = new char[len + 1];
//		std::strcpy(str, s);
//		return *this;
//	}
//String & String::operator =(const String & a){
//	if (this == &a)
//		return *this;
//	delete[]str;
//	len = a.len;
//	str = new char[len + 1];
//	strcpy(str, a.str);
//	return *this;
//}
////String String::operator+(const String & a){
////	String temp;
////	temp.len = len + a.len;
////	temp.str = new char[temp.len+1];
////	temp.str=strcat(str, a.str);
////	return temp;
////}
////String String::operator+(const char* a){
////	String temp;
////	temp.len = strlen(a) + len;
////	temp.str = new char[temp.len+1];
////	temp.str = strcat(str, a);
////	return temp;
////}
//String operator+(const String & s1,const String & s2){
//	int chars = s1.len + s2.len;
//	char *ps = new char[chars + 1];
//	strcpy(ps, s1.str);
//	strcat(ps, s2.str);
//	String temp(ps);
//	return temp;
//}
//bool String::operator==(const String& a){
//	return (strcmp(str, a.str) == 0);
//}
////String operator+(const char* a, String & s){
//	//return s + a;
////}
//ostream & operator<<(std::ostream & os, const String & a){
//	os << a.str << endl;
//	return os;
//}
//istream & operator>>(std::istream & is, String & a){
//		char temp[80];
//		is.getline(temp, 80);
//		a = temp;
//		return is;
//}

////使用动态存储的堆
//#include "twelve.h"
//Stack::Stack(int n){
//	size = n;
//	pitems = new Item[size];
//	top = 0;
//}
//Stack::~Stack(){ delete[]pitems; }
//bool Stack::isempty()const{
//	return top == 0 ? true : false;
//}
//bool Stack::isfull()const{
//	return top == size ? true : false;
//}
//bool Stack::push(const Item & item){
//	if (top < size){
//		pitems[top++] = item;
//		return true;
//	}
//else
//	return false;
//}
//bool Stack::pop(Item & item){
//	if (top>0){
//		item = pitems[--top];
//		return true;
//	}
//else
//	return false;
//}

#include "twelve.h"
#include <cstdlib>
using std::rand;
Queue::Queue(int qs) :qsize(qs){
	front = rear = NULL;
	items = 0;
}
Queue::~Queue(){
	Node*temp;
	while (front != NULL){
		temp = front;
		front = front->next;
		delete temp;
	}
}
bool Queue::isempty()const{
	return items == 0;
}
bool Queue::isfull()const{
	return items == qsize;
}
int Queue::queuecount()const{
	return items;
}
bool Queue::enqueue(const Item & item){
	if (isfull())
		return false;
	Node* add = new Node;
	if (add == NULL)
		return false;
	add->item = item;
	add->next = NULL;
	items++;
	if (front == NULL)
		front = add;
	else
		rear->next = add;
	rear = add;
	return true;
}
bool Queue::dequeue(Item & item){
	if (front == NULL)
		return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if (items == 0)
		rear = NULL;
	return true;
}
void Customer::set(long when){
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
