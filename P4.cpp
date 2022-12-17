#include <iostream>

using namespace std;

main() {
	
	int n , fact=1 , j=1;
	
	cout << "Please enter an integer value : ";
	cin >> n;
	
	for(j=1; j<=n; j++){
		
		fact = fact * j;
	}
	
	cout <<"fact " << n << " is  " << fact;
}