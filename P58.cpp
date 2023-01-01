#include <iostream>

using namespace std;

main() {
	
	int first[3][3] , second[3][3] , sum[3][3];
	int i , j;
	
	cout << "Please enter the elements of first matrix\n";
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin >> first[i][j];
		}
	}
	
	cout << "Please enter the elements of second matrix\n"; 
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			cin >> second[i][j];
		}
	}
	
	cout << "Sum of entered matrix:\n";
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			sum[i][j] = first[i][j] + second[i][j];
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	
}