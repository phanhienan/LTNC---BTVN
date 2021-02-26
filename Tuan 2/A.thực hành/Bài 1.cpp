# include <iostream>
using namespace std;
int main()
{
    // Vòng lặp for
    for (int i=0; i <=100 ; i+=2)
        cout << i << " ";
    cout << endl;

    for (int i=0;; i++)
    {
        if (i%2==0) cout << i << " ";
        if (i>100) break;
    }
    cout << endl;

    for (int i=0;i<=100; i++)
    {
        if (i%2) continue;
        cout << i <<" ";
    }
    cout << endl;

    // Vòng lặp while
    int n=0;
    while (n>=0 && n<=100)
    {
        cout << n << " ";
        n += 2;
    }
    cout << endl;

    // Vòng lặp do while
    int x=0;
    do
    {
        cout << x << " ";
        x += 2;
    }
    while (x<=100);

    return 0;
}
