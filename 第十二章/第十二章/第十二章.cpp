//////StringBad��
//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using std::cout;
//#include "twelve.h"
//
//void callme1(StringBad &);
//void callme2(StringBad);
//int main(){
//	using std::endl;
//	StringBad headline1("Celey Stalks at Midnight");
//	StringBad headline2("Lettuce Prey");
//	StringBad sports("Spinach Leaves Bow1 for Dollars");
//	cout << "headline1: " << headline1 << endl;
//	cout << "headline2: " << headline2 << endl;
//	cout << "sports: " << sports << endl;
//	callme1(headline1);
//	cout << "headline1: " << headline1 << endl;
//	callme2(headline2);
//	cout << "headline2: " << headline2 << endl;
//	cout << "Initialize one object to another: \n";
//	StringBad sailor = sports;//���ṩһ����ʽ���ƹ��캯�������¼�������
//	cout << "sailor: " << sailor << endl;
//	cout << "Assign one object to another: \n";
//	StringBad knot;
//	knot = headline1;//��ʽ��ֵ����Ҳͬ��������⣬ֱ��������ָ��ָ��ͬһ����ַ����
//	cout << "knot: " << knot << endl;//һ����ַ�ᱻ�ͷ�����
//	cout << "End of main()\n";
//	system("pause");
//	return 0;
//
//}
//
//void callme1(StringBad & rsb){
//	cout << "String passed by reference: \n";
//	cout << "   \"" << rsb << "\"\n";
//}
//
//void callme2(StringBad sb){
//	cout << "String passed by value: \n";
//	cout << "   \"" << sb << "\"\n";
//}

////�޸ĺ��string��
//#include <iostream>
//#include "twelve.h"
//int const ArSize = 10;
//int const MaxLen = 81;
//int main(){
//	using namespace std;
//	String name;
//	cout << "Hi,What's are your name?\n";
//	cin >> name;
//
//	cout << name << ",please enter up to " << ArSize
//		<< " short sayings<enter empty line to quit>:\n";
//	String sayings[ArSize];
//	char temp[MaxLen];
//	int i;
//	for (i = 0; i < ArSize; i++){
//		cout << i + 1 << " :";
//		cin.get(temp, MaxLen);
//		while (cin&&cin.get() != '\n')
//			continue;
//		if (!cin || temp[0] == '\0')//��ʾ����
//			break;
//		else
//			sayings[i] = temp;
//	}
//	int total = i;//�鿴ʵ�������˼��仰
//
//	cout << "Here are your sayings: \n";
//	for (i = 0; i < total; i++)
//		cout << sayings[i][0] << " : " << sayings[i] << endl;
//
//	int shortest = 0;//
//	int first = 0;
//	for (i = 1; i < total; i++){
//		if (sayings[i].lenght()< sayings[shortest].lenght())
//			shortest = i;//������С
//		if (sayings[i] < sayings[first])
//			first = i;//����ĸ��С
//	}
//	cout << "shortest sayings:\n" << sayings[shortest];
//	cout << "first alphabetically:\n" << sayings[first];
//	cout << "This program used " << String::HowMany()
//		<< "String object .Bye!\n";
//	system("pause");
//	return 0;
//}

