#include <bits/stdc++.h>

using namespace std;

vector<pair<int,int>> merge_overlap(vector<pair<int,int>> v){
    vector<pair<int,int>> ans;
    sort(v.begin(), v.end());
    ans.push_back(v[0]);
    int n = v.size(), j=0;
    for(int i=1; i<n; i++){
        if(v[i].first<=ans[j].second){
            ans[j].second = max(ans[j].second, v[i].second);
        }
        else{ ans.push_back(v[i]); j++;}
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<pair<int, int>> v;
    for(int i=0; i<n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    vector<pair<int, int>> ans = merge_overlap(v);
    for(auto i:ans)
    cout<<i.first<<" "<<i.second<<endl;
}