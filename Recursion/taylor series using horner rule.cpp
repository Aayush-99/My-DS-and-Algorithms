#include <iostream>
using namespace std;

double e(int x, int n){
	static double s;
	if(n==0){
		return s;
	}
	else {
		s = 1+(x*s/n);
		return e(x,n-1);
	}
}

int main(){
	printf("%lf \n", e(1,10));
	return 0;
}

//using loop
/*
 double e(int x, int n){
	double s=1;
	for(;n>0;n--){
		s = 1+(x/n*s);
	}
	return s;
}
 */
