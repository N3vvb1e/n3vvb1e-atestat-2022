#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mat.in");
ofstream fout("mat.out");

int n, a[51][51];

int sum_cif(int x)
{
    if(x<10)
        return x;
    return x%10 + sum_cif(x/10);
}

void citire()
{
    fin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin >> a[i][j];
}

int main()
{
    int ok=0;
    citire();
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            if(i+j>n+1)
                if(sum_cif(a[i][j])%2==0)
                    ok=1;
    if(ok==1)
        cout << "Da";
    else
        cout << "NU";
    return 0;
}
