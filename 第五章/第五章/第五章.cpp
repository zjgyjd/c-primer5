//#include <iostream>
//int main(){
//	using namespace std;
//	for (int i = 1; i <= 3; i++)
//		cout << "ha\n";
//	cout << i << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//using namespace std;
//const int Arsize = 16;
//int main(){
//	double factorials[Arsize];//����15�Ľ׳˳�����Χ�����ÿɴ�ŵĸ�����
//	factorials[1] = factorials[0] = 1.0;
//	int i;
//	for (i = 2; i < Arsize; i++)
//		factorials[i] = factorials[i - 1] * i;
//	for (i = 0; i < Arsize; i++)
//		cout << i << "! = " << factorials[i] << endl;
//	cin.get();
//
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	cout << "Enter a word : \n";
//	string word;
//	(cin >> word).get();
//	for (int i = word.size() - 1; i >= 0; i--)//ע���ж��������ܹ�����ѭ��������
//		cout << word[i];
//	cout << "\n Bye!\n";
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	string ch;
//	cout << "Enter a string : \n";
//	(cin >> ch).get();
//	int i, j;
//	for (i = 0, j = ch.size()-1; j > i; j--, i++){//ע��ȥ��'\0'
//		ch[i] = ch[i] + ch[j];
//		ch[j] = ch[i] - ch[j];
//		ch[i] = ch[i] - ch[j];
//	}
//	cout << ch << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//int main(){
//	using namespace std;
//	char mate[5] = "?ate";//ע����'\0'
//	for (char ch = 'a'; strcmp(mate, "mate"); ch++){//strcmp�����ж��ַ����Ƿ���ͬ
//		cout << "The false is " << mate << endl;//�����ͬ���0����ͬ�ҵ�һ������ĸ�ȵڶ�����Ϊ������֮��Ȼ
//		mate[0] = ch;
//	}
//	cout << "The true is " << mate << endl;
//	cin.get();
//	return 0;
//
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	string mate = "?a te";
//	for (char i = 'a'; mate != "ma te"; i++)
//		mate[0] = i;
//	cout << "The ture is " << mate << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <ctime>
//int main(){
//	using namespace std;
//	cout << "The seconds: " << endl;
//	float s;
//	(cin >> s).get();
//	clock_t delay = s*CLOCKS_PER_SEC;//������ʱת��Ϊϵͳʱ��
//	cout << "Starting \a\n";
//	clock_t start = clock();//���ؿ�ʼִ�����õ�ʱ��
//	while (clock() - start < delay);//��ͣѭ����ִͣ��ʱ��Խ��Խ��ֱ������delay
//	cout << "done\a\n";
//	cin.get();
//	return 0;
//}

//#include <iostream>
//
//int main(){
//	using namespace std;
//	char ch;
//	int count = 0;
//	cout << "Enter characters; enter # to quit:\n";
//	cin.get(ch);
//	while (cin.fail()==false){
//		cout << ch;//����õ����ַ�ֱ������#��ע��س�Ҳ���ַ�
//		++count;
//		cin.get(ch);
//		
//	}
//	cin.clear();//������ģ���ļ�β������EOF��������Ҫ���EOF��ǣ������������������
//	cout << endl << count << " characters read\n";
//	cin.get();//����������������Ĳ�����ͬ
//	cin.get();
//	cin.get();//141���ļ�β�ĸ��ֽ���
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	cout << "Enter two number : \n";
//	int a, b;
//	(cin >> a).get();
//	(cin >> b).get();
//	cout << "a = " << a << " b = " << b << endl;
//	int sum = 0;
//	for (; a <= b; a++)//ֻ���ǵ�һ�����ȵڶ�����С
//		sum = sum + a;
//	cout << " sum = " << sum << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	cout << "Enter a number ,";
//	cout << "putin the 0 over and reture a sum:";
//	int num;
//	int sum = 0;
//	cin >> num;
//	for (; num != 0; cin >> num){
//		sum = sum + num;
//		
//	}
//	cout << "The sum = " << sum << endl;
//	cin.get();
//	cin.get();
//	return 0;
//}

