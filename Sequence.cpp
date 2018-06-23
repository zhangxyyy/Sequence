#include"Sequence.h"
#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
using namespace std;

Sequence::Sequence(string filename)
{
ifstream file(filename.c_str(),ios::in);
string d;
while(getline(file,d))
dna+=d;
return 0;
}
Sequence::~Sequence()
{return 0;
}
Sequence::int length()
{
int l=dna.length()
return l;
}
Sequence::int numberOf(char base)
{
int l=dna.length();
int n=0;
for(int i=0;i<l;i++)
{if(dna[i]==base)
n++;return n;
}}

