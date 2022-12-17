#include <iostream>

using namespace std;

main() {
	
	float num1 , num2 , S , D , M , T;
	
	cout << "Enter num1 : ";
	cin >> num1;
	cout << "Enter num2 : ";
	cin >> num2;
	
	S = num1 + num2;
	D = num1 - num2;
	M = num1 * num2;
	T = num1 / num2;
	
	cout << "S = " << S << "\nD = "<< D << "\nM = " << M << "\nT= " << T;
	
}