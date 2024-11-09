#include <iostream>
using namespace std;
int main(){
    int m;
int k;
int item;
    
    cout<<"what should be the size of the array:\n";
    cin>>m;
    
    int var[m];
    
    cout<<"enter the elements for the array:\n";
    for (int i=0;i<m;i++){
    cin>>var[i];
        
    }
    for (int p = 0;p<m; p++){
        cout<<var[p]<<" ";
        
    }
    cout<<"\ndeletion at?\n";
    cin>>k;
    
    item = var[k];
    for (int j=k;j<m-1;j++){
        var[j]=var [j+1];
        
    }
    m=m-1;
    cout<<"updated array is:";
    for(int q=0;q<m;q++){
        cout<<var[q]<<" ";
        
    }

    

  return 0;
    
}
