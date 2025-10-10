#include <iostream>
#include <algorithm>

using namespace std ;


int main()
{

	int x,y;
	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		cin >> x >> y;
		int sum = 0;
		for(int j = min(x,y); j < max(x,y); j++){
			if(j%2 != 0 && j != x && j != y){
				sum += j;
			}
		}
		cout << sum << endl;
	}


	return 0;
}