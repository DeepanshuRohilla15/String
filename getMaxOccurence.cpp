#include<bits/stdc++.h>
using namespace std;

char getMaxCharOcc(string s)
{
      int arr[26] = {0};

      for(int i=0; i<s.length(); i++)
      {
            char ch = s[i];
            //lowercase
            int number =0;
            number = ch-'a';
            arr[number]++;
      }
      //find max occ character
      int maxi=-1, ans=0;
      for(int i=0;i<26; i++)
      {
            if(maxi < arr[i])
            {
                  ans =i;
                  maxi= arr[i];
            }
      }

      return ans+'a';
}

int main()
{
     string s;
     cin>>s;
     cout<<getMaxCharOcc(s)<<"\n";
}