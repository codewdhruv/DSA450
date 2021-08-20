 int kthSmallest(int arr[], int l, int r, int k) {
   
   priority_queue<int,vector<int>, greater<int>> pq;
   for(int i=0;i<n;i++){
     pq.push(arr[i]);
if(pq.size()>k)
  pq.pop();
   }
   
   vector <int> v; priority_queue<int> pq2;
   while(pq.size()>0){
     pq.push(pq.top());
     pq.pop();
   }
   
   while(pq2.size()>0){
     v.push_back(pq2.top());
     pq2.pop();
   }
   return v;
 }
     
