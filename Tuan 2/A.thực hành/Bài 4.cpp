# include <iostream>
# include <iomanip>
using namespace std;
bool checkLeapYear(int n)
{
    if (n%400==0 || (n%4==0 && n%100!=0)) return true;
    return false;
}
void inNgay (int d, int m, int y, int k)
{
    int day[12];
    day[1] = day[3] = day[5] = day[7] = day[8] = day[10] = day[12] = 31;
    day[4] = day[6] = day[9] = day[11] =30;
    if (checkLeapYear(y)) day[2] = 29;
    else day[2] = 28;

    d += k;
    if (d < day[m] && d >0)
        cout << setw(2) << setfill('0')<< d << "-" << setw(2) << setfill('0')<< m << "-" << y << endl;
    else if (d >= day[m])
    {
        while (d > day[m])
        {
            d -= day[m];
            m++;
            if (m>12)
            {
                m -= 12;
                y++;
            }
        }
        cout << setw(2) << setfill('0')<< d << "-" << setw(2) << setfill('0')<< m << "-" << y << endl;
    }
    else
    {
        while (d <=0)
        {
            m--;
            if (m<=0)
            {
                m += 12;
                y--;
            }
            d += day[m];
        }
        cout <<setw(2) << setfill('0')<< d << "-" << setw(2) << setfill('0')<< m << "-" << y << endl;
    }
}
int main()
{
    int d, m, y, k;
    char c;
    cin >> d >> c >> m >> c >> y >> k;
    while (k!=0)
    {
        inNgay(d,m,y,k);
        cin >> k;
    }
    return 0;
}
