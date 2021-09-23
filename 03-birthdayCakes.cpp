// Link: https://www.hackerrank.com/challenges/birthday-cake-candles/problem

int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(),candles.end());
    long count = 0;
    int i=candles.size()-1;
    int max = candles[candles.size()-1];
    while(candles[i]==max){
        count++;
        i--;
    }
    cout<<count<<endl;
    return count;
}
