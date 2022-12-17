#include <iostream>

using namespace std;

main() {
	
	int r;
	float S , P;
	
	cout << "Please enter an integer value for radius : ";
	cin >> r;
	
	S = r * r * 3.14;
	
	P = 2 * r * 3.14;
	
	cout << "S = " << S << "\n" << "P = " << P;
	
}