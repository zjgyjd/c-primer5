////Student类范例
//#include "fourteen.h"
//using namespace std;
//double Student::Average()const{
//	if (scores.size() > 0)
//		return scores.sum() / scores.size();
//	else
//		return 0;
//}
//const string & Student::Name()const{
//	return name;
//}
//double & Student::operator[](int i){
//	return scores[i];
//}
//double Student::operator[](int i)const{
//	return scores[i];
//}
//ostream & Student::arr_out(ostream & os)const{
//	int i;
//	int lim = scores.size();
//	if (lim > 0){
//		for (i = 0; i < lim; i++){
//			os << scores[i]<<" ";
//			if (i % 5 == 4)//五个一换
//				os << endl;
//		}
//		if (i % 5 != 0)//不为五的倍数就换行
//			os << endl;
//	}
//else
//	os << " empty array ";
//	return os;
//}
//istream & operator>>(istream & is, Student & stu){
//	is >> stu.name;
//	return is;
//}
//istream & getline(istream & is, Student & stu){
//	getline(is, stu.name);
//	return is;
//}
//ostream & operator<<(ostream & os, const Student & stu){
//	os << "The scorce of " << stu.name << endl;
//	stu.arr_out(os);
//	return os;;
//}

////私有类继承Student类
//#include "fourteen.h"
//using namespace std;
//double Student::Average()const{
//	if (ArrayDb::size() > 0)
//		return ArrayDb::sum() / ArrayDb::size();
//	else
//		return 0;
//}
//const string & Student::Name() const{
//	return(const string &) *this;
//}
//double & Student::operator[](int i){
//	return ArrayDb::operator[](i);
//}
//double  Student::operator[](int i)const{
//	return ArrayDb::operator[](i);
//}
//ostream & Student::arr_out(ostream & os)const{
//	int i;
//	int lim = ArrayDb::size();
//	if (lim > 0){
//		for (i = 0; i < lim; i++){
//			os << ArrayDb::operator[](i) << " ";
//			if (i % 5 == 4)
//				os << endl;
//		}
//		if (i % 5 != 0)
//			os << endl;
//	}
//	else
//		os << " empty array ";
//	return os;
//}
//istream & operator>>(istream & is, Student & stu){
//	is >> (string &)stu;
//	return is;
//}
//istream & getline(istream & is, Student & stu){
//	getline(is, (string &)stu);
//	return is;
//}
//ostream & operator<<(ostream & os, const Student & stu){
//	os << "Scores for " << (const string &)stu << ":\n";
//	stu.arr_out(os);
//	return os;
//}

////worker类MI写法
//#include "fourteen.h"
//#include <iostream>
//using namespace std;
//Worker::~Worker(){}
//void Worker::Set(){
//	cout << "Enter worker's name: ";
//	getline(cin, fullname);
//	cout << "Enter worker's ID: ";
//	cin >> id;
//	while (cin.get() != '\n')
//		continue;
//}
//void Worker::Show()const{
//	cout << "Name: " << fullname << "\n";
//	cout << "Employee ID: " << id << "\n";
//}
//void Waiter::Set(){
//	Worker::Set();
//	cout << "Enter waiter's panache rating: ";
//	cin >> panache;
//	while (cin.get() != '\n')
//		continue;
//}
//void Waiter::Show()const{
//	cout << "Category: waiter\n";
//	Worker::Show();
//	cout << "Panache rating: " << panache << "\n";
//}
//char* Singer::pv[] = { "other", "alto", "contralto",
//"soprano", "bass", "baritone", "tenor" };
//void Singer::Set(){
//	Worker::Set();
//	cout << "Enter number for singer's vocal range: \n";
//	int i;
//	for (i = 0; i < Vtypes; i++){
//		cout << i << ": " << pv[i] << "  ";
//		if (i % 4 == 3)
//			cout << endl;
//	}
//	if (i % 4 != 0)
//		cout << endl;
//	cin >> voice;
//	while (cin.get() != '\n')
//		continue;
//}
//void Singer::Show()const{
//	cout << "Category: singer\n";
//	Worker::Show();
//	cout << "Vocal range: " << pv[voice] << endl;
//}

//Worker类MI改进
#include "fourteen.h"
#include <iostream>
using namespace std;
Worker::~Worker(){}
void Worker::Data()const{
	cout << "Name: " << fullname << endl;
	cout << "Employee ID: " << id << endl;
}
void Worker::Get(){
	getline(cin, fullname);
	cout << "Enter Worker's ID: ";
	cin >> id;
	while (cin.get() != '\0')
		continue;
}
void Waiter::Set(){
	cout << "Enter waiter's name: ";
	Worker::Get();
	Get();
}
void Waiter::Show()const{
	cout << "Category: waiter\n";
	Worker::Data();
	Data();
}
void Waiter::Data()const{
	cout << "Panache rating: " << panache << endl;
}
void Waiter::Get(){
	cout << "Enter waiter's panache rating: ";
	cin >> panache;
	while (cin.get() != '\n')
		continue;
}
char* Singer::pv[Singer::Vtypes] = { "other", "alto", "contralto",
"soprano", "bass", "baritone", "tenor" };
void Singer::Set(){
	cout << "Enter singer's name: ";
	Worker::Get();
	Get();
}
void Singer::Show()const{
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}
void Singer::Data()const{
	cout << "Vocal range: " << pv[voice] << endl;
}
void Singer::Get(){
	cout << "Enter number for singer's vocal range: \n";
	int i;
	for (i = 0; i < Vtypes; i++){
		cout << i << ": " << pv[i] << "  ";
		if (i % 4 == 3)
			cout << endl;
	}
	if (i % 4 != 0)
		cout << endl;
	cin >> voice;
	while (cin.get() != '\n')
		continue;
}
void SingingWaiter::Data()const{
	Singer::Data();
	Waiter::Data();
}
void SingingWaiter::Get(){
	Waiter::Get();
	Singer::Get(); 
}
void SingingWaiter::Set(){
	cout << "Enter singing waiter's name: ";
	Worker::Get();
	Get();
}
void SingingWaiter::Show()const{
	cout << "Catagory: singing waiter\n";
	Worker::Data();
	Data();
}