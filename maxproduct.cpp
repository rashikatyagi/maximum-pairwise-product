//Maximum Pairwise Product
#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
long long maxPairProduct(const vector<int> &a)
{
    int n = a.size();
    int maxTerm1 = -1;
    int maxTerm2 = -1;
    for(int i = 0 ; i < n ; ++i)
    {
        if(maxTerm1==-1 || a[i] > a[maxTerm1])       
            maxTerm1 = i;
    }
    for(int j = 0 ; j < n ; ++j)
    {
        if((maxTerm1!=j) && ((maxTerm2==-1) || (a[j] > a[maxTerm2])))     
            maxTerm2 = j;
    }
    return (((long long)a[maxTerm1]) * a[maxTerm2]);
}
int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << maxPairProduct(num) << endl;
    return 0;
}