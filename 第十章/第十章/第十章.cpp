////���ڹ�Ʊ��������#
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//
//class Stock{
//private:
//	char company[30];//��˾����
//	int shares;//��Ʊ����
//	double share_val;//ÿ�ɼ۸�
//	double total_val;//�ֹ��ܼ�
//	void set_tot(){ total_val = shares*share_val; }
//public:
//	void acquire(const char* co, int n, double pr);//�չ�
//	void buy(int num, double price);//����ֵ
//	void sell(int num, double price);//����
//	void update(double price);//����
//	void show();
//};
//
////�����෽����������
//void Stock::acquire(const char* co, int n, double pr){
//	std::strncpy(company, co, 29);//���29����Ϊ����һ����\0��
//	company[29] = '\0';
//	if (n < 0){
//		std::cerr << "Number of shares can't be negative."//��ֹ���븺��
//			<< company << " shares set to 0.\n";
//		shares = 0;
//	}
//	else{
//		shares = n;
//		share_val = pr;
//		set_tot();
//	}
//}
//	
//	void Stock::buy(int num, double price){
//		if (num < 0){
//			std::cerr << "Number of shares purchased can't be negative."
//				<< "Transaction is aborted.\n";//aborted��ֹ
//		}
//		else{
//			shares += num;
//			share_val = price;
//			set_tot();
//		}
//	}
//
//	void Stock::sell(int num, double price){
//		using std::cerr;
//		if (num < 0){
//			cerr << "Number of shares sold can't be negative."
//				<< "Transaction is aborted.\n";//aborted��ֹ
//		}
//		else if(num>shares){
//			cerr << "Your can't sell more then you have!"
//				<< "Transaction is aborted.\n";//aborted��ֹ
//		}
//		else{
//			shares -= num;
//			share_val = price;
//			set_tot();
//		}
//	}
//
//	void Stock::update(double price){
//		share_val = price;
//		set_tot();
//	}
//
//	void Stock::show(){
//		using std::cout;
//		using std::endl;
//		cout << "Company: " << company
//			<< "\n Shares: " << shares
//			<< "\n Share Price : $" << share_val
//			<< "\n Total Worth : $" << total_val << endl;//worth��ֵ
//	}
//
//	int main(){
//		using std::cout;
//		using std::ios_base;//�����˸�ʽ����Ϣ
//		Stock stock1;
//		stock1.acquire("NanoSmart", 20, 12.5);
//		cout.setf(ios_base::fixed);//��ʽ��
//		cout.precision(2);//������λС������
//		cout.setf(ios_base::showpoint);//��ʾС��
//		stock1.show();
//		stock1.buy(15, 18.25);
//		stock1.show();
//		stock1.sell(400, 20.00);
//		stock1.show();
//		system("pause");
//		return 0;
//	}

////�Ľ�Stock���û��ļ�
//#include <iostream>
//#include "ten.h"
//int main(){
//	using std::cout;
//	using std::ios_base;//�����˸�ʽ����Ϣ
//	cout.precision(2);
//	cout.setf(ios_base::fixed, ios_base::floatfield);//��ʽ��
//	cout.setf(ios_base::showpoint);//��ʾС��
//
//	cout << "Using constructos to create new objects\n";
//	Stock stock1("NanoSmart", 20, 12.5);
//	stock1.show();
//	Stock stock2 = Stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	cout << "Assigning stock1 to stock2:\n";
//	stock2 = stock1;
//	cout << "Lisiting stock1 and stock2:\n";
//	stock1.show();
//	stock2.show();
//
//	cout << "Using a constructor to rest an object\n";
//	stock1 = Stock("Nifty Foods", 10, 50.0);
//	cout << "Recised stock1:\n";
//	stock1.show();
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}

