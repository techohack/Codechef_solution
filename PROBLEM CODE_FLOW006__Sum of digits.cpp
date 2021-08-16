#include<iostream>
using namespace std;

int main()
{
   int t;
   cin>>t;

 while(t>0)
{
  int d=0,s=0,a;
  int x=a;
  cin>>a;
 
  while(a!=0)
  {
   d=a%10;
   s=s+d;
   a=a/10;
   }
cout<<s<<"\n";
t--;
}
    return 0;
}