#include<iostream>
using namespace std;
int main(){

    int n,count=0,i;
    cout<<"Enter a no. :";
    cin>>n;
    if(n==1)
    cout<<"Not prime ";
    i=1;
 while(i<=n){
    if (n%i==0){
        count++;
    }
    i++;
 }

  if(count==2)
  cout<<"Prime no.";
  else
  cout<<"Not prime";

    return 0;
}