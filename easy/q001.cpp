//Problem name: Counting valleys
//Problem URL: https://www.hackerrank.com/challenges/counting-valleys/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    size_t i;
    int level = 0;
    bool isInValley = false;
    unsigned int count =0 ;
    for(i=0;i<n;i++){
        if(s[i] == 'U'){
            level++;
            if(isInValley && level >= 0){
                isInValley = false;
            }
        }   
        else{
            level--;
            if(!isInValley && level == -1){
                isInValley = true;
                count++;
            }
        }
        //std::cout << isInValley << std::endl;   
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
