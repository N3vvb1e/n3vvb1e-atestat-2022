#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream fin("text.in");

char s[256], a[50][256], *p, aux[256];
int n;

int main()
{
    fin.getline(s,256);
    n=0;
    p=strtok(s," ");
    while(p!=NULL)
    {
        strcpy(a[n],p);
        n++;
        p=strtok(NULL," ");
    }
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j<n; j++)
            if(strcmp(a[i], a[j])>0)
    {
        strcpy(aux, a[i]);
        strcpy(a[i], a[j]);
        strcpy(a[j], aux);
    }
    for(int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}


