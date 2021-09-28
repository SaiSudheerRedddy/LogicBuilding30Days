// Link: https://www.hackerrank.com/challenges/bon-appetit/problem?isFullScreen=true

void bonAppetit(vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i=0;i<bill.size();i++){
        sum += bill[i];
    }
    if(b == ((sum - bill[k])/2)){
        cout<<"Bon Appetit"<<endl;
    }else{
        cout<<(b - ((sum - bill[k])/2))<<endl;
    }
}
