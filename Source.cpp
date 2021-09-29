#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "¬ведите число ";
	cin >> a;
	if (a >= 1 && a <= 10000000) {
		switch (a / 1000000) {
		case 0:
			cout << "";
			break;
		case 1:
			cout << "ќдин миллион ";
			break;
		case 2:
			cout << "ƒва миллиона ";
			break;
		case 3:
			cout << "“ри миллиона ";
			break;
		case 4:
			cout << "„етыре миллиона ";
			break;
		case 5:
			cout << "ѕ€ть миллионов ";
			break;
		case 6:
			cout << "Ўесть миллионов ";
			break;
		case 7:
			cout << "—емь миллионов ";
			break;
		case 8:
			cout << "¬осемь миллинов ";
			break;
		case 9:
			cout << "ƒев€ть миллионов ";
			break;
		case 10:
			cout << "ƒес€ть миллионов ";
			break;
		}
			switch (a / 100000 - a / 1000000 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "сто ";
				break;
			case 2:
				cout << "двести ";
				break;
			case 3:
				cout << "триста ";
				break;
			case 4:
				cout << "четыреста ";
				break;
			case 5:
				cout << "п€тьсот ";
				break;
			case 6:
				cout << "шестьсот ";
				break;
			case 7:
				cout << "семьсот ";
				break;
			case 8:
				cout << "восемьсот ";
				break;
			case 9:
				cout << "дев€тьсот ";
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
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "п€тьдес€т ";
				break;
			case 6:
				cout << "шестьдес€т ";
				break;
			case 7:
				cout << "семьдес€т ";
				break;
			case 8:
				cout << "восемьдес€т ";
				break;
			case 9:
				cout << "дев€носто ";
				break;
			}
			if (a / 1000 - a / 100000 * 100 >= 10 && a / 1000 - a / 100000 * 100 <= 19) {
				switch (a / 1000 - a / 100000 * 100) {
				case 10:
					cout << "дес€ть тыс€ч ";
					break;
				case 11:
					cout << "одиннадцать тыс€ч ";
					break;
				case 12:
					cout << "двенадцать тыс€ч ";
					break;
				case 13:
					cout << "тринадцать тыс€ч ";
					break;
				case 14:
					cout << "четырнадцать тыс€ч ";
					break;
				case 15:
					cout << "п€тнадцать тыс€ч ";
					break;
				case 16:
					cout << "шестнадцать тыс€ч ";
					break;
				case 17:
					cout << "семнадцать тыс€ч ";
					break;
				case 18:
					cout << "восемнадцать тыс€ч ";
					break;
				case 19:
					cout << "дев€тнадцать тыс€ч ";
					break;
				}
			}
			else {
				switch (a / 1000 - a / 10000 * 10) {
				case 0:
					cout << "";
					break;
				case 1:
					cout << "одна тыс€ча ";
					break;
				case 2:
					cout << "две тыс€чи ";
					break;
				case 3:
					cout << "три тыс€чи ";
					break;
				case 4:
					cout << "четыре тыс€чи ";
					break;
				case 5:
					cout << "п€ть тыс€ч ";
					break;
				case 6:
					cout << "шесть тыс€ч ";
					break;
				case 7:
					cout << "семь тыс€ч ";
					break;
				case 8:
					cout << "восемь тыс€ч ";
					break;
				case 9:
					cout << "дев€ть тыс€ч ";
					break;
				}
			}
			if (a / 1000 % 100 == 0 && a / 1000 - a / 1000000 * 1000 >= 100) {
				cout << "тыс€ч ";
			}
			if (a / 1000 % 1000 == 0) {
				cout << "";
			}
			switch (a / 100 - a / 1000 * 10) {
			case 0:
				cout << "";
				break;
			case 1:
				cout << "сто ";
				break;
			case 2:
				cout << "двести ";
				break;
			case 3:
				cout << "триста ";
				break;
			case 4:
				cout << "четыреста ";
				break;
			case 5:
				cout << "п€тьсот ";
				break;
			case 6:
				cout << "шестьсот ";
				break;
			case 7:
				cout << "семьсот ";
				break;
			case 8:
				cout << "восемьсот ";
				break;
			case 9:
				cout << "дев€тьсот ";
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
				cout << "двадцать ";
				break;
			case 3:
				cout << "тридцать ";
				break;
			case 4:
				cout << "сорок ";
				break;
			case 5:
				cout << "п€тьдес€т ";
				break;
			case 6:
				cout << "шестьдес€т ";
				break;
			case 7:
				cout << "семьдес€т ";
				break;
			case 8:
				cout << "восемьдес€т ";
				break;
			case 9:
				cout << "дев€носто ";
				break;
			}
			if (a - a / 100 * 100 >= 10 && a - a / 100 * 100 <= 19) {
				switch (a - a / 100 * 100) {
				case 10:
					cout << "дес€ть ";
					break;
				case 11:
					cout << "одиннадцать ";
					break;
				case 12:
					cout << "двенадцать ";
					break;
				case 13:
					cout << "тринадцать ";
					break;
				case 14:
					cout << "четырнадцать ";
					break;
				case 15:
					cout << "п€тнадцать ";
					break;
				case 16:
					cout << "шестнадцать ";
					break;
				case 17:
					cout << "семнадцать ";
					break;
				case 18:
					cout << "восемнадцать ";
					break;
				case 19:
					cout << "дев€тнадцать ";
					break;
				}
			}
			else {
				switch (a - a / 10 * 10) {
				case 0:
					cout << "";
					break;
				case 1:
					cout << "один ";
					break;
				case 2:
					cout << "два ";
					break;
				case 3:
					cout << "три ";
					break;
				case 4:
					cout << "четыре ";
					break;
				case 5:
					cout << "п€ть ";
					break;
				case 6:
					cout << "шесть ";
					break;
				case 7:
					cout << "семь ";
					break;
				case 8:
					cout << "восемь";
					break;
				case 9:
					cout << "дев€ть ";
					break;
				}
			}
	}
	else     {
	cout << "ќшибка";
    }
	return 0;
}
