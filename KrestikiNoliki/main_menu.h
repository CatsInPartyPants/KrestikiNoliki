#pragma once
using namespace std;
#define X 'X'
#define O 'O'

char firstPlayer[50];
char secondPlayer[50];

void EnterName()
{
	cout << "������� ��� ������� ������: ";
	cin >> firstPlayer;
	cout << "������� ��� ������� ������: ";
	cin >> secondPlayer;
}

void ChoiceChar()
{
    cout << "�� ����� ������ ������ ����� " << firstPlayer << "? (X ��� O) \n";
}

void menu()
{   
    char c;
    do
    {
    cout << "���� \"�������� - ������\"\n\n";
    cout << "1. ������ ��� ������\n";
    cout << "2. ����� �������(������� ��� �����)\n";
    cout << "3. ����� �� ����\n";
    
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