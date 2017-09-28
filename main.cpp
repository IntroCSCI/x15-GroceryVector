//Author: Sarah Xinru Lin

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
std::string item;
vector<string>Grocerylist;
char input;
do{
cout<<"\n==GROCERY LIST MANAGER==";
cout<<"\nEnter your choice:";
cout<<"\n(A)dd an item";
cout<<"\n(S)how grocery list";
cout<<"\n(Q)uit";
cout<<"\nYour choice (A/S/Q):";
cin>>input;
if (input=='A'||input=='a')
{
cout<<"What is your item you wis to add?"<<endl;
cin>>item;
Grocerylist.push_back(item);
cout<<"Adding "<< item << "to menu. "<<endl;
}
if (input=='s'||input=='S')
{

cout<<"Here is your grocery list: ";
for (int i=0;i<Grocerylist.size();i++)
{
  cout<<Grocerylist[i]<<endl;
}
}}
while(input!='Q'&& input!='q');

return 0;
}

