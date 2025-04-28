#include <iostream>
using namespace std;

int subtract(int a, int b, int c){
	return a-b-c; 
}

int main() {
	int a = 1, b = 2, c = 3;
	int m = subtract(a,b,c);
	cout<<m;
	 
    return 0;
}

