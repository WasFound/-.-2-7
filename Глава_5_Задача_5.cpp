/* Предположим, что вы продаете книгу по программированию на языке С++ для
начинающих. Напишите программу, которая позволит ввести ежемесячные обьемы
продаж в течении года (в количестве книг, а не в деньгах). Программа должна
использовать цикл, в котором выводится приглашение с названием месяца,
применяя массив указателей на char (или массив обьектов string, если вы
предпочитаете его), инициализированный строками - названиями месяцев, и
сохраняя введенные значения в массиве int. Затем программа должна найти
сумму содержимого массива и выдать общий обьем продаж за год.
*/

#include<iostream>
using namespace std;
int i_all_sale = 0;

int main()
{
	int i_all_sales[12] = {0};
	string* s_mounts = new string[12];
	s_mounts[0] = "Yanuary";
	s_mounts[1] = "February";
	s_mounts[2] = "March";
	s_mounts[3] = "April";
	s_mounts[4] = "May";
	s_mounts[5] = "June";
	s_mounts[6] = "July";
	s_mounts[7] = "August";
	s_mounts[8] = "September";
	s_mounts[9] = "October";
	s_mounts[10] = "November";
	s_mounts[11] = "December";
	
	for (int i = 0; i < 12; i++)
	{
		cout << "Enter your sales in units per month " << s_mounts[i] << ": " << "\t";
		cin >> i_all_sales[i];
	}
	for (int i = 0; i < 12; i++)
	{
		int i_temp = 0;
		i_all_sale = i_all_sale + i_all_sales[i];
	}
	cout << "Your sales = " << i_all_sale;
	return 0;
}