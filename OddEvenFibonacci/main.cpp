//
//  main.cpp
//  OddEvenFibonacci
//
//  Created by Shivar Jadoonanan on 2021-11-13.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Enter Number:" << endl;
    int userNum;
    cin >> userNum;
    
    int firstNum = 0;
    int secondNum = 1;
    int tempNum = 0;
    int evenNum = 0;
    
    cout << "Fibonacci Sequence: ";
    for(int i = 1; i <= userNum+1; i++){
        if(i == 1){
            continue;
        }
        if(i == 2){
            cout << secondNum << " ";
            continue;
        }
        if(tempNum % 2 == 0){
            evenNum += tempNum;
        }
        tempNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = tempNum;
        cout << tempNum << " ";
    }
    cout << "\nFinal sum of even numbers: " << evenNum << endl;
    
    return 0;
}
