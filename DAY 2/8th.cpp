#include<iostream>
using namespace std;
int main()
{
   int n,rev=0,k;
    cout<<"Enter a no.";
    cin>>n;
    k=n;
    while(n>0){

       rev=(rev*10)+ n%10;
        
        n=n/10;
        
    }
cout<<"reverse of a no. is "<<rev<<"\n";

   if(rev==k)
  cout<<"\nNO. is palindrome";

  else
  cout<<"No. is not palindrome";



    return 0;
}