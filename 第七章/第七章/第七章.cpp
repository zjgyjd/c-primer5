////函数传递数组计算总数
//#include <iostream>
//const int ArSize = 8;
//int sum_arr(int arr[], int n);//如果不是arr[]就要写int* arr
//int main(){
//	using namespace std;
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	int sum = sum_arr(cookies, ArSize);
//	cout << "Total cookies eaten: " << sum << "\n";
//	system("pause");
//	return 0;
//}
//int sum_arr(int arr[], int n){
//	int total = 0;
//	for (int i = 0; i < n; i++)
//		total = total + arr[i];
//	return total;
//}

//查看传递数组指针时的大小
//#include <iostream>
//const int ArSize = 8;
//int sum_arr(int arr[], int n);
//using namespace std;
//int main(){
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	cout << cookies << " =array address, ";
//	cout << sizeof cookies << " =sizeof cookies\n";//显示一个数组的大小
//	int sum = sum_arr(cookies, ArSize);
//	cout << "Total cookies eaten: " << sum << endl;
//	sum = sum_arr(cookies, 3);
//	cout << "First three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, 4);
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//	system("pause");
//	return 0;
//}
//
//int sum_arr(int arr[], int n){
//	int total = 0;
//	cout << sizeof arr << " = sizrof arr\n";//显示一个指针的大小
//	for (int i = 0; i < n; i++)
//		total = total + arr[i];
//	return total;
//}

////将所有操作放入函数之中，在利用数组来传递其中的值
//#include <iostream>
//using namespace std;
//const int max = 5;
//int fill_array(double ar[], int limit);
//void show_array(const double arr[], int n);
//void revalue(double r, double ar[], int n);
//
//int main(){
//	double properties[max];
//	int size = fill_array(properties, max);
//	show_array(properties, size);
//	cout << "enter revaluation factor: ";
//	double factor;
//	cin >> factor;
//	revalue(factor, properties, size);
//	show_array(properties, size);
//	cout << "done!" << endl;
//	system("pause");
//	return 0;
//}
//
//int fill_array(double ar[], int limit){
//	double temp;
//	int i;
//	for (i = 0; i < limit; i++){
//		cout << "enter value #" << (i + 1) << ": ";
//		cin >> temp;
//		if (!cin){
//			cin.clear();
//			while (cin.get() != '\n'){//将多余字符清除直到本行的回车
//				cout << "here";
//				continue;
//			}
//			cout << "bad input;input process terminated.\n";
//			break;
//		}
//		else if (temp < 0)
//			break;
//		ar[i] = temp;
//	}
//	return i;//可以表示有几个数字，有效控制输入不足五个的情况
//}
//
//void show_array(const double ar[], int n){
//	for (int i = 0; i < n; i++){
//		cout << "property #" << (i + 1) << ": $";
//		cout << ar[i] << endl;
//	}
//}
//
//void revalue(double r, double ar[], int n){
//	for (int i = 0; i < n; i++)
//		ar[i] *= r;
//}

////用两个指针指定区间，头尾各一个，头指向第一个尾指向数组最后一个元素的后面一位
//#include <iostream>
//const int ArSize = 8;
//int sum_arr( int* begin,  int* end);
//int main(){
//	using namespace std;
//	int cookies[ArSize] = { 1, 2, 4, 8, 16, 32, 64, 128 };
//	int sum = sum_arr(cookies, cookies + ArSize);//到结束
//	cout << "Total cookies eaten: " << sum << endl;
//	sum = sum_arr(cookies, cookies + 3);
//	cout << "Frist three eaters ate " << sum << " cookies.\n";
//	sum = sum_arr(cookies + 4, cookies + 8);
//	cout << "Last four eaters ate " << sum << " cookies.\n";
//	system("pause");
//	return 0;
//}
//
//int sum_arr( int* begin,  int* end){
//	//const int* pt;
//	int total = 0;
//	for (; begin != end; begin++)
//		total = total + *begin;
//	return total;
//}

