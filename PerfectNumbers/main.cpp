//
//  main.cpp
//  PerfectNumbers
//
//  Created by Shivar Jadoonanan on 2021-12-18.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter Number" << endl;
    int number;
    cin >> number;
    
    vector<int> tempNums;
    
    for(int i = 0; i < number; i++){
        if(number % i == 0){
            cout << i << " ";
            tempNums.push_back(i);
        }
    }
    cout << endl;
    
    int temp = 0;
    
    for(int i = 0; i < tempNums.size(); i++){
        temp = tempNums[i] + temp;
    }
    
    if(temp == number){
        cout << "Perfect number" << endl;
    } else {
        cout << "Not a perfect number" << endl;
    }
}
