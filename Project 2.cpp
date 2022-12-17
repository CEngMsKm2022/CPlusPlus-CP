#include <iostream>

using namespace std;

main() {
	
	int n , m , max;
	
	cout << "Please enter two integer value : ";
	cin >> n >> m;
	
	if(n > m){
	    max = n; 	
		cout << "max is " << max;	
	}
	else{
		max = m;
		cout << "max is " << max;
	}
	
}