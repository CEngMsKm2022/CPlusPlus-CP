#include <iostream>

using namespace std;
const int n=5;

main() {
	 
	int a[n];
	int i , j , temp;
	cout << "Enter " << n << " elements : ";
	
	for(i=0; i<n; i++){
		cout << "Enter the element " << (i+1) << " : ";
		cin >> a[i];
	}
	
	for(i=1; i<n; i++){
		for(j=0; j<(n-i); j++)
		    if(a[j]<a[j+1]){
		    	
		    	temp = a[j];
		    	a[j] = a[j+1];
		    	a[j+1] = temp;
		    	
			}
    	}
    	
    	cout << "Array after bubble sort : ";
    	for(i=0; i<n; i++)
    	    cout << " " << a[i];
    	    
}