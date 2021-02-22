# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int can = sqrt(n);
    if(can*can == n) cout << "Yes";
    else cout << "no";
    return 0;
}
