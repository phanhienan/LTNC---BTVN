# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n-1;
    while (n>=0)
    {
        if (x!=n) cout << n << " ";
        x = n;
        cin >> n;
    }
    cout << n;
    return 0;
}
