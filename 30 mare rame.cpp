#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int n, m, i, j;
    char a[21], b[21], aux;
    int ok=0;
    cin >> a;
    cin >> b;
    n=strlen(a), m=strlen(b);
    if(n!=m)
    {
        cout << "Nu";
        return 0;
    }
    else
        for(i=0; i<n-1; i++)
            for(j=1; j<n; j++)
    {
        if(a[i]>a[j])
        {
            aux=a[i];
            a[i]=a[j];
            a[j]=aux;
        }
        if(b[i]>b[j])
        {
            aux=b[i];
            b[i]=b[j];
            b[j]=aux;
        }
    }
    if(strcmp(a,b)==0)
        ok=1;
    if(ok==1)
        cout << "Da";
    else
        cout << "Nu";
    return 0;
}
