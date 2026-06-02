#include<iostream>
using namespace std;
int main()
{
   int n,product=1;
    cout<<"Enter a no.";
    cin>>n;
    while(n>0){

       product=product*(n%10);
        
        n=n/10;
        
    }
    cout<<"products of the digits  are :"<<product;

    return 0;
}