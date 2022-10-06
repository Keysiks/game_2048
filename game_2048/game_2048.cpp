#include <iostream>
#include <string>
#include <math.h>
#include <random>
#include <Windows.h>
#include <conio.h>
using namespace std;

void table();

//������ break � ����� ��������� �����
void main(){
	table();
	int start_field[4][4] = { {0, 0, 0, 0}, {0, 0, 2, 0}, {0, 0, 0, 2}, {0, 0, 0, 0} };
	bool running = true;
	while (running) {
		setlocale(LC_ALL, "");
		//system("cls");
		cout << "������, ����� ���������� � ��� ������ ���� 2048" << endl;
		cout << "������� ���������� �������, ��� �� ����� ���� �����������):" << endl;
		cout << "\t�� ������ ������� ����� ���������, ���� ����������� ������ WASD" << endl << endl;
		setlocale(LC_ALL, "C");

		cout << "\t\t" << char(203);
		for (int i = 0; i < 29; i++)
			cout << char(205);
		cout << char(203) << endl << "\t\t";
		
		for (int i = 0; i < 4; i++) {
			cout << char(186);
			for (int j = 0; j < 4; j++) {
				cout.width(7);
				cout << start_field[i][j];
			}
			if (i != 3)
				cout << " " << char(186) << endl << "\t\t" << char(186) << "\t\t\t      " << char(186) << endl << "\t\t";
			else cout << " " << char(186) << endl;
		}
		cout << "\t\t" << char(202);
		for (int i = 0; i < 29; i++)
			cout << char(205);
		cout << char(202) << endl;
		int move = _getch();
		int position_1 = rand() % 4, position_2 = rand() % 4, position_3 = rand() % 4, position_4 = rand() % 4;
		while (start_field[position_1][position_2] != 0 and start_field[position_3][position_4] != 0 and position_1 != position_2 and position_3 != position_4) {
			position_1 = rand() % 4, position_2 = rand() % 4, position_3 = rand() % 4, position_4 = rand() % 4;
		}

		int choose = rand() % 5;
		
		if (choose == 0) start_field[position_3][position_4] = 4;
		else start_field[position_3][position_4] = 2;
		start_field[position_1][position_2] = 2;

		switch (move) {
		case 'w':
			break;
		case 's':
			break;
		case 'a':
			break;
		case 'd':
			break;
		}
	}
}

