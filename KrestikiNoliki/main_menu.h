#pragma once
using namespace std;
#define X 'X'
#define O 'O'
int nS;
int nF = nS = 0;
char firstPlayer[50];
char secondPlayer[50];

void EnterName()
{
    if (firstPlayer) {
        cout << "Введите имя первого игрока: ";
        cin >> firstPlayer;
    }
    if (secondPlayer) {
        cout << "Введите имя второго игрока: ";
        cin >> secondPlayer;
    }
}

void ChoiceChar()
{
    char c;
    if (firstPlayer != NULL || secondPlayer!= NULL) {
        cout << "За какой символ играет игрок " << firstPlayer << "? (X или O) \n";
        cin >> c;
        (c == 'X') ? nF = 1 : nS = 1;
    }
    else
        cout << "Имена игроков не введены.\n";
}

void menu()
{   
    char c;
    bool flag = true;
    do
    {
    cout << "Игра \"Крестики - нолики\"\n\n";
    cout << "1. Ввести имя игрока" << firstPlayer << " " << secondPlayer << "\n";
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
            flag = false;
            break;
        case '3':
            exit(0);
            break;
        default:
            break;
        }
    } while (c != '3' && flag);
}