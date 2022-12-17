#include <iostream>

using namespace std;

main() {
	
	int M;
	
	cout << "Enter a number : ";
	cin >> M;
	
	if(M > 0){
		cout << "The number is Positive : " << M;
	}
	else if(M == 0){
		cout << "The number is Zero : " << M;
	}
	else{
		cout << "The number is Negative : " << M;
	}

}