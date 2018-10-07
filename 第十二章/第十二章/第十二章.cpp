//////StringBad类
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
//	StringBad sailor = sports;//会提供一个隐式复制构造函数，导致计数混乱
//	cout << "sailor: " << sailor << endl;
//	cout << "Assign one object to another: \n";
//	StringBad knot;
//	knot = headline1;//隐式赋值函数也同样这个问题，直接让两个指针指向同一个地址导致
//	cout << "knot: " << knot << endl;//一个地址会被释放两次
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

////修改后的string类
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
//		if (!cin || temp[0] == '\0')//表示空行
//			break;
//		else
//			sayings[i] = temp;
//	}
//	int total = i;//查看实际输入了几句话
//
//	cout << "Here are your sayings: \n";
//	for (i = 0; i < total; i++)
//		cout << sayings[i][0] << " : " << sayings[i] << endl;
//
//	int shortest = 0;//
//	int first = 0;
//	for (i = 1; i < total; i++){
//		if (sayings[i].lenght()< sayings[shortest].lenght())
//			shortest = i;//长度最小
//		if (sayings[i] < sayings[first])
//			first = i;//按字母最小
//	}
//	cout << "shortest sayings:\n" << sayings[shortest];
//	cout << "first alphabetically:\n" << sayings[first];
//	cout << "This program used " << String::HowMany()
//		<< "String object .Bye!\n";
//	system("pause");
//	return 0;
//}

////使用指向对象的指针
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
//		if (!cin || temp[0] == '\0')//表示空行
//			break;
//		else
//			sayings[i] = temp;
//		}
//		int total = i;//查看实际输入了几句话
//		if (total > 0){
//			cout << "Here are your sayings: \n";
//			for (i = 0; i < total; i++)
//				cout << sayings[i] << endl;
//			String* shortest = &sayings[0];
//			String* first = &sayings[0];
//			for (i = 1; i < total; i++){
//				if (sayings[i].lenght() < shortest->lenght())//只能调用函数，影藏了私有类
//					shortest = &sayings[i];//利用指针箭头找到
//				if (sayings[i] < *first)
//					first = &sayings[i];
//			}
//			cout << "shortest sayings:" << *shortest << endl;
//			cout << "first alphabetically:" << *first << endl;
//			
//			srand(time(0));
//			int choice = rand() % total;//0到total
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

//类和布局new
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
//	char* buffer = new char[BUFF];//一个空的储存空间
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
//		JustTesting("Bad Idea", 6);//布局new需要手动管理空间
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
//	delete[]buffer;//释放了buffer空间但对两个类指针的地址
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}

////超市队列模拟
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "twelve.h"
//const int MIN_PER_HR = 60;
//bool newcustomer(double x);
//int main(){
//	using namespace std;
//	srand(time(0));
//	cout << "Case Studay:Bank of Heather Automatic Teller\n";//数据分析
//	cout << "Enter maximum size of queue: ";//输入队列的最大值
//	int qs;
//	cin >> qs;
//	Queue line(qs);//创建队列
//	cout << "Enter the number of simulation hours: ";//总共模拟小时数
//	int hours;
//	cin >> hours;
//	long cyclelimit = MIN_PER_HR*hours;//转换为分钟
//	cout << "Enter the average number of customer per hour: ";
//	double perhour;
//	cin >> perhour;
//	double min_per_cust;
//	min_per_cust = MIN_PER_HR / perhour;//每小时平均客流量
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
//		if (newcustomer(min_per_cust)){//创造一个随机平均数
//			//如果有客人则进入循环
//			if (line.isfull())
//				turnaways++;//记录因队列已满流失用户
//			else{
//				customers++;
//				//说明在这一分钟有客户到达
//				temp.set(cycle);//发送用户到达时间以及随机一个停留时间
//				line.enqueue(temp);//入队
//			}
//		}
//		if (wait_time <= 0 && !line.isempty()){
//			line.dequeue(temp);//出队
//			wait_time = temp.ptime();//停留时间
//			line_wait += cycle - temp.when();//当前时间减到达时间是一个客户的等待时间
//			served++;//被服务的客户
//		}
//		if (wait_time > 0)
//			wait_time--;//等待时间减一
//		sum_line += line.queuecount();//总计每一次队列长度
//	}
//	if (customers > 0){//只要有顾客
//		cout << "customer accepted: " << customers << endl;//到达顾客
//		cout << "  customers served: " << served << endl;//被服务顾客
//		cout << "          turnaways: " << turnaways << endl;//流失
//		cout << "average queue size: ";//平均队列长度
//		cout.precision(2);
//		cout.setf(ios_base::fixed, ios_base::floatfield);
//		cout.setf(ios_base::showpoint);
//		cout << (double)sum_line / cyclelimit << endl;//总长度/总时间
//		cout << " average wait time: "//平均等待时间
//			<< (double)line_wait / served << " minutes\n";//总等待时间/被服务个数
//	}
//else
//	cout << "No customer!!\n";
//	cout << "Done!\n";
//	system("pause");
//	return 0;
//}
//
//bool newcustomer(double x){
//	return (std::rand()*x / RAND_MAX < 1);//每六分钟来一个客户，但可能没有
//}

////String类的改进函数
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
//	s2.stringup();//变大写
//	cout << "The string\n" << s2 << "\ncontains " << s2.has('A') << "'A'characters in it.\n";
//	s1 = "red";
//	String rgb[3] = { String(s1), String(" green"), String("blue") };
//	cout << "Enter the name of a primary color for mixing light: ";
//	String ans;
//	bool succese = false;
//	while (cin >> ans){
//		ans.stringlow();//变小写
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

////使用动态存储的堆
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