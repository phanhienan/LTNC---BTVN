# include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int a[n];
        int sumleft=0, sum =0;
        for (int i=0; i<n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        bool b = false;
        for (int i=0; i<n; i++)
        {
            sumleft += a[i-1];
            sum -= a[i];
            if (sum == sumleft) b=1;
        }
        if (b) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
