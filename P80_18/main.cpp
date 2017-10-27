#include "vector"
#include "string"
#include <iostream>

using namespace std;

void getNext(const string &P, vector<int> &next)
{
    int q,k;
    int m = P.size();
    next[0] = 0;
    for (q = 1, k = 0; q < m; ++q)
    {
        while (k > 0 && P[q] != P[k])
            k = next[k - 1];
        if (P[q] == P[k])
            k++;
        next[q] = k;
    }
}


void KmpMatch(const string &T, const string &P, vector<int> &next)
{
    int n, m;
    n = T.size();
    m = P.size();
    getNext(P, next);
    int Index;
    for (int i = 0, q = 0; i < n; ++i)
    {
        while (q > 0 && P[q] != T[i])
            q = next[q - 1];
        if (P[q] == T[i])
            q++;
        if (q == m)
        {
            Index = (i - m + 1) ;
            q = next[q - 1];
        }
    }
    cout<<"Last Index is "<<Index<<endl;
}

int main()
{

    vector<int> next(20,0);
    string T = "aabbababcabacababca";
    string P = "ababca";
    cout <<"text:"<< T << endl;
    cout <<"pattern:"<< P << endl;
    KmpMatch(T, P, next);
//    cout << "Next array:"<< endl;
//    for (int i = 0; i < P.size(); i++)
//        cout<< next[i];
//    cout << endl;
    return 0;
}