#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "������� ����� ������ ";
	cin >> a;
	cout << "������� ����� ������ ";
	cin >> b;
	if (a == 2 && b >= 1 && b <= 28) {
		c = 365 - 31 - b;
		cout << "�� ������ ���� �������� " << c;
	}
	else {
		if (b >= 1 && b <= 31) {
			switch (a) {
			case 1:
				c = 365 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 3:
				c = 365 - 59 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 5:
				c = 365 - 120 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 7:
				c = 365 - 181 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 8:
				c = 365 - 212 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 10:
				c = 365 - 273 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			case 12:
				c = 365 - 334 - b;
				cout << "�� ������ ���� �������� " << c;
				break;
			default:
				if (b >= 1 && b <= 30) {
					switch (a) {
					case 4:
						c = 365 - 90 - b;
						cout << "�� ������ ���� �������� " << c;
						break;
					case 6:
						c = 365 - 151 - b;
						cout << "�� ������ ���� �������� " << c;
						break;
					case 9:
						c = 365 - 243 - b;
						cout << "�� ������ ���� �������� " << c;
						break;
					case 11:
						c = 365 - 304 - b;
						cout << "�� ������ ���� �������� " << c;
						break;
					default:
						cout << "������� �������� ������";
					}
				}
			}

		}
		else {
			cout << "������� �������� ������";
		}
	}
	return 0;
}



	
