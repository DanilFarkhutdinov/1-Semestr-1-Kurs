#include <iostream> 
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� ";
	cin >> a;
	if (a / 100 > 1 && a / 100 < 10) {
		cout << a << " - ����������� �����";
	}
	else {
		if (a / 100 > -10 && a / 100 < -1) {
			cout << a << " - ���������� �����";
		}
		else {
			cout << a << " - �� ����������� �����";
		}
	}
	return 0;
}