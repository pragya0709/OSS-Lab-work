#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    map<char,int>mp;
    for(int i=0;i<s.length();i++)
    {
        if(isalpha(s[i]))
        mp[s[i]]++;
    }

    for(auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
}