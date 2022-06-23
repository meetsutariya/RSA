#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull power_function(ull base, ull power, ull mod)
{
    ull ans = 1;
    while (power)
    {
        if (power & 1)
            ans = ans * base % mod;

        power = power / 2;
        base = base * base % mod;
    }
    return ans;
}

int main()
{
    ull base, power, mod;
    cout << "Enter the value of base , power and mod that you want to calculate : " << endl;

    cin >> base>>power >> mod;

    ull ans = power_function(base, power, mod);
    cout<<endl;

    cout<<"Answer of the calcultion is : ";
    cout << ans % mod << endl;

    return 0;
}