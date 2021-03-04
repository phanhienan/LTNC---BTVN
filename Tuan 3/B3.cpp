# include <iostream>
using namespace std;
bool check (int n)
{
    int sodaonguoc = 0, a=n;
    while (a)
    {
        int du= a%10;
        sodaonguoc = sodaonguoc*10 +du;
        a /=10;
    }
    if (sodaonguoc == n) return true;
    return false;
}
int main ()
{
    int T;
    cin >> T;
    while (T--)
    {
        int A, B, count=0;
        cin >> A >> B;
        for (int i=A; i<=B; i++)
        {
            if (check(i)) count ++;
        }
        cout << count << endl;
    }
    return 0;
}

