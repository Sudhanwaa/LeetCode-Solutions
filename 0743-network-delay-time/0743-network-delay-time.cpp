class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        
        unordered_map<int,vector<pair<int,int>>> adj;
        set<pair<int,int>> s;
        vector<int> ans(n+1,INT_MAX);

        for(auto i : times){
            adj[i[0]].push_back(make_pair(i[1],i[2]));
        }
        ans[0]=-1;
        ans[k]=0;
        s.insert(make_pair(0,k));

        while(!s.empty()){

            int dist=INT_MAX;
            int node;

            for(auto i: s){
                if(i.first<dist){
                    dist=i.first;
                    node=i.second;
                }
            }

            s.erase(make_pair(dist,node));

            for(auto neigh: adj[node]){
                if(neigh.second+ dist<ans[neigh.first]){

                    for(auto &i: s ){
                        if(i.second==neigh.first) s.erase(i);
                    }
                    ans[neigh.first]=neigh.second+ dist;
              s.insert(make_pair(neigh.second+ dist,neigh.first));
                }
            }

        }

    int q=INT_MIN;
        for(auto i:ans){
            
            if(i==INT_MAX) return -1;
            
            q=max(i,q);
        }
return q;
    }
};