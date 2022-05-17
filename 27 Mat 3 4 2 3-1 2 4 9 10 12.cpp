#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("Mat.in");
ofstream fout("mat.out");

int main()
{
    int n, m, l, c;
    fin >> n >> m >> l >> c;
    int a[51][51];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            fin >> a[i][j];
    for(int i=l; i<n; i++)
        for(int j=1; j<=m; j++)
            a[i][j]=a[i+1][j];
    for(int j=c; j<m; j++)
        for(int i=1; i<=n; i++)
            a[i][j]=a[i][j+1];
    for(int i=1; i<n; i++)
    {
        for(int j=1; j<m; j++)
            cout << a[i][j] << ' ';
        cout << '\n';
    }
    return 0;
}
