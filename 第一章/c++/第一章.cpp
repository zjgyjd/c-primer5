#include <iostream>
#include <cmath>
void simon(int);//�β�
int longtom(int);
void tiwceone();
double changetem(double );
int main(){
	//int a;
	//using namespace std;
	//cout << "frist time use it."; //��һ��
	//cout << endl;
	//cout << "never forget it." << endl;
	// int fun(a);
	//cin.get();
	//
	//return 0;��һ��
	//using namespace std;
	//int carrot;
	//carrot = 25;
	//cout << "I have ";
	//cout <<    carrot  ;
	//cout << " carrots" << endl;//ֻ�����ַ���������ո�����ã��ڱ���������ո����ã�
	//carrot = carrot - 1;
	///*cout << "now I have ";
	//cout <<carrot;
	//cout << " carrots!" << endl;*/
	//cout << "emmmm Now I have " <<  carrot << " carrots!" << endl;//�ڶ���
	//cin.get();
	//return 0;�ڶ���
	//using namespace std;
	//int carrot;
	//cout << "How many carrots do you have?"<<endl;
	//cin >> carrot;
	//cout << "How more tow?" << endl;
	//	carrot = carrot + 2;
	//	cout << "Now you have " << carrot << " carrots!" << endl;
	//	cin.get();
	//	cin.get();//������ע����Ϊ��;������Ҫ�س���������Ҫͣס����Ҫ����
	//using namespace std;
	//double area;
	//cout << "Enter the floor area ,in square feet ,of you home:";//square feet ƽ��Ӣ��
	//	cin >> area;
	///*double side;*/
	//double side = sqrt(area);
	//cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
	//cin.get();
	//cin.get();//���ĸ�ע����ʹ�ã�cmath
	//using namespace std;
	//simon(3);
	//cout << "Enter a integer:";//integer ����
	//int times;
	//cin >> times;
	//simon(times);//����������ĵ���
	//cin.get();
	////cin.get();�����
	//using namespace std;
	//int weight;
	//cout << "Enter a weight in stone: ";
	//cin >> weight;
	//int change = stonetolb(weight);
	//cout << "the change is " << change << " pounds" << endl;
	//cin.get();
	//cin.get();�������з���ֵ����
	//using namespace std;
	//cout << "holle world!" << endl;
	//cin.get();
	//using namespace std;
	//cout << "Enter your name :";
	//char name [10];
	//cin >> name;
	//cout << "Enter your adress :";
	//char add [10];
	//cin >> add;
	//cout << "your name is " << name << " ,your adress is " << add << "!" << endl;
	//cin.get();
	//cin.get();�ڶ���
	//using namespace std;
	//tiwceone();
	//tiwceone();
	//cin.get();������
	using namespace std;
	cout << "Enter  a celsius value:";
	double a;
	cin >> a;
	double b=changetem (a);
	cout << a << " degrees celsius is " << b << " degrees fahrenheit" << endl;
	cin.get();
	cin.get();
}
double changetem(double a){
	return 1.8*a + 32;
}
void tiwceone(){
	using namespace std;
	cout << "Three blind mice" << endl;
}
void simon(int n){
	using namespace std;
	cout << "simon says touch your toes " << n << " times!" << endl;
}
int langtolm(int sts){//lang to maת��
	
	return sts * 220;

}