#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<iostream>
using namespace std;

class Sequence
{
public:
Sequence(string filename);
~Sequence();
int length();
int numberOf(char base);
string longestConsecutive();
string longestRepeated();
};
#endif

