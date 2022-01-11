#include <iostream>
#include<algorithm>

using namespace std;

int main()
{
    int count=0;
    string str1="test",str2="tset";
    int a=str1.length(),b=str2.length();
    if(a!=b)
    {
        cout<<"Not anagram";
        return 0;
    }
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    for(int i=0;i<a;i++)
    {
        if(str1[i]!=str2[i])
        {
         count-=1;
        }
        else{
            count+=1;
        }
    }
    if(count==a)
    {
        cout<<"its Anagram";
    }
    else{
        cout<<"Not Anagram";
    }
    return 0;
}