////计算特定的字符在字符串中出现的次数
//#include <iostream>
//int c_in_str(const char* str, char ch);
//int main(){
//	using namespace std;
//	char mmm[15] = "minimum";
//	char* wail = "ululate";
//	int ms = c_in_str(mmm, 'm');
//	int us = c_in_str(wail, 'u');
//	cout << ms << " m characters in " << mmm << endl;
//	cout << us << " u characters in " << wail << endl;
//	system("pause");
//	return 0;
//}
//
//int c_in_str(const char* str, char ch){
//	int count = 0;
//	while (*str){
//		if (*str == ch)
//			count++;
//		str++;
//	}
//	return count;
//}

////return 通过返回地址来返回一个字符串
//#include <iostream>
//char* buildstr(char c, int n);
//int main(){
//	using namespace std;
//	int times;
//	char ch;
//
//	cout << "Enter a character: ";
//	cin >> ch;
//	cout << "Enter an integer: ";
//	cin >> times;
//	char* ps = buildstr(ch, times);
//	cout << ps << endl;
//	delete[] ps;
//	ps = buildstr('+', 20);
//	cout << ps << "-DONE-" << ps << endl;
//	delete[] ps;
//	system("pause");
//	return 0;
//}
//
//char* buildstr(char c, int n){
//	char* pstr = new char[n + 1];//动态数组
//	pstr[n] = '\0';//将最后一位写为\0作为字符串的终止
//	while (n-- > 0)
//		pstr[n] = c;
//	return pstr;
//}

////结构体和函数
//#include <iostream>
//struct travel_time
//{
//	int hours;
//	int mins;
//};
//const int Mins_per_hr = 60;
//travel_time sum(travel_time t1 , travel_time t2);
//void show_time(travel_time t);
//
//int main(){
//	using namespace std;
//	travel_time day1 = { 5, 45 };//5 hours,45min
//	travel_time day2 = { 4, 55 };
//
//	travel_time trip = sum(day1 , day2);
//	cout << "Tow-day total: ";
//	show_time(trip);
//
//	travel_time day3 = { 4, 32 };
//	cout << "Three-day total: ";
//	show_time(sum(trip, day3));
//
//	system("pause");
//	return 0;
//}
//
//travel_time sum(travel_time t1, travel_time t2){
//	travel_time total;
//
//	total.mins = (t1.mins + t2.mins) % Mins_per_hr;
//	total.hours = t1.hours + t2.hours + (t1.mins + t2.mins) / Mins_per_hr;
//	return total;
//}
//
//void show_time(travel_time t){
//	using namespace std;
//	cout << t.hours << " hours, " << t.mins << " minutes\n";
//}

////用两个结构体和函数
//#include <iostream>
//#include <cmath>
//using namespace std;
//struct polar
//{
//	double distance;
//	double angle;
//};
//struct rect
//{
//	double x;
//	double y;
//};
//
//polar rect_to_polar(rect xypos);//返回一个结构体，要让主函数有一个结构体接收它
//void show_polar(polar dapos);
//
//int main(){
//	using namespace std;
//	rect rplace;
//	polar pplace;
//
//	cout << "Enter the x and y values: ";
//	while (cin >> rplace.x >> rplace.y){
//		pplace = rect_to_polar(rplace);
//		show_polar(pplace);
//		cout << "Next two numbers(q to quit): ";
//	}
//	cout << "Done.\n";
//	system("pause");
//	return 0;
//}
//
//polar rect_to_polar(rect xypos){
//	polar answer;
//
//	answer.distance =
//		sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
//	answer.angle = atan2(xypos.y, xypos.x);
//	return answer;//复制一个与原结构体相同的
//}
//
//void show_polar(polar dapos){
//	const double Rad_to_deg = 57.29577951;
//
//	cout << "distance = " << dapos.distance;
//	cout << ", angle = " << dapos.angle * Rad_to_deg;
//	cout << " degrees\n";
//}

