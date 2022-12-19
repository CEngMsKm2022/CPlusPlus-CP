#include <iostream>

using namespace std;

main() {
	
	int n , fact=1 , j=1;
	
	cout << "Please enter a number :";
	cin >> n;
	
	while(j<=n){
		fact = fact * j;
		j = j + 1;
	}
	
	cout << "Result = "<< fact;
	
}