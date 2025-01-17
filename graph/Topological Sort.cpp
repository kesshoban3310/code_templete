//
// Created by User on 2025/1/17.
//
#include <bits/stdc++.h>
#define icantcode ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;
vector<int> g[100005];
vector<int> d(100005,0);
int main(){
    icantcode
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        d[b]++;
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(!d[i]){
            q.push(i);
        }
    }
    vector<int> ans;
    while(!q.empty()){
        auto tmp = q.front();
        q.pop();
        ans.push_back(tmp);
        for(auto nxt:g[tmp]){
            d[nxt]--;
            if(!d[nxt])
                q.push(nxt);
        }
    }
    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}