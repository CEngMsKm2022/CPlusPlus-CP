#include <iostream>

using namespace std;

main() {
	
	int a[4];
	int max , i;
	
	cout << "Please Enter numbers : ";
	
	for(i=0; i<4; i++){
		cin >> a[i];
	}
	
	max = a[0];
	for(i=0; i<4; i++){
		if(a[i] > max){
			max = a[i];			
		}
	}

    cout << "Max is " << max;	
	
}