////����ʱ�����޸�Ϊһ�����������ط���,������Ԫ����
//// <<�����ظ���show����
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
////#include <iostream>
//using namespace std;
//class Time{
//private:
//	int hours;
//	int minutes;
//public:
//	Time();
//	Time(int h, int m = 0);
//	void AddMin(int m);//�ӷ���
//	void AddHr(int h);
//	void Reset(int h = 0, int m = 0);//����ʱ��
//	//Time Sum(const Time & t)const;//��ʱ��
//	Time operator+(const Time & t)const;//��sum��λoperator+��ζ�����ؼӺ�
//	Time operator-(const Time & t)const;//���ؼ���
//	//Time operator*(const Time & t)const;//���س˺�
//	friend Time operator*(double m, const Time & t);//��Ԫ������Ȼ�����е���������
//	//void Show()const;
//	//friend void operator<<(ostream & os, const Time & t);//����һ
//	friend ostream & operator<<(ostream & os, const Time & t);//������
//};
//
//#endif

////����һ��ʸ������
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
//#include <iostream>
//namespace VECTOR//vectorʸ��
//{
//	class Vector{
//	private:
//		double x;
//		double y;
//		double mag;//����
//		double ang;//�Ƕ�
//		char mode;//ģʽ��'r'ֱ�����꣬��p��������
//		void set_mag();
//		void set_ang();
//		void set_x();
//		void set_y();
//	public:
//		Vector();
//		Vector(double n1, double n2, char form = 'r');
//		void set(double n1, double n2, char form = 'r');
//		~Vector();
//		double xval()const{ return x; }
//		double yval()const{ return y; }
//		double magval()const{ return mag; }
//		double angval()const { return ang; }
//		void polar_mode();
//		void rect_mode();
//		//���ص�Ԫ
//		Vector operator+(const Vector & b)const;
//		Vector operator-(const Vector & b)const;
//		Vector operator-()const;////����ȡ����
//		Vector operator*(double n)const;
//		//��Ԫ����
//		friend Vector operator*(double n,const Vector & a);
//		friend std::ostream & operator<< (std::ostream & os, const Vector & a);
//	};
//}
//
//#endif

////����Ӣʯ����ʾ�࣬��ӽ������ת��Ϊint��double����
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
//
//class Stonewt{
//private:
//	enum{ Lbs_per_stn = 14 };//һӢʯ14bang
//	int stone;
//	double pds_left;
//	double pounds;
//public:
//	Stonewt(double lbs);
//	Stonewt(int stn, double lbs);
//	Stonewt();
//	~Stonewt();
//	void show_lbs()const;
//	void show_stn()const;
//	operator int()const;//��ת��Ϊint���ҸĽ�Ϊint����������
//	operator double()const;//��ת��Ϊdouble
//};
//
//#endif

////������������
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
//#include <iostream>
//class Complex{
//private:
//	int real;
//	int imaginary;
//public:
//	Complex();
//	Complex(int r , int i = 0);
//	Complex(int r);
//	Complex operator+(const Complex & a)const;
//	Complex operator-(const Complex & a)const;
//	Complex operator*(const Complex & a)const;
//	Complex operator*(int a)const;
//	Complex operator~()const;
//	friend Complex operator*(int n, const Complex & a);
//	friend std::ostream & operator<<(std::ostream & os, const Complex & d);
//	friend std::istream & operator>>(std::istream & is,  Complex & d);
//};
//
//#endif