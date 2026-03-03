#include <iostream>
#include <string>
using namespace std;

int arr[20]; /// seklarasi bvariabel gelobal arry
int n;

void input()/// perosedur untuk input
{
    int d;
    while(true)
    {
        cout << "Masukan banyak elemen pada array :";/// otput kelasyar
        cin >> n;
        if (n <=20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }
    }
    cout << endl;
    cout << "============================="<< endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "=============================="<< endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}