////ʹ��ָ������ָ��
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "twelve.h"
//int const ArSize = 10;
//int const MaxLen = 81;
//int main(){
//	using namespace std;
//		String name;
//		cout << "Hi,What's are your name?\n";
//		cin >> name;
//
//		cout << name << ",please enter up to " << ArSize
//	    << " short sayings<enter empty line to quit>:\n";
//		String sayings[ArSize];
//		char temp[MaxLen];
//		int i;
//		for (i = 0; i < ArSize; i++){
//				cout << i + 1 << " :";
//				cin.get(temp, MaxLen);
//				while (cin&&cin.get() != '\n')
//					continue;
//		if (!cin || temp[0] == '\0')//��ʾ����
//			break;
//		else
//			sayings[i] = temp;
//		}
//		int total = i;//�鿴ʵ�������˼��仰
//		if (total > 0){
//			cout << "Here are your sayings: \n";
//			for (i = 0; i < total; i++)
//				cout << sayings[i] << endl;
//			String* shortest = &sayings[0];
//			String* first = &sayings[0];
//			for (i = 1; i < total; i++){
//				if (sayings[i].lenght() < shortest->lenght())//ֻ�ܵ��ú�����Ӱ����˽����
//					shortest = &sayings[i];//����ָ���ͷ�ҵ�
//				if (sayings[i] < *first)
//					first = &sayings[i];
//			}
//			cout << "shortest sayings:" << *shortest << endl;
//			cout << "first alphabetically:" << *first << endl;
//			
//			srand(time(0));
//			int choice = rand() % total;//0��total
//			String* favorite = new String(sayings[choice]);
//			cout << "My favorite saying : \n" << *favorite << endl;
//			delete favorite;
//		}
//else
//		cout << "No much to say,eh?\n";
//		cout << "Bye!\n";
//		system("pause");
//		return 0;
//}

//��Ͳ���new
//#include <iostream>
//#include <string>
//#include <new>
//using namespace std;
//const int BUFF = 521;
//
//class JustTesting{
//private:
//	string words;
//	int number;
//public:
//	JustTesting(const string & s = "Just Testing", int n = 0)
//	{words = s; number = n; cout << words << " constructed\n";}
//	~JustTesting(){ cout << words << " destroyed\n"; }
//	void Show()const{ cout << words << ", " << number << endl; }
//};
//int main(){
//	char* buffer = new char[BUFF];//һ���յĴ���ռ�
//	JustTesting *pc1, *pc2;
//	pc1 = new(buffer)JustTesting;
//	pc2 = new JustTesting("Heap1", 20);
//	cout << "Memory block adresses:\n" << "buffer: "
//		<< (void *)buffer << "	heap: " << pc2 << endl;
//	cout << "Memory contents:\n";
//	cout << pc1 << "; ";
//	pc1->Show();
//	cout << pc2 << ": ";
//	pc2->Show();
//
//	JustTesting *pc3, *pc4;
//	//pc3 = new(buffer)JustTesting("Bad Idea", 6);//bad idea
//	pc3 = new(buffer + sizeof(JustTesting))
//		JustTesting("Bad Idea", 6);//����new��Ҫ�ֶ�����ռ�
//	pc4 = new JustTesting("Heap2", 10);
//	
//	cout << "Memory contents:\n";
//	cout << pc3 << ": ";
//	pc3->Show();
//	cout << pc4 << ": ";
//	pc4->Show();
//
//	delete pc2;
//	delete pc4;
//	pc3->~JustTesting();
//	pc1->~JustTesting();
//	delete[]buffer;//�ͷ���buffer�ռ䵫��������ָ��ĵ�ַ
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}

