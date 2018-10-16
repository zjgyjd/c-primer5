//Student�෶��
#include "fourteen.h"
using namespace std;
double Student::Average()const{
	if (scores.size() > 0)
		return scores.sum() / scores.size();
	else
		return 0;
}
const string & Student::Name()const{
	return name;
}
double & Student::operator[](int i){
	return scores[i];
}
double Student::operator[](int i)const{
	return scores[i];
}
ostream & Student::arr_out(ostream & os)const{
	int i;
	int lim = scores.size();
	if (lim > 0){
		for (i = 0; i < lim; i++){
			os << scores[i]<<" ";
			if (i % 5 == 4)//���һ��
				os << endl;
		}
		if (i % 5 != 0)//��Ϊ��ı����ͻ���
			os << endl;
	}
else
	os << " empty array ";
	return os;
}