////����topval�������Լ���������
//#include <iostream>
//#include "ten.h"
//
//const int STKS = 4;
//int main(){
//	using std::cout;
//	using std::ios_base;
//
//	Stock stocks[STKS] = {//��������
//		Stock("NanoSmart", 12, 20.0),
//		Stock("Boffo Objects", 200, 2.0),
//		Stock("Monolithic Obelisks", 130, 3.25),
//		Stock("Fleep Enterprises", 60, 6.5)
//	};
//
//	cout.precision(2);
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout.setf(ios_base::showpoint);
//
//	cout << "Stock holdings:\n";
//	int st;
//	for (st = 0; st < STKS; st++)
//		stocks[st].show();
//
//	Stock top = stocks[0];
//	for (st = 1; st < STKS; st++)
//		top = top.topval(stocks[st]);//�����ṹ�ֱ�Ƚ�
//	cout << "\nMost valuable holding\n";
//	top.show();
//	system("pause");
//	return 0;
//}

////����Ա��Ϊ���Զ�ջ
//#include <iostream>
//#include <cctype>
//#include "ten.h"
//int main(){
//	using namespace std;
//	Stack st;//����һ����ջ
//	char ch;
//	unsigned long po;
//	cout << "Please enter A to add a purchase order.\n"//����a����ӹ��ﶩ��
//		<< "P to process a PO,or Q to quit.\n";//p����q�˳�
//	while (cin >> ch&&toupper(ch) != 'Q'){//��һ��Ҫʹ��^Z�˳�ѭ�����Լ���Сд��Ϊ��д�Ƚ�
//		while (cin.get() != '\n')//�Ե�����
//			continue;
//		if (!isalpha(ch)){//�Ƿ�ΪӢ����ĸ������ʱ����ѭ��
//			cout << '\a';
//			continue;
//		}
//		switch (ch){
//		case 'A':
//		case 'a':cout << "Enter a PO number to add: ";
//			cin >> po;
//			if (st.isfull())
//				cout << "stack already full\n";
//			else
//				st.push(po);
//			break;//ע��break����������switch
//		case 'P':
//		case 'p':if (st.isempty())
//			cout << "stack already empty\n";
//				 else{
//					 st.pop(po);
//					 cout << "PO #" << po << " popped\n";//ȡ��
//				 }
//				 break;
//		}
//		cout << "Please enter A to add a purchase order.\n"//����a����ӹ��ﶩ��
//			<< "P to process a PO,or Q to quit.\n";//p����q�˳�
//	}
//	cout << "Bye!!\n";
//	system("pause");
//	return 0;
//}

////������
//#include <iostream>
//#include "ten.h"
//int main(){
//	using namespace std;
//	cout << "Please Enter the member's name:\n";
//	char a[521];
//	char b[521];
//	double c;
//	cin.getline(a,521);
//	cout << "Please Enter the number of members:\n";
//	cin >> b;
//	while (cin.get( ) != '\n')
//		continue;
//	cout << "Please Enter the deposit of members:\n";
//		cin >> c;
//	Bank member1 = { a,b,c };
//	member1.show();
//	member1.inmoney(350.2);
//	member1.show();
//	member1.outmoney(350.2);
//	member1.show();
//	system("pause");
//	return 0;
//}

//////���ֿ��ܵĹ��캯������
//#include <iostream>
//#include "ten.h"
//#include <string>
//
//int main(){
//	using namespace std;
//	Person one;
//	Person tow{ "Smythecraft" };
//	Person three{ "Dimwiddy", "Sam" };
//	one.Show();
//	std::cout <<std:: endl;
//	one.FormalShow();
//	tow.Show();
//	std::cout << std::endl;
//	tow.FormalShow();
//	three.Show();
//	std::cout << std::endl;
//	three.FormalShow();
//	system("pause");
//	return 0;
//}

////golf�������
//#include <iostream>
//#include "ten.h"
//const int Mems = 5;
//int main(){
//	using namespace std;
//	golf team[Mems];
//	cout << "Enter up to " << Mems << " golf team mebers:\n";
//	int i;
//	for (i = 0; i < Mems; i++)
//	if (team[i].setgolf() == 0)
//		break;
//	for (int j = 0; j < i; j++)
//		team[j].showgolf();
//		//showgolf(team[j]);
//	team[0] = golf("Fred Noman", 5);
//	//setgolf(team[0], "Fred Noman", 5);
//	team[0].showgolf();
//	//showgolf(team[0]);
//	team[0].handi(3);
//	//handicap(team[0], 3);
//	team[0].showgolf();
//	//showgolf(team[0]);
//	
//	system("pause");
//	return 0;
//}

