#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int opi;
        cin >> opi;
        if (opi == 1)
        {
            cout << "HARD";
            return 0;
        }
    }
    cout << "EASY";

    return 0;
}