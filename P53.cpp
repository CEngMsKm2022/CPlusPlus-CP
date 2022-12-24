#include <iostream>

using namespace std;

main() {
	
	int a[]={7,12,23,34,42,51,63,72,80,99};
	int first , middle , last , search , flag;
	
	cout << "Please enter a value to find : ";
	cin >> search;
	
	flag = 0;
	first = 0;
	last = 9;
	middle = (first+last)/2;
	
	while(first <= last){
		if(a[middle] < search){
			first = middle + 1;
		}
		else if(a[middle] == search){
			cout << search << " found at location " << middle << " \n";
			flag = 1;
			break;
		}
		else{
			last = middle - 1;
		}
		middle = (first + last)/2;
	}
	if(flag==0){
		cout << "Not found! " << search << " is not present in the list . ";
	} 
	
}