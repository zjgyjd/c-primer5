////改进Stock类放类定义，函数声明
//#ifndef TEN_h_
//#define TEN_h_//防止多重定义
//
//class Stock{
//	private:
//		char company[30];//公司名称
//		int shares;//股票数量
//		double share_val;//每股价格
//		double total_val;//持股总价
//		void set_tot(){ total_val = shares*share_val; }
//	public:
//		Stock();//构造函数
//		Stock(const char* co, int n=0, double pr=0.0);//收购
//		~Stock();//析构函数
//		void buy(int num, double price);//买，增值
//		void sell(int num, double price);//出售
//		void update(double price);//更新
//		void show();
//		//新增一个比较函数运用this指针
//		const Stock & topval(const Stock & s)const;//将两个类的引用都定义为const不可改变
//	};
//	
//#endif

////堆栈的类
//#ifndef TEN_H_
//#define TEN_H_
//
//typedef unsigned long Item;//给unsigned long 取别名为Item
//
//class Stack{
//private:
//	enum {MAX = 5};
//	Item items[MAX];//最大值
//	int top;//栈顶
//public:
//	Stack();//bool布尔值表判断
//	bool isempty()const;//判断是否为空
//	bool isfull()const;//判断是否存满
//	bool push(const Item & item);//入栈函数
//	bool pop(Item & item);//出栈
//};
//
//#endif

////银行类
//#ifndef TEN_H_
//#define TEN_H_
//
//class Bank{
//private:
//	char name[521];
//	char account[521];
//	double deposit;//存款
//public:
//	Bank(const char* a, const char* s = 0, double d = 0.0);
//	void show( )const;//不用再引用，可以用类成员如： R.show()
//	void inmoney(double b);
//	void outmoney(double b);
//};
//#endif

////三种可能的构造函数调用
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

////golf的类改造
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

////名称空间与类
//#ifndef TEN_H_
//#define TEN_H_
//
//namespace SALES{
//	const int QUARTERS = 4;//季度
//	class Sales{//名称空间里的类
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

////改进Stack类用户文件加入结构和堆栈
////堆栈的类
//#ifndef TEN_H_
//#define TEN_H_
//
//struct customer{
//	char fullname[35];
//	double payment;
//};
//void get_customer(customer & cu);//要得到一个结构体
//typedef customer Item;
////typedef unsigned long Item;//给unsigned long 取别名为Item
//
//class Stack{
//private:
//	enum {MAX = 10};
//	Item items[MAX];//最大值
//	int top;//栈顶
//public:
//	Stack();//bool布尔值表判断
//	bool isempty()const;//判断是否为空
//	bool isfull()const;//判断是否存满
//	bool push(const Item & item);//入栈函数
//	bool pop(Item & item);//出栈
//};
//
//#endif

////创建一个list类
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
//	void transverse(void(*pfun)(Item item));//用来访问数据项的函数指针
//};
//
//#endif