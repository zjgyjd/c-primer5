////���������������ƽ�����ܺ�define�����ƴ�����ǿ��
//#include <iostream>
//using namespace std;
//inline double square(double x){ return x*x; }//��������
//
//int main(){
//	using namespace std;
//	double a, b;
//	double c = 13.0;
//
//	a = square(5.0);
//	b = square(4.5 + 7.5);
//	cout << "a = " << a << " ,b = " << b << endl;
//	cout << "c = " << c;//c++�ԷֺŶ�ȡ��䣬�����������������������������c���ȱ�++�������c=��
//	cout<< ", c squared = " << square(c++) << endl;
//	cout << "Now c = " << c << endl;
//	system("pause");
//	return 0;
//}

////�������ñ�����������
//#include <iostream>
//int main(){
//	using namespace std;
//	int rats = 101;
//	int& rodents = rats;//���ñ����൱��ȡ��һ������
//	cout << "rats = " << rats;
//	cout << ",rodents = " << rodents << endl;
//	//rodents++;
//	//cout << "rats = " << rats;
//	//cout << ",rodents = " << rodents << endl;//����������һ�������൱�����������
//
//	cout << "rats address = " << &rats;//��Ϊ��ͬһ����ַ����������
//	cout << ",rodents address = " << &rodents << endl;
//	
//	//����ͼ��rats���������ø�Ϊbunnies
//	int bunnies = 50;
//	rodents = bunnies;//�����ǽ�50���ֵ������rats������
//	cout << "bunnies = " << bunnies;
//	cout << ",rats = " << rats;//��������ֵ��ͬ
//	cout << ", rodents = " << rodents << endl;
//
//	cout << "bunnies adreess = " << &bunnies;//��bunnies�����������ĵ�ַ��ȫ��ͬ
//	cout << ", rodents address = " << &rodents << endl;
//	system("pause");
//	return 0;
//
//}

////���������ã�ָ��ʹ�õĶԱȣ����ñ�����ʹ��
//#include <iostream>
//void swapr(int& a, int& b);
//void swapp(int* p, int* q);//������������ֵ
//void swapv(int a, int b);
//int main(){
//	using namespace std;
//	int wallet1 = 300;
//	int wallet2 = 350;
//
//	cout << "wallet1 = $" << wallet1;
//	cout << ", wallet2 = $" << wallet2 << endl;
//
//	cout << "Using references to swap contents:\n";//��������
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
//	temp = p;//Ҫ��������ĵ�ַ���У����ֻ�ǽ���*p�Ե�ַû���κ�Ӱ��
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

////��������������������������Լ����ò������ص�
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
//double refcube(const double& ra){//���û����const��ôx��ֵ�����ı�
//	//����const�����Ҫ�޸�ra��ֵ������ʾ��������ʱ��Ҫ����ʱ������ʾ
//	return ra*ra*ra;
//}

////���������ڽṹ
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
//	copycat = use(looper);//1.ָ��ṹ�����ã�ʹsysopref��Ϊlooper�ı���
//	//���Է���һ�����ý�����copycatֱ�Ӹ���looperЧ�ʸ���
//	cout << "Looper: " << looper.used << " use(s)\n";
//	cout << "Copycat: " << copycat.used << " use(s)\n";
//	cout << "use(looper): " << use(looper).used << " use(s)\n";
//	system("pause");//3.ʹ�ú������������ʳ�Ա�ṹ����ΪӦ����looper.used��ͬ
//	return 0;
//}
//
//const sysop& use(sysop& sysopref){//2.����һ��sysop�����ã�ͬ������Ҳ������һ��sysop
//	cout << sysopref.name << " says:\n";
//	cout << sysopref.quote << endl;
//	sysopref.used++;
//	return sysopref;
//}

////���������������
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
//	cout << "Your original string: " << input << endl;//�������ı�ԭ����ֵ
//	//original ԭʼ
//	result = version2(input, "###");
//	cout << "Your string as enhanced : " << result << endl;
//	cout << "Your original string: " << input << endl;//��Ϊ����ԭ����ֵ���ı�
//	cout << "Resetting original string.\n";
//	//input = copy;
//	//result = version3(input, "@@@");
//	//cout << "Your string enhanced: " << result << endl;//����
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
////	//return temp;//֮�������������Լ����ͷŵ��ڴ浼�³������
////}

////����̳к�����
//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//using namespace std;
//
//void file_it(ostream& os, double fo, const double fe[], int n);//����Ϊos
//��ͬ������ʹ��fout���fstream������
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
//	file_it(fout, objective, eps, LIMIT);//������д��.txt�ļ��У�
//	file_it(cout, objective, eps, LIMIT);//��������ʾ����Ļ��
//	cout << "Done\n";
//	system("pause");
//	return 0;
//}
//
//void file_it(ostream& os, double fo, const double fe[], int n){
//	ios_base::fmtflags initial;
//	initial = os.setf(ios_base::fixed);//seft���и�ʽ��
//	os.precision(0);//ָ����ʾ����С��
//	os << "Focal lenght of objective: " << fo << " mm\n";
//	os.setf(ios::showpoint);//������ʾС����ģʽ
//	os.precision(1);
//	os.width(12);//�´������ֶεĿ��
//	os << "f eyepiece";//��ζ����ַ���ռ12�����Ҷ���
//	os.width(15);
//	os << "magnification" << endl;
//	for (int i = 0; i < n; i++){
//		os.width(12);
//		os << fe[i];
//		os.width(15);
//		os << int(fo / fe[i] + 0.5) << endl;
//	}
//	os.setf(initial);//���ñ������������õĸ�ʽ
//}

