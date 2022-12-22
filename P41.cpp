#include <iostream>

using namespace std;

main() {
	
    int N , M , i , GCD;
	
	cout <<"Please Enter Two Positive Integer Values :" ;
	cin >> N >> M ;
	
	for(i = 1; i <= N && i <= M; i++){
		if(N%i == 0 && M%i == 0)
		   GCD = i;
	}
	
	cout << "GCD of " << N << " & "<< M <<" is "<< GCD;
	
}