#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull pow_(ull x, ull n, ull mod)
{
    ull ans = 1;
    while (n)
    {
        if (n & 1)
            ans = ans * x % mod;
        n = n / 2;
        x = x * x % mod;
    }
    return ans;
}

void display(vector<ull> v)
{
    for (ull i = 0; i < v.size(); i++)
    {
        if (v[i] == 100)
        {
            cout << " ";
        }
        else
        {
            int a = v[i] / 100;
            int b = v[i] % 100;
            if (a != 0)
            {
                if (a < 31)
                    cout << char(a + 96);
                else
                    cout << char(a);
            }
            if (b < 31)
                cout << char(b + 96);
            else
                cout << char(b);
        }
    }
    cout << endl;
}

int main()
{
    ull n2, e2, d2;
    // n2 = 988027;
    // e2 = 7699;
    // d2 = 588499;
    n2 = 62615533;
    e2 = 7699;
    d2 = 11269411;
    
    
    while(1)
    {
        
    vector<ull> v;
    cout << endl;

    cout << "Enter the message that you want to encrypt....." << endl;
    string s;
    getline(cin, s);

    for (ull i = 0; i < s.length(); i++)
    {
        int x = s[i];
        int y=0;

        if (s[i] == ' ')
        {
            v.push_back(32);
        }

        else
        {
            if (i == s.length() - 1 || s[i + 1] == ' ')
            {
                if (x >= 97)
                {
                    x = x - 'a' + 1;
                }
                
                v.push_back(x);
            }
            else
            {
                y = (int)s[i + 1];
                if (y>= 97)
                    y = s[i + 1] - 'a' + 1;
                if (x >= 97)
                    x = x - 'a' + 1;

                int z = x * 100 + y;
                v.push_back(z);
                i++;
            }
        }
    }
    for (ull i = 0; i < v.size(); i++)
    {
        if (v[i] != 100)
            v[i] = pow_(v[i], e2, n2);
    }
    cout << endl;
    cout << "Encrypted message : ";
    display(v);
    cout << endl;

    // cout << "Enter the decryption key : ";
    // cin >> d2;
    cout << endl;
    for (ull i = 0; i < v.size(); i++)
    {
        if (v[i] != 100)
        {
            v[i] = pow_(v[i], d2, n2);
        }
    }
    cout << "Original msg : ";
    display(v);
    cout << endl;
    }

    return 0;
}



// Decrypted key = 588499