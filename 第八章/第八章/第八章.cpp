////内联函数计算参数平方功能和define有相似处但更强大
//#include <iostream>
//using namespace std;
//inline double square(double x){ return x*x; }//内联函数
//
//int main(){
//	using namespace std;
//	double a, b;
//	double c = 13.0;
//
//	a = square(5.0);
//	b = square(4.5 + 7.5);
//	cout << "a = " << a << " ,b = " << b << endl;
//	cout << "c = " << c;//c++以分号读取语句，如果将这个句子与下面的输入相连则c会先被++，在输出c=；
//	cout<< ", c squared = " << square(c++) << endl;
//	cout << "Now c = " << c << endl;
//	system("pause");
//	return 0;
//}

////创建引用变量基本属性
//#include <iostream>
//int main(){
//	using namespace std;
//	int rats = 101;
//	int& rodents = rats;//引用变量相当于取了一个别名
//	cout << "rats = " << rats;
//	cout << ",rodents = " << rodents << endl;
//	//rodents++;
//	//cout << "rats = " << rats;
//	//cout << ",rodents = " << rodents << endl;//对其中任意一个操作相当于两个都会变
//
//	cout << "rats address = " << &rats;//因为是同一个地址的两个名字
//	cout << ",rodents address = " << &rodents << endl;
//	
//	//若试图将rats变量的引用改为bunnies
//	int bunnies = 50;
//	rodents = bunnies;//仅仅是将50这个值赋予了rats的引用
//	cout << "bunnies = " << bunnies;
//	cout << ",rats = " << rats;//导致三个值相同
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies adreess = " << &bunnies;//但bunnies和其他两个的地址完全不同
//	cout << ", rodents address = " << &rodents << endl;
//	system("pause");
//	return 0;
//
//}

////函数中引用，指针使用的对比，引用变量的使用
//#include <iostream>
//void swapr(int& a, int& b);
//void swapp(int* p, int* q);//交换两个数的值
//void swapv(int a, int b);
//int main(){
//	using namespace std;
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = $" << wallet1;
//	cout << ", wallet2 = $" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";//利用引用
//	swapr(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << ", wallet2 = $" << wallet2 << endl;
//
//	cout << "Using pointers to swap contents:\n";
//	swapp(&wallet1, &wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << "wallet2 = $" << wallet2 << endl;
//
//	cout << "Tring to use passing by value:\n";
//	swapv(wallet1, wallet2);
//	cout << "wallet1 = $" << wallet1;
//	cout << "wallet2 = $" << wallet2 << endl;
//	system("pause");
//	return 0;
//}
//
//void swapr(int& a, int& b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//void swapp(int* p, int* q){
//	int* temp;
//	temp = p;//要交换里面的地址才行，如果只是交换*p对地址没有任何影响
//	p = q;
//	q = temp;
//}
//
//void swapv(int a, int b){
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}

////两个函数来计算参数的立方，以及引用参数的特点
//#include <iostream>
//double cube(double a);
//double refcube(const double& ra);
//int main(){
//	using namespace std;
//	double x = 3.0;
//
//	cout << cube(x);
//	cout << " = cube of " << x << endl;
//	cout << refcube(x);
//	cout << " = cube of " << x << endl;
//	system("pause");
//	return 0;
//}
//
//double cube(double a){
//	a *= a*a;
//	return a;
//}
//
//double refcube(const double& ra){//如果没有用const那么x的值将被改变
//	//有了const会对想要修改ra的值做出提示，在引用时需要常量时做出提示
//	return ra*ra*ra;
//}

////将引用用于结构
//#include <iostream>
//using namespace std;
//struct sysop{
//	char name[26];
//	char quote[64];
//	int used;
//};
//
//const sysop& use(sysop& sysopref);
//
//int main(){
//	sysop looper = {
//		"Rick \"Fortran\" Looper",
//		"I'm a goto kind of guy.",
//		0
//	};
//
//	use(looper);
//	cout << "Looper: " << looper.used << " use(s)\n";
//	sysop copycat;
//	copycat = use(looper);//1.指向结构的引用，使sysopref成为looper的别名
//	//所以返回一个引用将导致copycat直接复制looper效率更高
//	cout << "Looper: " << looper.used << " use(s)\n";
//	cout << "Copycat: " << copycat.used << " use(s)\n";
//	cout << "use(looper): " << use(looper).used << " use(s)\n";
//	system("pause");//3.使用函数调用来访问成员结构，因为应用与looper.used相同
//	return 0;
//}
//
//const sysop& use(sysop& sysopref){//2.返回一个sysop的引用，同样参数也是引用一个sysop
//	cout << sysopref.name << " says:\n";
//	cout << sysopref.quote << endl;
//	sysopref.used++;
//	return sysopref;
//}

