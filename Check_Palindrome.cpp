#include<bits/stdc++.h>
using namespace std;

char toLower(char ch)
{
      if(ch>='a' && ch<='z')
      {
            return ch;
      }
      else{
            char temp = ch - 'A' + 'a';
            return temp;
      }
}

bool checkPalindrome(char a[],int n)
{
      int s=0;
      int e = n-1;
      while(s<=e)
      {
            if(toLower(a[s])!= toLower(a[e]))
            {
                  return 0;
            }
            else{
                  s++;
                  e--;
            }
      }
      return 1;
}

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
        int len = getLength(name);
        cout<<"Palindrome or not: "<<checkPalindrome(name,len);
}