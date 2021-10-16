#include <iostream>

using namespace std;

//pattern
// *
// **
// ***
// ****
// *****
/*int main()
{
    int i,j,n;
    cin >> n;
    cout << "Enter No. of rows : ";
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}*/

// *****
// *   *
// *   *
// *   *
// *****
/*int main()
{
    int i,j,n;
    cout << "Enter No. of rows : ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i==1||j==1||i==n||j==n)
            {
                cout << "*";
            }
            else{
                cout << " ";
            }
            
        }
        cout << endl;
    }
    return 0;
}*/

// *****
// ****
// ***
// **
// *

// int main()
// {
//     int i, j, n;
//     cout << "Enter No. of rows : ";
//     cin >> n;
//     for (i = n; i >= 1; i--)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//     *
//    ***
//   *****
//  *******
// *********


int main()
{
    int i, j, n;
    cout << "Enter No. of rows : ";
    cin >> n;
    for (i=1;i<=n;i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= 2*i-1 ; j++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    return 0;
}
