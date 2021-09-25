// Link: https://www.hackerrank.com/challenges/kangaroo/problem

string kangaroo(int x1, int v1, int x2, int v2) {
    if(v2>=v1){
        return "NO";
    }
    if((x1 - x2)%(v2 - v1) == 0){
        return "YES";
    }else{
        return "NO";
    }
}
