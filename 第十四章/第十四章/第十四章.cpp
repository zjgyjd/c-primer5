////Student¿‡∑∂¿˝
//#include <iostream>
//#include  "fourteen.h"
//using namespace std;
//void set(Student & sa, int n);
//const int popiles = 3;
//const int quizzes = 5;
//
//int main(){
//	Student ada[popiles] = {
//		Student(quizzes), Student(quizzes), Student(quizzes)
//	};
//	int i;
//	for (i = 0; i < popiles; i++)
//		set(ada[i], quizzes);
//	cout << "\nStudent List:\n";
//	for (i = 0; i < popiles; i++)
//		cout << ada[i].Name() << endl;
//	cout << "\nRuslute:";
//	for (i = 0; i < popiles; i++){
//		cout << endl << ada[i];
//		cout << "Average: " << ada[i].Average() << endl;
//	}
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}
//void set(Student & sa, int n){
//	cout << "Please enter the student's name: ";
//	getline(cin, sa);
//	cout << "Please enter " << n << " quiz scores:\n";
//	for (int i = 0; i < n; i++)
//		cin >> sa[i];
//	while (cin.get() != '\n')
//		continue;
//}

//worker¿‡MI–¥∑®
#include <iostream>
#include "fourteen.h"
const int LIM = 4;
int main(){
	Waiter bob("Bob Apple", 314L, 5);
	Singer bev("Beverly Hills", 522L, 3);
	Waiter w_temp;
	Singer s_temp;
	Worker * pw[LIM] = { &bob, &bev, &w_temp, &s_temp };
	int i;
	for (i = 2; i < LIM; i++)
		pw[i]->Set();
	for (i = 0; i < LIM; i++){
		pw[i]->Show();
		std::cout << std::endl;
	}
	system("pause");
	return 0;
}