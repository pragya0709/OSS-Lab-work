#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>mat(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];

        }
    }
    vector<vector<int>>ans(m,vector<int>(n));
    
   
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m;j++)
        {
            ans[j][i] = mat[i][j];
        }
    }
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }
}