#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;

void myFunctionPrint(const char str[])
{
	printf("Hello from myFunctionPrint,input str is>> %s\n", str);
}

int main()
{
	//1
	myFunctionPrint("Hello World");
	//2
	void(*myFunc)(const char[]);
	myFunc = myFunctionPrint;
	myFunc("Hello World Number2");
	//3
	char password[] = "12345";
	char inptpass[80];
	int counter = 3;
	do
	{
		if (counter == 0)
		{
			printf("Get out!\n");
			system("pause");
			return 0;
		}
		printf("Input password(you have %d chanse)>>", counter);
		cin >> inptpass;
	} while (strcmp(inptpass, password) != 0 && counter--);
	printf("\nPassword is correct!Welcome!\n");
	system("pause");
	return 0;
}
