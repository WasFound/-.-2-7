/*
Дафна инвестировала $100 под простые 10%. Другими словами, ежегодно инвестиция
должна приносить 10% инвестированной суммы, т.е. $10 каждый год:
прибыль = 0.10 х на исходный баланс.
В то же время Клео инвестировала $100 под сложные 5%. Это значит, что прибыль
составит 5% от текущего баланса, включая предыдущую накопленную прибыль:
прибыль = 0.05 х текущий баланс.
Клео зарабатывает 5% от $100 в первый год, что дает ей $105. На следующий год
она зарабатывает 5% от $105, что составляет $5.25, и т.д. Напишите программу,
которая вычислит, сколько лет понадобится для того, чтобы сумма баланса Клео
превысила сумму баланса Дафны, с отображением значений обоих балансов за каждый год.
*/
#include<iostream>

using namespace std;

const double I_SUMM = 100;
const double I_DAPHNE_PERCENT = 0.1;

int main()
{
	int i = 0;
	double daphne_profit = 100;
	double kleo_profit = 100;
	double compount_interest = 0;
	cout << "Enter value of compound interest: ";
	cin >> compount_interest;
	do
	{
		{
			daphne_profit = daphne_profit + (I_SUMM * I_DAPHNE_PERCENT);
			kleo_profit = kleo_profit + (kleo_profit / 100 * compount_interest);
			cout << "Daphne profit: \t" << daphne_profit << "\t" << "Kleo profit : \t" << kleo_profit << "\t" << endl;
			i++;
		}
	} while (kleo_profit<=daphne_profit);
		cout << i << " ears needed";
	return 0;
}
