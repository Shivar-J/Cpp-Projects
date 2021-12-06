#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    cout << "Enter string" << endl;
    string input;
    cin >> input;

    unordered_map<char, int> letterCount;
    
    for(int i = 0; i < input.size(); i++){
        if(letterCount.find(input[i]) == letterCount.end()){
            letterCount.insert(make_pair(input[i], 1));
        } else {
            letterCount[input[i]]++;
        }
    }
    for(auto& i : letterCount){
        cout << i.first << " " << i.second << "\n";
    }
}
