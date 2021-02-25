# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int t=1;
    for (int i=0; i<n; i++)
    {
        for (int j=t; j<=n; j++)
            cout << j << " ";
        for (int k=1; k<t; k++)
            cout << k << " ";
        t++;
        cout << endl;
    }
    return 0;
}
