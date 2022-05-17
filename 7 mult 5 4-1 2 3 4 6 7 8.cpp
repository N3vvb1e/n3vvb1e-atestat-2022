#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mult.in");
ofstream fout("mult.out");

int n, m;
int a[51], b[51], c[102];

void citire()
{
    fin >> n >> m;
    for(int i=1; i<=n; i++)
        fin >> a[i];
    for(int j=1; j<=m; j++)
        fin >> b[j];
}

int main()
{
    int k=1;
    citire();
    int i=1, j=1;
    while(i<=n && j<=m)
    {
        if(a[i]==b[j])
        {
            c[k++]=a[i++];
            j++;
        }
        else
        {
            if(a[i]<b[j])
            {
                c[k++]=a[i++];
            }
            else
            {
                c[k++]=b[j++];
            }
        }
    }
    while(i<=n)
    {
        c[k++]=a[i++];
    }
    while(j<=m)
    {
        c[k++]=b[j++];
    }
    for(i=1; i<k; i++)
        cout << c[i] << " ";
    return 0;
}
