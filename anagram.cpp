#include<iostream>
#include<algorithm>
using namespace std;
bool CheckAnagram(string str1,string str2)
{
    // Case 1:When both are different
    if(str1.length()!=str2.length())
    return false;

    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());

    // Case 2
    for(int i=0;i<str1.length();i++)
    {
        if(str1[i]!=str2[i])
        return false;
    }
    return true;
}
int main()
{
    string str1="INTEGER";
    string str2="TEGERNI";
    if(CheckAnagram(str1,str2))
    cout<<"True"<<endl;
    else
    cout<<"False"<<endl;
    return 0;
}