#include <iostream>


using namespace std ;


int main()
{

	int x;
	while(cin >> x){
		if(x == 1999){
			cout << "Correct";
			return 0;
		}else{
			cout << "Wrong";
		}
		cout << endl;
	}



	return 0;
}