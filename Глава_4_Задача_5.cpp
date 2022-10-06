/*Структура CandyBar содержит три члена. Первый из них хранит название
коробки конфет. Второй - ее вес (который может иметь дробную часть), а
третий - число калорий (целое значение). Напишите программу, обьявляющую
эту структуру и создающую переменную типа CandyBar по имени snack,
инициализируя ее члены значениями "Mocha Munch", 2.3 и 350, соответсвенно.
Инициализация должна быть частью обьявления snack. И, наконец, программа
должна отобразить содержимое этой переменной.*/
#include<iostream>

int main()
{
	using namespace std;
	struct CandyBar
	{
		char c_name[80];
		double d_weight;
		int i_calories;
	} snack{"Mocha Munch", 2.3, 350};
	cout << "the contents of the \"snack\" variable" << "\n";
	cout << "Name: " << "\"" << snack.c_name << "\"" << "\n";
	cout << "Weigth: " << snack.d_weight << "\n";
	cout << "Calories: " << snack.i_calories << "\n";
	cin.get();
	return 0;
}
