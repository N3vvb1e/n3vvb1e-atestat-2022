#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("numere.in");
ofstream fout("numere.out");

void rasturnat(char sir[51], char sir2[51])
{
    for(int i=0; i<strlen(sir); i++)
        sir2[i]=sir[strlen(sir)-i-1];
    sir2[strlen(sir)]=NULL;
}

int main()
{
    char s1[51], s2[51], s3[101], s1r[51], s2r[51], s3r[101];
    fin.getline(s1,51);
    fin.get(s2,51);
    rasturnat(s1,s1r);
    rasturnat(s2,s2r);
    int n, m, nrs;
    if(strlen(s1)<strlen(s2))
    {
        n=strlen(s1);
        m=strlen(s2);
        nrs=2;
    }
    else
    {
        n=strlen(s2);
        m=strlen(s1);
        nrs=1;
    }
    int s=0;
    for(int i=0; i<=n; i++)
    {
        s+=s1r[i]-'0' + s2r[i]-'0';
        int cif=s%10;
        s3[i]=char(cif+'0');
        if(s>9)
            s=1;
        else
            s=0;
    }
    for(int i=n; i<m; i++)
    {
        if(nrs==1)
            s3[i]=s1r[i];
        else
            s3[i]=s2r[i];
    }
    s3[m]=NULL;
    rasturnat(s3,s3r);
    cout << s3r;
    return 0;
}
