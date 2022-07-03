#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;

void Inverse(ull a,ull m)
{
    for(ull x=1; x<=m-1; x++)
    {
       if(((a%m)*(x%m))%m==1)
       {
           cout<<x;
           break;
       }
    }
}
int main()
{
    ull a,m;   
    cout<<"Enter a and m :";         //gcd(a,m)=1    //coprime
    cin>>a>>m;

     cout<<"\nInverse: ";
    Inverse(a,m);
    return 0;
}

//Time complexity = O(m)