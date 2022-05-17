#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("cmmdc.in");
ofstream fout("cmmdc.out");

int a[51], n;

int cmmdc(int a, int b)
{
    while(b)
    {
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main()
{
    fin >> n;
    for(int i=1; i<=n; i++)
        fin >> a[i];
    int aux=cmmdc(a[1], a[2]);
    for(int i=3; i<=n; i++)
        aux=cmmdc(a[i], aux);
    cout << aux;
    return 0;
}
