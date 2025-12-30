#include <iostream>
#include <string>

using namespace std;

string user;
string cmd;
float num1;
float num2;
float total;
void mainen();
void mainenen();
int sum();

int main() {
	cout << "Enter your name: ";
	cin >> ::user;
	mainen();
	return 0;
}

void mainen() {
	cout << "Hello " << ::user << "!" << endl;
	cout << "This is prototype and govno87973747-bit bad coder!" << endl;
	cout << "Enter command: ";
	cin >> cmd;
	if(cmd == "help") {
		cout << "sum - summa dvuh chisel\nstop - stopping programm" << endl;
		mainenen();
	}
	else if(cmd == "stop") {
		cout << "Okey!" << endl;
	}
	else {
		cout << "Error! Enter help" << endl;
		mainenen();
	}
}	

void mainenen() {
	cout << "Enter command: ";
	cin >> cmd;
	if(cmd == "help") {
		cout << "sum - summa dvuh chisel\nstop - stopping programm" << endl;
		mainenen();
	}
	else if(cmd == "sum") {
		sum();
		mainenen();
	}
	else if(cmd == "stop") {
		cout << "Okey!" << endl;
	}
	else {
		cout << "Error! Enter help." << endl;
		mainenen();
	}
}

int sum() {
	cout << "Enter number1: ";
	cin >> ::num1;
	cout << "Enter number2: ";
	cin >> ::num2;
	::total = num1 + num2;
	cout << ::total << endl;
}	
