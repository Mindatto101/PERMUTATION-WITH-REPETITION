///Coding or to be Coded !
#include <bits/stdc++.h>

using namespace std;
int a[1001];
void out(int k, int a[])   // Output function
{
    cout << "{";
    for (int i = 1; i <= k; i++)
    {
        if (i == k)
        {
            cout << a[k];
            break;
        }
        cout << a[i] << ",";
    }
    cout << "}" << endl;
}
int main()
{
    int n, k, countx = 1;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        a[i] = 0;
    }
    out(k,a);       // First
    while (countx != pow(n,k))
    {
        for (int i = k; i >= 1; i--)
        {
            if (a[i] < n-1)
            {
                a[i]++;
                for (int j = i+1; j <= k; j++)
                {
                    a[j] = 0;
                }
                countx++;
                out(k,a);
                break;
            }
        }
    }
    return 0;
}
