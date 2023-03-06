#include <bits/stdc++.h>
#include <utility>
using namespace std;
int main(){
    int t;
    cin>>t;
    int i=1;
    while(i<=t){
        int ans=0;
        int n;
        cin>>n;
        vector<pair<string,int>>s1;
        vector<pair<int,int>>s2;
        for(int i=0;i<n;i++){
           string s;
           int a,b;
           cin>>s>>a>>b;
           pair<string,int>c;
           pair<int,int>d;
           c.first=s;
           c.second=b;
           d.first=a;
           d.second=b;
           s1.push_back(c);
           s2.push_back(d);
        }
        sort(s2.begin(),s2.end());
        sort(s1.begin(),s1.end());
        for(int i=0;i<n;i++){
            if(s1[i].second==s2[i].second){
                ans++;
            }
        }
        cout<<"Case #"<<i<<": "<<ans<<endl;
        i++;
    }
}