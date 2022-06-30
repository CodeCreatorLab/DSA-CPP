#include<iostream>
using namespace std;

int Power(int n){
    if(n==0)
        return 1;

    int smaller = Power(n - 1);
    int bigger = 2 * smaller;
    return bigger;
    
}

int main(){

    int n;
    cin>> n;
    int ans = Power(n);
    cout << "Answer : "<<ans<<endl;

    return 0;
}