# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[50];
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if(a[i] == a[j])
            {
                cout << "YES";
                return 0;
            }
    cout << "NO";
}
