//#include <iostream>
//int main(){
//	using namespace std;
//	
//	//int yams[3];//yams������
//	//yams[0] = 7;
//	//yams[1] = 8;
//	//yams[2] = 6;
//	//int yamcosts[3] = { 20 ,30 ,5 };
//	//cout << "Total yams = ";
//	//cout << yams[0] + yams[1] + yams[2] << endl;//����Ϊ21
//	//cout << "The package with " << yams[1] << " yams costs ";//yams[1]8��
//	//cout << yamcosts[1] << " cent per yam.\n";//30һ��
//	//int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	//total = total + yams[2] * yamcosts[2];//������410
//	//cout << "The total yams expense is " << total << " cents.\n";
//	//cout << "sizeof yams " << sizeof yams << endl;//��Ϊ��int����������һ��ռ4�ֽڣ�3��12�ֽ�
//	//cin.get();
//	//return 0;//��һ��
//	//char dog[5] = { 'b', 'e', 'a', 'u', 'x' };
//	//char cat[5] = { 'f', 'a', 't', 's', '\0' };
//	//cout << dog << endl << cat;
//	//cin.get();
//	//return 0;//�ڶ����������\0��βʹ������������������ַ��󣬻�����һЩ����
//
//
//}

//#include <iostream>
//#include <cstring>
//int main(){
//	using namespace std;
//	const int Size = 15;//����
//	char name[Size];
//	char name2[Size] = "C++owboy";
//	cout << "Howdy! i'm " << name2 << "!What's your name ?\n";
//	cin >> name;
//	cout << "Well, " << name << " your name has " << strlen(name)
//		<< " letters and is stored\n";
//	cout << "in an array of " << sizeof name << " bytes.\n";//�����������ȣ�15��charһ��һ�ֽ�
//	cout << "You initial is " << name[0] << ".\n";
//	name2[3] = '\0';
//	cout << "My first 3 characters of my name: "
//		<< name2 << endl;
//
//	cin.get();
//	cin.get();
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	const int Arsize = 20;
//	char name[Arsize];
//	char dessert[Arsize];
//	cout << "Enter your name : \n";
//	cin >> name;
//	cout << "Enter your favorite delicious:";
//	cin >> dessert;
//	cout << " I have some delicious " << dessert
//		<< " for you," << name << endl;
//
//	cin.get();
//	cin.get();
//	return 0;//����һ������ʱ������li bing �ᷢ�ֲ�����ڶ��γ����������
//	//��Ϊcin��ʱ���ո������ַ�����li�����һ�����룬bing����ڶ��Ρ�
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	const int Arsize = 20;
//	char name[Arsize];
//	char dessert[Arsize];
//	cout << "Enter your name : \n";
//	cin.getline(name, Arsize);//getline����¼���пո���ַ���ֱ�����ϻ���
//	cout << "Enter your favorite delicious:\n";
//	//cin.getline(dessert, Arsize);//����������������һ���Ǵ洢�����飬һ����ȡ�ַ���
//	//�ַ���Ϊ20ֻ������19�������һ������\0;cin�˺��������Զ����е�Ч��
//    cin.get (dessert, Arsize);//��getline��ͬ���ڻᱣ�����з������Ի�Ҫһ��get����
//	//cin.get( , ).get()�൱��cin.get( , );cin.get();������һ�������ĺϲ�
//	cout << " I have some delicious " << dessert
//		<< " for you," << name << endl;
//
//	cin.get();
//	cin.get();
//
//	return 0;//����һ������ʱ������li bing �ᷢ�ֲ�����ڶ��γ����������
//	//��Ϊcin��ʱ���ո������ַ�����li�����һ�����룬bing����ڶ��Ρ�
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	cout << "What year was your house build? \n";
//	int year;
//	//cin >> year;//��ʱ��Ϊ��ȡ��������һ���س��Ļ��з�������getlineֱ��������ַ�
//	(cin >> year).get();//����get������get��ch����������һ������ע��ƴ��ʱҪ������
//	cout << "What is its street address?\n";
//	char address[80];
//	cin.getline(address, 80);
//	cout << "Year built: " << year << endl;
//	cout << "Address " << address << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	char charr1[20];
//	char charr2[20] = "jaguar";//���޻�
//	string str1;
//	string str2 = "panther";//���ޱ�
//	cout << "Enter a kind of feline:\n";
//	(cin >> charr1).get();
//	cout << "Enter another kind of feline:\n";
//	(cin >> str1).get();
//	cout << "Here are some felines:\n";
//	cout << charr1 << " " << charr2 << " " << str1
//		<< " " << str2 << endl;
//	cout << " The third letter in " << charr2 << " is " << charr2[2] << endl;
//	cout << " The third letter in " << str2 << " is " << str2[2] << endl;
//	//ע��str���԰���Ҫ���ڴ�С�������string����char�ĵط���
//	//ͬ����������ַ����еĵ������ʣ�ȴ�����ٳ�ʼ��ʱд�������С
//���鲻����ֱ�Ӹ�ֵ�����飬��string����
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	string s1 = "penguin";//���
//	string s2, s3;
//	cout << "You can assign one string object to another: s2 = s1\n ";
//	//���Է���һ��string����һ��
//	s2 = s1;
//	cout << "s2 = " << s2 << ",s1 = " << s1 << endl;
//	cout << "You can assign a C-style string to a string object.\n";
//	//����һ��c�����ַ���
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2 : " << s2 << endl;
//	cout << "You can concatenate strings : s3 = s1 + s2\n";
//	//���Խ������ַ�����������
//	s3 = s1 + s2;
//	cout << "s3 : " << s3 << endl;
//	cout << "You can append strings.\n";
//	//���Ը���һ���ַ���
//	s1 += s2;
//	cout << "s1 += s2 yields s1 = " << s1 << endl;
//	//yields �õ�
//	s2 += " for a day";
//	cout << "s2+=\"for a day\"yields s2 = " << s2 << endl;
//	//ֱ�Ӽ�һ���ַ���
//
//	cin.get();
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//#include <string>
//int main(){
//	using namespace std;
//	char charr1[20];
//	char charr2[20]="jaguar";
//	string str1;
//	string str2 = "panther";
//	str1 = str2;
//	strcpy( charr1, charr2 );//��charr2���Ƶ�charr1
//	str1 += " pause";
//	strcat(charr1, " juice");
//	int len1 = str1.size();//�����湦����ͬ
//	int len2 = strlen(charr1);//���ַ�����
//	cout << "The string " << str1 << " contains " << len1
//		<< " characters.\n";
//	cout << "The string " << charr1 << " contains " << len2
//		<< " characters.\n";
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <cstring>
//int main(){
//	using namespace std;
//	char charr[20];
//	string str;
//	cout << "Lenght of string in charr before input: "
//		<< strlen(charr) << endl;
//	cout << "Lenght of string in str before input: "
//		<< str.size() << endl;
//	cout << "Enter a line of text:\n";
//	cin.getline(charr, 20);
//	cout << "You entered: " << charr << endl;
//	cout << "Enter another line of text:\n";
//	getline(cin,str);//�����֮ǰ��һ��������cin��Ϊ����ָ�������������룬��Ϊstr���Ե��ڴ�С���Բ��ò���
//    cout << "You entered: " << str << endl;
//	cout << "Lenght of string in charr after input: "
//		<< strlen(charr) << endl;
//	cout << "Lenght of string in str after input: "
//		<< str.size() << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//struct inflatable
//{
//	char name[20];
//	float volume;//����
//	double price;
//};
//int main(){
//	using namespace std;
//	inflatable guest = { "Glorious Gloria", 1.88, 29.99 };//�ṹ������
//	inflatable pal = { "Audacious Arthur", 3.12, 32.99 };
//	cout << "Expand your guest list with " << guest.name;
//	cout << " and " << pal.name << "!\n";
//	cout << "You can have both for $";
//	cout << guest.price + pal.price << "!\n";
//	cin.get();
//	return 0;
//}

