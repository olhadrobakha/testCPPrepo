
#include <iostream>
using namespace std;
void NewFunc() {
	cout << "Hello, it's my new func!";
}
void SecondFunc() {
	cout << "It's already second func!" << endl;
}
void main()
{
	cout << "Hello World!\n";
	cout << "We are connected!" << endl;

	NewFunc();
	SecondFunc();
}
