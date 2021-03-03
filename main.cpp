#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;
int a[400000],d[400000];
int main() {
    ull x,k;
    cin>>x>>k;

    for(ull i=1;i<=x;i++)
    cin>>a[i];
    ull j=1,sl=0,i=1;
    d[a[1]]++;
    while (i<=x-k+1)
        if(d[a[j]]==k)
        {


            sl=sl+x-j+1;
            d[a[i]]--;
            i++;
    }
    else if(j<x)
        {
        j++;
        d[a[j]]++;

        }
    else break;
    cout<<sl;







}
