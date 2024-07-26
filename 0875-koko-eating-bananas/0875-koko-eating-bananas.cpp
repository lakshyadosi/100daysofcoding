class Solution {
public:

   bool checkCanEatBanans(vector<int> & piles, int mid, int h){
    double hours = 0;
    for(int i =0; i < piles.size(); i++){
        hours = hours + ceil((double)piles[i]/(double)mid);
    }
    return hours <=h;
   }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int minSpeed = 1;
        int maxSpeed = 0;
        for(int i=0; i< n; i++){
          maxSpeed = max(maxSpeed, piles[i]);
        }
        while(minSpeed <= maxSpeed){
            int mid = minSpeed + (maxSpeed - minSpeed)/2;
            int canEat = checkCanEatBanans(piles, mid, h);
            if(canEat){
                maxSpeed = mid -1;
            }
            else{
                minSpeed = mid +1;
            }
        }
        return minSpeed;
    }

};