#include<iostream>
using namespace std;
void travelling(int scr,int dest){
    cout << "Scource is : " << scr << " Destination is : " << dest <<endl<< endl;
    ;
    if (scr == dest)
    {
        cout << "#########  Destination reached ######### " << endl;
        return;
    }

 scr++;
 travelling(scr,dest);
}

int main(){
    int scr = 1,dest=5;
    cout << endl;
    travelling(scr, dest);
    cout << endl;
    return 0;
}