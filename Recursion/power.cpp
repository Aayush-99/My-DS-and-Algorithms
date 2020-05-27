#include <iostream>

using namespace std;

int power(int m, int n){
    /*
    if (n>0){
        return m * power(m, n-1);
    }
    else{
        return 1;
    }
    */
    //faster approach:
    
    if (n==0){
        return 1;
    }
    if (n%2==0){
        return power(m*m, n/2);
    }
    else{
        return m*power(m*m, (n-1)/2);
    }
    
}

int main() {
    int n,m;
    cin>>m>>n;
    cout<<power(m,n);
    return 0;
}