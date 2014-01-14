#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("scopy.cpp");
    ofstream fout("scopy2.cpp");
    string line;
    while (getline(fin, line)) {
        fout << line << "\n";
    }
    return 0;
}