////将引用用于类对象
//#include <iostream>
//#include <string>
//using namespace std;
//string version1(const string& s1, const string& s2);
//const string& version2(string& s1, const string& s2);
//const string& version3(string& s1, const string& s2);
//
//int main(){
//	string input;
//	string copy;
//	string result;
//
//	cout << "Enter a string : ";
//	getline(cin, input);
//	copy = input;
//	cout << "Your string as entered : " << input << endl;
//	result = version1(input, "***");
//	cout << "Your string enhanced: " << result << endl;
//	cout << "Your original string: " << input << endl;//函数不改变原来的值
//	//original 原始
//	result = version2(input, "###");
//	cout << "Your string as enhanced : " << result << endl;
//	cout << "Your original string: " << input << endl;//因为引用原来的值被改变
//	cout << "Resetting original string.\n";
//	//input = copy;
//	//result = version3(input, "@@@");
//	//cout << "Your string enhanced: " << result << endl;//崩溃
//	//cout << "Your original string: " << input << endl;
//	system("pause");
//	return 0;
//}
//
//string version1(const string& s1, const string& s2){
//	string temp;
//	temp = s2 + s1 + s2;
//	return temp;
//}
//
//const string& version2(string& s1, const string& s2){
//	s1 = s2 + s1 + s2;
//	return s1;
//}
//
////const string& version3(string& s1, const string& s2){
////	//string temp;
////	temp = s2 + s1 + s2;
////	//return temp;//之后引用引用了以及被释放的内存导致程序崩溃
////}

