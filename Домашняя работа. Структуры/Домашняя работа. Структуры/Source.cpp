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
					cout << "Ñêîáêà ïîä íîìåðîì " << i + 1 << " ÿâëÿåòñÿ îøèáî÷íîé" << endl;
					break;
				}
			}
			else {
				if (str[i] == ']') {
					if (*peek(stack) == '[') {
						pop(stack, str[i]);
					}
					else {
						cout << "Ñêîáêà ïîä íîìåðîì " << i + 1 << " ÿâëÿåòñÿ îøèáî÷íîé" << endl;
						break;
					}
				}
				else {
					if (str[i] == '}') {
						if (*peek(stack) == '{') {
							pop(stack, str[i]);
						}
						else {
							cout << "Ñêîáêà ïîä íîìåðîì " << i + 1 << " ÿâëÿåòñÿ îøèáî÷íîé" << endl;
							break;
						}
					}
					else {
						if (str[i] == '>') {
							if (*peek(stack) == '<') {
								pop(stack, str[i]);
							}
							else {
								cout << "Ñêîáêà ïîä íîìåðîì " << i + 1 << " ÿâëÿåòñÿ îøèáî÷íîé" << endl;
								break;
							}
						}
					}
				}
			}
		}
	}
	if (!stack) {
		cout << "Ñêîáêè ðàññòàâëåíû ïðàâèëüíî" << endl;
	}
	else {
		cout << "Ñêîáêè ðàññòàâëåíû íåïðàâèëüíî" << endl;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");
	elem* stack = nullptr;
	string str;
	cout << "Ââåäèòå âûðàæåíèå: ";
	cin >> str;
	int length = str.length();
	mistakes(stack, str);
	clear(stack);
	return 0;
}
