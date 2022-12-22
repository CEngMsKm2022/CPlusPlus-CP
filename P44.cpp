#include <iostream>

using namespace std;

main() {
	
	int a[10];
	int i;
	float total = 0.0 , average;
	
	for(i=0; i<10; i++){
		
		cout << "Enter the number : " << (i+1) << " : ";
		cin >> a[i];
	}

    for(i=0; i<10; i++){
    	
    	total = total + a[i];
	}
	average = total / 10;
	
	cout << "\nTotal of all numbers = " << total << "\n";
	cout << "\nAverage of all input numbers = " << average << "\n";
	
}