//#include <iostream>
//struct inflatable{
//	char name[20];
//	float volume;
//	double price;
//};
//int main(){
//	using namespace std;
//	inflatable guest[2] = { //�ṹ������
//		{ "Bambi", 0.5, 21.99 },
//		{ "Godzilla",2000,565.99 }
//	};
//	cout << "The guest " << guest[0].name[0] << " and " << guest[1].name[0]
//		<< "\nhave a combined volume of "
//		<< guest[0].volume + guest[1].volume << " cubic feet.\n";
//	cin.get();
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	int* pt = new int;
//	*pt = 1001;
//	int a = 1002;
//	cout << "int value = " << *pt << ";location = " << pt << endl;
//	double* pd = new double;//double* pd;������Σ�յģ���ʹ��new������ʱ����ֵ
//	*pd = 10000001.0;
//	cout << "double value = " << *pd << ";location = " << pd << endl;
//	cout << "size of pt = " << sizeof pt << endl;
//	cout << "size of *pt = " << sizeof *pt << endl;
//	cout << "size of pd = " << sizeof pd << endl;
//	cout << "size of *pd = " << sizeof *pd << endl;
//	delete pt;//�ͷ�����ָ���ŵĵ�ַ��������ָ����Ȼ���ڵ��ͷ�֮����ʽ���޷�Ԥ��
//	cin.get();
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	double* p3 = new double[3];
//	p3[0] = 0.2;
//	p3[1] = 0.5;
//	p3[2] = 0.8;
//	cout << "p3[1] is " << p3[1] << endl;
//	p3 += 1;//ָ��������Ĳ�������޷��޸���������ֵ����ָ����Խ���ָ����һ��
//	cout << "Now p3[0] = " << p3[0] << endl;
//	cout << "p3[1] = " << p3[1] << endl;
//	p3 -= 1;
//	delete [] p3;
//	cin.get();
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	double wages[3] = { 10000.0, 20000.0, 30000.0 };
//	short stacks[3] = { 3,2,1 };
//	double* pw = wages;
//	short* ps = &stacks[0];
//	cout << "pw = " << pw << " ,*pw = " << *pw << endl;
//  pw += 1;
//	cout << "add 1 to pow pointer:\n";
//	cout << "pw = " << pw << " ,*pw = " << *pw << endl;
//	cout << "ps = " << ps << " ,*ps = " << *ps << endl;
//	ps += 1;
//	cout << "add 1 to pow pointer:\n";
//	cout << "ps = " << ps << " ,*ps = " << *ps << endl;
//	
//	cout << "access tow elements with array notation\n";
//	cout << "stacks[0] = " << stacks[0] << ",stacks[1] = " << stacks[1] << endl;
//	cout << "access tow elements with point notation\n";
//	cout << "*stacks = " << *stacks << ",*(stacks+1) = " << *(stacks + 1) << endl;
//
//	cout << "size of wages = " << sizeof wages;//��������Ĵ�С
//	cout << "size of pw pointer = " << sizeof pw;
//	cin.get();
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	char animal[20] = "bear";
//	char* ps;
//	const char* bird = "wren";//�൱��һ���ַ�������ʹ��
//	cout << animal << endl;
//	cout << bird << endl;
//	cout << "Enter a kind of animal: ";
//	(cin >> animal).get();
//	ps = animal;//�����Ḵ���ַ���ֻ�Ǻ�animalһ��ָ���ַ�ת��ַ
//	cout << ps << "s!\n";
//	cout << "Before using strcpy ():\n";
//	cout << animal << " at " << (int*)animal << endl;//char* ���ӡ�ַ���
//	cout << ps << " at " << (int*)ps << endl;//����Ҫǿ��ת��Ϊint*��ӡ��ַ
//	ps = new char[strlen(animal) + 1];
//	strcpy(ps, animal);
//	cout << "After using strcpy ():\n";
//	cout << animal << " at " << (int*)animal << endl;
//	cout << ps << " at " << (int*)ps << endl;
//	delete[] ps;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//struct inflatable{
//	char name[20];
//	float volume;//���
//	double price;
//};
//int main(){
//	using namespace std;
//	inflatable* ps = new inflatable;
//	cout << "Enter a member of name : \n";
//	cin.get(ps->name, 20);
//	cout << "Enter a member of volum : \n";
//	cin >> (*ps).volume;
//	cout << "Enter a member of price : $";
//	(cin >> ps->price).get();
//	cout << "Name: " << ps->name << endl
//		<< "Volume: " << (*ps).volume << endl
//		<< "Price: " << ps->price << endl;
//	delete ps;
//	cin.get();
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//using namespace std;
//char* nameget(){
//	char temp[80];
//	cout << "Enter last name : ";
//	(cin >> temp).get();
//	char* pn = new char[strlen(temp) + 1];
//	strcpy(pn, temp);//���Ը���ÿ�γ��Ȳ�ͬ�����ڴ��С
//	cout << "size of pn = " << strlen(pn) << endl;
//	return pn;
//}
//int main(){
//	char* name;
//	name = nameget();
//	cout << name << " at " << (int*)name <<endl;
//	delete[] name;//�������ε�ַ�������
//	name = nameget();
//	cout << name << " at " << (int*)name << endl;
//	delete[] name;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	cout << "What's your first name? \n";
//	char fname[20];
//	cin.getline(fname, 20);
//	cout << "What's your last name? \n";
//	char lname[20];
//	cin.getline(lname, 20);
//	cout << "What letter grade do you deserve? \n";
//	char gra;
//	(cin >> gra).get();//����ǿ��ת������ʹA��acseii���һ
//	int ad = gra+1;
//	cout << "What's your age? \n";
//	int age=gra;
//	
//	(cin >> age).get();
//	cout << "Name: " << lname << ", " << fname << endl;
//	cout << "Grade: " << char (ad) << endl;
//	cout << "Age: " << age << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	//const int Arsize = 20;
//	//char name[Arsize];
//	//char dessert[Arsize];
//	string name;
//	string dessert;
//	cout << "Enter your name : \n";
//	getline(cin,name);//getline����¼���пո���ַ���ֱ�����ϻ���
//	cout << "Enter your favorite delicious:\n";
//	//cin.getline(dessert, Arsize);//����������������һ���Ǵ洢�����飬һ����ȡ�ַ���
//	//�ַ���Ϊ20ֻ������19�������һ������\0;cin�˺��������Զ����е�Ч��
//	getline(cin,dessert);//��getline��ͬ���ڻᱣ�����з������Ի�Ҫһ��get����
//	//cin.get( , ).get()�൱��cin.get( , );cin.get();������һ�������ĺϲ�
//	cout << " I have some delicious " << dessert
//		<< " for you," << name << endl;
//
//	cin.get();
//	cin.get();
//
//	return 0;//����һ������ʱ������li bing �ᷢ�ֲ�����ڶ��γ����������
//	//��Ϊcin��ʱ���ո������ַ�����li�����һ�����룬bing����ڶ��Ρ�
//}

