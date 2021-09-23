// Link: https://www.hackerrank.com/challenges/diagonal-difference/problem

int diagonalDifference(vector<vector<int>> arr) {
    int leftDiagonalSum = 0, rightDiagonalSum = 0;
    for(int i=0;i<arr.size();i++){
        for(int j = 0;j<arr[i].size();j++){
            if(i == j){
                leftDiagonalSum += arr[i][j];
            }
            if(j==arr.size()-(i+1))
            {
                //cout << i << " " << j << endl;
                rightDiagonalSum+=arr[i][j];
            }
        }
    }
    
    //cout << rightDiagonalSum << endl;
    return abs(leftDiagonalSum - rightDiagonalSum);
}
