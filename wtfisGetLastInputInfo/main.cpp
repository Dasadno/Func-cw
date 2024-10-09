#include <iostream>
#include <Windows.h>
using namespace std;




double multiplication(float num1, float num2)
{
	return num1 * num2;
}
double division(float num1, float num2)
{
	if (num1 != 0 and num2 != 0)
	{
		return num1 / num2;
	}
	else
	{
		return ERROR;
	}
}	
double percent(float num1, float num2)
{
	return num1 / 100 * num2;
	
}
double subtraction(float num1, float num2)
{
		return num1 - num2;
}
double addition(float num1, float num2)
{	
	return num1 + num2;
}




int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	





	return 0;
}