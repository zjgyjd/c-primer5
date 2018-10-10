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

//多态公有类继承