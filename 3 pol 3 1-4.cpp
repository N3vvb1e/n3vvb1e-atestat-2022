#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("pol.in");
ofstream fout("pol.out");

int n, m, x;
double a[51], b[51], c[51];

int main()
{
    fin >> n >> m;
    for(int i=0; i<=n; i++)
        fin >> a[i];
    for(int j=0; j<=m; j++)
        fin >> b[j];
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
            c[i+j]+=a[i]*b[j];
    x=n+m;
    cout << x << '\n';
    for(int i=0; i<=x; i++)
        cout << fixed << setprecision(2) << c[i] << " ";
    return 0;
}
