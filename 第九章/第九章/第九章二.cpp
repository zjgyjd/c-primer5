//////极坐标，直角坐标转换源文件2,包含各种函数定义
//#include <iostream>
//#include <cmath>
//#include "coordin2.h"
//
//polar rect_to_polar(rect xypos){
//	using namespace std;
//	polar answer;
//
//	answer.distance =
//		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);//算出的是弧度
//	return answer;
//}
//
//void show_polar(polar dapos){
//	using namespace std;
//	const double Rad_to_deg = 57.29577951;//转化为角度
//	
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle*Rad_to_deg;
//	cout << " degrees\n";
//}

////作用域与生命周期
//#include <iostream>
//void oil(int x){
//	using namespace std;
//	int texas = 5;
//
//	cout << "In oil(),texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In oil(), x = " << x<< ", &x = ";
//	cout << &x << endl;
//	{
//		int texas = 13;
//		cout << "In block,texas = " << texas << ", &texas = ";
//		cout << &texas << endl;
//		cout << "In block, x = " << x << ", &x = ";
//		cout << &x << endl;
//	}
//	cout << "Post-block texas = " << texas;
//	cout << ",&texas = " << &texas << endl;
//}

////静态持续性，static函数部分
//#include <iostream>
//using namespace std;
//extern double warming;//用于其他文件是需要在此声明
//void update(double dt){
//	extern double warming ;//外部变量的局部声明
//	warming += dt;
//	cout << "Updating global warming to " << warming << " degrees.\n";
//}
//
//void local(){
//	double warming = 0.8;//局部同名变量优先级高
//
//	cout << "Local warming = " << warming << " degrees.\n";
//	cout << "But global warming = " << ::warming;//::此符号可以升级为全局版本
//	cout << " degrees.\n";
//}

////static两个文件间作用域的转换的函数
//#include <iostream>
//extern int tom;
//static int dick = 10;
//int harry = 200;
//
//void remote_access(){
//	using namespace std;
//	cout << "remote_access()reports the following addresses:\n";
//	cout << &tom << " = &tom, " << &dick << " = &dick, ";
//	cout << &harry << " = &harry\n";
//}

////静态变量的储存持续性和无链接性的函数
//#include <iostream>
//void strcount(const char* str){
//	using namespace std;
//	static int total = 0;//total不会被再次初始化，每次调用向上不停累加
//	int count = 0;
//
//	cout << "\"" << str << "\" contains ";
//	while (*str++)//到反斜杠0
//		count++;
//	total += count;
//	cout << count << " characters\n";//一次的字符数
//	cout << total << " characters total\n";//所有循环的字符数
//}

////名称空间范例函数
//#include <iostream>
//#include "coordin2.h"
//
//namespace pers{
//	using std::cout;
//	using std::cin;
//	void getPerson(Person &rp){
//		cout << "Enter first name: ";
//		cin >> rp.fname;
//		cout << "Enter last name: ";
//		cin >> rp.lname;
//	}
//
//	void showPerson(const Person &rp){
//		std::cout << rp.lname << ", " << rp.fname ;
//	}
//}
//
//namespace debts{
//	void getDebt(Debt  &rd){
//		getPerson(rd.name);
//		std::cout << "Enter debt: ";
//		std::cin >> rd.amount;
//	}
//
//	void showDebt(const Debt &rd){
//		showPerson(rd.name);
//		std::cout << ": $" << rd.amount << std::endl;
//	}
//
//	double sumDebt(const Debt ar[], int n){
//		double total = 0;
//		for (int i = 0; i < n; i++)
//			total += ar[i].amount;
//		return total;
//	}
//}
//
//void other(void){
//	using std::cout;
//	using std::endl;
//	using namespace debts;
//	Person dg = { "Doodles", "Glister" };
//	showPerson(dg);
//	cout << endl;
//	Debt zippy[3];
//	int i;
//
//	for (i = 0; i < 3; i++)
//		getDebt(zippy[i]);
//	for (i = 0; i < 3; i++)
//		showDebt(zippy[i]);
//	cout << "Total debt : $" << sumDebt(zippy, 3) << endl;
//
//	return;
//}
//
//void another(void){
//	using pers::Person;//和下面那个等效
//
//	pers::Person collector = { "Milo", "Rightshift" };
//	pers::showPerson(collector);
//	std::cout << std::endl;
//}

////golf的函数
//#include <iostream>
//#include"coordin2.h"
//#include <cstring>
//
//int setgolf(golf &g){
//	using namespace std;
//	cout << "Please enter golfer's full name: ";
//	cin.getline(g.fullname, Len);
//	if (g.fullname[0] == '\0')
//		return 0;
//	cout << "Plase enter handicap for " << g.fullname << ": ";
//	cin >> g.handicap;
//	while (!cin){
//		cin.clear();//让cin标识符重新回到零
//		cin.sync();//然后再清空数据流
//		cout << "Plase enter an integer:";
//		cin >> g.handicap;
//	}
//	while (cin.get() != '\n')
//		continue;
//	return 1;
//}
//
//void setgolf(golf &g, const char* name, int hc){
//	strcpy_s(g.fullname, name);
//	g.handicap = hc;
//}
//
//void handicap(golf &g, int hc){
//	g.handicap = hc;
//}
//
//void showgolf(const golf &g){
//	std::cout << "Golfer: " << g.fullname << "\n";
//	std::cout << "Handicap: " << g.handicap << "\n\n";
//}