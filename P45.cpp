#include <iostream>
#define n 5

using namespace std;

main() {
	
	int a[n]={10,14,25,63,30};
	int i , search_key , flag , pos;
	
	cout << "Enter the key : ";
	cin >> search_key;
	
	flag = 0;
	for(i=0; i<n; i++){
		if(a[i] == search_key){
			flag = 1;
			pos = i;
			break;
		}
	}
	if(flag){
		cout << "search key found . position is : " << pos;
	}
	else{
		cout << "search key not found .";
	}
	
}