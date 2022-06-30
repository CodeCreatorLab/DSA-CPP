#include<iostream>
#include<string>
using namespace std;

void sayDigit(int n,string arr[]){
    if(n==0)
        return;

    int digit = n % 10;
    n = n / 10;



    sayDigit(n, arr);
        cout << arr[digit]<<"  :  ";
}

int main(){
    int n;
    string arr[11] = {
       "zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine","ten"};
    cin >> n;
    cout << endl;
    sayDigit(n,arr);
    cout << endl;
    cout << endl;

    return 0;
}