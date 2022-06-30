#include<iostream>
using namespace std;
int fib(int n){
    if (n==0)
        return 0;

    if(n==1)
        return 1;

    int Fnew = fib(n-1) + fib(n-2);
    return Fnew;
}

int main(){
    int n=5;

    fib(n);

    return 0;

}