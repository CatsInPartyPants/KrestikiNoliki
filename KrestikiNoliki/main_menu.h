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
        cout << "������� ��� ������� ������: ";
        cin >> firstPlayer;
    }
    if (secondPlayer) {
        cout << "������� ��� ������� ������: ";
        cin >> secondPlayer;
    }
}

void ChoiceChar()
{
    char c;
    if (firstPlayer != NULL || secondPlayer!= NULL) {
        cout << "�� ����� ������ ������ ����� " << firstPlayer << "? (X ��� O) \n";
        cin >> c;
        (c == 'X') ? nF = 1 : nS = 1;
    }
    else
        cout << "����� ������� �� �������.\n";
}

void menu()
{   
    char c;
    bool flag = true;
    do
    {
    cout << "���� \"�������� - ������\"\n\n";
    cout << "1. ������ ��� ������" << firstPlayer << " " << secondPlayer << "\n";
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