#include <iostream>

using namespace std;

main() {
	
	int r , h ;
	float v ;
	
	cout << "Enter radius and height : ";
	cin >> r >> h;
	
	v = r * r * 3.14 * h / 3;
	
	cout << "The volume of the cone = " << v;

}