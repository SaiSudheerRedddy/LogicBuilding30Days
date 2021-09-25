// Link: https://www.hackerrank.com/challenges/the-birthday-bar/problem


// Solution for O(n^2)
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


// Optimised way with O(n)

int birthday(vector<int> s, int d, int m) {
    int count = 0,sum = 0;
    for(int i=0;i<m;i++){
        sum += s[i];
    }
    if(d == 1 and sum == d){
        count ++;
        return count;
    }
    if(sum == d){
        count ++;
    }
    
    for(int i=m; i<s.size(); i++){
        sum = sum + s[i] - s[i - m];
        if(sum == d){
            count ++;
        }
    }
    return count;
    
}
