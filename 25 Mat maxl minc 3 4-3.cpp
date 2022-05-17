#include <fstream>

using namespace std;

ifstream fin("mat.in");
ofstream fout("mat.out");

int n;
int m;
int mat[50][50];
int linia_max[50];
int coloana_min[50];

void citire()
{
    fin >> n >> m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            fin >> mat[i][j];
}

void calc_max()
{
    for(int i = 0; i < n; i++)
    {
        linia_max[i] = mat[i][0];
        for(int j = 0; j < m; j++)
            if(mat[i][j] > linia_max[i])
                linia_max[i] = mat[i][j];
    }
}

void calc_min()
{
    for(int j = 0; j < m; j++)
    {
        coloana_min[j] = mat[0][j];
        for(int i = 0; i < n; i++)
            if(mat[i][j] < coloana_min[j])
                coloana_min[j] = mat[i][j];
    }
}

void rezolvare()
{
    int nr = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(linia_max[i] == mat[i][j] &&
               coloana_min[j] == mat[i][j])
            {
                nr++;
                 fout << mat[i][j] << ' ';
            }
    if(nr == 0)
    {
        fout << "De neconceput";
    }
}

int main()
{
    citire();
    calc_max();
    calc_min();
    rezolvare();
    return 0;
}
