// Link: https://www.hackerrank.com/challenges/the-birthday-bar/problem

int birthday(vector<int> s, int d, int m) {
    int count = 0;
    for(int i=0;i<s.size();i++){
        if(i+m <= s.size()){
            int sum = 0;
            for(int j=i;j<i+m;j++){
                sum += s[j];
            }
            if(sum == d){
                count++;
            }
        }
    }
    return count;
}
