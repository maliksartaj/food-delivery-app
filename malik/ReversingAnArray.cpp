//reversing an array
#include <iostream>
using namespace std;
int main ( ) {
int a[50],n,temp,i,j;
cout<<"enter the number of elements wanted in an array: \n";
cin>>n;
for(i=0;i<n;i++) {
    cout<<"\n enter the element: ";
cin>>a[i];
}
for(i=0,j=n-1;i<n-1;i++,j--)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
cout<<"\n after reversing all the elements in the array: " <<endl;

for(i=0;i<n;i++){
    cout<< a[i] << " ";
}

   return 0;
}