#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("text.in");
ofstream fout("text.out");

char sir[101];
int litere[26];

void parcurgere()
{
    int l=strlen(sir);
    for(int i=0; i<l; i++)
        if(sir[i] >= 'a' && sir[i] <= 'z')
            litere[(int)(sir[i]-'a')]++;
        else if(sir[i] >= 'A' && sir[i] <= 'Z')
            litere[(int)(sir[i]-'A')]++;
}

void citire()
{
    while(fin.getline(sir, 100))
        parcurgere();
}

void afisare()
{
    for(int i=0; i<26; i++)
    {
        if(litere[i]!=0)
            cout << (char)(i+'A') << ' ' << litere[i] << '\n';
    }
}

int main()
{
    citire();
    afisare();
    return 0;
}
