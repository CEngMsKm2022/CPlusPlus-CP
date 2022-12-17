#include <iostream>

using namespace std;

main() {
	
	int a , b , c , total , average ;
	
	cout << "Please enter three integer values : ";
	cin >> a >> b >> c;
	
	total = a + b + c;
	average = total / 3;
	
	cout << "average = " << average;
	
}