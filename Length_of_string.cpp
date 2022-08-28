#include<bits/stdc++.h>
using namespace std;

int getLength(char name[]){
      int count=0;
      for(int i=0; name[i]!='\0';i++)
      {
            count++;
      }
      return count;
}

int main()
{
      char name[20];
      cin>>name;
      cout<<"Your name is "<<name<<"\n";

      cout<<"Length = "<<getLength(name)<<"\n";
}