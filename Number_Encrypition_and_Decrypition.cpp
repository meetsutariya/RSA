#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull pow_(ull x, ull n, ull mod)
{
    ull ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans *x) % mod;
        n = n / 2;
        x = x * x % mod;

    }
    return ans;
}
int main()
{
    ull n, e, d, M, C, D, p, q;

    p = 7907;
    q = 7919;
    n = p*q;       // 62615533
    e = 7699;
    d = 11269411;

    cout << "Enter any number that u want to Encrypt : " << endl;
    cin >> M;

    cout << "Encrypted message : ";
    C = pow_(M, e, n);               // compute ( C = M^e mod n )
    cout << C << endl;

    cout << "Decrypted message : ";
    D = pow_(C, d, n);               // compute ( D = C^d mod n )
    cout << D << endl;

    return 0;
}