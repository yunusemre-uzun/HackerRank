//Problem name :Diagonal Difference
//Problem URL : https://www.hackerrank.com/challenges/diagonal-difference/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr) {
    size_t size = arr.size();
    int i = 0, sum1 = 0, sum2 = 0;
    for(;i<size;i++){
        sum1 += arr[i][i];
        sum2 += arr[i][size-i-1];
    }
    return (sum1-sum2) > 0 ? sum1-sum2 : sum2 -sum1;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
