#include <iostream>
#include <Windows.h>
using namespace std;




double multiplication(float num1, float num2)
{
	cout << num1 * num2 << "\n";
	return 0;
}
double division(float num1, float num2)
{
	if (num1 != 0 and num2 != 0)
	{
		cout << num1 / num2 << "\n";
	}
	else
	{
		cout << "Параметры введены неправильно \n";
		return 0;
	}
}	
double percent(float num1, float num2)
{
	cout << num1 / 100 * num2 << "\n";
	return 0;
}
double subtraction(float num1, float num2)
{
		cout << num1 - num2 << "\n";
		return 0;
}
double addition(float num1, float num2)
{	
	cout << num1 + num2 << "\n";
	return 0;
}




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	 
	addition(15, 5);
	multiplication(15, 5);
	subtraction(15, 5);
	percent(15, 5);
	division(15, 5);






	return 0;
}