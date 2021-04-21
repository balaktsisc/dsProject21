//
// Created by Christos Balaktsis on 21/4/2021.
//

#ifndef UNORDEREDARRAY_H
#define UNORDEREDARRAY_H
#include <string>
using namespace std;

class UnorderedArray {
protected:
    string *data;       //array of strings
    int *num;           //number of appearances of each string/word
    int size;           //size of array
    bool Search_help(const string &, int &pos);     //Checks the existence of a word in array and returns position in array (if true)
public:
    UnorderedArray();                               //Unordered Array constructor
    void Insert(const string &);                    //Inserts a NEW word in array (checks for existed ones)
    bool Search(const string &, int &, int &);      //Searches for a given word and returns (by ref.) position and number of appearances; true := word exists
    bool Delete(const string &);                    //Deletes a word of the array (if deletion's completed, returns true)
};
#endif //UNORDEREDARRAY_H
