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

