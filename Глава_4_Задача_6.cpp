/*Структура CandyBar включает три члена, как описано в предыдущем упражнении.
Напишите программу, которая создает массив из трех структур CandyBar,
инициализирует их значениями по вашему усмотрению и затем отображает
содержимое каждой структуры*/
#include<iostream>

int main()
{
	using namespace std;
	struct CandyBar
	{
		char c_name[80];
		double d_weight;
		int i_calories;
	} snack{"Mocha Munch", 2.3, 350}, snack1{"Kuku-Ruku", 3.8, 320}, snack2{"Wagon Weels", 2.8, 340};
	CandyBar massiv[3]{snack, snack1, snack2};
	
	cout << "the contents of the massiv[0] variable" << "\n";
	cout << "Name: " << "\"" << snack.c_name << "\"" << "\n";
	cout << "Weigth: " << snack.d_weight << "\n";
	cout << "Calories: " << snack.i_calories << "\n" << "\n";
	
	cout << "the contents of the massiv[1] variable" << "\n";
	cout << "Name: " << "\"" << snack1.c_name << "\"" << "\n";
	cout << "Weigth: " << snack1.d_weight << "\n";
	cout << "Calories: " << snack1.i_calories << "\n" << "\n";
	
	cout << "the contents of the massiv[2] variable" << "\n";
	cout << "Name: " << "\"" << snack2.c_name << "\"" << "\n";
	cout << "Weigth: " << snack2.d_weight << "\n";
	cout << "Calories: " << snack2.i_calories << "\n" << "\n";
	
	cin.get();
	return 0;
}
