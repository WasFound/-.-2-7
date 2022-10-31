/* Напишите программу, соответствующую описанию программы из упражнения 8,
но с использованием обьекта string вместо символьного массива. Включите
заголовочный файл string и применяйте операции отношений для выполнения
проверки.
*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s_in;
		
	int i = 0;
	cout << "Enter words (for end, enter word \"done\"): \n";
	cin >> s_in;
	while (s_in != "done")
	{
		cin >> s_in;
		i++;
	}
	cout << "total words: " << i;
	return 0;
}
