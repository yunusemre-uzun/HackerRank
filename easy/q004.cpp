// Problem name : Time conversion
// Problem URL : https://www.hackerrank.com/challenges/time-conversion/problem

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    size_t size = s.size();
    std::string ret;
    std::string hour;
    int hourInt;
    if(s[size-2] =='A'){ //after midnigth
        ret = s.substr(0,8);
        hour = s.substr(0, 2);
        hourInt = std::stoi(hour);
        if(hourInt == 12){
            ret[0] = '0';
            ret[1] = '0';
        }
        return ret;
    }
    else{//before midnight
        hour = s.substr(0, 2);
        hourInt = std::stoi(hour);
        hourInt += 12;
        if(hourInt == 24)
            hourInt = 12;
        hour = std::to_string(hourInt);
        ret = s.substr(0, 8);
        ret[0] = hour[0];
        ret[1] = hour[1];
        return ret;
    }

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
