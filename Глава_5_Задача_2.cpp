/*Перепишите код из листинга 5.4 с использованием обьекта array вместо встроенного
массива и типа long double вместо long long. Найдите значение 100! 
*/
#include<iostream>
#include<array>
using namespace std;
const int ArSize = 100;
int main()
{
	array<long double, ArSize> factorials;
	factorials[1] = factorials[0] = 1;

	for (int i = 2; i < ArSize; i++)
		factorials[i] = i * factorials[i - 1];

	for (int i = 0; i < ArSize; i++)
		std::cout << i << "! = " << factorials[i] << std::endl;

	return 0;
}
