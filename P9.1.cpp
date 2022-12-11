#include <iostream>

using namespace std;

main() {
	
	int n , z;
	
	cout << "Enter a number : ";
	cin >> n;
	
	z = n%2;
	
	if(z == 0){
		n = n * 2;
		cout << n;
	}
	else{
		n = n * 3;
		cout << n;
	}	
	
}