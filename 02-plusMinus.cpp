// Link: https://www.hackerrank.com/challenges/plus-minus/problem

void plusMinus(vector<int> arr) {
    float positive = 0, negative = 0, zero = 0;
    
    if(arr.size()<= 100 && arr.size() >= 0){
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                positive += 1;
            }
            if(arr[i] <0){
                negative += 1;
            }
            if(arr[i] == 0){
                zero += 1;
            }
        }
        int n = arr.size();
        cout<<positive/n<<endl;
        cout<<negative/n<<endl;
        cout<<zero/n<<endl;
        
        
    }

}
