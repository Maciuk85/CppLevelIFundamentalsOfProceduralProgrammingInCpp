#include <iostream>
#include<string>
#include <conio.h>
#include <vector>
using namespace std;

char element;
string infiks="(1+2)*3";
vector <char> postfiks;
vector <char> stack;

bool isOperator(char element) {
	if (element == '+' || element == '-' || element == '/' || element == '*') {
		return true;
	}
		return false;
}

bool isBracket(char element) {
	if (element == ')' || element == '('){
		return true;
	}
	return false;
}

short getPriority(char element) {
	if (element == '+' || element == '-') {
		return 1;
	}
	return 2;

}

void analizeExpression() {
	for (int i = 0; i < size(infiks);i++) {
		if (!isOperator(infiks[i])) {
			postfiks.push_back(infiks[i]);
		}
		else {
			if (stack.empty()) {
				stack.push_back(infiks[i]);
			}
			else {
				if (getPriority(stack.back()) <= getPriority(infiks[i])) {
					stack.push_back(infiks[i]);
				}
				else {
					postfiks.push_back(stack.back());
					stack.pop_back();
					stack.push_back(infiks[i]);
				}
			}

		}

		if (isBracket(infiks[i])) {
			if (infiks[i] == '(') {
				stack.push_back(infiks[i]);
			}
			else
			{
		for (int i = stack.size()-1; i >= 0; i--) {
					if (stack[i] == '(') {
						break;
					}
					if (isOperator(stack[i])) {
						postfiks.push_back(stack[i]);
						stack.erase(stack.begin() + i);
					}
					
				}
		stack.pop_back();
			}
			
		}

	}
	if (!stack.empty()) {
		for (int i = stack.size()-1; i >= 0; i--) {
			postfiks.push_back(stack[i]);
		}
	}

}



void writePostfiks() {
	for (int i = 0; i < postfiks.size(); i++) {
		cout << postfiks[i];
}

}
int main() {
	//readInfiks();
	analizeExpression();
	writePostfiks();
	cout << endl;
	system("pause");
	return 0;
}