////传递结构地址以及const的使用
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//struct polar
//	{
//		double distance;
//		double angle;
//	};
//	struct rect
//	{
//		double x;
//		double y;
//	}; 
//
//	void show_polar(const polar* pda);//直接对结构原型动手
//	void rect_to_polar(const rect* pxy, polar* pda);
//
//	int main(){
//		rect rplace;
//		polar pplace;
//
//		cout << "Enter the x and y values: ";
//		while (cin >> rplace.x >> rplace.y){
//			rect_to_polar(&rplace, &pplace);
//			show_polar(&pplace);
//			cout << "Next two numbers (q to quit): ";
//		}
//		cout << "Done.\n";
//		system("pause");
//		return 0;
//	}
//
//void show_polar(const polar* pda){
//	using namespace std;
//	const double Red_to_deg = 57.29577951;
//
//	cout << "distance = " << pad->distance;
//	cout << " ,angle = " << pad->angle * Red_to_deg;
//	cout << " degress\n";
//}
//
//void rect_to_polar(const rect* pxy, polar* pda){
//	pda->distance =
//		sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
//	pda->angle = atan2(pxy->y, pxy->x);
//}

////string数组 与函数
//#include <iostream>
//#include <string>
//using namespace std;
//const int SIZE = 5;
//void display(const string sa[], int n);
//int main(){
//	string list[SIZE];
//	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
//	for (int i = 0; i < SIZE; i++){
//		cout << i + 1 << ": ";
//		getline(cin, list[i]);
//	}
//
//	cout << "Your list:\n";
//	display(list, SIZE);
//	system("pause");
//	return 0;
//}
//
//void display(const string sa[], int n){
//	for (int i = 0; i < n; i++)
//		cout << i + 1 << ": " << sa[i] << endl;
//
//}

////递归函数调用自身
//#include <iostream>
//void countdown(int n);
//using namespace std;
//int main(){
//	countdown(4);
//	return 0;
//
//}
//
//void countdown(int n){
//	cout << "Counting down ... " << n << endl;
//	if (n > 0)
//		countdown(n - 1);//当n=1时调用自身后，会输出0：Kaboom
//	cout << n << ": Kaboom!\n";//调用完毕再回到这里输出1：Kaboom 然后依次2到4
//如果查看地址可发现每一次递归n都有一个新的内存地址，一共四个
//}

////用递归函数绘制标尺
//#include <iostream>
//const int Len = 66;
//const int Divs = 6;
//using namespace std;
//void subdivide(char ar[], int low, int high, int level);
//int main(){
//	char ruler[Len];
//	int i;
//	for (i = 1; i < Len - 2; i++)
//		ruler[i] = ' ';
//	ruler[Len - 1] = '\0';
//	int max = Len - 2;
//	int min = 0;
//	ruler[min] = ruler[max] = '|';
//	cout << ruler << endl;
//	for (i = 1; i <= Divs; i++){
//		subdivide(ruler, min, max, i);
//		cout << ruler << endl;
//		for (int j = 1; j < Len - 2; j++)
//			ruler[j] = ' ';
//	}
//	system("pause");
//	return 0;
//}
//
//void subdivide(char ar[], int low, int high, int level){
//	if (level == 0)
//		return;
//	int mid = (high + low) / 2;
//		ar[mid] = '|';
//	subdivide(ar, low, mid, level - 1);//一行一行打印逐行不断多找中间
//	subdivide(ar, mid, high, level - 1);
//}

////函数指针的运用，可以调用其他函数不仅仅是返回值
//#include <iostream>
//double betsy(int);
//double pam(int);
//
//void estimate(int lines, double(*pf)(int));
//using namespace std;
//int main(){
//	int code;
//
//	cout << "How many lines of code do you need? ";
//	cin >> code;
//	cout << "Here's Betsy's estimate: \n";
//	estimate(code, betsy);
//	cout << "Here's Pam's estimate: \n";
//	estimate(code, pam);
//	system("pause");
//	return 0;
//}
//
//double betsy(int lns){
//	return 0.05*lns;
//}
//
//double pam(int lns){
//	return 0.03*lns + 0.0004*lns*lns;
//}
//
//void estimate(int lines, double(*pf)(int)){
//	cout << lines << " lines will take ";
//	cout << (*pf)(lines) << " hour(s)\n";
//}

