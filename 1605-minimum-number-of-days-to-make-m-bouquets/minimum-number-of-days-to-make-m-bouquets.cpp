class Solution {
public:
bool possible(vector<int> &bloomday,int day,int m , int k){
    int cnt =0; int no = 0;
     for(int i = 0 ; i < bloomday.size() ; i++){
        if(bloomday[i]<=day) cnt++;
        else { 
            no+=(cnt/k);
            cnt=0;
       }
}
no+=(cnt/k);
return no >=m;
}
    int minDays(vector<int>& bloomday, int m, int k) {
        long long val = m*1ll*k*1ll;
        if(val > bloomday.size()) return -1;
        int mini=INT_MAX,maxi=INT_MIN;
         for(int i = 0 ; i < bloomday.size() ; i++){
           mini=min(mini,bloomday[i]);
           maxi=max(maxi,bloomday[i]);}
           int low = mini, high = maxi;
           while(low<=high){
            int mid = low+(high-low)/2;
            if(possible(bloomday,mid,m,k)){
                high = mid -1;
            }
            else low =mid+1;
           }
         
         return low;
    }
};