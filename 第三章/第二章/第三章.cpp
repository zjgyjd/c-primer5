#include <iostream>
#define ZERO 0
#include <climits>
#include <cmath>
//double fun(int a, int b);//(int,int)也可以
int main ()
{ 
	//using namespace std;
	//int n_int = INT_MAX;
	//short n_short = SHRT_MAX;
	//long n_long = LONG_MAX;
	//cout << "int is " << sizeof n_int << " bytes" << endl;//若直接对变量名int则需要括号
	//cout << "short is " << sizeof n_short << " bytes" << endl;
	//cout << "long is " << sizeof n_long << " bytes" << endl;
	//cout << endl;
	//cout << "Maxinum values :" << endl;  
	//	cout << "int: " << n_int << endl;
	//	cout << "short: " << n_short << endl;
	//	cout << "long: " << n_long << endl << endl;
	//	cout << "Minimum int value: " << INT_MIN << endl;
	//	cout << "bits per byte = " << CHAR_MIN << endl;
	//cin.get();
	//return 0;//第一个查看各关键字所占字节
	//using namespace std;
	//short sam = SHRT_MAX;
	//unsigned short sum = sam;
	//cout << "Sam has " << sam << " dollars and Sum has "
	//	<< sum << " dollars" << endl << "give one for eachother " << endl;
	//sam = sam + 1;
	//sum = sum + 1;
	//cout << "Sam has " << sam << " dollars and Sum has "
	//	<< sum << " dollars\nPoor Sam !" << endl;
	//sam = ZERO;
	//sum = ZERO;
	//cout << "Sam has " << sam << " dollars and Sum has "
	//	<< sum << " dollars" << endl;
	//cout << "take one for account."//拿走
	//	<< endl;
	//sam = sam - 1;
	//sum = sum - 1;
	//cout << "Sam has " << sam << " dollars and Sum has "
	//	<< sum << " dollars" << endl << "lucky sum!" << endl;
	//cin.get();
	//return 0;第二个显示有符号无符号加一的结果，以及有符号溢出会变负，无符号零减一为最大
	//using namespace std;
	//int chest = 42;
	//int waist = 42;
	//int inseam = 42;//胸围 腰围 大腿内侧
	//cout << "Monsieur cuts a striking figure!" << endl;
	//cout << "chest is " << chest << " decimal" << endl;
	//cout << hex;//十六进制
	//cout << "waist is " << waist << " hexadecimal" << endl;
	//cout << oct;//八进制
	//cout << "inseam is " << inseam << " octal" << endl;
	//cout << dec;//回归十进制
	//cout << "inseam is " << inseam << " octal" << endl;
	//cin.get();
	//return 0;//第三个输出进制间的转换

	//using namespace std;
	//char ch = 'M';
	//int i = ch;
	//cout << "The ASCII code for " << ch << " is " << i << endl;
	//cout << "add one to the character code :" << endl;
	//ch = ch + 1;
	//i = ch;
	//cout << "The ASCII code for " << ch << " is " << i << endl;
	//cout << "Displaying char ch using cout.put (ch): ";
	//cout.put(ch);
	//	cout.put('!');
	//	cin.get();
	//	return 0;//第四个cout.put(ch);可以在数据流中插入一个字符
	//using namespace std;
	//char c = 'M';
	//cout << 'M';//输出M
	//cin.get();//老版本会输出数字77，所以会有上述插入一个字符的方法
	//using namespace std;
	//char alarm = '\a';
	//cout << alarm << "Don't do that again!\a\n";
	//cout << " Ben \"Buggsie\" Hacker \ nwas here!\n";
	//cin.get();
	//return 0;//当输出为字符串时用\n更快，输出为数据时用endl
	//using namespace std;
	//cout << "\aOperation \"HyperHype\" is now activated !\n";
	//cout << "Enter your ID code:________\b\b\b\b\b\b\b\b";//一个\b可以将光标往前退一个8个正好退到开头
	//long code;
	//cin >> code;
	//cout << "\aYou entered " << code << "....\n";
	//cout << "\aCode verified Proceed with Plan Z3!\n ";
	//cin.get();
	//cin.get();
	//return 0;//第五个\a可以鸣叫 
	//using namespace std;
	//cout.setf(ios_base::fixed, ios_base::floatfield);
	//float tub = 10. / 3.0;
	//double mint = 10. / 3.0;
	//const float million = 1.0e6;
	//cout << "tub= " << tub;
	//cout << ",a million tub = " << million * tub
	//	<< ",\nand ten million tub = " << 10 * million * tub << endl;
	//cout << " mint = " << tub << " and a million mint = " << million * mint << endl;
	//cin.get();
	//return 0;//第六个说明了float精度低只有六位精确数字乘以百万后会出错
	//using namespace std;
	//float a = 2.34e+22f;
	//float b = a + 1;
	//cout << "a = " << a << endl;
	//cout << "b - a = " << b - a << endl;
	//cin.get();
	//return 0;//第七个再次表明精度不够，本该为一显示结果为零
 //   using namespace std;
	//cout.setf(ios_base::fixed, ios_base::floatfield);//让数字完全显示，不会出现2.34e+22
	//cout << "Integer division : 9 / 5 = " << 9 / 5 << endl;
	//cout << "Float division : 9/5 = " << 9.0 / 5.0 << endl;
	//cout << "Mixed division : 9/5 = " << 9.0 / 5 << endl;//混合
	//cout << "Double division : 9/5 = " << 9.0 / 5.0 << endl;
	//cout << "Double constanst : 1e7/9.0 = " << 1e7 / 9.0 << endl;
	//cout << "Float constanst : 1e7/9.0 = " << 1e7f / 9.0f << endl;
	//cin.get();
	//return 0;//第八个各种情况下运算结果
 //   using namespace std;
	//const int Lbs_per = 14;
	//int lbs;
	//cout << "Enter your weight of pounds : ";
	//cin >> lbs;
	//int stone = lbs / Lbs_per;
	//int pound = lbs % Lbs_per;
	//cout << lbs << " pounds are " << stone << " stone," << pound << " pound(s)\n";
	//cin.get();
	//cin.get();
	//return 0;//第九个利用取余得到小数部分的余数
  //   using namespace std;
	 //int auks, bats, coots;
	 //auks = 19.99 + 11.99;//先浮点在转换
	 //bats = int(19.99) + int(11.99);//c++写法 先转换在浮点
	 //coots = (int)19.99 + (int)11.99;//c写法
	 //cout << "auks = " << auks << endl;
	 //cout << "bats = " << bats << ",coots = " << coots << endl;
	 //char ch = 'Z';
	 //cout << "the code for " << ch << " is " << int(ch) << endl;
	 //cin.get();
	 //return 0;//第十个

	//   using namespace std;
	//int inch = 0,feet = 0; //1英尺等于12英寸
	//const int factor = 12;//factor因子
	//cout << "Enter your height in feet : ____\b\b\b\b ";//\b后面不要跟\n
	//cin >> feet;
	//inch = feet / factor;
	//feet = feet % factor;
	//cout << "Your height is " << inch << " inch " << feet << " feet \n";
	//cin.get();
	//cin.get();
	//return 0;//第一题

	//using namespace std;
	//int inch = 0, feet = 0, pound = 0;
	//double meter = 0, kg = 0;
	//const double sg = 0.0254, tz = 2.2;//一英寸等于0.0254米；一千克等于2.2磅
 //  //以几英尺几英寸输入身高，以磅为单位输入体重
	//cout << "Enter you height in inch and feet ,and enter your weight in pound : \n";
	////cout << "_________\b\b";
	////cout << " inch";
	//cin >> inch >> feet >> pound;
	//cout << inch << " inch " << feet << " feet " << pound << " pound\n";
	//meter = (inch * 12 + feet)*sg;
	//kg = pound / tz;
	//cout << "The BMI is " << kg / pow(meter, 2) << endl;
	//cin.get();
	//cin.get();

	//using namespace std;
	//const double point = 60.0;
	//cout << "Enter a latitude in degrees, minutes, and seconds :\n"
	//	<< "First enter the degrees : ";//将用角，分，秒的角度化为全用角
	//int degrees;
	//cin >> degrees;
	//cout << "\nNext enter the minutes of arc : ";
	//int minutes;
	//cin >> minutes;
	//cout << "\nFinally enter the seconds of arc : ";
	//int seconds;
	//cin >> seconds;
	//cout << degrees << " degrees " << minutes << " minutes " << seconds << " seconds = "
	//	<< (seconds / point + minutes) / point + degrees << " degrees\n";
	//cin.get();
	//cin.get();
	//cin.get();
	//cin.get();
		//using namespace std;
		//cout << "Enter a time in seconds : ";
		//long seconds;//输入一个秒，显示有多少天，多少小时，多少分钟；
		//cin >> seconds;
		//const long t = 60, d = 24;
		//long day = 0, hour = 0, minute = 0;
		// day = seconds / (t*t*d);
		// hour = seconds / (t*t) - day*d;
		// minute = seconds / (t) - (hour*t+day*d*t);
		// cout << seconds << " seconds = " << day << " days, " << hour << " hours, "
		//	 << minute << " minutes " << seconds%t << " seconds!\n";
		// cin.get();
		// cin.get();



}
//double fun(int a, int b){
//	return a / b;
//}
