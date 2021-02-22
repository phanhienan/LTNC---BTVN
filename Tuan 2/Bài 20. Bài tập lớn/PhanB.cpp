# include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int baohiem = 0.09 * n;
    int TN_chiu_thue = n - baohiem;

    int thue;
    if (TN_chiu_thue > 2000000)
        thue = 500000*0.1 + 500000*0.15 + (TN_chiu_thue-2000000)*0.2;
    else if(TN_chiu_thue <= 2000000 && TN_chiu_thue > 1500000)
        thue = 500000*0.1 + (TN_chiu_thue-1500000)*0.15;
    else if(TN_chiu_thue <= 1500000 && TN_chiu_thue >= 1000000)
        thue = (TN_chiu_thue-1000000)*0.1;
    else thue = 0;

    cout << n - baohiem - thue;
    return 0;
}
