#include<iostream>
int main()
{
	using namespace std;
	string s_name;
	string s_dessert;

	cout << "Enter your name:\n";
	cin >> s_name;
	cout << "Enter your favorite dessert:\n";
	cin >> s_dessert;
	cout << "I have some delicious " << s_dessert;
	cout << " for you, " << s_name << ".\n";
	return 0;
}
