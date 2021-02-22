# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i=1; i<=12; i++)
      n = round(n*(1+0.02));
    cout << n;
    return 0;
}

