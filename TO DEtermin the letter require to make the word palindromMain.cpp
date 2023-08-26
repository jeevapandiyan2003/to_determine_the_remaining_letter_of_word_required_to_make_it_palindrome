#include <iostream>
#include<string>
using namespace std;

int main() 
{
    string wor;
    char samp;
    int d=0;
    int index;
    cin>>wor;
    int ss=wor.size();
    char last=wor[ss-1];
    for(int i=0;i<ss-1;i++)
    {
      if(wor[i]==last)
      {
        d=1;
        index=i-1;
      }
    }
    if(d==0)
    {
      index=ss-2;
    }
    for(int j=index;j>=0;j--)
    {
      cout<<wor[j];
    }
    return 0;
}