#include<iostream>
using namespace std;
int solve(string str,int length)
{
    int vowels=0,consonant=0,whitespaces=0;
    for(int i=0;i<length;i++)
    {
        str[i]=tolower(str[i]);
    }
    for(int i=0;i<length;i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        vowels++;
        else if(str[i]>='a' && str[i]<='z')
        consonant++;
        else if(str[i]==' ')
        whitespaces++;
    }
    cout<<"Vowels: "<<vowels<<endl;
    cout<<"Consonant: "<<consonant<<endl;
    cout<<"WhiteSpaces: "<<whitespaces;
}
int main()
{
    string str="Take u forward is Awesome";
    int length=str.length();
    solve(str,length);
    return 0;
}