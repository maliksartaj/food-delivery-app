#include <iostream>
using namespace std;
int computeprice(int n){
    int product = 1;
    while(n>0){
        int digit = n ;
        product *= digit;
        n /= 10;
    }
    return product;
}
    int main(){
    int n;
    cout<<"enter the product code: ";
    cin>> n;
     int price = computeprice(n);
    cout << "The price of the item is: " << price << endl;

    return 0;
}

   