//#define  _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <cstring>
//int main(){
//	using namespace std;
//	cout << "Enter your first name: \n";
//	char f[20];
//	cin >> f;
//	cout << "Enter your last name: \n";
//	char l[20];
//	(cin>>l).get();
//	strcat(l, ", ");
//	//ֱ�ӽ�������ַ����ӵ�ǰ����ܵ��������������strncat��newchar��l��20�����
//	 strcat(l,f );//newchar���ȶ���Ϊ[20*2+1]�Լ����д[20-1]='\0';
//	 //strncat���Խ������ַ������Ӳ������һ���ַ��������Կ����ַ�������
//	 cout << "single string: " << l << endl;
//	cin.get();
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	cout << "Enter your first name: \n";
//	string f;
//	(cin >> f).get();
//	cout << "Enter your last name: \n";
//	string l;
//	(cin >> l).get();
//	l = l + ", " + f;
//	cout << "single string: " << l << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//const int Size = 100;
//struct Pize
//{
//	char name[Size];
//	double d;
//	double weight;
//};
//int main(){
//	using namespace std;
//	Pize* first = new Pize;//��̬���治Ҫ����ָ��
//	cout << "Enter the company name:\n";
//	cin.getline(first->name, Size);//ָ���Ҫ��->
//	cout << "Enter the pize's diameter:\n";
//	cin >> first->d;
//	cout << "Enter the pize's weight:\n";
//	(cin >> first->weight).get();
//	cout << "name = " << first->name << endl
//		<< "d = " << first->d << endl
//		<< "weight = " << first->weight << endl;
//	delete first;
//	cin.get();
//	return 0;
// }

//#include <iostream>
//#include <string>
//using namespace std;
//struct inflatable{
//	
//	string name;
//	float volume;//���
//	double price;
//};
//int main(){
//	
//	inflatable* ps = new inflatable[3];//��̬��������
//	cout << "Enter a member of name : \n";//��ps[0]=;��ʼ��
//	getline(cin,ps[0].name);//string�����ô˷��������ַ���
//	cout << "Enter a member of volum : \n";
//	cin >> (*ps).volume;
//	cout << "Enter a member of price : $";
//	(cin >> ps[1].price).get();
//	(cin >> ps[0].price).get();
//	cout << "Name: " << ps->name << endl//�ɽ����֪�˷�������Ϊps[0].name��ֵ
//		<< "Volume: " << (*ps).volume << endl
//		<< "Price2: " << ps[0].price << endl
//		<< "Price1: " << ps[1].price << endl;
//	delete[] ps;
//	cin.get();
//	return 0;
//}