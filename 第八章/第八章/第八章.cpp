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

