class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> ls;
        for(int i=1 ; i*i<=n;i++){
            if(n%i ==0){
                ls.push_back(i);

                if(n/i !=i){
                    ls.push_back(n/i);
                }

            }
        }
          sort(ls.begin(), ls.end());
       if(k >ls.size()) return -1;
       return ls[k-1];   
    }
};