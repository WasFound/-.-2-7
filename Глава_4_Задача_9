/*Структура CandyBar включает три члена, как описано в предыдущем упражнении.
Напишите программу, которая создает массив из трех структур CandyBar,
инициализирует их значениями по вашему усмотрению и затем отображает
содержимое каждой структуры.

Выполните упражнение 6, но вместо объявления массива из трех структур 
CandyBar используйте операцию new для динамического размещения массива.*/
#include<iostream>
#include<string>

int main()
{
	using namespace std;

	struct CandyBar
	{
		string s_name;
		double d_weight = 0;
		int i_calories = 0;
	};

	CandyBar* all_snack = new CandyBar[3];
	all_snack [0] = { "Mocha Munch", 2.3, 350 };
	all_snack [1] = { "Kuku - Ruku",3.8,320 };
	all_snack [2] = { "Wagon Weels",2.8,340 };

	cout << "Name snack1: " << all_snack[0].s_name << "\, " << "Weight snack1: " << all_snack[0].d_weight << "\, "
	     << "Calories snack1: " << all_snack[0].i_calories << endl;
	cout << "Name snack1: " << all_snack[1].s_name << "\, " << "Weight snack1: " << all_snack[1].d_weight << "\, "
		 << "Calories snack1: " << all_snack[1].i_calories << endl;
	cout << "Name snack1: " << all_snack[2].s_name << "\, " << "Weight snack1: " << all_snack[2].d_weight << "\, " 
		 << "Calories snack1: " << all_snack[2].i_calories << endl;

	delete []all_snack;
	cin.get();
	return 0;
}
