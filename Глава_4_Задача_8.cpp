/*William Wingate заведует службой анализа рынка пиццы.
О каждой пицце он записывает следующую информацию:
. наименование компании - производителе пиццы, которое может состоять
из более чем одного слова;
. диаметр пиццы;
. вес пиццы;
Разработайте структуру, которая может содержать всю эту информацию, и
напишите программу, использующую структурную переменную этого типа.
Программа должна запрашивать у пользователя каждый из перечисленных
показателей и затем отображать введенную информацию. Применяйте cin
(или его методы) и cout.
Отличия от 7 задачи. Выполнить упражнение 7, но сприменением операции new
для размещения структуры в свободном хранилище вместо объявления
структурной переменной. Кроме того, сделайте так, чтобы программа сначала
запрашивала диаметр пиццы, а потом - наименование компании.

*/
#include<iostream>
#include<string>

int main()
{
    using namespace std;
    struct pizza
    {
        string s_name;
        int i_diameter;
        double d_weight;
    };
    
    pizza * analise_pizza= new pizza;

    
    cout << "Enter diameter: ";
    (cin >> analise_pizza->i_diameter).get();
    cout << "Enter manufacturer name: ";
    getline(cin, analise_pizza->s_name);
    //cout << "Enter diameter: ";
    //cin >> analise_pizza->i_diameter;
    cout << "Enter weight: ";
    cin >> analise_pizza->d_weight;
    cout << "\n";

    cout << "Manufacturer name: " << analise_pizza->s_name << "\n";
    cout << "Diameter: " << analise_pizza->i_diameter << "\n";
    cout << "Weight: " << analise_pizza->d_weight << "\n";

    delete analise_pizza;
    cin.get();
    return 0;
}
