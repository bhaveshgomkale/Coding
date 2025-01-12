#include<iostream>
using namespace std;
int main()
{
    string str="I am a Student";
    int n=str.length();
    int spaces=0;

    for(int i=0;i<n;i++)
    {
        if(str[i]==' ')
        spaces=spaces+1;
    }
    cout<<"The  number of words is:"<<spaces+1;
}