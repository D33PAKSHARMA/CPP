//First non repeating character in an string.
#include <bits/stdc++.h>
using namespace std;
const int N = 26;
char hsh[N];

void count(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        hsh[s[i]]++;
    }
    for (int i = 0; i < N; i++)
    {
        if (hsh[s[i]] == 1)
        {
            cout << "ans : " << s[i] << endl;
            break;
        }
    }
}

int main()
{
    string n="abcdefaghfbc";
    count(n);
}