#include <bits/stdc++.h>
typedef signed long long sll;
using namespace std;

sll gcd(sll a, sll b, sll *x, sll *y)
{
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    sll x1, y1;
    sll GCD =  gcd(b % a, a, &x1, &y1);

    *x = y1 - (b / a) * x1;
    *y = x1;

    return GCD;
}

void Inverse(sll a, sll m)
{
    sll x, y;

    sll GCD = gcd(a, m, &x, &y);

    if (GCD != 1)
        cout << "\nInverse Not Found";

    else
    {
        sll INVERSE = (x % m + m) % m;
        cout << "\nInverse is: " << INVERSE;
    }
}
int main()
{
    sll a;
    sll m;
    cout << "Enter a and m :";    //gcd(a,m)=1    //coprime
    cin >> a >> m;

    Inverse(a, m);
    return 0;
}


