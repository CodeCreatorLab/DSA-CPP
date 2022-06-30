#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0)
        return 1;
    cout <<"Only N  : "<< n<<endl;

    int Smaller_Problem = factorial(n - 1);

    cout << "Smaller_Problem : "<<Smaller_Problem<<endl;
    cout <<"Only N  : "<< n<<endl;
    int Bigger_Problem = n * Smaller_Problem;

    cout <<"Bigger_Problem : "<< Bigger_Problem<<endl;

    return Bigger_Problem;
}

int main(){

    int n;
    cin>> n;
    int ans = factorial(n);
    cout << "Answer : "<<ans<<endl;

    return 0;
}