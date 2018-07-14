/*#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<fstream>
#include<string>
#include<iostream>
using namespace std;

class Sequence
{
public:
string _filename;
char z[10];
int q;
Sequence(string filename);
int length();
int numberOf(char base);
string longestConsecutive();
string longestRepeated();
};
#endif
*/
#ifndef SEQUENCE_H

#define SEQUENCE_H


#include<iostream>

#include<stdio.h>

#include<string>

#include<vector>

#include<algorithm>

#include<cstring>

using namespace std;


class Sequence

{

public:

	Sequence();

		~Sequence();

	Sequence(const string& filename);

	int length();

	int numberOf(char base);

	string longestConsecutive();

	string longestRepeated();


private:

	int count(const char*c1, const char*c2);

	string value;

	int numberA, numberC, numberG, numberT;

};

#endif 

