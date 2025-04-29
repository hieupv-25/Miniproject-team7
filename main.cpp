#include <iostream>
using namespace std;
int add(int a, int b, int c){
	return a+b+c; 
}
int subtract(int a, int b, int c){
	return a-b-c; 
}

int main() {
	int a = 1, b = 2, c = 3;
	int m = subtract(a,b,c);
	cout<<m;
	int n = add(a,b,c);
	cout<<n;
    return 0;
}

