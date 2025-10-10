#include <iostream>


using namespace std ;


int main()
{

	int T,N;
	cin >> T;

	for(int i = 0; i < T; i++){
		cin >> N;
		long long sum = 1;
		for(int i = 1; i <= N; i++){
			sum *= i;
		}
		cout << sum << endl;
	}



	return 0;
}