#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("sort.in");
ofstream fout("sort.out");

int a[51], b[51], c[102];
int n, m;

void citire()
{
    fin >> n >> m;
    for(int i=0; i<n; i++)
        fin >> a[i];
    for(int i=0; i<m; i++)
        fin >> b[i];
}

int main()
{
    citire();
    int i=0, j=0, k=0;
    while(i<n && j<m)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    for(i=0; i<k; i++)
        cout << c[i] << " ";
    return 0;
}
