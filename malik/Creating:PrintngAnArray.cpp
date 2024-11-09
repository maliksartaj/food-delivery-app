#include<iostream>
using namespace std;
int main (){
    int a[20], i,n;
    cout<<"enter the size of the array: \n";
    cin>>n;
    for (i=0;i<n;i++){
        cout<<"enter the elements of the array: \n";
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        cout<<"\n  "<<a[i]<<endl;
    }
return 0;
}