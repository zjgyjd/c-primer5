////�����ֱ꣬������ת��Դ�ļ�1
//#include <iostream>
//#include "coordin2.h"//����ͷ�ļ�
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

////����������������
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

////��̬�����ԣ�static
//#include <iostream>
//using namespace std;
//double warming = 0.3;//�ⲿ����
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

////static�����ļ����������ת��
//#include <iostream>
//int tom = 3;
//int dick = 30;
//static int harry = 300;//����static���ڸ��ļ���Ч
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

////��̬�����Ĵ�������Ժ���������
//#include <iostream>
//const int Arsize = 10;
//
//void strcount(const char* str);
//
//int main(){
//	using namespace std;
//	char input[Arsize];//ÿ�����벻����9��
//	char next;
//
//	cout << "Enter a line:\n";
//	cin.get(input, Arsize);//���ȡ���س����������������س�
//	while (cin){//ֻ����һ���س���Ϊfalse
//		cin.get(next);//�Ե��س�
//		while (next != '\n')//��ֹ�û���������
//			cin.get(next);
//		strcount(input);//ѭ������
//		cout << "Enter next line (empty line to quit):\n";
//		cin.get(input, Arsize);//��ȡ���9�������һ��Ϊ\0
//	}
//	cout << "Bye\n";
//	system("pause");
//	return 0;
//}

////����new��ֱ��new�ĶԱ�
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
//	pd2 = new (buffer) double[N];//�洢�ռ�Ϊchar buffer[521]
//	for (i = 0; i < N; i++)
//		pd2[i] = pd1[i] = 1000 + 20.0 * i;
//	cout << "Buffer adresses:\n" << " heap: " << pd1//��һ��ֵ
//		<< " static: " << (void*)buffer << endl;//�鿴�洢�ռ��ַ
//	cout << "Buffer contents:\n";
//	for (i = 0; i < N; i++){
//		cout << pd1[i] << " at " << &pd1[i] << ";";//��������ַ
//		cout << pd2[i] << " at " << &pd2[i] <<endl;//��������ֵ��ͬ����ַ��ͬ
//	}
//
//	cout << "\nCalling new and placement new a second time:\n";
//	double *pd3, *pd4;
//	pd3 = new double[N];
//	pd4 = new (buffer)double[N];//������delete�ͷ�
//	for (i = 0; i < N; i++)
//		pd4[i] = pd3[i] = 1000 + 20.0*i;
//	cout << "Buffer contents:\n";
//	for (i = 0; i < N; i++){
//		cout << pd3[i] << " at " << &pd3[i] << "; ";//�ڿ���������ַ
//		cout << pd4[i] << " at " << &pd4[i] << endl;
//	}
//
//	cout << "\nCalling new and placement new a third time:\n";
//	delete[]pd1;
//	pd1 = new double[N];
//	pd2 = new (buffer + N * sizeof(double))double[N];//�ֶ�����ƫ��λ��
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

////���ƿռ䷶��
//#include <iostream>
//#include "coordin2.h"
//
//void other(void);//����ͷ�ļ���һ���ʡȥ����
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

////golf��mian
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