//
//  main.cpp
//  Sentences
//
//  Created by Shivar Jadoonanan on 2022-01-29.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;



int main(int argc, const char * argv[]) {
    string sentence;
    getline(cin, sentence);
    int end = sentence.find("and");
    int start = sentence.find(" ");
    replace(sentence.begin(), sentence.end(), ',', '\0');
    replace(sentence.begin()+start, sentence.begin()+(start + 1), ' ', '*');
    start = sentence.find(" ");
    replace(sentence.begin()+start, sentence.begin()+(start + 1), ' ', '*');
    replace(sentence.begin(), (sentence.begin() + end), ' ', ',');
    //replace(sentence.begin(), sentence.end(), 0, ',');
    replace(sentence.begin(), sentence.begin() + (start + 1), '*', ' ');
    cout << sentence << endl;
}

