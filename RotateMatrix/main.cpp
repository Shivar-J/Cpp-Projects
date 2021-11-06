//
//  main.cpp
//  RotateMatrix
//
//  Created by Shivar Jadoonanan on 2021-10-28.
//

#include <iostream>
#include <vector>

#define N 3

using namespace std;

void transpose(vector<vector<int>> &mat){
    if(mat.size() == 0){
        return;
    }
    vector<vector<int>> transposeVec(mat[0].size(), vector<int>());

    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[i].size(); j++)
        {
            transposeVec[j].push_back(mat[i][j]);
        }
    }

    mat = transposeVec;
}

void reverse(vector<vector<int>> &mat){
    reverse(mat.begin(), mat.end());
}

void printMatrix(vector<vector<int>> mat){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, const char * argv[]) {
    vector<vector<int>> matrix(N, vector<int>(N));
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "enter num matrix 3x3: "<< endl;
            int tempNum;
            cin >> tempNum;
            matrix[i][j] = tempNum;
        }
    }
    cout << "Current Matrix: " << endl;
    printMatrix(matrix);
    while(true){
        
        cout << "1: Rotate Counter Clockwise\n2: Rotate Clockwise\n3: End\n";
        string userIn;
        cin >> userIn;
        
        if(userIn == "1"){
            transpose(matrix);
            reverse(matrix);
            printMatrix(matrix);
        } else if(userIn == "2"){
            reverse(matrix);
            transpose(matrix);
            printMatrix(matrix);
        } else if(userIn == "3"){
            break;
        } else {
            cout << "Invalid Input!" << endl;
            continue;
        }
    }
}
