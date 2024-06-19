const int N = 5000000;
bool sieve[N+1];

void createSieve(int n){
    for(int i =2 ; i<=n;i++){
        sieve[i] = true;
    }
    for(int i=2; i*i<=n;i++){
        if(sieve[i] == true){
            for(int j=i*i; j<=n;j+=i){
                if(sieve[j] == true){
                    sieve[j] = false;
                }
            }
        }
    }
}
class Solution {
public:
    int countPrimes(int n) {
        createSieve(n);
        int count =0;
        for(int i=2; i<n;i++){
            if(sieve[i] == true){
                count ++;
            }
        }
        return count;
    }
};