# include <iostream>
using namespace std;
int a[10];
int main()
{
    int b[10];

    // in mang khai bao ngoai ham main
    for (int i=0; i<10; i++)
        cout << a[i] << " ";
    cout << endl;
    // in mang khai bao trong ham main
    for (int i=0; i<10; i++)
        cout << b[i] << " ";
    return 0;
}
