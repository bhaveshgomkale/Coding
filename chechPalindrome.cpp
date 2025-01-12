#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s2="to me to";
    int start=0,end=s2.size()-1;
    while(start<end)
    {
        if(s2[start]!=s2[end])
        {
            cout<<"Not a palindrome";
            return 0 ;
        }
        start++,end--;
    }
    cout<<"It is a Palindrome";
}