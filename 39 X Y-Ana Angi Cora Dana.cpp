#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("X.txt");
ifstream g("Y.txt");

char a[30], b[30];

int main()
{
    f >> a;
    g >> b;
    while(!f.eof() && !g.eof())
    {
        if(strcmp(a,b)<0)
        {
            cout << a << " ";
            f >> a;
        }
        else
            if(strcmp(a,b)==0)
        {
            cout << a << " ";
            f >> a;
            g >> b;
        }
        else
        {
            cout << b << " ";
            g >> b;
        }
    }
    while(!f.eof())
    {
        cout << a << " ";
        f >> a;
    }
    while(!g.eof())
    {
        cout << b << " ";
        g >> b;
    }
    return 0;
}
