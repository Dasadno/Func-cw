#include <iostream>
#include <Windows.h>
using namespace std;


float num1;
float num2;
char oper;

double calculator(float num1, float num2, char oper)
{
	cout << "������� �����: ";
	cin >> num1;
	cout << "������� ������ �����: ";
	cin >> num2;
	cout << "������� ��������: ";
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
		cout << "��������� ������� �����������. ";
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