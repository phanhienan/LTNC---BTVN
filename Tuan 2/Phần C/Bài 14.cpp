# include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    double x;
    cin >> x;
    double max = x, min = x;
    for (int i=1; i<=n-1; i++)
    {
        cin >> x;
        if(x>max) max=x;
        if(x<min) min=x;
    }
    cout << max << endl << min;
    return 0;
}
