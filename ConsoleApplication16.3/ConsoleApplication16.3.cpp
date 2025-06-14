
#include <iostream>
using namespace std;
void NewFunc() {
	cout << "Hello, it's my new func!";
}
//add some information
void SecondFunc() {
	cout << "It's already second func!" << endl;
}
//add a multiple func
void main()
{
	cout << "Hello World!\n";
	cout << "We are connected!" << endl;

	NewFunc();
	SecondFunc();
}