////对象继承和引用
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//void file_it(ostream& os, double fo, const double fe[], int n);//类型为os
//但同样可以使用fout这个fstream派生类
//const int LIMIT = 5;
//int main(){
//	ofstream fout;
//	const char* fn = "ep-data.txt";
//	fout.open(fn);
//	if (!fout.is_open()){
//		cout << "Can't open " << fn << ",Bye.\n";
//		exit(EXIT_FAILURE);
//	}
//	double objective;
//	cout << "Enter the focal length of your "
//		"telescope objective in mm: ";
//	cin >> objective;
//	double eps[LIMIT];
//	cout << "Enter the focal length,in mm, of " << LIMIT << " eyepieces:\n";
//	for (int i = 0; i < LIMIT; i++){
//		cout << "Eyepiece #" << i + 1 << ": ";
//		cin >> eps[i];
//	}
//	file_it(fout, objective, eps, LIMIT);//将代码写到.txt文件中，
//	file_it(cout, objective, eps, LIMIT);//将代码显示到屏幕上
//	cout << "Done\n";
//	system("pause");
//	return 0;
//}
//
//void file_it(ostream& os, double fo, const double fe[], int n){
//	ios_base::fmtflags initial;
//	initial = os.setf(ios_base::fixed);//seft进行格式化
//	os.precision(0);//指定显示多少小数
//	os << "Focal lenght of objective: " << fo << " mm\n";
//	os.setf(ios::showpoint);//置于显示小数点模式
//	os.precision(1);
//	os.width(12);//下次输入字段的宽度
//	os << "f eyepiece";//意味这个字符串占12格向右对齐
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < n; i++){
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//	os.setf(initial);//利用变量来传送设置的格式
//}

////给函数设置默认参数
//#include <iostream>
//const int ArSize = 80;
//char* left(const char* str, int n = 1);//声明时设置默认参数
//int main(){
//	using namespace std;
//	char sample[ArSize];
//	cout << "Enter a string: \n";
//	cin.get(sample ,ArSize);
//	char* ps = left(sample, 4);
//	cout << ps << endl;
//	delete [] ps;
//	ps = left(sample);
//	cout << ps << endl;
//	delete[] ps;
//	system("pause");
//	return 0;
//}
//
//char* left(const char* str, int n){
//	if (n < 0)//防止用户输入非正数
//		n = 0;//让n=0返回空字符
//	char* p = new char[n + 1];//可通过循环来判断是n大还是字符串长度大，节约新建空间
//	int i;//还有防止用户输入的n>字符串最大值
//	for (i = 0; i < n&&str[i]; i++){//str【i】防止了这种情况，遇到空字符就结束了
//		p[i] = str[i];
//	}
//		while (i <= n)
//			p[i++] = '\0';
//		return p;	
//}

////函数的重载，一个输出字符，一个为数字
//#include <iostream>
//unsigned long left(unsigned long num, unsigned ct);
//char* left(const char* str, int n = 1);
//int main(){
//	using namespace std;
//	char* trip = "Hawaii!!";
//	unsigned long n = 12345678;
//	int i;
//	char* temp;
//	//cout << "herr!!\n";
//	for (i = 1; i < 10; i++){
//		cout << left(n, i) << endl;//显示前n位数字
//		temp = left(trip, i);//显示前n位字母
//		cout << temp << endl;
//		delete[] temp;
//	}
//	system("pause");
//	return 0;
//}
//
//unsigned long left(unsigned long num, unsigned ct){
//	unsigned digits = 1;
//	unsigned long n = num;
//
//	if (ct == 0 || num == 0)//防止数字和n为零
//		return 0;
//	while (n /= 10)//计算该数字最大有几位
//		digits++;
//	if (digits > ct){
//		ct = digits - ct;//选出需要删除的后几位
//		while (ct--){
//			num /= 10;//利用类型转换依次删除
//			
//		}
//		return num;//1.若n比位数大返回全部 2.走完循环返回剩下的
//	}
//	else
//	{
//		return num;
//	}
//}
//
//char* left(const char* str, int n){
//	if (n < 0)
//		n = 0;
//	char* p = new char[n + 1];//与上一个程序基本相同
//	int i;
//	for (i = 0; i < n&&str[i]; i++)
//		p[i] = str[i];
//	while (i <= n)
//		p[i++] = '\0';
//	return p;
//}

////函数模板进行交换
	//#include <iostream>
	//template<class Any>//声明和定义时这两行都不能少
	//void Swap(Any &a, Any &b);
	//
	//int main(){
	//	using namespace std;
	//	int i = 10;
	//	int j = 20;
	//	cout << "i,j = " << i << ", " << j << ". \n";
	//	cout << "Using compiler-generated int swapper:\n";
	//	Swap(i, j);
	//	cout << "Now i,j = " << i << " ," << j << ".\n";
	//
	//	double x = 24.5;
	//	double y = 81.7;
	//	cout << "x,y = " << x << ", " << y << ".\n";
	//	Swap(x, y);
	//	cout << "Now x,y = " << x << " ," << y << ".\n";
	//	system("pause");
	//	return 0;
	//}
	//
	//template<class Any>//定义
	//void Swap(Any &a, Any &b){
	//	Any temp;
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}

