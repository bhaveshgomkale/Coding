#include<iostream>
using namespace std;
void solve(string str,int n)
{
    for(int i=0;i<n;i++)
    {
        int ascii=(int)str[i];

        // If Uppercase
        if(ascii>=65 && ascii<=90)
        str[i]=tolower(str[i]);
        
        // If Lower
        if(ascii>=97 && ascii<=122)
        str[i]=toupper(str[i]);
    }
    cout<<"Resultant string:"<<endl;
    cout<<str<<endl;
}
int main()
{
    // Input String
    string str="take U Forward IS Awesome";
    int n=str.length();
    solve(str,n);
    return 0;
}