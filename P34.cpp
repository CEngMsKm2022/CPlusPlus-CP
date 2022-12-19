#include <iostream>
#include <math.h>

using namespace std;

main() {
	
	int n , flag , i;
	
	cout << "Please enter an integer value greater than 2 > ";
	cin >> n;
	
	flag = 1;
	for(i=2; i<sqrt(n); i++){
		if(n%i == 0){
			flag = 0;
			break;
		}
	}
	
if(flag == 1){
	cout << "The number is prime";
}
else {
	cout << "The number is not prime";
}
		
}