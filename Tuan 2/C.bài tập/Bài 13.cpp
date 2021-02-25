# include <iostream>
# include <cmath>
bool soNguyenTo(int n)
{
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0) return false;
    return true;
}
bool soChinhPhuong(int n)
{
    int can = sqrt(n);
    if(can*can==n) return true;
    return false;
}
bool soHoanHao(int n)
{
    int sum=0;
    for(int i=1; i<n; i++)
    {
        if(n%i==0) sum += i;
    }
    if(sum == n) return true;
    return false;
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout << "Cac so chinh phuong tu 2 den " << n << ": \n";
    for (int i=2; i<=n; i++)
        if (soChinhPhuong(i)) cout << i << " ";

    cout << "\nCac so nguyen to tu 2 den " << n << ": \n";
    for (int i=2; i<=n; i++)
        if (soNguyenTo(i)) cout << i << " ";

    cout << "\nCac so hoan hao tu 2 den " << n << ": \n";
    for (int i=2; i<=n; i++)
        if (soHoanHao(i)) cout << i << " ";

    return 0;
}
