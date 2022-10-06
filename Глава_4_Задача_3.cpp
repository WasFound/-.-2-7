/*Напишите программу, которая запрашивает у пользователя имя, фамилию,
а затем конструирует, сохраняет и отображает третью строку, состоящую
из фамилии пользователя, за которой следует запятая, пробел и имя.
Используйте массивы char и функции из заголовочного файла cstring.
Пример запуска должен выглядеть так:
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip*/
#include <iostream>
#include<cstring>
const int i_DLINA = 80;

int main()
{
	using namespace std;
	char c_first_name[i_DLINA];
	char c_last_name[i_DLINA];

	cout << "Enter your first name: ";
	cin.getline(c_first_name, i_DLINA);
	cout << "Enter your last name: ";
	cin.getline(c_last_name, i_DLINA);
	
	cout << "Here's the information in a single string: ";
	cout << c_last_name << ", " << c_first_name;
	cin.get();
	return 0;
}
