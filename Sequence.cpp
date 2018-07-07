#include"Sequence.h"
#include<iostream>
#include<string>
#include<fstream>
#include<string.h>
using namespace std;

Sequence::Sequence(string filename)
{
cin>>filename;
_filename=filename;
strcpy(z,_filename.c_str());
ifstream file(z);
int m=0;
int line=0;
char s;
while(file.get(s))
{if (s=='\n')
line++;}
q=m-line;}

Sequence::~Sequence()
{
}
int Sequence::length()
{
cout<<q<<endl;
return 0;
}
int Sequence::numberOf(char base)
{
 ifstream file(z);
int k=0;char s;
while (file.get(s))
{if (s==base)
k++;
else
continue;}
cout<<base<<k<<endl;
return 0;}
string Sequence::longestConsecutive()
{char b="0";
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
