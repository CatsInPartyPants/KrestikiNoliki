#pragma once
using namespace std;
#define X 'X'
#define O 'O'

char firstPlayer[50];
char secondPlayer[50];

void EnterName()
{
	cout << "Введите имя первого игрока: ";
	cin >> firstPlayer;
	cout << "Введите имя второго игрока: ";
	cin >> secondPlayer;
}

void ChoiceChar()
{
    cout << "За какой символ играет игрок " << firstPlayer << "? (X или O) \n";
}

void menu()
{   
    char c;
    do
    {
    cout << "Игра \"Крестики - нолики\"\n\n";
    cout << "1. Ввести имя игрока\n";
    cout << "2. Выбор символа(крестик или нолик)\n";
    cout << "3. Выход из игры\n";
    
    cin >> c;
        switch (c)
        {
        case '1':
            EnterName();
            system("cls");
            break;
        case '2':
            ChoiceChar();
            break;
        case '3':
            exit(0);
            break;
        default:
            break;
        }
    } while (c != '3');
}