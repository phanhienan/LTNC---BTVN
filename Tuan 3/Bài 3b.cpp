# include <iostream>
using namespace std;
int main()
{
    char daytab[2][12] = {
     {31,28,31,30,31,31,30,31,30,31},
     {29,31,30,31,30,31,31,31}
    };
    for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
/** các giá trị còn lại sẽ dồn về phía đầu mỗi hàng */
    char daytab1[2][12] = {
     31,30,31,30,31,31,30,31,30,31,
     31,29,31,30,31,30,30,31
    };
     for (int i=0; i<2; i++){
        for (int j=0; j<12; j++){
            cout << daytab1[i][j] << " ";
        }
        cout << endl;
     }
/** các giá trị còn lại sẽ dồn lên hàng thứ 1, hàng 1 đủ sẽ đến hàng thứ 2 */
    return 0;
}

