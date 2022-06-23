#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void Sieve(ll n)
{
    vector <ll> Prime(n+1,1);

    for(ll i=2; i*i<=n; i++)
    {
        if(Prime[i])
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                Prime[j]=0;
            }
        }
    }

    for(ll i=n; i>=2; i--)
    {
        if(Prime[i])
        {
        cout<<i<<" ";
        break;
        }
    }
}

int main()
{
    ll n;
    cout<<"Enter one number: ";
    cin>>n;

    Sieve(n);
    return 0;
}