#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� ";
	cin >> a;
	if (a >= 1 && a <= 10000000) {
		switch (a / 1000000) {
		case 0:
			cout << "";
			break;
		case 1:
			cout << "���� ������� ";
			break;
		case 2:
			cout << "��� �������� ";
			break;
		case 3:
			cout << "��� �������� ";
			break;
		case 4:
			cout << "������ �������� ";
			break;
		case 5:
			cout << "���� ��������� ";
			break;
		case 6:
			cout << "����� ��������� ";
			break;
		case 7:
			cout << "���� ��������� ";
			break;
		case 8:
			cout << "������ �������� ";
			break;
		case 9:
			cout << "������ ��������� ";
			break;
		case 10:
			cout << "������ ��������� ";
			break;
		}
			switch (a / 100000 - a / 1000000 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "��� ";
				break;
			case 2:
				cout << "������ ";
				break;
			case 3:
				cout << "������ ";
				break;
			case 4:
				cout << "��������� ";
				break;
			case 5:
				cout << "������� ";
				break;
			case 6:
				cout << "�������� ";
				break;
			case 7:
				cout << "������� ";
				break;
			case 8:
				cout << "��������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			}
			switch (a / 10000 - a / 100000 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "";
				break;
			case 2:
				cout << "�������� ";
				break;
			case 3:
				cout << "�������� ";
				break;
			case 4:
				cout << "����� ";
				break;
			case 5:
				cout << "��������� ";
				break;
			case 6:
				cout << "���������� ";
				break;
			case 7:
				cout << "��������� ";
				break;
			case 8:
				cout << "����������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			}
			if (a / 1000 - a / 100000 * 100 >= 10 && a / 1000 - a / 100000 * 100 <= 19) {
				switch (a / 1000 - a / 100000 * 100) {
				case 10:
					cout << "������ ����� ";
					break;
				case 11:
					cout << "����������� ����� ";
					break;
				case 12:
					cout << "���������� ����� ";
					break;
				case 13:
					cout << "���������� ����� ";
					break;
				case 14:
					cout << "������������ ����� ";
					break;
				case 15:
					cout << "���������� ����� ";
					break;
				case 16:
					cout << "����������� ����� ";
					break;
				case 17:
					cout << "���������� ����� ";
					break;
				case 18:
					cout << "������������ ����� ";
					break;
				case 19:
					cout << "������������ ����� ";
					break;
				}
			}
			else {
				switch (a / 1000 - a / 10000 * 10) {
				case 0:
					cout << "";
					break;
				case 1:
					cout << "���� ������ ";
					break;
				case 2:
					cout << "��� ������ ";
					break;
				case 3:
					cout << "��� ������ ";
					break;
				case 4:
					cout << "������ ������ ";
					break;
				case 5:
					cout << "���� ����� ";
					break;
				case 6:
					cout << "����� ����� ";
					break;
				case 7:
					cout << "���� ����� ";
					break;
				case 8:
					cout << "������ ����� ";
					break;
				case 9:
					cout << "������ ����� ";
					break;
				}
			}
			if (a / 1000 % 100 == 0 && a / 1000 - a / 1000000 * 1000 >= 100) {
				cout << "����� ";
			}
			if (a / 1000 % 1000 == 0) {
				cout << "";
			}
			switch (a / 100 - a / 1000 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "��� ";
				break;
			case 2:
				cout << "������ ";
				break;
			case 3:
				cout << "������ ";
				break;
			case 4:
				cout << "��������� ";
				break;
			case 5:
				cout << "������� ";
				break;
			case 6:
				cout << "�������� ";
				break;
			case 7:
				cout << "������� ";
				break;
			case 8:
				cout << "��������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			}
			switch (a / 10 - a / 100 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "";
				break;
			case 2:
				cout << "�������� ";
				break;
			case 3:
				cout << "�������� ";
				break;
			case 4:
				cout << "����� ";
				break;
			case 5:
				cout << "��������� ";
				break;
			case 6:
				cout << "���������� ";
				break;
			case 7:
				cout << "��������� ";
				break;
			case 8:
				cout << "����������� ";
				break;
			case 9:
				cout << "��������� ";
				break;
			}
			if (a - a / 100 * 100 >= 10 && a - a / 100 * 100 <= 19) {
				switch (a - a / 100 * 100) {
				case 10:
					cout << "������ ";
					break;
				case 11:
					cout << "����������� ";
					break;
				case 12:
					cout << "���������� ";
					break;
				case 13:
					cout << "���������� ";
					break;
				case 14:
					cout << "������������ ";
					break;
				case 15:
					cout << "���������� ";
					break;
				case 16:
					cout << "����������� ";
					break;
				case 17:
					cout << "���������� ";
					break;
				case 18:
					cout << "������������ ";
					break;
				case 19:
					cout << "������������ ";
					break;
				}
			}
			else {
				switch (a - a / 10 * 10) {
				case 0:
					cout << "";
					break;
				case 1:
					cout << "���� ";
					break;
				case 2:
					cout << "��� ";
					break;
				case 3:
					cout << "��� ";
					break;
				case 4:
					cout << "������ ";
					break;
				case 5:
					cout << "���� ";
					break;
				case 6:
					cout << "����� ";
					break;
				case 7:
					cout << "���� ";
					break;
				case 8:
					cout << "������";
					break;
				case 9:
					cout << "������ ";
					break;
				}
			}
	}
	else     {
	cout << "������";
    }
	return 0;
}
