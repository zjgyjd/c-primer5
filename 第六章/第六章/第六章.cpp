////计算输入中空格数和字符总数遇到'.'结束
//#include <iostream>
//int main(){
//	using namespace std;
//	char ch;
//	int space=0;
//	int total=0;
//	cin.get(ch);//有关字符输入尽量不要再加.get()会吃掉下一个字符
//	while (ch != '.'){
//		if (ch == ' ')
//			space++;          //若有回车也算一个字符，但不算最后的句号
//		total++;
//		cin.get(ch);
//	}
//	cout << space << " spaces, " << total << " characters total in sentence\n";
//
//	system("pause");
//	return 0;
//}

////加密输入的句子，换行不变更改字母
//#include <iostream>
//int main(){
//	using namespace std;
//	char ch;
//	cin.get(ch);
//	while (ch != '.'){
//		if (ch == '\n'){
//			cout << ch;//如果在单字符中循环输出字符，输入一串字母
//		}//当其遇上‘\n’才会打出一整行，同时算字符时也算这个‘\n’
//		else{
//			cout << ++ch;
//		}
//		cin.get(ch);
//	}
//	system("pause");
//	return 0;
//}

////通过cctype文件库确认字符
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
//		if (isalpha(ch)){//是否为字母字符
//			chars++;
//		}
//		else if (isspace(ch)){//是否为空白符，比如换行
//			whitespace++;
//		}
//		else if (isdigit(ch)){//是否为数字字符
//			digits++;
//		}
//		else if (ispunct(ch)){//是否为标点字符
//			punct++;
//		}
//		else{
//			others++;
//		}
//		cin.get(ch);
//	}
//	cout << "将所有统计打出：\n" << chars << "chars"
//		<< whitespace << " whitespaces " << digits << " digits "
//		<< punct <<  " punct" << others << " others\n";
//	system("pause");
//	return 0;
//}

////计算平均每天捕获鱼的数量，一天最多五条可能更少
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
//	while (i < Max&&cin >> fish[i]){//cin可以用于判断输入数字代表成功，字母代表失败
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

////提供五个高尔夫得分，以计算平均分，若输入非数字提示重新输入
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
//		while (!(cin >> golf[i]))//判断是否为数字
//		{
//			cin.clear();//不是数字就先清理掉
//			while (cin.get() != '\n')//再看是不是回车，是回车就跳出，进行下一次输入
//				continue;
//			cout << "Plase enter a number: ";//不是则让用户重新输入
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

// //@符为止，显示输入数字除外，将大写转换为小写，将小写转换为大写
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

////输入十个数读入double数组中，遇到非数字输入时结束，
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

