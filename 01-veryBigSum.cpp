// Link: https://www.hackerrank.com/challenges/a-very-big-sum/problem

long aVeryBigSum(vector<long> ar) {
    
    long res = 0;
    for(int i=0;i<ar.size();i++){
        res += ar[i];
    }
    return res;

}
