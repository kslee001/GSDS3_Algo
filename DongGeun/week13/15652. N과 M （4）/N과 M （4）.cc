#include <bits/stdc++.h>
using namespace std;
int arr[10];
int n,m;
bool isused[10];

void func(int k)
{
    if (k==m)
    {
        for (int i=0;i<m;i++)
        {
            cout<<arr[i]<<' ';
        }
        cout<<'\n';
        return;
    }
    int st = 1;
    if(k != 0) st = arr[k-1] ;

    for (int i=st;i<=n;i++)
    {
        if(!isused[i])
        {
            arr[k]=i;
            //isused[i]=1;
            func(k+1);
        }
    }
}
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    cin >> n>>m;
    func(0);
}
