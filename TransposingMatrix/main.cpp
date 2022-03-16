//
//  main.cpp
//  TransposingMatrix
//
//  Created by Shivar Jadoonanan on 2022-02-12.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void Print(vector<vector<int>> matrix) {
    for(int i = 0; i < matrix.size(); i++) {
        for(int j = 0; j < matrix.size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void Transpose(vector<vector<int>> matrix, int size) {
    vector<vector<int>> tempVec (size, vector<int> (size));
    
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            tempVec[i][j] = matrix[j][i];
            cout << tempVec[i][j] << " ";
        }
        cout << endl;
    }
    
    
}

int main(int argc, const char * argv[]) {
    int size;
    cin >> size;
    
    vector<vector<int>> matrix (size, vector<int> (size));
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            int num;
            cin >> num;
            matrix[i][j] = num;
        }
    }
    cout << "Original Matrix: " << endl;
    Print(matrix);
    
    cout << "Transposed Matrix: " << endl;
    Transpose(matrix, size);
}
