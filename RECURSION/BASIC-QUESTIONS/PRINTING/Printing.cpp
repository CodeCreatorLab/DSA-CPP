#include<iostream>
using namespace std;

int Print(int n){
    if (n == -1)
        return 0;


// for reverse printing eg 4 3 2 1

// cout << n <<endl;

//--------------------------------

Print(n - 1);

//--------------------------------

// for Forward printing eg 1 2 3 4

// cout << n <<endl;

return;
}

int main(){
    int n;
    cin >> n;
    Print(n);

    return 0;
}