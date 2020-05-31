#include <iostream>
using namespace std;

void TOH(int n, int A, int B, int C){
	if (n>0){
		TOH(n-1, A, C, B);
		printf("from %d to %d\n", A, C);
		TOH(n-1, B, A, C);
	}
}

int main(){
	int n, a=1, b=2, c=3;
	cin>>n;
	TOH(n,a,b,c);
	return 0;
}