////����������Ĭ�ϲ���
//#include <iostream>
//const int ArSize = 80;
//char* left(const char* str, int n = 1);//����ʱ����Ĭ�ϲ���
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
//	if (n < 0)//��ֹ�û����������
//		n = 0;//��n=0���ؿ��ַ�
//	char* p = new char[n + 1];//��ͨ��ѭ�����ж���n�����ַ������ȴ󣬽�Լ�½��ռ�
//	int i;//���з�ֹ�û������n>�ַ������ֵ
//	for (i = 0; i < n&&str[i]; i++){//str��i����ֹ������������������ַ��ͽ�����
//		p[i] = str[i];
//	}
//		while (i <= n)
//			p[i++] = '\0';
//		return p;	
//}

////���������أ�һ������ַ���һ��Ϊ����
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
//		cout << left(n, i) << endl;//��ʾǰnλ����
//		temp = left(trip, i);//��ʾǰnλ��ĸ
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
//	if (ct == 0 || num == 0)//��ֹ���ֺ�nΪ��
//		return 0;
//	while (n /= 10)//�������������м�λ
//		digits++;
//	if (digits > ct){
//		ct = digits - ct;//ѡ����Ҫɾ���ĺ�λ
//		while (ct--){
//			num /= 10;//��������ת������ɾ��
//			
//		}
//		return num;//1.��n��λ���󷵻�ȫ�� 2.����ѭ������ʣ�µ�
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
//	char* p = new char[n + 1];//����һ�����������ͬ
//	int i;
//	for (i = 0; i < n&&str[i]; i++)
//		p[i] = str[i];
//	while (i <= n)
//		p[i++] = '\0';
//	return p;
//}

////����ģ����н���
	//#include <iostream>
	//template<class Any>//�����Ͷ���ʱ�����ж�������
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
	//template<class Any>//����
	//void Swap(Any &a, Any &b){
	//	Any temp;
	//	temp = a;
	//	a = b;
	//	b = temp;
	//}

////���������ص�ģ��
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
//	cout << a[0] << a[1] << "/";//���Խ������������������
//	cout << a[2] << a[3] << "/";
//	for (int i = 4; i < Lim; i++){
//		cout << a[i];
//	}
//	cout << endl;
//}

////��ģ�庯�������廯ԭ�ͣ�ģ�庯�����������ȼ�
////���廯���ӣ��Լ�������ʽ
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
////template <> void Swap<job>(job &j1, job &j2);�޸�����ģ��������
//void Swap(job &j1, job &j2);
//void Show(job &j);
//
//int main(){
//	using namespace std;
//	cout.precision(2);//��λС��
//	cout.setf(ios::fixed, ios::floatfield);
//	int i = 10, j = 20;
//	cout << "Using compiler-generated int swapper:\n";
//	Swap(i, j);//��Ϊ�����ԣ��޸�ǰ���޸ĺ󶼿���
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
////template <> void Swap<job>(job &j1, job &j2){�޸�
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

////���ú���ʱ����ȫƥ������ƥ��
//#include <iostream>
//using namespace std;
////template <typename T>
////void ShowArray(T arr[], int n);
//
//template <typename T>//��Ϊ�����ܺ�
//T ShowArray(T arr[], int n);
//
////template <typename T>
////void ShowArray(T* arr[], int n);
//
//template <typename T>//ͬ����Ϊ�ܺ�
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
//	double* pd[3];//ָ�������൱��������ָ��
//	for (int i = 0; i < 3; i++)
//		pd[i] = &mr_E[i].amount;//�ֱ�ָ����int
//	//�нṹ���ʱ������
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
//	cout << "template A\n";//���Ԫ��
//	for (int i = 0; i < n; i++)
//		cout << arr[i] << ' ';
//	cout << endl;
//}
//
//template <typename T>
//T ShowArray(T arr[], int n){
//	T sum = 0;//��Ԫ�ص��ܺ�
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
//		cout << *arr[i] << ' ';//��ʾָ�����ֵ
//	cout << endl;
//}
//
//template <typename T>
//T ShowArray(T* arr[], int n){
//	T sum = 0;
//	for (int i = 0; i < n; i++)//���
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
////һ�������ַ�����ַ����ӡ�ַ����ĺ���
//void prfchar(char* str, int n){
//	cout << str << endl;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
////�ṹCandyBar������Ʒ�����ƣ�char����������double����������int��
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
//#include <cctype>//�����ļ��е�toupper����
//#include <string>
//using namespace std;
//void inshow(string &a);
////string�������ã�Сд���ɴ�д
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
//		a[i]=toupper(a[i]);//�˺�����Ҫ��ֵ��ת����ֵ�洢����
//	}
//	
//}

//#include <iostream>
//using namespace std;
//#include <cstring>
//struct stringy{
//	char* str;
//	int ct;//��������б����ĳ���
//};
//
////һ�����ͽṹǰ���ǽṹ���������ַ���
//void set(stringy &a, char* b){
//	int max;
//	max=strlen(b);
//	//char* temp = new char[max+1];
//	//for (int i = 0; i <= max;i++)
//	//temp[i] = b[i];//��ΪҪ��const�����Բ�����ֱ����ԭ���ĵ�ַ
//    a.str = b;//������Ҫ�½�һ����̬����
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

//��дģ�庯�����������ֵ����������һ��Ϊ���飬һ��ΪԪ����Ŀ
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
//ʹ�þ��廯��ָ��������󳤶��ַ���
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