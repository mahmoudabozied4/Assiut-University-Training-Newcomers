#include <iostream>

using namespace std ;


int main()
{

	int N;
	cin >> N;
	for(int i = 2; i <= N; i++){
		int c = 0;
		for(int j = 1; j <= i; j++){
			if(i%j == 0){
				c++;
			}
		}
		if(c == 2){
			cout << i << " ";
		}
	}

	return 0;
}