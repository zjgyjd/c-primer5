////���������пո������ַ���������'.'����
//#include <iostream>
//int main(){
//	using namespace std;
//	char ch;
//	int space=0;
//	int total=0;
//	cin.get(ch);//�й��ַ����뾡����Ҫ�ټ�.get()��Ե���һ���ַ�
//	while (ch != '.'){
//		if (ch == ' ')
//			space++;          //���лس�Ҳ��һ���ַ������������ľ��
//		total++;
//		cin.get(ch);
//	}
//	cout << space << " spaces, " << total << " characters total in sentence\n";
//
//	system("pause");
//	return 0;
//}

////��������ľ��ӣ����в��������ĸ
//#include <iostream>
//int main(){
//	using namespace std;
//	char ch;
//	cin.get(ch);
//	while (ch != '.'){
//		if (ch == '\n'){
//			cout << ch;//����ڵ��ַ���ѭ������ַ�������һ����ĸ
//		}//�������ϡ�\n���Ż���һ���У�ͬʱ���ַ�ʱҲ�������\n��
//		else{
//			cout << ++ch;
//		}
//		cin.get(ch);
//	}
//	system("pause");
//	return 0;
//}

////ͨ��cctype�ļ���ȷ���ַ�
//#include <iostream>
//#include <cctype>
//int main(){
//	using namespace std;
//	cout << "Enter text for analysis,and type'@'finish.\n";
//	char ch;
//	int whitespace = 0;
//	int digits = 0;
//	int chars = 0;
//	int punct = 0;
//	int others = 0;
//
//	cin.get(ch);
//	while (ch != '@'){
//		if (isalpha(ch)){//�Ƿ�Ϊ��ĸ�ַ�
//			chars++;
//		}
//		else if (isspace(ch)){//�Ƿ�Ϊ�հ׷������绻��
//			whitespace++;
//		}
//		else if (isdigit(ch)){//�Ƿ�Ϊ�����ַ�
//			digits++;
//		}
//		else if (ispunct(ch)){//�Ƿ�Ϊ����ַ�
//			punct++;
//		}
//		else{
//			others++;
//		}
//		cin.get(ch);
//	}
//	cout << "������ͳ�ƴ����\n" << chars << "chars"
//		<< whitespace << " whitespaces " << digits << " digits "
//		<< punct <<  " punct" << others << " others\n";
//	system("pause");
//	return 0;
//}

////����ƽ��ÿ�첶�����������һ������������ܸ���
//#include <iostream>
//const int Max = 5;
//int main(){
//	using namespace std;
//	double fish[Max];
//	cout << "Plase enter the weights of your fish.\n";
//	cout << "Yoou may enter up to " << Max <<
//		" fish <q to terminate>.\n";
//	cout << "fish #1: ";
//	int i = 0;
//	while (i < Max&&cin >> fish[i]){//cin���������ж��������ִ���ɹ�����ĸ����ʧ��
//		if (++i < Max)
//			cout << "fish #" << i + 1 << ": ";
//	}
//	double total = 0.0;
//	for (int j = 0; j < i; j++)
//		total += fish[j];
//	if (i == 0)
//		cout << "No fish\n";
//	else
//		cout << total / i << " =average weight of " << i << " fish\n";
//	cout << "Done.\n";
//	system("pause");
//	return 0;
//
//}

////�ṩ����߶���÷֣��Լ���ƽ���֣��������������ʾ��������
//#include <iostream>
//const int Max = 5;
//int main(){
//	using namespace std;
//	int golf[Max];
//	cout << "Plase enter your golf scores.\n"
//		<< "You must enter " << Max << " rounds.\n";
//	int i;
//	for (i = 0; i < Max; i++){
//		cout << "round #" << i + 1 << ": ";
//		while (!(cin >> golf[i]))//�ж��Ƿ�Ϊ����
//		{
//			cin.clear();//�������־��������
//			while (cin.get() != '\n')//�ٿ��ǲ��ǻس����ǻس���������������һ������
//				continue;
//			cout << "Plase enter a number: ";//���������û���������
//		}
//	}
//
//	double total = 0.0;
//	for (i = 0; i < Max; i++){
//		total += golf[i];
//	}
//	cout << total / Max << " = average score " << Max << " rounds\n";
//	system("pause");
//	return 0;
//
//}

// //@��Ϊֹ����ʾ�������ֳ��⣬����дת��ΪСд����Сдת��Ϊ��д
//#include <iostream>
//#include <cctype>
//int main(){
//	using namespace std;
//	char ch;
//	cout << "Enter the letter:";
//	while (cin.get(ch) && ch != '@'){
//		if (islower(ch)){
//			ch = ch - 32;
//		}
//		else if (isupper(ch)){
//			ch = ch + 32;
//		}
//		else if (isdigit(ch)){
//			cin.clear();
//			continue;
//		}
//		cout << ch;
//	}
//	system("pause");
//}

////����ʮ��������double�����У���������������ʱ������
//#include <iostream>
//const int Max = 10;
//int main(){
//	using namespace std;
//	int x;
//	int y;
//	for (x = 0, y = 0;  x < 3,y < 5; x++, y++){
//		cout << "haha\n";
//	}
//	using namespace std;
//	double sum[Max];
//	cout << "Enter at more ten number donation,finish when input is not number :\n";
//	int i;
//	double s = 0;
//	for (i = 0; i < Max; i++){
//		 if(!(cin >> sum[i]))
//			break;
//		 s = s + sum[i];
//	}
//	cout << "The average = " << s / i << endl;
//	int count = 0;
//	for (int j = 0; j < i;j++)
//	if (sum[j] > s / i){
//		count++;
//	}
//	cout << "There have " << count << " numbers greater than average.\n";
//	system("pause");
//	return 0;
//}

