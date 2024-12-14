class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>q;
        int n=students.size();
        for(int i=0;i<n;i++){
            q.push(students[i]);
        }
        int i=0;
        int c=0;
        while(q.size()>0 && c!=q.size()){
            if(q.front()==sandwiches[i]){
                c=0;
                q.pop();
                i++;
            }
            else{
                q.push(q.front());
                q.pop();
                c++;
            }
        }
        return q.size();
    }
};