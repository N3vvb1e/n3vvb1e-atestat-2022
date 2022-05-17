#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("text.in");
ofstream fout("rime.out");

char s[251], a[50][50], *p;
int n;

int main()
{
    fin.getline(s,256);
    p=strtok(s," ");
    n=0;
    while(p!=NULL)
    {
        strcpy(a[n],p);
        n++;
        p=strtok(NULL," ");
    }
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
    if(a[i][strlen(a[i])-1]==a[j][strlen(a[j])-1] && a[i][strlen(a[i])-2]==a[j][strlen(a[j])-2])
        cout << a[i] << " " << a[j] << endl;
    return 0;
}
