////StringBad��
//#include <iostream>
//#ifndef TWELVE_H_
//#define TWELVE_H_
//class StringBad{
//private:
//	char * str;//������û��Ϊ�ַ����������ÿռ�
//	int len;
//	static int num_strings;//static��ʾ���۶��ٸ�����ֻ��һ����̬����������������¼�����������Ŀ
//public:
//	StringBad(const char* s);//�ڹ��캯��������new
//	StringBad();
//	~StringBad();
//	StringBad(const StringBad & s);//��Ϊ��ʾ���ƹ��캯��
//	StringBad & operator =(const StringBad & s);//��Ϊ��ʾ��ֵ���캯��
//	friend std::ostream & operator<<(std::ostream & os, const StringBad & st);
//};
//
//#endif

////�޸ĺ��string��
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
//	String(const String &);//���ƹ��캯��
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

////���ж���ģ��
////1.��һ�����������
////2.�ڶ�����˿Ͷ���
//class Customer{
//private:
//	long arrive;//����ʱ�伴��ʱ�������
//	int processing;//����ʱ��
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
//	Queue(const Queue & q):qsize(0){}//��Ϊ���ڲ�ʹ�ö���Ϊ˽��
//	Queue & operator=(const Queue & q){ return *this; }//ȷ�����õ��³������
//	struct Node
//	{
//		Item item;
//		struct Node * next;
//	};
//	Node * front;//ͷָ��
//	Node * rear;//βָ��
//	int items;//��ǰ��Ŀ��
//	const int qsize;//�ɴ洢�����Ŀ��
//public:
//	Queue(int qs = Q_SIZE);
//	~Queue();
//	bool isempty()const;
//	bool isfull()const;
//	int queuecount()const;//�ܼ�
//	bool enqueue(const Item & item);//��
//	bool dequeue(Item & item);//��
//
//};

