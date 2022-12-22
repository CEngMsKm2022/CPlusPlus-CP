#include <iostream>

using namespace std;
const int n=5;

main() {
	
	int a[n]={12,11,13,5,6};
	int i , j , temp;
	
	for(i=1; i<n; i++){
		temp = a[i];
		j = i - 1;
	
	while(j>=0 && a[j]>temp){
		a[j+1] = a[j];
		j = j - 1; 	
		}
			a[j+1]=temp;	
	}
	
	for(i=0; i<n; i++){
		cout << a[i] << " ";
		cout << endl;
	}
			
}