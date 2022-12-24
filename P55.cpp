#include <iostream>

using namespace std;

main() {
	
	int a[10];
	int  min , i;
	
	cout << "Please enter 10 elements : ";
	
	for(i=0; i<10; i++){
		cin >> a[i];
	}
	
	min=a[1];
	for(i=0; i<10; i++){
	    if(a[i] < min){
	    	min = a[i+1];
	    }
	}
	
	cout << "Second minimum of entered numbers is " << min;
	
}