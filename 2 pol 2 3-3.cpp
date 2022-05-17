#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

ifstream fin("pol.in");
ofstream fout("pol.out");

int main()
{
    int n, m, x;
    double a[51], b[51], c[51];
    fin >> n >> m;
    if(n>m)
        x=n;
    else
        x=m;
    for(int i=0; i<=n; i++)
        fin >> a[i];
    for(int i=0; i<=m; i++)
        fin >> b[i];
    for(int i=0; i<=x; i++)
        c[i]=b[i]+a[i];
    cout << x << '\n';
    for(int i=0; i<=x; i++)
        cout << fixed << setprecision(2) << c[i] << " ";
    return 0;
}
