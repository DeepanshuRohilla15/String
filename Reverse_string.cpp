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

void reverse(char name[],int n)
{
     int s=0;
     int e = n-1;
     while(s<e)
     {
        swap(name[s++],name[e--]);
     }
}
   int main()
{
      char name[20];
      cin>>name;
      int len = getLength(name);
      cout<<"Your name is "<<name<<"\n";
      reverse(name,len);
      cout<<"Your name is "<<name<<"\n";
      
      
}
