//
//  main.cpp
//  MatrixV2
//
//  Created by Shivar Jadoonanan on 2021-10-23.
//

#include <iostream>
#include <vector>

using namespace std;

vector<double> normalizeMatrix(vector<double> vec){
    vector<double> tempVec;
    double max = *max_element(vec.begin(), vec.end());
    double min = *min_element(vec.begin(), vec.end());
    cout << "normalize: " << endl;
    for(int i = 0; i < vec.size(); i++){
        double value = (vec[i] - min) / (max - min);
        //cout << value << " ";
        tempVec.push_back(value);
    }
    cout << endl;
    return tempVec;
}

vector<vector<int>> multiplyMatrix2x2(vector<vector<int>> vec, vector<vector<int>> vec2){
    int rw = 2;
    int cl = 2;
    vector<vector<int>> tempVec(rw, vector<int> (cl));
    
    cout << "multiply matrix: " << endl;
    for(int i = 0; i < rw; i++){
        for(int j = 0; j < cl; j++){
            int value = vec[i][j] * vec2[i][j];
            //cout << value << endl;
            tempVec[i][j] = value;
            //tempVec[i].push_back(value);
        }
    }
    return tempVec;
}

int main(int argc, const char * argv[]) {
    int num;
    cout << "enter num" << endl;
    cin >> num;
    
    vector<double> vecNums;
    
    for(int i = 0; i < num; i++){
        cout << "add num to vector index " << i+1 << endl;
        double temp;
        cin >> temp;
        vecNums.push_back(temp);
    }

    int rw1 = 2;
    int cl1 = 2;
    
    vector<vector<int>> vec2x2A(rw1, vector<int> (cl1));
    
    for(int i = 0; i < rw1; i++){
        for(int j = 0; j < cl1; j++){
            cout << "enter num 2x2A: "<< endl;
            int tempNum;
            cin >> tempNum;
            vec2x2A[i][j] = tempNum;
        }
    }
    
    for(int i = 0; i < rw1; i++){
        for(int j = 0; j < cl1; j++){
            cout << vec2x2A[i][j] << " ";
        }
        cout << endl;
    }

    int rw2 = 2;
    int cl2 = 2;
    
    vector<vector<int>> vec2x2B(rw2, vector<int> (cl2));
    
    for(int i = 0; i < rw2; i++){
        for(int j = 0; j < cl2; j++){
            cout << "enter num 2x2B: " << endl;
            int tempNum;
            cin >> tempNum;
            vec2x2B[i][j] = tempNum;
        }
    }
    
    for(int i = 0; i < rw2; i++){
        for(int j = 0; j < cl2; j++){
            cout << vec2x2B[i][j] << " ";
        }
        cout << endl;
    }
    
    vector<double> normalizeVec = normalizeMatrix(vecNums);
    
    vector<vector<int>> multiplyVec = multiplyMatrix2x2(vec2x2A, vec2x2B);
    
    
    
    cout << "Normalize(N) or Multiply Matrix(M)?" << endl;
    string userIn;
    cin >> userIn;
    if(userIn == "N"){
        for(int i = 0; i < normalizeVec.size(); i++){
            cout << normalizeVec[i] << " ";
        }
    }
    else if(userIn == "M"){
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                cout << multiplyVec[i][j] << " ";
            }
            cout << endl;
        }
    }
}
