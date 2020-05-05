// my failed attempt at merging sorted Arrays / Vectors.
// loop runs out once a vector reaches less than 1 element. Don't know how to fix (yet)

#include<iostream>
#include<vector>

using namespace std;

vector<int> mergeVector(vector<int>myVector, vector<int>myVector2){
   vector<int>mergedVector;
   vector<int>mergedVectorSize(myVector2.size() + myVector.size());

       while (myVector.size() >= 1 && myVector2.size() >= 1){

            int lowest_number = min(myVector[0], myVector2[0]);
            if (myVector[0] == lowest_number){
                myVector.erase(myVector.begin());
            }
            else{
                myVector2.erase(myVector2.begin());
            }

            mergedVector.insert(mergedVector.end(), lowest_number); 
       }
    return mergedVector;
}

int main(){

    const vector<int> myVector {3, 4, 6, 10, 11, 15, 16,17, 100, 101, 120};
    const vector<int> myVector2 {1, 5, 8, 12, 14, 19, 20, 25, 27, 30, 250};
    
    vector<int> mergedVector = mergeVector(myVector, myVector2);
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