//#include <iostream>
//using namespace std;
////调和平均数2.0*x*y/(x+y)
//double average(double x,double y){
//	double ave = 2.0*x*y / (x + y);
//	return ave;
//}
//int main(){
//	//不断输入两个数，直到其中一个是零
//	double x;
//	double y;
//	double ave;
//	while (1){
//		cout << "Please input two numbers ,and input zore finish:\n";
//		cin >> x >> y;
//		//判断是不是两个数中有0
//		if (x == 0 || y == 0){
//			cout << "finish!\n";
//			break;
//		}
//		//调用函数
//		ave = average(x, y);
//		cout << "The average is = " << ave << endl;
//	}
//	system("pause");
//	return 0;
//}

////计算平均值，包括三个数组处理函数，包括输入，显示，计算平均成绩
//#include <iostream>
//using namespace std;
//const int Max = 10;
//int input(double a[], int limit);
//void prtarray(double a[], int max);
//double average(double a[], int max);
//int main(){
//	cout << "Please put ten numbers,input q to finish:\n";
//	double a[Max];
//	int size = input(a, Max);
//	prtarray(a, size);
//	double ave = average(a, size);
//	cout << "\n the average = " << ave << endl;
//	system("pause");
//	return 0;
//}
////进行显示最多十个成绩，并允许提前结束,
//int input(double a[],int limit){
//	int i;
//	for (i = 0; i < limit; i++){
//		cout << " #" << i + 1 << ": ";
//		cin >> a[i];
//		if (!cin){
//			cout << "finish input!\n";//如果之后还需要输入就要清理空间
//			break;
//		}
//	}
//	//需要返回一个数组下标，表示数组有效长度
//	return i;
//}
////将输入的所有成绩在一条线上显示出来
////1.数组和最大下标
////2.for循环显示到最大
//void prtarray(double a[], int max){
//	cout << "the all data:\n";
//	for (int i = 0; i < max; i++){
//		cout << a[i] << " ";
//	}
//}
////计算平均数
//double average(double a[], int max){
//	double sum = 0;
//	for (int i = 0; i < max; i++){
//     		sum += a[i];
//	}
//	return sum / max;
//}

//结构体函数的两种应用
//#include <iostream>
//using namespace std;
//struct box{
//	char maker[40];
//	float height;
//	float width;
//	float length;
//	float volume;
//};
//
////打印每个成员的值
//void display(box pr){
//	cout << "The maker is = " << pr.maker
//		<< "\nThe height is = " << pr.height
//		<< "\nThe width is = " << pr.width
//		<< "\nThe lenght is = " << pr.length
//		<< "\nThe volume is = " << pr.volume;
//}
//
////volume是其他三围长度的乘积
//void vol(box* pr){
//	pr->volume = pr->height * pr->length * pr->width;
//}
//
////使用两个函数
//int main(){
//	box test;
//	cin >> test.maker;
//	cin >> test.height;
//	cin >> test.length;
//	cin >> test.width;
//	vol(&test);
//	display(test);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int Fill_array(double a[], int max);
//void Show_array(double a[], int max);
//void Reverse_array(double a[], int max);
//const int Limit = 10;
//int main(){
//	double a[Limit];
//	int size;
//	size = Fill_array(a, Limit);//输入
//	cout << "Size = " << size << endl;
//	Show_array(a, size);//显示
//	Reverse_array(a, size);//输入
//	Show_array(a, size);//显示
//
//	//除第一和最后都翻转，利用数组传递指针的特性，在实参上进行修改
//	Reverse_array(a+1, size-2);//注意前面a+1使地址向前移一位，所以size还要在原来基础上减一
//	Show_array(a, size);//显示
//	system("pause");
//	return 0;
//}
//
////提示用户输入double值并存储到数组中
//int Fill_array(double a[],int max){
//	int i = 0;
//	cout << "请输入浮点数，可按q停止输入：\n";
//	for (; i < max;i++){
//		cout << "#" << i + 1 << " = ";
//		cin >> a[i];
//
//		if (!cin){
//			cin.clear();
//			while (cin.get() != '\n'){
//				continue;
//			}
//			cout << "q for finish!\n";
//			break;
//		}
//	}
//	return i;
//}
//
//显示该数组的内容
//void Show_array(double a[], int max){
//	for (int i = 0; i < max; i++){
//		cout << "#" << i + 1 << " = " << a[i] << endl;
//	}
//}
//
////翻转数组中值得顺序
//void Reverse_array(double a[], int max){
//	//一个从头一个从尾
//	int right = 0;
//	int left = max-1;
//	cout <<"here = "<< left << endl;
//	for (; right < left; right++, left--){
//		double temp;
//		temp = a[left];
//		a[left] = a[right];
//		a[right] = temp;
//	}
//	//交换里面的值
//
//}

