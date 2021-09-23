// Link: https://www.hackerrank.com/challenges/mini-max-sum/problem

void miniMaxSum(vector<int> arr) {
    if(arr.size()<4){
        return;
    }
    int maxSum = 0;
    for(int i=0;i<arr.size();i++){
        maxSum += arr[i];
    }
    sort(arr.begin(),arr.end());
    long min_sum = maxSum - arr[arr.size() - 1];
    long max_sum = maxSum - arr[0];
    cout<<min_sum<<" "<<max_sum<<endl;

}
