# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a=1, b=1;
    cout << a << endl << b << endl;
    while (a+b <= n)
    {
        a += b;
        cout << a << endl;
        if(a+b <= n)
        {
            b += a;
            cout << b << endl;
        }
    }
    if(n==a || n==b) cout << "yes";
    else cout << "no";
    return 0;
}
