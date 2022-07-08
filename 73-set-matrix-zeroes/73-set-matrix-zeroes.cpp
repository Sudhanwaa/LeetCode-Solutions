class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
    
        vector<int>:: iterator  itr;
        vector<int> vec;
        
          for(int i=0;i<matrix.size();i++){
                
              for(int j=0;j<matrix[i].size();j++){
                  // cout<<matrix[i][j]<<" ";
                 if(matrix[i][j]==0) {
                    vec.push_back(j);
                   
                 }
                  
              }
        }
        
        // cout<<matrix[0][3];
        
        for(int i=0;i<matrix.size();i++){
            
            bool flag=false;
            
            for(int j=0;j<matrix[i].size();j++){
                
                 if(matrix[i][j]==0 && flag==false){
                    
                    j=0;
                    flag=true;
                }
                
                if(flag==true) matrix[i][j]=0;
                
            }
        }
        
        sort(vec.begin(),vec.end());
        
        for(auto i:vec){
            for(int j=0;j<matrix.size();j++){
                matrix[j][i]=0;
            }
        }
        
        for(int i=0;i<matrix.size();i++){
              for(int j=0;j<matrix[i].size();j++){
                  cout<<matrix[i][j]<<" ";
              }
            cout<<endl;
        }
        
        cout<<endl;
        
        for(auto i: vec){
            cout<<i<<" ";
        }
    }
};