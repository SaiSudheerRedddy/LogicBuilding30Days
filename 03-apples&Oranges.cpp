// Link: https://www.hackerrank.com/challenges/apple-and-orange/problem

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int countOranges = 0,countApples=0;
    for(int i=0;i<apples.size();i++){
        apples[i] = apples[i] + a;
        if(apples[i] >= s && apples[i]<= t){
            countApples ++;
        }
    }
    for(int i=0;i<oranges.size();i++){
        oranges[i] = oranges[i] + b;
        if(oranges[i]>= s && oranges[i]<=t){
            countOranges++;
        }
    }
    cout<<countApples<<endl;
    cout<<countOranges<<endl;

}
