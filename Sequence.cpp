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

Sequence::length()
{
cout<<q<<endl;
return 0;
}
int Sequence::numberOf(char base)
{ifstream file(z);
int k=0;
char s;
while (file.get(s))
{if (s==base)
k++;
else
continue;}
cout<<base<<k<<endl;
return 0;

}
string Sequence::longestConsecutive()
{return 0;

}
string Sequence::longestRepeated()
{return 0;
}
