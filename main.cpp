//
//  main.cpp
//  QueueStructures
//
//  Created by Shivar Jadoonanan on 2021-11-06.
//

#include <iostream>
#include <queue>

using namespace std;

void print(queue<int> q){
    cout << "Current Queue: " << endl;
    queue<int> tempQueue = q;
    while(!tempQueue.empty()){
        cout << tempQueue.front() << " ";
        tempQueue.pop();
    }
    cout << "\n";
}

int main(int argc, const char * argv[]) {
    queue<int> q;
    queue<int> tempQ;
    
    cout << "Enter queue size: " << endl;
    int queueSize;
    cin >> queueSize;
    
    for(int i = 0; i < queueSize; i++){
        cout << "Enter " << i+1 << " element: ";
        int num;
        cin >> num;
        tempQ.push(num);
        
        if(i == 0){
            q.push(num);
        }
        else if(tempQ.back() > q.back()){
            q.push(num);
        }
        else{
            cout << "Error (Current input not bigger than last input)" << endl;
            return 0;
        }
    }
    
    print(q);
}
