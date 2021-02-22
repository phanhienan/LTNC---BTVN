# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    int n;
    double tongdiem = 0, tongheso = 0;
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        double diem, heso;
        cout << "Diem mon hoc " << i << ": ";
        cin >> diem;
        while(diem<0 || diem>10)
        {
            cout << "Nhap lai diem mon hoc " << i << "(trong khoang tu 0,0...10,0): ";
            cin >> diem;
        }
        cout << "He so mon hoc " << i << ": ";
        cin >> heso ;
        tongdiem += diem*heso;
        tongheso += heso;
    }
    cout << "====================\n";
    cout << "Tong so he so: " << tongheso << endl;
    cout << fixed << setprecision(2) << "Diem trung binh cua " << n << " mon hoc: " << tongdiem/tongheso;
    return 0;
}
