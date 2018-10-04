////极坐标，直角坐标转换源文件1
//#include <iostream>
//#include "coordin2.h"//包含头文件
//using namespace std;
//int main(){
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y){
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next tow numbers (q to quit):";
//	}
//	cout << "Bye!\n";
//	system("pause");
//	return 0;
//}

////作用域与生命周期
//#include <iostream>
//void oil(int x);
//int main(){
//	using namespace std;
//
//	int texas = 31;
//	int year = 1999;
//	cout << "In main(),texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	oil(texas);
//	cout << "In main(),texas = " << texas << ", &texas = ";
//	cout << &texas << endl;
//	cout << "In main(), year = " << year << ", &year = ";
//	cout << &year << endl;
//	system("pause");
//	return 0;
//}

////静态持续性，static
//#include <iostream>
//using namespace std;
//double warming = 0.3;//外部变量
//void update(double dt);
//void local();
//
//int main(){
//	cout << "Clobal warming is " << warming << " degrees.\n";
//	update(0.1);
//	cout << "Global warming is " << warming << " degrees.\n";
//	local();
//	cout << "Global warming is " << warming << " degrees.\n";
//	system("pause");
//	return 0;
//}

////static两个文件间作用域的转换
//#include <iostream>
//int tom = 3;
//int dick = 30;
//static int harry = 300;//由于static仅在该文件有效
//
//void remote_access();
//
//int main(){
//	using namespace std;
//	cout << "main( )reports the following addresses:\n";
//	cout << &tom << " =&tom, " << &dick << " = &dick,";
//	cout << &harry << " = &harry\n";
//	remote_access();
//  system("pause");
//	return 0;
//}

////静态变量的储存持续性和无链接性
//#include <iostream>
//const int Arsize = 10;
//
//void strcount(const char* str);
//
//int main(){
//	using namespace std;
//	char input[Arsize];//每次输入不超过9个
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, Arsize);//会读取到回车处，但不会消除回车
//	while (cin){//只输入一个回车则为false
//		cin.get(next);//吃掉回车
//		while (next != '\n')//防止用户过多输入
//			cin.get(next);
//		strcount(input);//循环调用
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, Arsize);//读取最多9个，最后一个为\0
//	}
//	cout << "Bye\n";
//	system("pause");
//	return 0;
//}

////布局new与直接new的对比
//#include <iostream>
//#include <new>
//const int N = 5;
//const int BUF = 512;
//char buffer[BUF];
//int main(){
//	using namespace std;
//	double *pd1, *pd2;
//	int i;
//	cout << "Calling new and placement new:\n";
//	pd1 = new double[N];
//	pd2 = new (buffer) double[N];//存储空间为char buffer[521]
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	cout << "Buffer adresses:\n" << " heap: " << pd1//第一的值
//		<< " static: " << (void*)buffer << endl;//查看存储空间地址
//	cout << "Buffer contents:\n";
//	for (i = 0; i < N; i++){
//		cout << pd1[i] << " at " << &pd1[i] << ";";//看两个地址
//		cout << pd2[i] << " at " << &pd2[i] <<endl;//发现两个值相同但地址不同
//	}
//
//	cout << "\nCalling new and placement new a second time:\n";
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new (buffer)double[N];//不能用delete释放
//	for (i = 0; i < N; i++)
//		pd4[i] = pd3[i] = 1000 + 20.0*i;
//	cout << "Buffer contents:\n";
//	for (i = 0; i < N; i++){
//		cout << pd3[i] << " at " << &pd3[i] << "; ";//在看这两个地址
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a third time:\n";
//	delete[]pd1;
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double))double[N];//手动调节偏移位置
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 20.0*i;
//	cout << "Buffer contents:\n";
//	for (i = 0; i < N; i++){
//		cout << pd1[i] << " at " << &pd1[i] << "; ";
//		cout << pd2[i] << " at " << &pd2[i] << endl;
//	}
//	delete[]pd1;
//	delete[]pd3;
//
//	system("pause");
//	return 0;
//}

////名称空间范例
//#include <iostream>
//#include "coordin2.h"
//
//void other(void);//若和头文件放一起可省去声明
//void another(void);
//int main(){
//	using debts::Debt;
//	using debts::showDebt;
//	Debt golf = { { "Benny", "Goatsniff" }, 120.0 };
//	showDebt(golf);
//	other();
//	another();
//	system("pause");
//	return 0;
//}

////golf的mian
//#include <iostream>
//#include "coordin2.h"
//const int Mems = 5;
//int main(){
//	using namespace std;
//	golf team[Mems];
//
//	cout << "Enter up to " << Mems << " golf team mebers:\n";
//	int i;
//	for (i = 0; i < Mems; i++)
//	if (setgolf(team[i]) == 0)
//		break;
//	for (int j = 0; j < i; j++)
//		showgolf(team[j]);
//	setgolf(team[0], "Fred Noman", 5);
//	showgolf(team[0]);
//	handicap(team[0], 3);
//	showgolf(team[0]);
//	
//	system("pause");
//	return 0;
//}