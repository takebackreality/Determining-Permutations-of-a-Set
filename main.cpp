#include <vector>
#include <string>
#include <iostream>

using namespace std;

void PrintAllPermutations(vector<string> permList, vector<string> nameList) {
    if (nameList.empty()) {
        // Base case: print the completed permutation
        for (size_t i = 0; i < permList.size(); ++i) {
            cout << permList[i];
            if (i != permList.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else {
        // Recursive case: choose each remaining name
        for (size_t i = 0; i < nameList.size(); ++i) {
            vector<string> newPerm = permList;
            newPerm.push_back(nameList[i]);
            
            vector<string> newNameList = nameList;
            newNameList.erase(newNameList.begin() + i);
            
            PrintAllPermutations(newPerm, newNameList);
        }
    }
}

int main() {
   vector<string> nameList;
   vector<string> permList;
   string name;

   while (cin >> name && name != "-1") {
        nameList.push_back(name);
    }

    // Generate and print all permutations
    PrintAllPermutations({}, nameList);
   
   return 0;
}