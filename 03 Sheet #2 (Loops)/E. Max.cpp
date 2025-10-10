#include <iostream>


using namespace std ;


int main()
{

	int N,num;
	int max = 0;
	cin >> N;

	for(int i = 0; i < N; i++){
		cin >> num;
		if(max == 0){
			max = num;
		}
		if(num > max){
			max = num;
		}
	}
	cout << max;


	return 0;
}