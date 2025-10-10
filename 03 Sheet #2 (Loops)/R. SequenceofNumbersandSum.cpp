#include <iostream>
#include <algorithm>

using namespace std ;


int main()
{

	int N,M;
	while(cin >> N >> M){
		int sum = 0;
		if(N <= 0 || M <= 0){
			return 0;
		}
		for(int i = min(N,M); i <= max(M,N); i++){
			cout << i << " ";
			sum += i;
		}
		cout << "sum =" << sum << endl;
	}


	return 0;
}