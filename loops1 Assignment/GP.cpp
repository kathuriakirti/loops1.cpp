// Q5. Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<windows.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";  
    cin>>n;  
    for(int i=3;i<=n;i=i*4){
         cout<<i<<" ";
    }
}