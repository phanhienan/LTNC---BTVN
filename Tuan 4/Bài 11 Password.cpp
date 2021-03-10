# include <iostream>
using namespace std;
string daonguoc(string n)
{
    string s;
    for (int i=0; i<n.length(); i++)
        s = n[i] + s;
    return s;
}
int main()
{
    int n;
    cin >> n;
    string a[n];
    for (int i=0; i<n; i++)
        cin >> a[i];
    for (int i=0; i<n; i++)
    {
        for (int j=i+1; j<n; j++)
        {
            if(a[j] == daonguoc(a[i])) cout << a[i].length() << " " << a[i][a[i].length()/2];
        }
    }
    return 0;
}
