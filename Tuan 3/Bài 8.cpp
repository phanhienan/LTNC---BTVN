# include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    int time[n];
    for (int i=0; i<n; i++)
        cin >> time[i];
    for (int i=0; i<n; i++)
        for (int j=i+1; j<n; j++)
            if(time[i]>time[j])
            {
                int tmp = time[i];
                time[i] = time[j];
                time[j] = tmp;
            }
    for (int i=0; i<n-1; i++)
        for (int j=0; j<=i; j++)
            sum += time[j];
    cout << sum;
    return 0;
}
