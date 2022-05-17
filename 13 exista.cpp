#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("exista.in");
ofstream fout("exista.out");

int n, nr_div[50];

int nrdiv(int x)
{
    int d=3, p=1, nr_divi=1;
    while(x%2==0)
    {
        p++;
        x/=2;
    }
    nr_divi*=p;
    while(d*d<=x)
    {
        p=1;
        while(x%d==0)
        {
            p++;
            x/=d;
        }
        nr_divi*=p;
        d+=2;
    }
    if(x!=1)
        nr_divi*=2;
    return nr_divi;
}

void citire()
{
    fin >> n;
    int x;
    for(int i=0; i<n; i++)
    {
        fin >> x;
        nr_div[i]=nrdiv(x);
    }
}

void rezolvare()
{
    if(n==1 || n==2)
    {
        cout << "NU";
        return;
    }
    for(int i=0; i<n-2; i++)
        if(nr_div[i]==nr_div[i+1] && nr_div[i]==nr_div[i+2])
    {
        cout << "Da";
        return;
    }
    cout << "Nu";
}

int main()
{
    citire();
    rezolvare();
    return 0;
}
