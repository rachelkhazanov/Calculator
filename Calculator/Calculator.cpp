#include <string>
#include <iostream>
using namespace std;
int number;
int secondNumber;
int answer;
int choice;

void getUserNumber();
void getUserNumber() {

	cout << "Enter a number:" << endl;
	cin >> number;

	cout << "Enter another number:" << endl;
	cin >> secondNumber;
}

void getMathematicalOperation();
void getMathematicalOperation() {
		cout << "Which operation do you need? Type 1 for addition, 2 for substraction, 3 for multiplication, or 4 for division!" << endl;
		cin >> choice;
}
void calculateResults(int choice);
void calculateResults(int choice) {
	switch (choice)
	{
	case 1:
		answer = number + secondNumber;
		break;
	case 2:
		answer = number - secondNumber;
		break;
	case 3:
		answer = number * secondNumber;
		break;
	case 4:
		answer = number / secondNumber;
		break;
	default:
		cout << "I'm sorry, that is not a valid choice." << endl;
		break;
	}
}
void printResults(int answer);
void printResults(int answer) {
	cout << answer << endl;
}

int main() {
		getUserNumber();
		getMathematicalOperation();
		calculateResults(choice);
		printResults(answer);
}