#include <iostream>
using namespace std;

int fib(int n){
	if (n<=1){
		return n;
	}
	else {
		return fib(n-1) + fib(n-2);
	}
}

//using memoization
int F[40];

int memo_fib(int n){
	if(n<=1){
		F[n] = n;
		return n;
	}
	else{
		if (F[n-2]==-1)
			F[n-2]=memo_fib(n-2);
		if (F[n-1]==-1)
			F[n-1]=memo_fib(n-1);
		
		return F[n-2] + F[n-1];
	}
}

int main(){
	int i;
	for (i=0;i<40;i++){
		F[i] = -1;
	}
	int n;
	cin>>n;
	//cout<<fib(n)<<endl;
	cout<<memo_fib(n)<<endl;
	return 0;
}

//Using loop
/*
int fib(int n){
	int s = 0, t0=0, t1=1;
	if (n<=1){
		return n;
	}
	else{
		for (int i=2;i<=n;i++){
			s = t0 + t1;
			t0 = t1;
			t1 = s;
		}
		return s;
	}
}
*/
