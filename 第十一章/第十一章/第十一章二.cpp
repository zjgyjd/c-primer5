////����ʱ�����޸�Ϊһ�����������ط���
//// <<�����ظ���show����
//#include <iostream>
//#include "eleven.h"
//using namespace std;
//Time::Time(){
//	hours = minutes = 0;//���캯����ʼ��
//}
//
//Time::Time(int h, int m){
//	hours = h;
//	minutes = m;
//}
//
//void Time::AddMin(int m){
//	minutes += m;
//	hours += minutes / 60;
//	minutes %= 60;
//}
//
//void Time::AddHr(int h){
//	hours += h;
//}
//
//void Time::Reset(int h, int m){
//	hours = h;
//	minutes = m;
//}
//
////Time Time::Sum(const Time & t)const{//ʹ��������Ϊ�����Ч�ʣ����Բ��ܸı�ֵ
//Time Time::operator+(const Time & t)const{//����������Ҫ��
//	Time sum;
//	sum.minutes = minutes + t.minutes;
//	sum.hours = hours + t.hours+sum.minutes/60;
//	sum.minutes %= 60;
//	return sum;//����ֵ���������ã�����ͬ������һ����
//}
//
//Time Time::operator-(const Time & t)const{
//	Time sum;
//	int tot1, tot2;
//	tot1 = t.minutes + 60 * t.hours;
//	tot2 = minutes + hours * 60;
//	sum.minutes = (tot2 - tot1) % 60;
//	sum.hours = (tot2-tot1) / 60;
//	return sum;
//}
//
////Time Time::operator*(const Time & t)const{
//Time operator*(double m,const Time & t){//��Ϊ�����������Բ���Ҫ::
//	Time sum;
//	//sum.minutes = t.minutes * m;//���double��ʧ
//	int totalmintes = (t.minutes + t.hours * 60)*m;//��Ϊ������60���Ƹ���ȷ
//	sum.hours = totalmintes/60;
//	sum.minutes = totalmintes % 60;
//	return sum;
//}
//
////void Time::Show()const{
////void operator<<(ostream & os,const Time & t){//����һ
// ostream & operator<<(ostream & os, const Time & t){//��������Ҫ�������ò�Ȼ�ᱻɾ��
//	os << t.hours << " hours, " << t.minutes << " minutes";
//	return os;
//}

////����һ��ʸ������
//#include <cmath>
//#include "eleven.h"
//using std::sin;
//using std::cos;
//using std::atan2;
//using std::cout;
//
//namespace VECTOR{
//	const double Rad_to_deg = 57.2957795130823;
//	//������˽�в���
//	void Vector::set_mag(){
//		mag = sqrt(x * x + y * y );//����
//	}
//	void Vector::set_ang(){
//		if (x == 0.0&&y == 0.0)
//			ang = 0;
//		else
//			ang = atan2(y, x);//�Ƕ�
//	}
//    //ֱ������˽�в���
//	void Vector::set_x(){
//		x = mag*cos(ang);
//	}
//	void Vector::set_y(){
//		y = mag*sin(ang);
//	}
//	//���в���
//	Vector::Vector(){
//		x = y = mag = ang = 0.0;
//		mode = 'r';
//	}
//
//	Vector::Vector(double n1, double n2, char form){//form��ʽ
//		mode = form;
//		if (form == 'r'){
//			x = n1;
//			y = n2;
//			set_mag();
//			set_ang();
//		}
//		else if (form == 'p'){
//			mag = n1;
//			ang = n2;
//			set_x();
//			set_y();
//		}
//		else{
//			cout << "Incorrect 3rd argument to Vector().....";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = 'r';
//		}
//	}
//
//	void Vector::set(double n1, double n2, char form){
//		mode = form;
//		if (form == 'r'){
//			x = n1;
//			y = n2;
//			set_ang();
//			set_mag();
//		}
//		else if (form == 'p')
//		{
//			mag = n1;
//			ang = n2;
//			set_x();
//			set_y();
//		}
//		else{
//			cout << "Incorrect 3rd argument to Vector().....";
//			cout << "vector set to 0\n";
//			x = y = mag = ang = 0.0;
//			mode = 'r';
//		}
//	}
//
//	Vector::~Vector(){
//
//	}
//
//	void Vector::polar_mode(){
//		mode = 'p';
//	}
//
//	void Vector::rect_mode(){
//		mode = 'r';
//	}
//
//	//����
//	Vector Vector::operator+(const Vector & b)const{
//		return Vector(x + b.x, y + b.y);//���ù��캯������һ����
//	}
//
//	Vector Vector::operator-(const Vector & b)const{
//		return Vector(x - b.x, y - b.y);
//	}
//
//	Vector Vector::operator-()const{//����ȡ����
//		return Vector(-x, -y);
//	}
//
//	Vector Vector::operator*(double n)const{
//		return Vector(n*x, n*y);
//	}
//	//��Ԫ����
//	Vector operator*(double n, const Vector & a){
//		return a * n;
//	}
//
//	std::ostream & operator<< (std::ostream & os, const Vector & a){
//		if (a.mode == 'r')
//			os << "(x,y) = (" << a.x << "," << a.y << ") ";
//		else if (a.mode == 'p')
//			os << "(m,a) = (" << a.mag << "," << a.ang * Rad_to_deg << ") ";
//		else
//			os << "Vector object mod is invalid";
//		return os;
//	}
//}

