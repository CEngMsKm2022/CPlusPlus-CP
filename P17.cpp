#include <iostream>

using namespace std;

main() {
	
	int x , y , t;
	
	cout << "Please enter a value for x : ";
	cin >> x;
	cout << "Please enter a value for y : ";
	cin >> y;
	
	t = x;
	x = y;
	y = t;
	
	cout << "x : " << x << "\ny : " << y;
		
}