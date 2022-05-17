#include <iostream>
#include <fstream>

using namespace std;

ifstream fin1("mat1.in");
ifstream fin2("mat2.in");
ofstream fout("mat.out");

int n1, n2, m1, m2;
int n3, m3;
int a[51][51], b[51][51], c[51][51];

void citire1()
{
    fin1 >> n1 >> m1;
    for(int i=0; i<n1; i++)
        for(int j=0; j<m1; j++)
            fin1 >> a[i][j];
}

void citire2()
{
    fin2 >> n2 >> m2;
    for(int i=0; i<n2; i++)
        for(int j=0; j<m2; j++)
            fin2 >> b[i][j];
}

void inmultire()
{
    n3=n1;
    m3=m2;
    for(int i=0; i<n1; i++)
        for(int j=0; j<m2; j++)
    {
        int s=0;
        for(int d=0; d<m1; d++)
            s+=(a[i][d]*b[d][j]);
        c[i][j]=s;
    }
}

void afisare()
{
    for(int i=0; i<n3; i++)
    {
        for(int j=0; j<m3; j++)
            cout << c[i][j] << ' ';
        cout << '\n';
    }
}

int main()
{
    citire1();
    citire2();
    if(n1!=n2)
        cout << "Imposibil";
    else
    {
        inmultire();
        afisare();
    }
    return 0;
}