////����Ӣʯ����ʾ�࣬��ӽ������ת��Ϊint��double����
//#include <iostream>
//using std::cout;
//#include "eleven.h"
//
//Stonewt::Stonewt(double lbs){
//	stone = int(lbs) / Lbs_per_stn;
//	pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
//	pounds = lbs;
//}
//
//Stonewt::Stonewt(int stn, double lbs){
//	stone = stn;
//	pds_left = lbs;
//	pounds = stn * Lbs_per_stn + lbs;
//}
//
//Stonewt::Stonewt(){
//	stone = pounds = pds_left = 0;
//}
//
//Stonewt::~Stonewt(){
//
//}
//void Stonewt::show_lbs()const{
//	cout << pounds << "pounds\n";
//}
//void Stonewt::show_stn()const{
//	cout << stone << " stone, " << pds_left << " pounds\n";
//}
//
//Stonewt::operator int()const{
//	return int(pounds + 0.5);//������������
//}
//
//Stonewt::operator double()const{
//	return pounds;//��Ȼ����Ϊ�յ���Ȼ�з���ֵ
//}

////������������
//#include <iostream>
//using namespace std;
//#include "eleven.h"
//Complex::Complex(){
//	real = 0;
//	imaginary = 0;
//}
//Complex::Complex(int r){
//	real = r;
//	imaginary = 0;
//}
//
//Complex::Complex(int r, int i){
//	real = r;
//	imaginary = i;
//}
//
//Complex Complex::operator*(const Complex & a)const{
//	Complex temp;
//	temp.real = real*a.real - imaginary*a.imaginary;
//	temp.imaginary = real*a.imaginary+imaginary*a.real;
//	return temp;
//}
//
//Complex Complex::operator*(int n)const{
//	return Complex(real*n, imaginary*n);
//}
//Complex operator*(int n,const Complex & a){
//	return a * n;
//}
//
//Complex Complex::operator+(const Complex & a)const{
//	return Complex(real + a.real, imaginary + a.imaginary);
//}
//
//Complex Complex::operator-(const Complex & a)const{
//	return Complex(real - a.real, imaginary - a.imaginary);
//}
//
//Complex Complex::operator~()const{
//	return Complex(real, -imaginary);
//}
//
//std::ostream & operator<<(std::ostream & os, const Complex & d){
//	os << "(" << d.real << "," << d.imaginary << "i)\n";
//	return os;
//}
//
//std::istream & operator>>(std::istream & is,  Complex & d){//������const
//	std::cout << "real:";
//	if (is >> d.real){
//		std::cout << "imaginary:";
//		is >> d.imaginary;
//	}
//	return is;
//}