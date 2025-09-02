#include <iostream>
#include <string>
using namespace std;

int main()
{
    
	string name;
	int age;
	cout << "What's your first name? ";
	cin >> name;
	cout << "How old are you? ";
	cin >> age;
	cout << "Hey " + name + "! You are " + to_string(age) + " years old!";

	return 0;
}
