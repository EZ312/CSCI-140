//Modified by: Ean Zheng
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> list;
   int size;
   cin >> size;

    for (int i = 0; i < size; ++i) {
        string s;
        cin >> s;
        list.push_back(s);
    }

    char specialChar;
    bool first = true;
    cin >> specialChar;
    for (int i = 0; i < size; ++i) {
        if(list.at(i).find(specialChar) != string::npos){
            if(!first)
                cout << ",";
            else
                first = false;
            cout << list.at(i);
        }
    }
    cout << endl;
   return 0;
}