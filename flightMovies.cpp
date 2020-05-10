/*take a flight time and a vector of 
movie times and see if you can watch exactly two movies on this flight */

#include<unordered_set>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

  bool canTwoMoviesFillFlight(const vector<int>& length_of_movies, int flightLength)
{
    unordered_set<int> length_of_moviesSeen;

    for (int firstMovieLength : length_of_movies) {
        int matchingSecondMovieLength = flightLength - firstMovieLength;
        if (length_of_moviesSeen.find(matchingSecondMovieLength) != length_of_moviesSeen.end()) {
            return true;
        }
        length_of_moviesSeen.insert(firstMovieLength);
    }
    return false;
}

int main()
{
   int flightlength = 60;
   vector<int> length_of_movies = {10, 20, 30 , 40 ,50};
   cout << canTwoMoviesFillFlight(length_of_movies, flightlength);
   return 0;
}