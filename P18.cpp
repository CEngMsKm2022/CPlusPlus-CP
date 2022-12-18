#include <iostream>

using namespace std;

main() {
	
	int a , b , c;
	float average;
	
	cout << "Enter a value for a : ";
	cin >> a;
	cout << "Enter a value for b : ";
	cin >> b;
	cout << "Enter a value for c : ";
	cin >> c;
	
	average = (float)(a+b+c)/3;
	
	cout << "Average = " << average;
	
}