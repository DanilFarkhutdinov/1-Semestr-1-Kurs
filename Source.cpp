#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, c;
	cout << "Введите номер месяца ";
	cin >> a;
	cout << "Введите число месяца ";
	cin >> b;
	if (a == 2 && b >= 1 && b <= 28) {
		c = 365 - 31 - b;
		cout << "До Нового года осталось " << c;
	}
	else {
		if (b >= 1 && b <= 31) {
			switch (a) {
			case 1:
				c = 365 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 3:
				c = 365 - 59 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 5:
				c = 365 - 120 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 7:
				c = 365 - 181 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 8:
				c = 365 - 212 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 10:
				c = 365 - 273 - b;
				cout << "До Нового года осталось " << c;
				break;
			case 12:
				c = 365 - 334 - b;
				cout << "До Нового года осталось " << c;
				break;
			default:
				if (b >= 1 && b <= 30) {
					switch (a) {
					case 4:
						c = 365 - 90 - b;
						cout << "До Нового года осталось " << c;
						break;
					case 6:
						c = 365 - 151 - b;
						cout << "До Нового года осталось " << c;
						break;
					case 9:
						c = 365 - 243 - b;
						cout << "До Нового года осталось " << c;
						break;
					case 11:
						c = 365 - 304 - b;
						cout << "До Нового года осталось " << c;
						break;
					default:
						cout << "Введены неверные данные";
					}
				}
			}

		}
		else {
			cout << "Введены неверные данные";
		}
	}
	return 0;
}



	
