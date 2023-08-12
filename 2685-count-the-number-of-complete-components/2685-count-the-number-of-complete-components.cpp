class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {

           int ans=0;

           unordered_map<int,vector<int>> adj;
           vector<bool> visited(n,false);
           vector<int> degree(n,0);
           queue<int> q;
        
            for(auto i: edges){
                adj[i[0]].push_back(i[1]);
                adj[i[1]].push_back(i[0]);
            }

            for(auto i: adj){
                degree[i.first]=i.second.size();
            }
            vector<vector<int>> out;

            for(int i =0;i<n;i++){
                if(!visited[i]){
                    vector<int> vec;    
                    int temp=0;
                    q.push(i);
                    visited[i]=true;
                    
                    
                    
                    while(!q.empty()){
                        int node=q.front();
                        vec.push_back(node);
                        temp++;
                        q.pop();

                        for(auto neigh:adj[node]){
                            if(!visited[neigh]) {q.push(neigh);visited[neigh]=true;}
                        }
                    }
                    out.push_back(vec);
                    vec.clear();

                }
 
            }

        for(int i =0;i<n;i++){
            cout<<i<<"-"<<degree[i]<<endl;
        }
            for(auto i : out){
              int temp=i.size()-1;
              bool flag=true;
              for(auto j: i){
                  if(degree[j]!=temp) flag=false;
              }
              if(flag) ans++;
            }

            return ans;

    }
};