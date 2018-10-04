////直角坐标极坐标转换头文件
//#ifndef COORDIN_H_
//#define COORDIN_H_
//
//struct polar{
//	double distance;
//	double angle;
//};
//struct  rect{
//	double x;
//	double y;
//};
//polar rect_to_polar(rect xypos);
//void show_polar(polar dapos);
//
//#endif

////名称空间范例头文件
//namespace pers{
//	const int LEN = 40;
//	struct Person{
//		char fname[LEN];
//		char lname[LEN];
//	};
//	void getPerson(Person &);//只放函数声明
//	void showPerson(const Person &);
//}
//
//namespace debts{
//	using namespace pers;
//	struct Debt{
//		Person name;
//		double amount;
//	};
//	void getDebt(Debt &);
//	void showDebt(const Debt &);
//	double sumDebts(const Debt ar[], int n);
//}

////golf的头文件
//const int Len = 40;
//struct golf{
//	char fullname[Len];
//	int handicap;
//};
//
//void setgolf(golf &g, const char* name, int hc);
//int setgolf(golf &g);
//void handicap(golf &g, int hc);
//void showgolf(const golf &g);