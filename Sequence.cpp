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
}
Sequence::~Sequence()
{
}
int Sequence::length()
{
int l=dna.length()
return l;
}
int Sequence::numberOf(char base)
{
int l=dna.length();
int n=0;
for(int i=0;i<l;i++)
{if(dna[i]==base)
n++;
}
 return;}
string Sequence::longestConsecutive()
{char STr;
 char base;
int max=0;
int add=1;
int L=STr.length();
for(int i=0;i<L-1;i++)
 {if(STr[i+1]==STr[i])
     {add++;
      }
else {
        if (add>max)
         {max=add;
          base=STr[i];}
add=1;
}
}
string longestcon(max,base);
return longestcon;
}
string Sequence::longestRepeated()
{return 0;
 }
