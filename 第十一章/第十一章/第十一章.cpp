////计算时间类修改为一个操作符重载范例
//// <<的重载改造show函数
//#include <iostream>
//#include "eleven.h"
//
//int main(){
//	using std::cout;
//	using std::endl;
//	Time planning;
//	Time coding(2, 40);
//	Time fixing(5, 55);
//	Time weeding(4, 35);
//	Time waxing(2, 47);
//	Time total;
//	Time diff;
//	Time adjusted;
//
//	cout << "weeding time = ";
//	//weeding.Show();
//	cout << weeding;
//	cout << endl;
//
//	cout << "waxing time = ";
//	//waxing.Show();
//	cout << waxing;
//	cout << endl;
//
//	cout << "total work time = ";
//	total = weeding + waxing;
//	//total.Show();
//	//cout << total;方法一无法混用，如cout<<total<<"Wenseday\n";
//	cout << total << " Wenseday";//方法二可以
//	cout << endl;
//
//	diff = weeding - waxing;
//	cout << "weefing - waxing = ";
//	//diff.Show();
//	cout << diff;
//	cout << endl;
//
//	//adjusted = total * waxing;
//	//adjusted = 1.5 * total;
//	//cout << "adjusted work time = ";
//	//adjusted.Show();
//	//cout << endl;
//	//cout << "planning time = ";
//	//planning.Show();
//	//cout << endl;
//	//
//	//cout << "coding time = ";
//	//coding.Show();
//	//cout << endl;
//	//
//	//cout << "fixing time = ";
//	//fixing.Show();
//	//cout << endl;
//	//
//	////total = coding.Sum(fixing);//储存返回值
//	////也可以用total=coding.operator+(fixing);
//	//total = coding + fixing;//函数被加号所取代
//	////cout << "coding.Sum(fixing) = ";
//	//cout << "coding + fixing = ";
//	//total.Show();
//	//cout << endl;
//	system("pause");
//	return 0;
//}

////创建一个矢量的类,利用随机行走测试类
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include "eleven.h"
//#include <fstream>
//int main(){
//	using namespace std;
//	using VECTOR::Vector;
//	srand(time(0));//设置种子值通常返回当前时间
//	double direction;
//	Vector step;//步数
//	Vector result(0.0, 0.0);//默认为直角坐标
//	unsigned long steps = 0;
//	double target;
//	double dstep;
//	ofstream fout;
//	fout.open("thewalk.txt");
//	cout << "Enter target distance (q to quit):";//设置距离
//	while (cin >> target){
//		cout << "Enter step lenght: ";//设置每步步长
//		if (!(cin >> dstep))
//			break;
//		while (result.magval() < target){
//			direction = rand() % 360;//求模控制在0至359之间
//			step.set(dstep, direction, 'p');//以极坐标模式
//			result = result + step;//增加步长
//			fout << "The " << steps + 1 << " steps: (x,y) = " << result << endl;
//			steps++;
//		}
//		cout << "After " << steps << " steps,the subject "
//			"has the following location:\n";//到达
//		fout << "After " << steps << " steps,the subject "
//			"has the following location:\n";//到达
//		cout << result << endl;
//		fout << result << endl;
//		result.polar_mode();//调整模式为极坐标
//		cout << " or\n" << result << endl;
//		cout << "Average outward distance per step = "
//			<< result.magval() / steps << endl;
//		steps = 0;
//		result.set(0.0, 0.0);
//		cout << "Enter target distance (q to quit):";
//	}
//	cout << "Bye!\n";
//	system("pause");
//	return 0;
//}

////磅和英石来表示类，添加将类对象转化为int，double类型
//#include <iostream>
//using std::cout;
//#include "eleven.h"
//void display(const Stonewt & st, int n);
//int main(){
//	Stonewt poppins(9, 2.8);
//	double p_wt = poppins;
//	cout << "Convert to double => ";
//	cout << "Poppins: " << p_wt << " pounds.\n";//double转换
//	cout << "Convert to int => ";
//	cout << "Poppins: " << int(poppins) << " pounds.\n";//int转换
//	Stonewt pavarotti = 260;
//	Stonewt wolfe(285.7);
//	Stonewt taft(21.8);
//
//	cout << "The tenor weighed ";
//	pavarotti.show_stn();
//	cout << "The detective weighed ";
//	wolfe.show_stn();
//	cout << "The President weighed ";
//	taft.show_stn();
//	pavarotti = 265.8;
//	taft = 325;
//	cout << "After dinner ,the President weighed ";
//	taft.show_lbs();
//	cout << "After dinner ,the tenor weighed ";
//	pavarotti.show_stn();
//	display(taft, 2);
//	cout << "The wrestler weighed even more .\n";
//	display(422, 2);
//	cout << "No stone left unearned\n";
//	system("pause");
//	return 0;
//}
//
//void display(const Stonewt & st, int n){
//	for (int i = 0; i < n; i++){
//		cout << "Wow! ";
//		st.show_stn();
//	}
//}

//创建复数的类
#include <iostream>
using namespace std;
#include"eleven.h"
int main(){
	Complex a(3, 4);
	Complex c;
	cout << "Enter a complex number:(q to quit)\n";
	while (cin >> c){
		cout << "c is " << c << endl;
		cout << "complex conjugate is " << ~c << endl;
		cout << "a is " << a << endl;
		cout << "a + c is " << a + c + c<< endl;
		cout << "a - c is " << a - c << endl;
		cout << "a * c is " << a * c << endl;
		cout << "2 * c is " << 2 * c << endl;
		cout << "Enter a complex number:(q to quit)\n";
	}
	cout << "Done!!!\n";
	system("pause");
	return 0;
}