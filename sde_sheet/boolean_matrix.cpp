class Solution
{   
    public:
    //Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
   {
       vector<vector<int>>v;
       v=matrix;
       for(int i=0;i<matrix.size();i++){
           for(int j=0;j<matrix[0].size();j++){
               if(matrix[i][j]==1){
                   for(int t=0;t<matrix.size();t++)
                   v[t][j]=1;
                   for(int t=0;t<matrix[0].size();t++)
                   v[i][t]=1;
               }
               
           }
       }
       matrix.clear();
       matrix=v;
   }
};
