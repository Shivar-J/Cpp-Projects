//
//  main.cpp
//  ExceptionHandling
//
//  Created by Shivar Jadoonanan on 2022-01-15.
//

#include <iostream>
#include <string>
#include <vector>
#include <numeric>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<float> nums;
    vector<string> stringNums;
    string number = "2.5f 2 4.5f hello world ";
    std::string delimiter = " ";

    size_t pos = 0;
    std::string token;
    while ((pos = number.find(delimiter)) != std::string::npos) {
        token = number.substr(0, pos);
        number.erase(0, pos + delimiter.length());
        stringNums.push_back(token);
    }
    
    for(int i = 0; i < stringNums.size(); i++) {
        try {
            if(stof(stringNums[i])) {
                float tempNum = stof(stringNums[i]);
                nums.push_back(tempNum);
            } else {
                throw 505;
            }
        } catch (...) {
            cout << "Invalid Input!" << endl;
            continue;
        }
    }
    
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
    
    float average = accumulate(nums.begin(), nums.end(), 0.0 / nums.size()) / nums.size();
    cout << "Average:" << average << endl;
}
