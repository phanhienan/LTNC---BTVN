# include <iostream>
# include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b*b - 4*a*c;
    if(delta>0)
    {
        cout <<"Phuong trinh co 2 nghiem:\n";
        cout << "x1 = " << (-b-sqrt(delta))/(2*a) << endl << "x2 = " << (-b+sqrt(delta))/(2*a);
    }
    else if(delta==0) cout << "Phuong trinh co 1 nghiem: x = " << -b/(2*a);
    else
    {
        cout << "Phuong trinh co 2 nghiem phuc:\n";
        cout << "x1 = " << -b/(2*a) << " + " << abs(sqrt(-delta)/(2*a)) << "i\n";
        cout << "x2 = " << -b/(2*a) << " - " << abs(sqrt(-delta)/(2*a)) << "i\n";
    }
    return 0;
}
