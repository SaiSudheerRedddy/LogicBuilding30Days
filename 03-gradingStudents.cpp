// Link: https://www.hackerrank.com/challenges/grading/problem

vector<int> gradingStudents(vector<int> grades) {
    vector<int> res;
    for(int i=0;i<grades.size();i++){
        if(grades[i]<38){
            res.push_back(grades[i]);
        }else{
            int k = grades[i]/5;
            if((5*(k+1) - grades[i]) < 3){
                res.push_back(5*(k+1));
            }else{
                res.push_back((grades[i]));
            }
        }
    }
    return res;
}
