#include <iostream>

using namespace std;

main() {
	
	int m , n , k , j;
	
	cout << "Please enter an integer value for m : ";
	cin >> m;
	cout << "please enter an integer value for n : ";
	cin >> n;
	
	k=1;
	for(j = 1; j <= n; j++){
		k=k*m;
	}
	
	cout <<"Result"<<" : "<< k;
	
}