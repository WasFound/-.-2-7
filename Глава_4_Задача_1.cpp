#include<iostream>
#include<string>
#include<locale.h>

int main()
{
	using namespace std;
	setlocale(LC_ALL, "RU");
	string s_first_name;
	string s_last_name;
	char c_grade;
	int i_vozrast;
	cout << "Введите имя и отчество: ";
	getline(cin, s_first_name);
	cout << "Введите фамилию: ";
	getline(cin, s_last_name);
	cout << "Введите оценку, которую Вы заслуживаете: ";
	cin >> c_grade;
	cout << "Введите Ваш возраст : ";
	cin >> i_vozrast;
	cout << "Name: " << s_last_name << ", " << s_first_name << " " << endl;
	cout << "Grage: " << ++c_grade << endl;
	cout << "Age: " << i_vozrast;
	return 0;
}
