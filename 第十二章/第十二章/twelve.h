////StringBad类
//#include <iostream>
//#ifndef TWELVE_H_
//#define TWELVE_H_
//class StringBad{
//private:
//	char * str;//类声明没有为字符串本身设置空间
//	int len;
//	static int num_strings;//static表示无论多少个对象都只有一个静态变量，可以用来记录创建对象的数目
//public:
//	StringBad(const char* s);//在构造函数中设置new
//	StringBad();
//	~StringBad();
//	StringBad(const StringBad & s);//改为显示复制构造函数
//	StringBad & operator =(const StringBad & s);//改为显示赋值构造函数
//	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
//};
//
//#endif

////修改后的string类
//#include <iostream>
//using std::ostream;
//using std::istream;
//#ifndef TWELVE_H_
//#define TWELVE_H_
//class String{
//private:
//	char* str;
//	int len;
//	static int num_strings;
//	static const int CINLIM = 80;
//public:
//	String(const char* s);
//	String();
//	String(const String &);//复制构造函数
//	~String();
//	int lenght()const{ return len; }
//	String & operator=(const String &);
//	String & operator=(const char*);
//	char & operator[](int i);
//	const char & operator [](int i)const;
//	friend bool operator <(const String &st, const String &st2);
//	friend bool operator >(const String &st1, const String &st2);
//	friend bool operator==(const String &st, const String &st2);
//	friend ostream & operator<<(ostream & os, const String & st);
//	friend istream & operator>>(istream & is, String & st);
//	static int HowMany();	
//};
//
//#endif

////超市队列模拟
////1.第一个类链表队列
////2.第二个类顾客队列
//class Customer{
//private:
//	long arrive;//到达时间即何时进入队列
//	int processing;//交易时间
//public:
//	Customer(){ arrive = processing = 0; }
//	void set(long when);
//	long when()const{ return arrive; }
//	int ptime()const{ return processing; }
//};
//
//typedef Customer Item;
//class Queue{
//	enum{ Q_SIZE = 10 };
//private:
//	Queue(const Queue & q):qsize(0){}//因为现在不使用定义为私有
//	Queue & operator=(const Queue & q){ return *this; }//确保误用导致程序崩溃
//	struct Node
//	{
//		Item item;
//		struct Node * next;
//	};
//	Node * front;//头指针
//	Node * rear;//尾指针
//	int items;//当前项目数
//	const int qsize;//可存储最大项目数
//public:
//	Queue(int qs = Q_SIZE);
//	~Queue();
//	bool isempty()const;
//	bool isfull()const;
//	int queuecount()const;//总计
//	bool enqueue(const Item & item);//进
//	bool dequeue(Item & item);//出
//
//};

////String类的改进函数
//#ifndef TWELVE_H_
//#define TWELVE_H_
//#include <iostream>
//class String{
//private:
//	char* str;
//	int len;
//public:
//	String();
//	String(const char* s);
//	~String();
//	String(const String & a);//显示复制
//	void stringup();
//	void stringlow();
//	int has(char a);
//	String & operator =(const String & a);//显示赋值
//	//String operator-(const String & a);
//	String & String::operator=(const char* s);
//	//String operator+(const String & a);
//	//String operator+(const char* a);
//	bool operator==(const String& a);
//	friend String operator+(const String & a,const String & b);
//	//friend String operator+(const char* a, String & s);
//	friend std::ostream & operator<<(std::ostream & os, const String & a);
//	friend std::istream& operator>>(std::istream & is,  String & a);
//};
//
//#endif

////使用动态存储的堆
//#ifndef TWELVE_H_
//#define TWELVE_H_
//typedef unsigned long Item;
//class Stack{
//private:
//	enum{ MAX = 0 };
//	Item * pitems;//维持
//	int size;
//	int top;
//public:
//	Stack(int n = 10);
//	Stack(const Stack & st);
//	~Stack();
//	bool isempty()const;
//	bool isfull()const;
//	bool push(const Item & item);
//	bool pop(Item & item);
//	Stack & operator =(const Stack & st);
//};
//#endif

#ifndef TWELVE_H_
#define TWELVE_H_
class Customer{
private:
	long arrive;
	int processtime;//等待时间
public:
	Customer(){ arrive = processtime = 0; }
	void set(long when);
	long when()const{ return arrive; }
	int ptime()const{ return processtime; }
};
typedef Customer Item;
class Queue{
private:
	struct Node{ Item item; struct Node * next; };
	enum{Q_SIZE = 10};
	Node * front;
	Node * rear;
	int items;
	const int qsize;//最大项
	Queue(const Queue & q) :qsize(0){}
	Queue & operator=(const Queue & q){ return *this; }
public:
	Queue(int qs = Q_SIZE);
	~Queue();
	bool isempty()const;
	bool isfull()const;
	int queuecount()const;
	bool enqueue(const Item & item);
	bool dequeue(Item & item);
};
#endif