// Link: https://www.hackerrank.com/challenges/migratory-birds/problem

int migratoryBirds(vector<int> arr) {
    sort(arr.begin(),arr.end());
    int maxCount = 0,count = 1,maxElement;
    for(int i=1;i<arr.size();i++){
        if(arr[i] != arr[i-1]){
            if(count > maxCount){
                maxCount = count;
                maxElement = arr[i-1];
                count = 1;
            }else if(count == maxCount){
                if(arr[i-1]<maxElement){
                    maxElement = arr[i-1];
                }
            }
        }else{
            count++;
        }
    }
    return maxElement;
}
