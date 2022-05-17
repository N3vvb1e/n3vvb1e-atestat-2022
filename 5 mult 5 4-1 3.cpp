#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("mult.in");
ofstream fout("mult.out");

int n, m, k;
int a[51], b[51], c[51];

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
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(a[i]==b[j])
            {
                c[k++]=a[i];
                break;
            }
    for(int i=0; i<k; i++)
        cout << c[i] << " ";
    return 0;
}
