////һ���򵥵Ļ���
//#include <iostream>
//#include "thirteen.h"
//int main(){
//	using namespace std;
//	//����������
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
//	//����
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

////��̬������̳�
//#include <iostream>
//#include "thirteen.h"
//int main(){
//	using namespace std;
//	Brass Piggy("Procelot Pigg", 381299,4000.00);
//	BrassPlus Hoggy("Horatio Hogg", 382288, 3000.00);
//	Piggy.ViewAcct();//��ӡ�˻���Ϣ
//	cout << endl;
//	Hoggy.ViewAcct();//������ͬ������
//	cout << endl;
//	cout << "Despositing $1000 into the Hogg Account:\n";
//	Hoggy.Deposit(1000.00);//����һǧ��
//	cout << "New balance: $" << Hoggy.Balance() << endl;
//	cout << "Withdrawing $4200 from the Hoggy Account:\n";
//	Hoggy.Withdraw(4200.00);//ȡ��4200
//	Hoggy.ViewAcct();
//	system("pause");
//	return 0;
//}

////�Ľ����û���ָ����������û��鿴�鷽������
//#include <iostream>
//#include "thirteen.h"
//const int CLIENTS = 4;
//const int LEN = 40;
//int main(){
//	using namespace std;
//	Brass * p_clients[CLIENTS];//ָ��ͻ�
//	
//	int i;
//	for (i = 0; i < CLIENTS; i++){//ִ���Ĵ�
//		char temp[LEN];
//		long tempnum;
//		double tempbal;
//		char kind;
//		cout << "Enter client's name: ";
//		cin.getline(temp, LEN);//�õ�����
//		cout << "Enter client's account number: ";
//		cin >> tempnum;//�˺�
//		cout << "Enter opening balance: $";
//		cin >> tempbal;//���
//		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";//ѡ���˻�
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "Enter either 1 or 2: ";//�ų���������
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);//��������ռ�
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
//		p_clients[i]->ViewAcct();//��ʾ���鷽�����ã�����ָ����Ϊ���꣬���Ƕ���
//		cout << endl;//����ָ��ָ�������࣬���ú�����Ϊ�����ຯ���������麯�����෴
//	}
//	for (i = 0; i < CLIENTS; i++){
//		delete p_clients[i];//����ͷſռ�
//	}
//	cout << "Done!\n";
//		system("pause");
//	return 0;
//}

//////������;�����
//#include <iostream>
//#include "thirteen.h"
//const int CLIENTS = 4;
//const int LEN = 40;
//int main(){
//	using namespace std;
//	AcctABC * p_clients[CLIENTS];//ֻ�轫�˴����Ķ������໻Ϊ������
//	
//	int i;
//	for (i = 0; i < CLIENTS; i++){//ִ���Ĵ�
//		char temp[LEN];
//		long tempnum;
//		double tempbal;
//		char kind;
//		cout << "Enter client's name: ";
//		cin.getline(temp, LEN);//�õ�����
//		cout << "Enter client's account number: ";
//		cin >> tempnum;//�˺�
//		cout << "Enter opening balance: $";
//		cin >> tempbal;//���
//		cout << "Enter 1 for Brass Account or 2 for BrassPlus Account: ";//ѡ���˻�
//		while (cin >> kind && (kind != '1' && kind != '2'))
//			cout << "Enter either 1 or 2: ";//�ų���������
//		if (kind == '1')
//			p_clients[i] = new Brass(temp, tempnum, tempbal);//��������ռ�
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
//		p_clients[i]->ViewAcct();//��ʾ���鷽�����ã�����ָ����Ϊ���꣬���Ƕ���
//		cout << endl;//����ָ��ָ�������࣬���ú�����Ϊ�����ຯ���������麯�����෴
//	}
//	for (i = 0; i < CLIENTS; i++){
//		delete p_clients[i];//����ͷſռ�
//	}
//	cout << "Done!\n";
//		system("pause");
//	return 0;
//}

//��Ԫ�����ļ̳��Լ���̬�ڴ����
#include <iostream>
#include "thirteen.h"
int main(){
	using std::cout;
	using std::endl;
	baseDMA shirt("Portabelly", 8);
	lacksDMA balloon("red", "Blimpo", 4);
	hasDMA map("Mercator", "Buffalo Keys", 5);
	cout << shirt << endl;
	cout << balloon << endl;
	cout << map << endl;
	lacksDMA balloon2(balloon);
	hasDMA map2;
	map2 = map;
	cout << balloon2 << endl;
	cout << map2 << endl;
	system("pause");
	return 0;
}