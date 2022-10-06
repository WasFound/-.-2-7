/*Напишите программу, которая приглашает пользователя ввести три
результата забега на 40 метров, и затем отображает эти значения и
их среднее. Для хранения данных применяйте объект array*/
#include<iostream>
#include<array>

int main()
{
	using namespace std;
	array<double, 3> a_results;
	double d_average=0;
	cout << "Enter three race results, please." << endl;
	cout << "Enter first result: ";
	cin >> a_results[0];
	cout << "Enter second result: ";
	cin >> a_results[1];
	cout << "Enter third result: ";
	cin >> a_results[2];
	cout << "\n";

	d_average = (a_results[0] + a_results[1] + a_results[2]) / 3;

	cout << "Your result N1: " << a_results[0] << "\n"
		<< "Your result N2: " << a_results[1] << "\n"
		<< "Your result N3: " << a_results[2] << "\n" << "\n"
		<< "Your average time is: " << d_average << "\n";
	
	cin.get();

	return 0;
}
