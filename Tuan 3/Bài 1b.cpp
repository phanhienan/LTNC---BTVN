# include <iostream>
using namespace std;
int a[5] = {1, 2, 3, 4};    // N lon hon 4
//int b[3] = {1, 2, 3, 4};  //N nho hon 4
int main()
{
    int c[5] = {1, 2, 3, 4};    // N lon hon 4
    //int d[3] = {1, 2, 3, 4};    // N nho hon 4

    // in mang khai bao ngoai ham main
    for (int i=0; i<5; i++)
        cout << a[i] << " ";
    cout << endl;
    // in mang khai bao trong ham main
    for (int i=0; i<5; i++)
        cout << c[i] << " ";
    return 0;
}