//#include <iostream>
//using namespace std;
////传入两个指针，返回一个指针指向最后一个数的后面
//const int max = 5;
//int* fill_array(int a[], int size){
//	//可以提前输入数字结束
//	int i;
//	int* max;
//	for (i = 0; i < size; i++){
//		cin >> a[i];
//		if (!cin){
//			cin.clear();
//			while (cin.get() != '\n')
//				continue;
//			cout << "finish\n";
//			break;
//		}
//
//	}
//	max = &a[i];
//	return max;
//}
//
//void show_array(int* begin, int* end){
//	int i;
//	for (i=0; begin != end; begin++,i++){
//		cout << "# " << i + 1 << " = " << *begin << endl;
//	}
//}
//
//void revalue(int b, int* begin, int* end){
//	for (; begin != end; begin++){
//		*begin *= b;
//	}
//}
//
//int main(){
//	int pop[max];
//	int* size;
//	size = fill_array(pop, max);
//	show_array(pop, size);
//	cout << "the factor is = \n";
//	int factor;
//	cin >> factor;
//	revalue(factor,pop, size);
//	show_array(pop, size);
//	system("pause");
//	return 0;
//}

//#include <iostream>
//using namespace std;
//
//const int SLEN = 30;
//struct student{
//	char fullname[SLEN];
//	char hobby[SLEN];
//	int ooplevel;
//};
//
//int getinfo(student pa[], int n){
//
//}

//#include <iostream>
//using namespace std;
////使用函数调用其他函数
//double calcute(double x, double y, double(*pf)(double, double));
//double add(double x, double y);
//double sub(double x, double y);
//double mean(double x, double y);
//
//int main(){
//	double(*pf[3])(double, double) = { add, sub, mean };
//	char* op[3] = { "sum", "difference", "mean" };//设置了一个指针数组，让他直接等于函数名
//	double a, b;
//	cout << "Enter pairs of numbers (q to quit): ";
//	int i;
//	while (cin >> a >> b){
//		cout << calcute(a, b, add) << " = sum\n"
//			<< calcute(a, b, mean) << " =mean\n";
//
//		for (i = 0; i < 3; i++){
//			cout << calcute(a, b, pf[i]) << " = " << op[i] << endl;
//		}//通过指针数组可以用循环调用
//		
//	}
//	cout << "Done!!\n";
//	system("pause");
//	return 0;
//}
////接收两个double值和一个指向函数的指针
//double calcute(double x, double y, double(*pf)(double, double)){
//	return (*pf)(x, y);
//}
//
//double add(double x, double y){
//	return x + y;
//}
//
//double sub(double x, double y){
//	return x - y;
//}
//
//double mean(double x, double y){
//	return (x + y) / 2.0;
//}