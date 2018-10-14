////一个简单的基类
//#include <iostream>
//#include "thirteen.h"
//int main(){
//	using namespace std;
//	//加入派生类
//	TableTennisPlayer player1("Tara", "Boomdea", false);
//	RatedPlayer rplayer1(1140, "Mallory", "Duck", true);
//	rplayer1.Name();
//	if (rplayer1.HasTable())
//		cout << ": has a table.\n";
//	else
//		cout << ": hasn't a table.\n";
//	cout << "Name : ";
//	rplayer1.Name();
//	cout << "; Rating: " << rplayer1.Rating() << endl;
//	//基类
//	//TableTennisPlayer player1("Chuck", "Blizzard", true);
//	//TableTennisPlayer player2("Tara", "Boomdea", false);
//	//player1.Name();
//	//if (player1.HasTable())
//	//	cout << ": has a table.\n";
//	//else
//	//	cout << ": hasn't a table.\n";
//	//player2.Name();
//	//if (player2.HasTable())
//	//	cout << ": has a table.\n";
//	//else
//	//	cout << ": hasn't a table.\n";
//	system("pause");
//	return 0;
//}

////多态公有类继承
//#include <iostream>
//#include "thirteen.h"
//int main(){
//	using namespace std;
//	Brass Piggy("Procelot Pigg", 381299,4000.00);
//	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
//	Piggy.ViewAcct();//打印账户信息
//	cout << endl;
//	Hoggy.ViewAcct();//派生类同名函数
//	cout << endl;
//	cout << "Despositing $1000 into the Hogg Account:\n";
//	Hoggy.Deposit(1000.00);//存入一千块
//	cout << "New balance: $" << Hoggy.Balance() << endl;
//	cout << "Withdrawing $4200 from the Hoggy Account:\n";
//	Hoggy.Withdraw(4200.00);//取出4200
//	Hoggy.ViewAcct();
//	system("pause");
//	return 0;
//}

////改进利用基类指针数组管理用户查看虚方法作用
//#include <iostream>
//#include "thirteen.h"
//const int CLIENTS = 4;
//const int LEN = 40;
//int main(){
//	using namespace std;
//	Brass * p_clients[CLIENTS];//指向客户
//	
//	int i;
//	for (i = 0; i < CLIENTS; i++){//执行四次
//		char temp[LEN];
//		long tempnum;
//		double tempbal;
//		char kind;
//		cout << "Enter client's name: ";
//		cin.getline(temp, LEN);//得到名字
//		cout << "Enter client's account number: ";
//		cin >> tempnum;//账号
//		cout << "Enter opening balance: $";
//		cin >> tempbal;//存款
//		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";//选择账户
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "Enter either 1 or 2: ";//排除其他输入
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);//建立储存空间
//		else{
//			double tmax, trate;
//			cout << "Enter the overdraft limit: $";
//			cin >> tmax;
//			cout << "Enter the interest rate as a decimal fraction: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//	cout << endl;
//	for (i = 0; i < CLIENTS; i++){
//		p_clients[i]->ViewAcct();//显示出虚方法作用，不以指针作为坐标，而是对象
//		cout << endl;//基类指针指向派生类，调用函数是为派生类函数，不是虚函数则相反
//	}
//	for (i = 0; i < CLIENTS; i++){
//		delete p_clients[i];//逐个释放空间
//	}
//	cout << "Done!\n";
//		system("pause");
//	return 0;
//}

//////抽象类和具体类
//#include <iostream>
//#include "thirteen.h"
//const int CLIENTS = 4;
//const int LEN = 40;
//int main(){
//	using namespace std;
//	AcctABC * p_clients[CLIENTS];//只需将此处做改动将基类换为抽象类
//	
//	int i;
//	for (i = 0; i < CLIENTS; i++){//执行四次
//		char temp[LEN];
//		long tempnum;
//		double tempbal;
//		char kind;
//		cout << "Enter client's name: ";
//		cin.getline(temp, LEN);//得到名字
//		cout << "Enter client's account number: ";
//		cin >> tempnum;//账号
//		cout << "Enter opening balance: $";
//		cin >> tempbal;//存款
//		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";//选择账户
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "Enter either 1 or 2: ";//排除其他输入
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);//建立储存空间
//		else{
//			double tmax, trate;
//			cout << "Enter the overdraft limit: $";
//			cin >> tmax;
//			cout << "Enter the interest rate as a decimal fraction: ";
//			cin >> trate;
//			p_clients[i] = new BrassPlus(temp, tempnum, tempbal, tmax, trate);
//		}
//		while (cin.get() != '\n')
//			continue;
//	}
//	cout << endl;
//	for (i = 0; i < CLIENTS; i++){
//		p_clients[i]->ViewAcct();//显示出虚方法作用，不以指针作为坐标，而是对象
//		cout << endl;//基类指针指向派生类，调用函数是为派生类函数，不是虚函数则相反
//	}
//	for (i = 0; i < CLIENTS; i++){
//		delete p_clients[i];//逐个释放空间
//	}
//	cout << "Done!\n";
//		system("pause");
//	return 0;
//}

////友元函数的继承以及动态内存分配
//#include <iostream>
//#include "thirteen.h"
//int main(){
//	using std::cout;
//	using std::endl;
//	baseDMA shirt("Portabelly", 8);
//	lacksDMA balloon("red", "Blimpo", 4);
//	hasDMA map("Mercator", "Buffalo Keys", 5);
//	shirt.View();
//	cout << endl;
//	balloon.View();
//	cout << endl;
//	map.View();
//	cout  << endl;	
//	lacksDMA balloon2(balloon);
//	hasDMA map2;
//	map2 = map;
//	balloon2.View();
//	cout  << endl;
//	map2.View();
//	cout  << endl;
//	system("pause");
//	return 0;
//}

////练习
//#include <iostream>
//using namespace std;
//#include "thirteen.h"
//void Bravo(const Cd & disk);
//int main(){
//	Cd c1("Beatles", "Capitol", 14, 35.5);
//	Classic c2 = Classic("Piano Sonata in B flat,Fantasia in C",
//		"Alfired Brendel", "Philips", 2, 57.17);
//	Cd *pcd = &c1;
//
//	cout << "Using object directly:\n";//直接使用对象
//	c1.Report();
//	c2.Report();
//
//	cout << "Using type cd * pointer to objects:\n";//使用类型cd *指向对象的指针
//	pcd->Report();
//	pcd = &c2;
//	pcd->Report();
//
//	cout << "Calling a function with a Cd reference argument:\n";//使用Cd引用参数调用函数
//	Bravo(c1);
//	Bravo(c2);
//	cout << "Testing assigment: ";
//	Classic copy;
//	copy = c2;
//	copy.Report();
//
//	system("pause");
//	return 0;
//}
//void Bravo(const Cd & disk){
//	disk.Report();
//}

////练习2
//#include <iostream>
//#include "thirteen.h"
//using namespace std;
//int main(){
//	Port test1;
//	test1= { "Gallo", "twany", 20 };
//	test1.Show();
//	cout << test1;
//	VintagePort test2;
//	test2 = { "Gallo", 20, "twany", 18 };
//	test2.Show();
//	cout << test2;
//	system("pause");
//	return 0;
//}