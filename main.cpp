#include<iostream>
#include"Sequence.h"
#include<fstream>
#include<string>
using namespace std;
int main()
{
Sequence S("dna.txt");
cout<<"length"<<S.length()<<endl;
cout<<"A"<<S.numberOf('A')<<endl;
cout<<"C"<<S.numberOf('C')<<endl;
cout<<"T"<<S.numberOf('T')<<endl;
cout<<"G"<<S.numberOf('G')<<endl;
cout<<S.longestConsecutive()<<endl;
cout<<S.longestRepeated()<<endl;

return 0;
}



