// Link: https://www.hackerrank.com/challenges/staircase/problem

void staircase(int n) {
    for(int i=0;i<n;i++){
        for(int j=0;j<n-(i+1);j++){
            cout<<" ";
        }
        for(int j = n-(i+1);j<n;j++){
            cout<<"#";
        }
        cout<<endl;
    }

}
