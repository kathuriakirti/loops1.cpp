// Q4. Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<windows.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n terms: ";
    cin>>n;
    for(int i=4;i<=n;i+=3){
         cout<<i<<" ";
    }
}