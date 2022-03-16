//
//  main.cpp
//  ExceptionHandling2
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
    
    while(true) {
        cout << "ADD, INDEX, or EXIT" << endl;
        string userInput;
        cin >> userInput;
        
        try {
            if(userInput == "ADD") {
                cout << "Enter number to add" << endl;
                string addNum;
                cin >> addNum;
                
                try {
                    if(stof(addNum)) {
                        float tempNum = stof(addNum);
                        nums.push_back(tempNum);
                    } else {
                        throw (addNum);
                    }
                } catch(string numAdd) {
                    cout << "Invalid Input!" << endl << "Input was " << numAdd << endl;
                }
            } else if(userInput == "INDEX") {
                cout << "Enter index" << endl;
                int index;
                cin >> index;
                
                try {
                    if(nums[index]) {
                        cout << nums[index] << endl;
                    } else {
                        throw (index);
                    }
                } catch(int indexNum) {
                    cout << "Invalid Input!" << endl << "Input was " << indexNum << endl;
                }
                
            } else if(userInput == "EXIT") {
                break;
            } else {
                throw (userInput);
            }
        } catch (string input) {
            cout << "Invalid Option!" << endl;
            cout << "Input was " << input << '\n';
        }
    }
    
    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }
}
