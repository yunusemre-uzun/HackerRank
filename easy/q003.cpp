// Problem name: Grading students
// Problem URL : https://www.hackerrank.com/challenges/grading/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the gradingStudents function below.
 */
vector<int> gradingStudents(vector<int> grades) {
    size_t size = grades.size();
    size_t i;
    unsigned int diff;
    std::vector<int> ret;
    for(i=0;i<size;i++){
        if(grades[i]<38){
            ret.push_back(grades[i]);
        }
        else{
            diff = grades[i] % 5;
            if(diff >= 3){
                ret.push_back(grades[i]+5-diff);
            }
            else{
                ret.push_back(grades[i]);
            }
        }
    }
    return ret;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
