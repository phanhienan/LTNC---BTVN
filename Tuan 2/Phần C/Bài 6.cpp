# include <iostream>
using namespace std;
int main()
{
    int a, b, UCLN;
    cin >> a >> b;
    for (int i=min(a,b); i>=1; i--)
    {
        if (a%i==0 && b%i==0)
        {
            UCLN = i;
            break;
        }
    }
    cout << "Phan so toi gian: " << a/UCLN << "/" << b/UCLN;
    return 0;
}

