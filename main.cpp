#include<iostream>
#include"Sequence.h"
#include<iostream>
using namespace std;
int main()
{
Sequence A("dna.txt");
cout<<"length"<<A.length()<<endl;
cout<<"A"<<A.numberOf('A')<<endl;
cout<<"C"<<A.numberOf('C')<<endl;
cout<<"T"<<A.numberOf('T')<<endl;
cout<<"G"<<A.numberOf('G')<<endl;
cout<<A.longestConsecutive()<<endl;
cout<<A.longestRepeated()<<endl;

return 0;
}