////���ƿռ�����
//#include <iostream>
//#include "ten.h"
//
//int main(){
//	using SALES::Sales;//�������ƿռ������
//
//	double vals[3] = { 2000, 3000, 5000 };
//	Sales forFiji(vals, 3);//��Ϊȫ����������������
//	forFiji.showSales();
//
//	Sales red;
//	red.showSales();//��ʾĬ�ϳ�ʼ����ֵ
//	red.setSales();
//	red.showSales();
//	system("pause");
//	return 0;
//}

////�ٶȸĽ�Stack���û��ļ�����ṹ�Ͷ�ջ
////����Ա��Ϊ���Զ�ջ
//#include <iostream>
//#include <cctype>
//#include "ten.h"
//
//int main(){
//	using namespace std;
//	Stack st;//����һ����ջ
//
//	customer temp;
//	double payments = 0;
//	char c;
//	//char ch;
//	unsigned long po;
//	cout << "Please enter A to add a purchase order.\n"//����a����ӹ��ﶩ��
//		<< "P to process a PO,or Q to quit.\n";//p����q�˳�
//	//while (cin >> ch&&toupper(ch) != 'Q'){//��һ��Ҫʹ��^Z�˳�ѭ�����Լ���Сд��Ϊ��д�Ƚ�
//	while (cin >> c&& (c=toupper(c)) != 'Q'){
//	while (cin.get() != '\n')//�Ե�����
//			continue;
//		//if (!isalpha(ch)){//�Ƿ�ΪӢ����ĸ������ʱ����ѭ��
//		//	cout << '\a';
//		//	continue;
//		//}
//	if (c != 'A'&&c != 'P'){
//		cout << '\a';
//		cout << "Please respond with A,P or Q:";
//		continue;
//	}
//		switch (c){
//		case 'A'://cout << "Enter a PO number to add: ";
//			    //cin >> po;
//				if (st.isfull())
//				cout << "stack already full\n";
//				else{
//				//st.push(po);
//					get_customer(temp);
//					st.push(temp);
//				}
//				break;//ע��break����������switch
//		case 'P':if (st.isempty())
//			cout << "stack already empty\n";
//				 else{
//					 st.pop(temp);
//					 payments += temp.payment;
//					 cout << temp.fullname << " processed.";
//					 cout << "Payments now total $"
//						 << payments << "\n";
//					 //cout << "PO #" << po << " popped\n";//ȡ��
//				 }
//				 break;
//		default: cout << "Whoops! Programming error!\n";
//		}
//		cout << "Please enter A to add a purchase order.\n"//����a����ӹ��ﶩ��
//			<< "P to process a PO,or Q to quit.\n";//p����q�˳�
//	}
//	cout << "Bye!!\n";
//	system("pause");
//	return 0;
//}

////����һ��list��
//#include <iostream>
//#include <cstdlib>
//#include "ten.h"
//
//void showmovies(Item item);//ת����
//
//int main(){
//	using namespace std;
//	simplist movies;
//	Item temp;
//
//	if (movies.isfull()){
//		cout << "No more room in list!Bye\n";
//		exit(1);
//	}
//	cout << "Enter first movie title:\n";
//	while (cin.getline(temp.title, SIZE) && temp.title[0] != '\0'){//���ַ��Ҳ�Ϊ��
//		cout << "Enter your rating<0-10>:";
//		cin >> temp.rating;
//		while (cin.get() != '\n')
//			continue;
//		if (movies.additem(temp) == false){
//			cout << "\a\a\aList already is full!\n";
//			break;
//		}
//		if (movies.isfull()){
//			cout << "You have filled the list.\n";
//			break;
//		}
//		cout << "Enter next movie title (empty line to stop):\n";//ֱ���ûس�ֹͣ
//	}
//	if (movies.isempty())
//		cout << "No data entered.\n";
//	else{
//		cout << "Here is the movie list :\n";
//		movies.transverse(showmovies);
//	}
//	cout << "Bye!\n";
//	system("pause");
//	return 0;
//}
//
//void showmovies(Item item){//��ʾ����
//	std::cout << "Movie: " << item.title << " Rating:"
//		<< item.rating << std::endl;
//}