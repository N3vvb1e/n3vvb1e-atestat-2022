#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sir.in");

int suma(int x)
{
    int s=0;
    while(x)
    {
        s+=x%10;
        x/=10;
    }
    return s;
}

int main()
{
    int n, a[101], ok=0;
    fin >> n;
    for(int i=1; i<=n; i++)
    {
        fin >> a[i];
    }
    for(int i=1; i<=n/2; i++)
    {
        if(suma(a[i]) == suma(a[n-i+1]))
        {
            cout << a[i] << ' ' << a[n-i+1] << '\n';
            ok=1;
        }
    }
    if(ok==0)
        cout << "Nu exista";
    return 0;
}