////交换中重载的模板
//#include <iostream>
//template <class Any>
//void  Swap(Any &a, Any &b);
//
//template <class Any>
//void Swap(Any *a, Any *b, int n);
//
//void Show(int a[]);
//const int Lim = 8;
//int main(){
//	using namespace std;
//	int i = 10, j = 20;
//	cout << "i,j = " << i << ", " << j << ".\n";
//	cout << "Using compiler-generated int swapper: \n";
//	Swap(i, j);
//	cout << "Now i,j = " << i << ", " << j << ".\n";
//
//	int d1[Lim] = { 0, 7, 0, 4, 1, 7, 7, 6 };
//	int d2[Lim] = { 0, 6, 2, 0, 1, 9, 6, 9 };
//	cout << "Original arrays:\n";
//	Show(d1);
//	Show(d2);
//	Swap(d1, d2,Lim);
//	cout << "Swapped arrays:\n";
//	Show(d1);
//	Show(d2);
//	system("pause");
//	return 0;
//}
//
//template <class Any>
//void Swap(Any &a, Any &b){
//		Any temp;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//
//template <class Any>
//void Swap(Any a[], Any b[], int n){
//	Any temp;
//	for (int i = 0; i < n; i++){
//		temp = a[i];
//		a[i] = b[i];
//		b[i] = temp;
//	}
//}
//
//void Show(int a[]){
//	using namespace std;
//	cout << a[0] << a[1] << "/";//可以将数组像日期那样打出
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++){
//		cout << a[i];
//	}
//	cout << endl;
//}

////非模板函数，具体化原型，模板函数，按此优先级
////具体化例子，以及工作方式
//#include <iostream>
//template <class Any>
//void Swap(Any &a, Any &b);
//
//struct job{
//	char name[40];
//	double salary;
//	int floor;
//};
//
////template <> void Swap<job>(job &j1, job &j2);修改利用模板优先性
//void Swap(job &j1, job &j2);
//void Show(job &j);
//
//int main(){
//	using namespace std;
//	cout.precision(2);//两位小数
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i, j);//因为优先性，修改前和修改后都可以
//	cout << "Now i,j = " << i << ", " << j << ".\n";
//
//	job sue = { "Susan Yaffee", 73000.60, 7 };
//	job sidney = { "Sidney Taffee", 78060.72, 9 };
//	cout << "Before job swapping :\n";
//	Show(sue);
//	Show(sidney);
//	Swap(sue, sidney);
//	cout << "After job swapping :\n";
//	Show(sue);
//	Show(sidney);
//	system("pause");
//	return 0;
//}
//
//template <class Any>
//void Swap(Any &a, Any &b){
//	Any temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
////template <> void Swap<job>(job &j1, job &j2){修改
//void Swap(job &j1, job &j2){
//	double t1;
//	int t2;
//	t1 = j1.salary;
//	j1.salary = j2.salary;
//	j2.salary = t1;
//	t2 = j1.floor;
//	j1.floor = j2.floor;
//	j2.floor = t2;
//}
//
//void Show(job &j){
//	using namespace std;
//	cout << j.name << ": $" << j.salary
//		<< " on floor " << j.floor << endl;
//}

////调用函数时的完全匹配和最佳匹配
//#include <iostream>
//using namespace std;
////template <typename T>
////void ShowArray(T arr[], int n);
//
//template <typename T>//改为返回总和
//T ShowArray(T arr[], int n);
//
////template <typename T>
////void ShowArray(T* arr[], int n);
//
//template <typename T>//同样改为总和
//T ShowArray(T* arr[], int n);
//
//struct debts{
//	char name[50];
//	double amount;
//};
//
//int main(){
//	using namespace std;
//	int things[6] = { 13, 31, 103, 301, 310, 130 };
//	struct debts mr_E[3] = {
//		{ "Ima Wolfe",2400.0 },
//		{ "Ura Foxe ",1300.0 },
//		{ "Iby Stout",1800.0 }
//	};
//	double* pd[3];//指针数组相当于有三个指针
//	for (int i = 0; i < 3; i++)
//		pd[i] = &mr_E[i].amount;//分别指三个int
//	//有结构体的时候会出现
//	cout << "Listing Mr.E's counts of things:\n";
//	int max1;
//	double max2;
//	max1=ShowArray(things, 6);
//	cout << max1 << endl;
//	cout << "Listing Mr.E's debts:\n";
//	max2=ShowArray(pd, 3);
//	cout << max2 << endl;
//	system("pause");
//	return 0;
//}
//
//template <typename T>
//void ShowArray(T arr[], int n){
//	using namespace std;
//	cout << "template A\n";//输出元素
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//}
//
//template <typename T>
//T ShowArray(T arr[], int n){
//	T sum = 0;//求元素的总和
//	for (int i = 0; i < n; i++){
//		sum += arr[i];
//	}
//	return sum;
//}
//
//template <typename T>
//void ShowArray(T* arr[], int n){
//	using namespace std;
//	cout << "template B\n";
//	for (int i = 0; i < n; i++)
//		cout << *arr[i] << ' ';//显示指针里的值
//	cout << endl;
//}
//
//template <typename T>
//T ShowArray(T* arr[], int n){
//	T sum = 0;
//	for (int i = 0; i < n; i++)//求和
//		sum += *arr[i];
//	return sum;
//}

