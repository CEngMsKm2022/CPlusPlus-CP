#include <iostream>

using namespace std;

main() {
	
	int n , S=0;
	
	cout << "Please enter an integer value : ";
	cin >> n;
	
	while(n > 0){
		S = S + n%10;
		n = n/10;
	}
	
	cout << S;
	
}