//Problem name : Mini-Max Sum
//Problem URL : https://www.hackerrank.com/challenges/mini-max-sum/problem

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) {
    long long int sumMax = 0;
    long long int sumMin = 0;
    long long int max ;
    long long int min ;
    int j=4;
    size_t i, minIndex,maxIndex;
    size_t size = arr.size();
    std::vector<bool> usedMaxArray (size);
    std::vector<bool> usedMinArray(size);
    for(i=0;i<size;i++){
        usedMaxArray[i] = false;
        usedMinArray[i] = false;
    }
    while(j--){
        max = INT64_MIN;
        min = INT64_MAX;
        for (i = 0; i < size; i++) {
            if (arr[i] > max && !usedMaxArray[i]) {
                max = arr[i];
                maxIndex = i;
            }
            if (arr[i] < min && !usedMinArray[i]) {
                min = arr[i];
                minIndex = i;
            }
        }
        //std::cout << "Max:" << max << " Min:" << min << std::endl;
        sumMax += max;
        sumMin += min;
        usedMaxArray[maxIndex] = true;
        usedMinArray[minIndex] = true; 
    }
    std::cout << sumMin << " " << sumMax ;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
