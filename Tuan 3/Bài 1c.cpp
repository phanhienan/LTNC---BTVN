# include <iostream>
using namespace std;
int a[] = {1, 2, 3, 4};
int main()
{
    int b[] = {1, 2, 3, 4};
    // in mang khai bao ngoai ham main
    for (int i=0; i<4; i++)
        cout << a[i] << " ";
    cout << endl;
    // in mang khai bao trong ham main
    for (int i=0; i<4; i++)
        cout << b[i] << " ";
    return 0;
}


