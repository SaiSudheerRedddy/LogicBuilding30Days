// Link: https://www.hackerrank.com/challenges/compare-the-triplets/problem

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> res;
    int countA = 0, countB = 0;
    
    if(a[0]>b[0]){
        countA ++;
    }else if(a[0] < b[0]){
        countB++;
    }
    if(a[1] > b[1]){
        countA++;
    }else if(a[1] < b[1]){
        countB++;
    }
    if(a[2] > b[2]){
        countA++;
    }else if(a[2] < b[2]){
        countB++;
    }
    res.push_back(countA);
    res.push_back(countB);
    return res;

}
