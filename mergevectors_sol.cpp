// copied solution to merge vectors
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeVectors(const vector<int>& myVector, const vector<int>& alicesVector)
{
    vector<int> mergedVector(myVector.size() + alicesVector.size());

    size_t currentIndexAlices = 0;
    size_t currentIndexMine = 0;
    size_t currentIndexMerged = 0;

    while (currentIndexMerged < mergedVector.size()){
        
    }
}

int main(){

    const vector<int> myVector {3, 4, 6, 10, 11, 15, 16,17, 100, 101, 120};
    const vector<int> alicesVector {1, 5, 8, 12, 14, 19, 20, 25, 27, 30, 250};
    
    vector<int> mergedVector = mergeVector(myVector, alicesVector);
    cout << "[";
    for (size_t i = 0; i < mergedVector.size(); ++i) {
        if (i > 0) {
            cout << ", ";
            }
        cout << mergedVector[i];
        }

    cout << "]" << endl;
    




    return 0;
}