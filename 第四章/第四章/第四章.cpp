//#include <iostream>
//int main(){
//	using namespace std;
//	
//	//int yams[3];//yams马铃薯
//	//yams[0] = 7;
//	//yams[1] = 8;
//	//yams[2] = 6;
//	//int yamcosts[3] = { 20 ,30 ,5 };
//	//cout << "Total yams = ";
//	//cout << yams[0] + yams[1] + yams[2] << endl;//总数为21
//	//cout << "The package with " << yams[1] << " yams costs ";//yams[1]8个
//	//cout << yamcosts[1] << " cent per yam.\n";//30一个
//	//int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
//	//total = total + yams[2] * yamcosts[2];//总消费410
//	//cout << "The total yams expense is " << total << " cents.\n";
//	//cout << "sizeof yams " << sizeof yams << endl;//因为是int形数组所以一个占4字节，3个12字节
//	//cin.get();
//	//return 0;//第一个
//	//char dog[5] = { 'b', 'e', 'a', 'u', 'x' };
//	//char cat[5] = { 'f', 'a', 't', 's', '\0' };
//	//cout << dog << endl << cat;
//	//cin.get();
//	//return 0;//第二个如果不以\0结尾使用这种输出在输出五个字符后，还会有一些乱码
//
//
//}

//#include <iostream>
//#include <cstring>
//int main(){
//	using namespace std;
//	const int Size = 15;//常量
//	char name[Size];
//	char name2[Size] = "C++owboy";
//	cout << "Howdy! i'm " << name2 << "!What's your name ?\n";
//	cin >> name;
//	cout << "Well, " << name << " your name has " << strlen(name)
//		<< " letters and is stored\n";
//	cout << "in an array of " << sizeof name << " bytes.\n";//数组所带长度，15个char一个一字节
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
//	return 0;//当第一次输入时，输入li bing 会发现不用输第二次程序就走完了
//	//因为cin此时靠空格区别字符串，li存入第一次输入，bing存入第二次。
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	const int Arsize = 20;
//	char name[Arsize];
//	char dessert[Arsize];
//	cout << "Enter your name : \n";
//	cin.getline(name, Arsize);//getline可以录入有空格的字符，直到遇上换行
//	cout << "Enter your favorite delicious:\n";
//	//cin.getline(dessert, Arsize);//括号内两个参数，一个是存储的数组，一个读取字符数
//	//字符数为20只能输入19个，最后一个留给\0;cin此函数还有自动换行的效果
//    cin.get (dessert, Arsize);//与getline不同在于会保留换行符，所以还要一个get（）
//	//cin.get( , ).get()相当于cin.get( , );cin.get();所以是一个函数的合并
//	cout << " I have some delicious " << dessert
//		<< " for you," << name << endl;
//
//	cin.get();
//	cin.get();
//
//	return 0;//当第一次输入时，输入li bing 会发现不用输第二次程序就走完了
//	//因为cin此时靠空格区别字符串，li存入第一次输入，bing存入第二次。
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	cout << "What year was your house build? \n";
//	int year;
//	//cin >> year;//此时因为读取完后会留下一个回车的换行符，导致getline直接输出空字符
//	(cin >> year).get();//利用get（）或get（ch），无括号一般输入注意拼接时要加括号
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
//	char charr2[20] = "jaguar";//美洲虎
//	string str1;
//	string str2 = "panther";//美洲豹
//	cout << "Enter a kind of feline:\n";
//	(cin >> charr1).get();
//	cout << "Enter another kind of feline:\n";
//	(cin >> str1).get();
//	cout << "Here are some felines:\n";
//	cout << charr1 << " " << charr2 << " " << str1
//		<< " " << str2 << endl;
//	cout << " The third letter in " << charr2 << " is " << charr2[2] << endl;
//	cout << " The third letter in " << str2 << " is " << str2[2] << endl;
//	//注意str可以按需要调节大小，这就是string优于char的地方，
//	//同样可以输出字符串中的单个单词，却不用再初始化时写出数组大小
//数组不可以直接赋值给数组，但string可以
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	string s1 = "penguin";//企鹅
//	string s2, s3;
//	cout << "You can assign one string object to another: s2 = s1\n ";
//	//可以分配一个string给另一个
//	s2 = s1;
//	cout << "s2 = " << s2 << ",s1 = " << s1 << endl;
//	cout << "You can assign a C-style string to a string object.\n";
//	//分配一个c风格的字符串
//	cout << "s2 = \"buzzard\"\n";
//	s2 = "buzzard";
//	cout << "s2 : " << s2 << endl;
//	cout << "You can concatenate strings : s3 = s1 + s2\n";
//	//可以将两个字符串连接起来
//	s3 = s1 + s2;
//	cout << "s3 : " << s3 << endl;
//	cout << "You can append strings.\n";
//	//可以附加一段字符串
//	s1 += s2;
//	cout << "s1 += s2 yields s1 = " << s1 << endl;
//	//yields 得到
//	s2 += " for a day";
//	cout << "s2+=\"for a day\"yields s2 = " << s2 << endl;
//	//直接加一段字符串
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
//	strcpy( charr1, charr2 );//把charr2复制到charr1
//	str1 += " pause";
//	strcat(charr1, " juice");
//	int len1 = str1.size();//与下面功能相同
//	int len2 = strlen(charr1);//数字符长度
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
//	getline(cin,str);//这里和之前不一样，这里cin作为参数指出到哪里找输入，因为str可以调节大小所以不用参数
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
//	float volume;//容量
//	double price;
//};
//int main(){
//	using namespace std;
//	inflatable guest = { "Glorious Gloria", 1.88, 29.99 };//结构体声明
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
//	inflatable guest[2] = { //结构体数组
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
//	double* pd = new double;//double* pd;这样是危险的，但使用new可以暂时不赋值
//	*pd = 10000001.0;
//	cout << "double value = " << *pd << ";location = " << pd << endl;
//	cout << "size of pt = " << sizeof pt << endl;
//	cout << "size of *pt = " << sizeof *pt << endl;
//	cout << "size of pd = " << sizeof pd << endl;
//	cout << "size of *pd = " << sizeof *pd << endl;
//	delete pt;//释放两个指针存放的地址，但两个指针依然存在但释放之后访问结果无法预料
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
//	p3 += 1;//指针与数组的差别，数组无法修改数组名的值，但指针可以将它指向下一个
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
//	cout << "size of wages = " << sizeof wages;//整个数组的大小
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
//	const char* bird = "wren";//相当于一个字符串常量使用
//	cout << animal << endl;
//	cout << bird << endl;
//	cout << "Enter a kind of animal: ";
//	(cin >> animal).get();
//	ps = animal;//并不会复制字符串只是和animal一样指向字符转地址
//	cout << ps << "s!\n";
//	cout << "Before using strcpy ():\n";
//	cout << animal << " at " << (int*)animal << endl;//char* 会打印字符串
//	cout << ps << " at " << (int*)ps << endl;//所以要强制转换为int*打印地址
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
//	float volume;//体积
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
//	strcpy(pn, temp);//可以根据每次长度不同调整内存大小
//	cout << "size of pn = " << strlen(pn) << endl;
//	return pn;
//}
//int main(){
//	char* name;
//	name = nameget();
//	cout << name << " at " << (int*)name <<endl;
//	delete[] name;//由于两次地址毫不相关
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
//	(cin >> gra).get();//利用强制转换类型使A的acseii码加一
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
//	getline(cin,name);//getline可以录入有空格的字符，直到遇上换行
//	cout << "Enter your favorite delicious:\n";
//	//cin.getline(dessert, Arsize);//括号内两个参数，一个是存储的数组，一个读取字符数
//	//字符数为20只能输入19个，最后一个留给\0;cin此函数还有自动换行的效果
//	getline(cin,dessert);//与getline不同在于会保留换行符，所以还要一个get（）
//	//cin.get( , ).get()相当于cin.get( , );cin.get();所以是一个函数的合并
//	cout << " I have some delicious " << dessert
//		<< " for you," << name << endl;
//
//	cin.get();
//	cin.get();
//
//	return 0;//当第一次输入时，输入li bing 会发现不用输第二次程序就走完了
//	//因为cin此时靠空格区别字符串，li存入第一次输入，bing存入第二次。
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
//	//直接将后面的字符串加到前面可能导致溢出，可以用strncat（newchar，l，20）解决
//	 strcat(l,f );//newchar长度定义为[20*2+1]以及最后写[20-1]='\0';
//	 //strncat可以将两个字符串连接并赋予第一个字符串最后可以控制字符串长度
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
//	Pize* first = new Pize;//动态储存不要忘了指针
//	cout << "Enter the company name:\n";
//	cin.getline(first->name, Size);//指针就要用->
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
//	float volume;//体积
//	double price;
//};
//int main(){
//	
//	inflatable* ps = new inflatable[3];//动态分配数组
//	cout << "Enter a member of name : \n";//用ps[0]=;初始化
//	getline(cin,ps[0].name);//string可以用此方法输入字符串
//	cout << "Enter a member of volum : \n";
//	cin >> (*ps).volume;
//	cout << "Enter a member of price : $";
//	(cin >> ps[1].price).get();
//	(cin >> ps[0].price).get();
//	cout << "Name: " << ps->name << endl//由结果可知此方法可以为ps[0].name赋值
//		<< "Volume: " << (*ps).volume << endl
//		<< "Price2: " << ps[0].price << endl
//		<< "Price1: " << ps[1].price << endl;
//	delete[] ps;
//	cin.get();
//	return 0;
//}