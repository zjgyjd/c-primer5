////计算时间类修改为一个操作符重载范例,创建友元函数
//// <<的重载改造show函数
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
//	void AddMin(int m);//加分钟
//	void AddHr(int h);
//	void Reset(int h = 0, int m = 0);//重置时间
//	//Time Sum(const Time & t)const;//加时间
//	Time operator+(const Time & t)const;//将sum换位operator+意味着重载加号
//	Time operator-(const Time & t)const;//重载减号
//	//Time operator*(const Time & t)const;//重载乘号
//	friend Time operator*(double m, const Time & t);//友元函数虽然在类中但不属于类
//	//void Show()const;
//	//friend void operator<<(ostream & os, const Time & t);//方法一
//	friend ostream & operator<<(ostream & os, const Time & t);//方法二
//};
//
//#endif

////创建一个矢量的类
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
//#include <iostream>
//namespace VECTOR//vector矢量
//{
//	class Vector{
//	private:
//		double x;
//		double y;
//		double mag;//长度
//		double ang;//角度
//		char mode;//模式：'r'直角坐标，‘p’极坐标
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
//		//重载单元
//		Vector operator+(const Vector & b)const;
//		Vector operator-(const Vector & b)const;
//		Vector operator-()const;////代表取负号
//		Vector operator*(double n)const;
//		//友元函数
//		friend Vector operator*(double n,const Vector & a);
//		friend std::ostream & operator<< (std::ostream & os, const Vector & a);
//	};
//}
//
//#endif

////磅和英石来表示类，添加将类对象转化为int，double类型
//#ifndef ELEVEN_H_
//#define ELEVEN_H_
//
//class Stonewt{
//private:
//	enum{ Lbs_per_stn = 14 };//一英石14bang
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
//	operator int()const;//类转换为int，且改进为int会四舍五入
//	operator double()const;//类转换为double
//};
//
//#endif

////创建复数的类
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