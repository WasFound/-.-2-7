/* Напишите программу, которая использует массив char и цикл для чтения по
одному слову за раз до тех пор, пока не будет введено слово done. Затем
программа должна сообщить количество введенных слов (исключая done). Пример
запуска должен быть таким:
Вводите слова (для завершения введите слово done):
anteater birthday category dumpster
envy finagle geometry done for sure
Вы ввели 7 слов.
Вы должны включить заголовочный файл cstring и применить функцию strcmp ()
для выполнения проверки.
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	const int i_ALL = 15;
	char all[i_ALL];
	int i = 0;
	cout << "Enter words (for end, enter word \"done\"): \n";
	cin >> all;
	while (strcmp(all, "done"))
	{
		cin >> all;
		i++;
	}
	cout << "total words: " << i;
	return 0;
}
