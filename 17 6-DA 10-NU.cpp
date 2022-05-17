#include <iostream>

using namespace std;

int nrdiv(int x)
{
    int nr=0;
    for(int i=1; i<=x; i++)
        if(x%i==0)
            nr++;
    return nr;
}

int main()
{
    int n, a, ok=0;
    cin >> n;
    a=nrdiv(n);
    for(int j=1; j<n; j++)
        if(nrdiv(j)>=a)
    {
        ok=1;
        break;
    }
    if(ok==1)
        cout << "NU";
    else
        cout << "DA";
    return 0;
}
