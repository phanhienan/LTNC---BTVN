# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    double doF, doC, doK;
    cin >> doF;
    doC = (doF-32)*5/9;
    doK = doC + 273.15;
    cout << fixed << setprecision(2) << "Do C: " << doC << endl << "Do K: " << doK;
    return 0;
}
