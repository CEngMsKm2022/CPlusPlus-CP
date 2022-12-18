#include <iostream>

using namespace std;

main() {
	
	int x , y;
	
	cout << "Please enter a value for x : ";
	cin >> x;
	cout << "Please enter a value for y : ";
	cin >> y;
	
	x = x + y;
	y = x - y;
	x = x - y;
	
	cout << "x : " << x << "\ny : " << y; 

}