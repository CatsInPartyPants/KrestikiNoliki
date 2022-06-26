#include <iostream>
#include "main_menu.h"

// отображение поля
void show(int a, int b, const char c) {
	cout << "  1 2 3 \n";
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1;
		for (int j = 0; j < 3; j++)
		{
			if(i == a-1 && j == b-1)
				cout << "|" << c;
			else 
				cout << "|" << "_";
		}
		cout << "|\n";
	}
}


int main()
{
	setlocale(LC_ALL, "");
	//menu();
	show(1, 2, X);
}