////���ж���ģ��
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "twelve.h"
//const int MIN_PER_HR = 60;
//bool newcustomer(double x);
//int main(){
//	using namespace std;
//	srand(time(0));
//	cout << "Case Studay:Bank of Heather Automatic Teller\n";//���ݷ���
//	cout << "Enter maximum size of queue: ";//������е����ֵ
//	int qs;
//	cin >> qs;
//	Queue line(qs);//��������
//	cout << "Enter the number of simulation hours: ";//�ܹ�ģ��Сʱ��
//	int hours;
//	cin >> hours;
//	long cyclelimit = MIN_PER_HR*hours;//ת��Ϊ����
//	cout << "Enter the average number of customer per hour: ";
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;//ÿСʱƽ��������
//
//	Item temp;
//	long turnaways = 0;
//	long customers = 0;
//	long served = 0;
//	long sum_line = 0;
//	int wait_time = 0;
//	long line_wait = 0;
//
//	for (int cycle = 0; cycle < cyclelimit; cycle++){
//		if (newcustomer(min_per_cust)){//����һ�����ƽ����
//			//����п��������ѭ��
//			if (line.isfull())
//				turnaways++;//��¼�����������ʧ�û�
//			else{
//				customers++;
//				//˵������һ�����пͻ�����
//				temp.set(cycle);//�����û�����ʱ���Լ����һ��ͣ��ʱ��
//				line.enqueue(temp);//���
//			}
//		}
//		if (wait_time <= 0 && !line.isempty()){
//			line.dequeue(temp);//����
//			wait_time = temp.ptime();//ͣ��ʱ��
//			line_wait += cycle - temp.when();//��ǰʱ�������ʱ����һ���ͻ��ĵȴ�ʱ��
//			served++;//������Ŀͻ�
//		}
//		if (wait_time > 0)
//			wait_time--;//�ȴ�ʱ���һ
//		sum_line += line.queuecount();//�ܼ�ÿһ�ζ��г���
//	}
//	if (customers > 0){//ֻҪ�й˿�
//		cout << "customer accepted: " << customers << endl;//����˿�
//		cout << "  customers served: " << served << endl;//������˿�
//		cout << "          turnaways: " << turnaways << endl;//��ʧ
//		cout << "average queue size: ";//ƽ�����г���
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout.setf(ios_base::showpoint);
//		cout << (double)sum_line / cyclelimit << endl;//�ܳ���/��ʱ��
//		cout << " average wait time: "//ƽ���ȴ�ʱ��
//			<< (double)line_wait / served << " minutes\n";//�ܵȴ�ʱ��/���������
//	}
//else
//	cout << "No customer!!\n";
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}
//
//bool newcustomer(double x){
//	return (std::rand()*x / RAND_MAX < 1);//ÿ��������һ���ͻ���������û��
//}

////String��ĸĽ�����
//#include <iostream>
//using namespace std;
//#include "twelve.h"
//int main(){
//	String s1(" and I am a C++ student.");
//	String s2 = "Please enter your name: ";
//	String s3;
//	cout << s2;
//	cin >> s3;
//	s2 = "My name is "+s3;
//	cout << s2 << ".\n";
//	s2 = s2 + s1;
//	s2.stringup();//���д
//	cout << "The string\n" << s2 << "\ncontains " << s2.has('A') << "'A'characters in it.\n";
//	s1 = "red";
//	String rgb[3] = { String(s1), String(" green"), String("blue") };
//	cout << "Enter the name of a primary color for mixing light: ";
//	String ans;
//	bool succese = false;
//	while (cin >> ans){
//		ans.stringlow();//��Сд
//		for (int i = 0; i < 3; i++){
//			if (ans == rgb[i]){
//				cout << "That's right!\n";
//				succese = true;
//				break;
//			}
//		}
//		if (succese)
//			break;
//		else
//			cout << "Try again!\n";
//	}
//	cout << "Bye!\n";
//	system("pause");
//	return 0;
//}

////ʹ�ö�̬�洢�Ķ�
//#include <iostream>
//#include <cctype>
//#include "twelve.h"
//int main(){
//	using namespace std;
//	Stack st(3);
//	unsigned long temp;
//	char c;
//
//	cout << "Plaese enter A to add a PO,\n"
//		<< "P to process a PO,and Q to quit.\n";
//	while (cin >> c && (c = toupper(c)) != 'Q'){
//		while (cin.get() != '\n')
//			continue;
//		if (c != 'A'&&c != 'P'){
//			cout << "Please respond with A,P,orQ:";
//			continue;
//		}
//		switch (c){
//		case'A':if (st.isfull())
//			cout << "stack already full\n";
//				else{
//					cout << "Eter PO number:";
//					cin >> temp;
//					st.push(temp);	
//				}
//				break;
//		case'P':if (st.isempty())
//			cout << "stack already empty\n";
//				else{
//					st.pop(temp);
//					cout << "Processing PO " << temp << '\n';
//				}
//				break;
//		default:cout << "Whoops!Programming error!\n";
//		}
//		cout << "Please enter A to add a customer,\n"
//			<< "P to process a customer,and Q to quit.\n";
//	}
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}