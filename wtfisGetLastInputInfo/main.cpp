#include <iostream>
#include <Windows.h>
using namespace std;


float num1;
float num2;
char oper;

double calculator(float num1, float num2, char oper)
{
	cout << "¬ведите число: ";
	cin >> num1;
	cout << "¬ведите второе число: ";
	cin >> num2;
	cout << "¬ведите оператор: ";
	cin >> oper;


	if (oper == '+')
	{
		 cout << num1 + num2;
	}
	else if (oper == '-')
	{
		cout << num1 - num2;
	}
	else if (oper == '*')
	{
		cout << num1 * num2;
	}
	else if (oper == '/' && num1 != 0 || num2 != 0)
	{
		cout << num1 / num2;
	}
	else
	{
		cout << "ѕараметры введены неправильно. ";
		return 0;
	}



}



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	calculator(num1, num2, oper);






	return 0;
}