#include <iostream>

using namespace std;

int main(){
    int arr[2][3];
    int i, j;
    cout << "\n2D Array Input By user:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\ns[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    }
    cout << "\nThe 2-D Array entered by user is:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "\t" << arr[i][j];
        }
        cout << endl;
    }
}