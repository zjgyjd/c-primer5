////�Ľ�Stock����ඨ�壬��������
//#ifndef TEN_h_
//#define TEN_h_//��ֹ���ض���
//
//class Stock{
//	private:
//		char company[30];//��˾����
//		int shares;//��Ʊ����
//		double share_val;//ÿ�ɼ۸�
//		double total_val;//�ֹ��ܼ�
//		void set_tot(){ total_val = shares*share_val; }
//	public:
//		Stock();//���캯��
//		Stock(const char* co, int n=0, double pr=0.0);//�չ�
//		~Stock();//��������
//		void buy(int num, double price);//����ֵ
//		void sell(int num, double price);//����
//		void update(double price);//����
//		void show();
//		//����һ���ȽϺ�������thisָ��
//		const Stock & topval(const Stock & s)const;//������������ö�����Ϊconst���ɸı�
//	};
//	
//#endif

////��ջ����
//#ifndef TEN_H_
//#define TEN_H_
//
//typedef unsigned long Item;//��unsigned long ȡ����ΪItem
//
//class Stack{
//private:
//	enum {MAX = 5};
//	Item items[MAX];//���ֵ
//	int top;//ջ��
//public:
//	Stack();//bool����ֵ���ж�
//	bool isempty()const;//�ж��Ƿ�Ϊ��
//	bool isfull()const;//�ж��Ƿ����
//	bool push(const Item & item);//��ջ����
//	bool pop(Item & item);//��ջ
//};
//
//#endif

////������
//#ifndef TEN_H_
//#define TEN_H_
//
//class Bank{
//private:
//	char name[521];
//	char account[521];
//	double deposit;//���
//public:
//	Bank(const char* a, const char* s = 0, double d = 0.0);
//	void show( )const;//���������ã����������Ա�磺 R.show()
//	void inmoney(double b);
//	void outmoney(double b);
//};
//#endif

////���ֿ��ܵĹ��캯������
//#ifndef TEN_H_
//#define TEN_H_
//#include <string>
//class Person{
//private:
//	static const  int LIMIT = 25;
//	std::string lname;//last name
//	char fname[LIMIT];//first name
//public:
//	Person(){ lname = ""; fname[0] = '\0'; }
//	Person(const std::string & In, const char *fn = "Heyyou");
//	void Show()const;
//	void FormalShow()const;
//};
//#endif

////golf�������
//#ifndef TEN_H_
//#define TEN_H_
//
//const int Len = 40;
//class golf{
//private:
//	char fullname[Len];
//	int handicap;
//public:
//	golf(){fullname[0] = '\0'; handicap = 0;}
//	golf( const char* name, int hc = 0);
//	int setgolf();
//	void handi( int hc);
//	void showgolf( )const;
//};
//#endif

////���ƿռ�����
//#ifndef TEN_H_
//#define TEN_H_
//
//namespace SALES{
//	const int QUARTERS = 4;//����
//	class Sales{//���ƿռ������
//	private:
//		double sales[QUARTERS];
//		double average;
//		double max;
//		double min;
//	public:
//		Sales();
//		Sales(const double ar[], int n);
//		void setSales();
//		void showSales();
//	};
//}
//
//#endif

////�Ľ�Stack���û��ļ�����ṹ�Ͷ�ջ
////��ջ����
//#ifndef TEN_H_
//#define TEN_H_
//
//struct customer{
//	char fullname[35];
//	double payment;
//};
//void get_customer(customer & cu);//Ҫ�õ�һ���ṹ��
//typedef customer Item;
////typedef unsigned long Item;//��unsigned long ȡ����ΪItem
//
//class Stack{
//private:
//	enum {MAX = 10};
//	Item items[MAX];//���ֵ
//	int top;//ջ��
//public:
//	Stack();//bool����ֵ���ж�
//	bool isempty()const;//�ж��Ƿ�Ϊ��
//	bool isfull()const;//�ж��Ƿ����
//	bool push(const Item & item);//��ջ����
//	bool pop(Item & item);//��ջ
//};
//
//#endif

////����һ��list��
//#ifndef TEN_H_
//#define TEN_H_
//
//const int SIZE = 45;
//struct film{
//	char title[SIZE];
//	int rating;
//};
//
//typedef struct film Item;
//
//const int MAXSIZE = 10;
//class simplist{
//private:
//	Item items[MAXSIZE];
//	int count;
//public:
//	simplist();
//	bool isempty();
//	bool isfull();
//	int itemcount();
//	bool additem(Item item);
//	void transverse(void(*pfun)(Item item));//��������������ĺ���ָ��
//};
//
//#endif