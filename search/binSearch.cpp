//
// Created by User on 2024/7/23.
//
#include <bits/stdc++.h>
using namespace std;
void binSearch(){
    cin>>n>>t;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 0;
    int l = 0,m = 0,r = 1e18;
    while(l<=r){
        m = (l+r) >> 1;
        if(query(m,t)){ //query for ans.
            r = m-1;
            ans = m;
        }
        else{
            l = m+1;
        }
    }
    cout<<ans<<"\n";
}
void BinSearchOther(){
    vector<int> ans;
    set<int> st;
    int num;
    //greater or equal number than num.
    lower_bound(ans.begin(), ans.end(), num) - ans;
    //greater number than num.
    upper_bound(ans.begin(), ans.end(), num) - ans;


    //greater number than num.
    st.upper_bound(num);
    //greater or equal number than num.
    st.lower_bound(num);

    //if not found then return st.end() or ans.end();
}
int main(){
    binSearch();
    BinSearchOther();
}