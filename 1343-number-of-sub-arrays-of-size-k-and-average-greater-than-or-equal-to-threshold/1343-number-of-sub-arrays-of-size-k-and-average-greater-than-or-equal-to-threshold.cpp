class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        double sum=0;
        for(int i=0;i<k;i++){
                sum+=arr[i];
        }
        double avg=sum/k;
        int count=0;
        if(avg>=threshold)count++;
        int i=0;
        int j=k;
        while(j<arr.size()){
            sum=sum-arr[i]+arr[j];
            avg=sum/k;
            if(avg>=threshold)count++;
            i++;
            j++;
        }
        return count;
    }
};