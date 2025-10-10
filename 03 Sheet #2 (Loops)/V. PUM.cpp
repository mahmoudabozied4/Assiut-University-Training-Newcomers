#include <iostream>
#include <algorithm>

using namespace std ;



int main()
{

	int N;
	cin >> N;
	int a = 1,b = 2,c = 3;
	for(int i = 0; i < N; i++){
		cout << a << " " << b << " " << c << " PUM";
		a += 4;
		b += 4;
		c += 4;
		cout << endl;
	}


	return 0;
}