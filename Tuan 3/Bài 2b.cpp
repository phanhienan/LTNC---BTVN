# include <iostream>
using namespace std;
int main ()
{
    string s = "abcd";
    /** cách (1) */
    for (int i=0; i<s.length(); i++)
        cout << s[i];
    cout << endl;
    /** cách (2) */
    cout << s << endl;
    return 0;
}
