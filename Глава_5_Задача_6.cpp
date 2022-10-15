/* Выполните упражнение 5, но используя двумерный массив для сохранения данных
о месячных продажах за 3 года. Выдайте общую сумму продаж за каждый год и за
все годы вместе.
*/

/* Предположим, что вы продаете книгу по программированию на языке С++ для
начинающих. Напишите программу, которая позволит ввести ежемесячные обьемы
продаж в течении года (в количестве книг, а не в деньгах). Программа должна
использовать цикл, в котором выводится приглашение с названием месяца,
применяя массив указателей на char (или массив обьектов string, если вы
предпочитаете его), инициализированный строками - названиями месяцев, и
сохраняя введенные значения в массиве int. Затем программа должна найти
сумму содержимого массива и выдать общий обьем продаж за год.
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
    int i_total_mass[3][12];
    int i_total = 0;

    string s_month[12] = {"Yanuary\t", "February\t", "March\t", "April\t", "May\t\t", "June\t\t", "Jule\t\t", "August\t", "September\t", "Oktober\t", "November\t", "December\t" };
    string s_year[3] = { "2021 Year\t", "2022 Year\t", "2023 Year\t" };

    for (int y = 0; y < 3; ++y)
    {
        int i_for_year = 0;
        for (int m = 0; m < 12; ++m)
        {
            cout << "\nTotal sold books for month " << s_month[m] << s_year[y];
            cin >> i_total_mass[y][m];
            i_for_year += i_total_mass[y][m];
        }
        cout << "\nAll books sold for Year: " << i_for_year;
        i_total += i_for_year;
        cout << endl;
    }
    cout << "\nAll books sold for all yaers: " << i_total;
    cout << endl;
    return 0;
}
