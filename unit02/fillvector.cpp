#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream f("fillvector.cpp");
    vector<string> lines;
    string line;
    while (getline(f, line)) {
        lines.push_back(line);
    }
    for (int i=0; i<lines.size(); i++) {
        cout << (i+1) << ": " << lines[i] << "\n";
    }
    return 0;
}
