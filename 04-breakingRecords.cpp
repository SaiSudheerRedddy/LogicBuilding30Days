// Link: https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem

vector<int> breakingRecords(vector<int> scores) {
    int min, max,minBreak=0, maxBreak=0;
    min = scores[0];
    max = scores[0];
    for(int i=1;i<scores.size();i++){
        if(scores[i] > max){
            max = scores[i];
            maxBreak++;
        }else if(scores[i]<min){
            min = scores[i];
            minBreak++;
        }
    }
    vector<int> result;
    result.push_back(maxBreak);
    result.push_back(minBreak);
    return result;
}
