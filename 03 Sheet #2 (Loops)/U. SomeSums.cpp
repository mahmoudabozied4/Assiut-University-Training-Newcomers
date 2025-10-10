#include <iostream>
#include <algorithm>

using namespace std ;


int sum_digits(int x){
	int sum = 0;
	while(x > 0){
		sum += x%10;
		x /= 10;
	}
	return sum;
}
int main()
{

	int N,A,B;
	cin >> N >> A >> B;
	int sum = 0;
	for(int i = 1; i <= N; i++){
		if(sum_digits(i) >= A && sum_digits(i) <= B){
			sum += i;
		}
	}
	cout << sum;


	return 0;
}