//#include <iostream>
//void prfchar(char* str, int n = 1);
//using namespace std;
//int main(){
//	char a[ ] = "sldjalwidjla";
//	prfchar(a);
//	prfchar(a, 8);
//	system("pause");
//	return 0;
//}
////一个接受字符串地址，打印字符串的函数
//void prfchar(char* str, int n){
//	cout << str << endl;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
////结构CandyBar，包含品牌名称（char），重量（double），热量（int）
//struct CandyBar{
//	char name[50];
//	double weight;
//	int heat;
//};
//using namespace std;
//void inShow( CandyBar &a, char* b = "Millen Munch", double c = 2.85, int d = 350);
//
//int main(){
//	CandyBar product;
//	inShow(product);
//	cout << product.name << endl;
//	system("pause");
//	return 0;
//}
//
//void inShow(CandyBar &a, char* b, double c, int d){
//	a.heat = d;
//	a.weight = c;
//	//a.name = b;
//	strcpy(a.name, b);
//}

//#include <iostream>
//#include <cctype>//引用文件中的toupper函数
//#include <string>
//using namespace std;
//void inshow(string &a);
////string对象引用，小写换成大写
//int main(){
//	string str;
//	cout << "Enter a string (q to quit): ";
//	getline(cin, str);
//	while(str != "q"){
//		inshow(str);
//		cout << str << endl;
//		cout << "Next string (q to quit): ";
//		getline(cin, str);
//	}
//	cout << "Bye\n";
//	system("pause");
//	return 0;
//}
//void inshow(string &a){
//	cout << "here\n";
//	int max = a.size();
//	for (int i = 0; i < max; i++){
//		a[i]=toupper(a[i]);//此函数需要赋值将转换后值存储起来
//	}
//	
//}

//#include <iostream>
//using namespace std;
//#include <cstring>
//struct stringy{
//	char* str;
//	int ct;//不包括反斜杠零的长度
//};
//
////一个传送结构前面是结构，后面是字符串
//void set(stringy &a, char* b){
//	int max;
//	max=strlen(b);
//	//char* temp = new char[max+1];
//	//for (int i = 0; i <= max;i++)
//	//temp[i] = b[i];//因为要用const，所以不允许直接用原来的地址
//    a.str = b;//所以需要新建一个动态数组
//	a.ct = max;
//}
//
//void show(stringy &a){
//	cout << "Str = " << a.str << endl
//		<< "Lenght = " << a.ct << endl;
//}
//int main(){
//	stringy beany;
//	char testing[] = "Reality isn't what it used to be.sadawdas sadwa";
//	set(beany, testing);
//	show(beany);
//	beany.str = "jhklhj";
//	cout << testing << endl;
//	show(beany);
//	//delete beany.str;
//	system("pause");
//	return 0;
//}

//编写模板函数求数组最大值，两个参数一个为数组，一个为元素数目
#include <iostream>
using namespace std;
template <class Any>
Any max5(Any* a,int n);

template<>char* max5(char* a[], int n);
int main(){
	int max1;
	double max2;
	int a[ ] = { 3, 5, 8, 45, 2 ,89};
	double b[ ] = { 2.3, 3.6, 5.2, 45.8 };
	int len1 = sizeof(a) / sizeof a[0];
	int len2 = sizeof(b) / sizeof b[0];
	max1 = max5(a,len1);
	max2 = max5(b,len2);
	cout << "int max = " << max1 << endl;
	cout << "double max = " << max2 << endl;
//使用具体化求指针数组最大长度字符串
	char* str[4] = {
		"acbdefg",
		"ghjklpo",
		"yh632032465",
		"5d3v8m9eyhl"
	};
	char* max=new char;
	max = max5(str,4);
	cout << max << endl;
	system("pause");
	return 0;
}

template <class Any>
Any max5(Any* a,int n){
	Any max;
	max = a[0];
	for (int i = 1; i < n; i++){
		if (a[i]>max)
			max = a[i];
	}
	return max;
}

template<>char* max5(char* a[], int n){
	int max = strlen(a[0]);
	int max2 = 0;
	for (int i = 1; i < n; i++){
		if (strlen(a[i])>max){
			max = strlen(a[i]);
			max2 = i;
		}
	}
	return a[max2];
}