#include <iostream>
#include <fstream>

using namespace std;

ofstream fout("Pascal.out");

int main()
{   int n, a[51][51];
    cin >> n;
    a[1][1]=1;
    cout << a[1][1];
    cout << endl;
    for(int i=2; i<=n+1; i++)
    {
        for(int j=1; j<=i; j++)
        {
            a[i][j]=a[i-1][j]+a[i-1][j-1];
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
