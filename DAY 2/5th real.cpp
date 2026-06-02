#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
    cout<<"Enter a no.";
    cin>>n;
    while(n>0){

       sum=sum+ n%10;
        
        n=n/10;
        
    }
    cout<<"No. of digits are :"<<sum;

    return 0;
}