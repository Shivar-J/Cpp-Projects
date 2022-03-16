#include <iostream>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    getline(cin, n);
    int iter = stoi(n);
    
    vector<int> red;
    vector<int> green;
    vector<int> blue;
    
    for(int i = 0; i < iter; i++) {
        vector<int> tempVec;
        string str;
        getline(cin, str);
        istringstream split(str);
        
        string num;
        
        while(split >> num) {
            tempVec.push_back(stoi(num));
        }
        
        red.push_back(tempVec[0]);
        green.push_back(tempVec[1]);
        blue.push_back(tempVec[2]);
        tempVec.clear();
    }
    
    int redR = 0;
    int greenR = 0;
    int blueR = 0;
    
    for(int i = 0; i < red.size(); i++) {
        redR += red[i];
        greenR += green[i];
        blueR += blue[i];
    }
    
    if(redR >= 256) {
        redR = 255;
    }
    if(greenR >= 256) {
        greenR = 255;
    }
    if(blueR >= 256) {
        blueR = 255;
    }
    
    cout << redR << " " << greenR << " " << blueR << endl;
}
