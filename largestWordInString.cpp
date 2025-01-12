#include<iostream>
#include<string>
using namespace std;
string findLargestWord(string str)
{
    string largestWord="";
    string currentWord="";

    str=str+" ";
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')
        {
            currentWord=currentWord+str[i];
        }

        else{
            if(currentWord.length()>largestWord.length()){
                largestWord=currentWord;
            }
            currentWord;
        }
    }
    return largestWord;
}
int main()
{
    string str="Welcome to programming world";
    cout<<"Largest word:"<<findLargestWord(str)<<endl;
    return 0;
}