// Problem name : Staircase
// PRoblem URL : https://www.hackerrank.com/challenges/staircase/problem

#include <bits/stdc++.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int i=n, j;
    for(;i>0;i--){
        for(j = 0;j < i-1;j++){
            std::cout << " " ;
        }
        for(;j<n;j++){
            std::cout << "#" ;
        }
        std::cout << std::endl;
    }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
