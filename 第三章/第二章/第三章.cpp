#include <iostream>
#define ZERO 0
#include <climits>
#include <cmath>
//double fun(int a, int b);//(int,int)Ҳ����
int main ()
{ 
	//using namespace std;
	//int n_int = INT_MAX;
	//short n_short = SHRT_MAX;
	//long n_long = LONG_MAX;
	//cout << "int is " << sizeof n_int << " bytes" << endl;//��ֱ�ӶԱ�����int����Ҫ����
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
	//return 0;//��һ���鿴���ؼ�����ռ�ֽ�
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
	//cout << "take one for account."//����
	//	<< endl;
	//sam = sam - 1;
	//sum = sum - 1;
	//cout << "Sam has " << sam << " dollars and Sum has "
	//	<< sum << " dollars" << endl << "lucky sum!" << endl;
	//cin.get();
	//return 0;�ڶ�����ʾ�з����޷��ż�һ�Ľ�����Լ��з��������为���޷������һΪ���
	//using namespace std;
	//int chest = 42;
	//int waist = 42;
	//int inseam = 42;//��Χ ��Χ �����ڲ�
	//cout << "Monsieur cuts a striking figure!" << endl;
	//cout << "chest is " << chest << " decimal" << endl;
	//cout << hex;//ʮ������
	//cout << "waist is " << waist << " hexadecimal" << endl;
	//cout << oct;//�˽���
	//cout << "inseam is " << inseam << " octal" << endl;
	//cout << dec;//�ع�ʮ����
	//cout << "inseam is " << inseam << " octal" << endl;
	//cin.get();
	//return 0;//������������Ƽ��ת��

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
	//	return 0;//���ĸ�cout.put(ch);�������������в���һ���ַ�
	//using namespace std;
	//char c = 'M';
	//cout << 'M';//���M
	//cin.get();//�ϰ汾���������77�����Ի�����������һ���ַ��ķ���
	//using namespace std;
	//char alarm = '\a';
	//cout << alarm << "Don't do that again!\a\n";
	//cout << " Ben \"Buggsie\" Hacker \ nwas here!\n";
	//cin.get();
	//return 0;//�����Ϊ�ַ���ʱ��\n���죬���Ϊ����ʱ��endl
	//using namespace std;
	//cout << "\aOperation \"HyperHype\" is now activated !\n";
	//cout << "Enter your ID code:________\b\b\b\b\b\b\b\b";//һ��\b���Խ������ǰ��һ��8�������˵���ͷ
	//long code;
	//cin >> code;
	//cout << "\aYou entered " << code << "....\n";
	//cout << "\aCode verified Proceed with Plan Z3!\n ";
	//cin.get();
	//cin.get();
	//return 0;//�����\a�������� 
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
	//return 0;//������˵����float���ȵ�ֻ����λ��ȷ���ֳ��԰��������
	//using namespace std;
	//float a = 2.34e+22f;
	//float b = a + 1;
	//cout << "a = " << a << endl;
	//cout << "b - a = " << b - a << endl;
	//cin.get();
	//return 0;//���߸��ٴα������Ȳ���������Ϊһ��ʾ���Ϊ��
 //   using namespace std;
	//cout.setf(ios_base::fixed, ios_base::floatfield);//��������ȫ��ʾ���������2.34e+22
	//cout << "Integer division : 9 / 5 = " << 9 / 5 << endl;
	//cout << "Float division : 9/5 = " << 9.0 / 5.0 << endl;
	//cout << "Mixed division : 9/5 = " << 9.0 / 5 << endl;//���
	//cout << "Double division : 9/5 = " << 9.0 / 5.0 << endl;
	//cout << "Double constanst : 1e7/9.0 = " << 1e7 / 9.0 << endl;
	//cout << "Float constanst : 1e7/9.0 = " << 1e7f / 9.0f << endl;
	//cin.get();
	//return 0;//�ڰ˸����������������
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
	//return 0;//�ھŸ�����ȡ��õ�С�����ֵ�����
  //   using namespace std;
	 //int auks, bats, coots;
	 //auks = 19.99 + 11.99;//�ȸ�����ת��
	 //bats = int(19.99) + int(11.99);//c++д�� ��ת���ڸ���
	 //coots = (int)19.99 + (int)11.99;//cд��
	 //cout << "auks = " << auks << endl;
	 //cout << "bats = " << bats << ",coots = " << coots << endl;
	 //char ch = 'Z';
	 //cout << "the code for " << ch << " is " << int(ch) << endl;
	 //cin.get();
	 //return 0;//��ʮ��

	//   using namespace std;
	//int inch = 0,feet = 0; //1Ӣ�ߵ���12Ӣ��
	//const int factor = 12;//factor����
	//cout << "Enter your height in feet : ____\b\b\b\b ";//\b���治Ҫ��\n
	//cin >> feet;
	//inch = feet / factor;
	//feet = feet % factor;
	//cout << "Your height is " << inch << " inch " << feet << " feet \n";
	//cin.get();
	//cin.get();
	//return 0;//��һ��

	//using namespace std;
	//int inch = 0, feet = 0, pound = 0;
	//double meter = 0, kg = 0;
	//const double sg = 0.0254, tz = 2.2;//һӢ�����0.0254�ף�һǧ�˵���2.2��
 //  //�Լ�Ӣ�߼�Ӣ��������ߣ��԰�Ϊ��λ��������
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
	//	<< "First enter the degrees : ";//���ýǣ��֣���ĽǶȻ�Ϊȫ�ý�
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
		//long seconds;//����һ���룬��ʾ�ж����죬����Сʱ�����ٷ��ӣ�
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