//#include <iostream>
//int main(){
//	using namespace std;
//	double Dgt, Cgt;
//	double Dmn = 100;
//	double Cmn = 100;
//	int year;
//	for (year=0; Dmn >= Cmn; year++){
//		Dgt = 100 * 0.1;
//		Dmn = Dmn + Dgt;//������
//		Cgt = Cmn*0.05;
//		Cmn = Cmn + Cgt;
//	}
//	cout << "The year is :" << year << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//using namespace std;
//int main(){
//	
//	string month[12] = {
//		"Plese enter janurary sales :",
//		"Plese enter February sales :",
//		"Plese enter March sales :",
//		"Plese enter April sales :",
//		"Plese enter May sales :",
//		"Plese enter June sales :",
//		"Plese enter July sales :",
//		"Plese enter August sales :",
//		"Plese enter September sales :",
//		"Plese enter October sales :",
//		"Plese enter November sales :",
//		"Plese enter December sales :"
//	};
//	int mon[12];
//	int i;
//	double j, sum = 0;
//	for (i = 0; i < 12; i++){
//		cout << month[i];
//		(cin >> j).get();
//		mon[i] = j;	
//	}
//	for (i = 0; i < 12; i++){
//		sum = sum + mon[i];
//	}
//	cout << "The amoust is : " << sum << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//#define month 12
//#define year 3
//int main(){
//	using namespace std;
//	string years[year] = {
//		"first year :",
//		"second year :",
//		"third year :",
//	};
//	int sale[year][month];
//	int i,j, sum=0;
//	for (i = 0; i < year;i++)
//	for (j = 0; j < month; j++){
//		(cin >> sale[i][j]).get();
//		sum = sum + sale[i][j];
//	}
//	for (i = 0; i < year; i++){
//		cout << years[i] << "\t";
//		for (j = 0; j < month; j++){
//			cout  << sale[i][j]<<"\t" ;
//		}
//		cout << "\n";
//	}
//	cout << "The sum is = " << sum << endl;
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	cout << "How many cars do you wish to catalog?:";
//	int num;
//	(cin >> num).get();
//	string* carname = new string[num];
//	int* year = new int[num];
//	int count;
//	for (count = 0; count < num; count++){
//		cout << "Car #" << count+1 << ":\n"
//			<< "Plase enter the make: "; 
//		getline(cin, carname[count]);
//		cout << "Plase enter the year made: ";
//		(cin >> year[count]).get();
//	}
//	cout << "Here is your collection:\n";
//	for (count = 0; count < num; count++){
//		cout << year[count] << " " << carname[count] << endl;
//	}
//	cin.get();
//	return 0;
//}

//#include <iostream>
//#include <cstring>
//int main(){
//	using namespace std;
//	char word[60];
//	cout << "Enter words(to stop , type the word done):\n";
//	int count;
//	for (count = 0; strcmp(word,"done"); count++){//�ж��ַ����Ƿ���ͬҪ�õ�strcmp
//		(cin >> word).get();
//	}
//	cout << "You entered  a total of " << count-1 << " words.\n";
//	cin.get();
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//int main(){
//	using namespace std;
//	string word;
//	int count;
//	for (count = 0; word != "done"; count++){//����string����д
//		(cin >> word).get();
//	}
//	cout << "You entered  a total of " << count - 1 << " words.\n";
//	cin.get();
//	return 0;
//}

////////////////////////////////////////////
//��ʾ��Ӧ�������Ǻ�
///////////////////////////////////////////
//#include <iostream>
//using namespace std;
//void Isprint(int num, int line){
//	int col;
//	for (col = num; col > 0; col--){
//		if (col > line){
//			cout << ".";
//		}
//		else{
//			cout << "*";
//		}
//	}
//}
//int main(){
//	using namespace std;
//	int linenum;
//	cout << "Enter number of line: ";
//	(cin>>linenum).get();
//	int line;
//	for (line = 1; line <= linenum; line++){
//		Isprint(linenum, line);
//        cout << endl;
//	}
//	cin.get();
//	return 0;
//}