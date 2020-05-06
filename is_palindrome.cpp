// find if a string is a palindrom. A palindrom is the same string if it's characters are reversed. civic reversed is civic. 
// this program also returns true if the characters in a string are capable to making a palindrome.
// learnt characteristics of unordered sets and basics of hash tables in this program.

#include <iostream>
#include <set>
#include <unordered_set>

using namespace std;

bool hasPalindrome(const string& str)
{
    unordered_set<char> unpairedCharacters;

    for (char c : str) {
        if (unpairedCharacters.find(c) != unpairedCharacters.end()) { //if this is true, character is in the set.
            unpairedCharacters.erase(c); // removes the character from the set.
        }
        else {
            unpairedCharacters.insert(c); //didn't find the character already in the set so there is only 1 of the character in the word.
        }
    }
    return unpairedCharacters.size() <= 1;
}

int main(){

    string str1 = "civic";
    cout << hasPalindrome(str1) << endl;
    return 0;
}