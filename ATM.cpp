#include<iostream>
using namespace std;

int main()
{
    int amt;
   double bal;

    cin>>amt>>bal;
    
    double rem_bal;
    if(amt%5==0)
    {
      if(amt<bal &&((amt+0.5)<=bal))
      {
        rem_bal=bal-amt-(0.5);
        cout<<rem_bal<<endl;
        }
      else
       {
         cout<<bal<<endl;
        }
     }
    else
    {
    cout<<bal<<endl;
    }
    return 0;
}