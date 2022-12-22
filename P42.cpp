#include <iostream>

using namespace std;

main() {
	int n , i , flag , j , s;
	
	cout <<"Please Enter an Integer value greater than 2 > " ;
	cin >> n;
	
	s=0;
	for(i=2; i<n; i++){
		flag = 1;
		for(j=2; j<i; j++){
			if(i%j == 0){ 
			flag = 0 ;
			   break;
			}
		}
		if(flag==1){
			flag = 1 ;
			s = s + i;
			cout << "\n" << i;
    	}
    }
    
    cout << "\n = " << s; 
     
}
