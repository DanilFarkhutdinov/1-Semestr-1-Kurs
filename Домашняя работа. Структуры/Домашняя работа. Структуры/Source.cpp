#include <iostream>
#include <string.h>
#include "Stack.h"
using namespace std;
void fill_stack(elem*& stack, string str, int a);
void show_stack(elem* stack);
void mistakes(elem*&stack, string str) {
	int a = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<') {
			a = i;
			fill_stack(stack, str, a);
		}
		else {
			if (str[i] == ')') {
				if (*peek(stack) == '(') {
					pop(stack, str[i]);
				}
				else {
					cout << "Скобка под номером " << i + 1 << " является ошибочной" << endl;
					break;
				}
			}
			else {
				if (str[i] == ']') {
					if (*peek(stack) == '[') {
						pop(stack, str[i]);
					}
					else {
						cout << "Скобка под номером " << i + 1 << " является ошибочной" << endl;
						break;
					}
				}
				else {
					if (str[i] == '}') {
						if (*peek(stack) == '{') {
							pop(stack, str[i]);
						}
						else {
							cout << "Скобка под номером " << i + 1 << " является ошибочной" << endl;
							break;
						}
					}
					else {
						if (str[i] == '>') {
							if (*peek(stack) == '<') {
								pop(stack, str[i]);
							}
							else {
								cout << "Скобка под номером " << i + 1 << " является ошибочной" << endl;
								break;
							}
						}
					}
				}
			}
		}
	}
	if (!stack) {
		cout << "Скобки расставлены правильно" << endl;
	}
	else {
		cout << "Скобки расставлены неправильно" << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	elem* stack = nullptr;
	string str;
	cout << "Введите выражение: ";
	cin >> str;
	int length = str.length();
	mistakes(stack, str);
	return 0;
}