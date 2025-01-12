#include<iostream>
using namespace std;
class ASCII{
    public:
    void value()
    {
        char c='e';
        cout<<"The ASCII value of"<<c<<" is "<<int (c);
    }
};
int main()
{
    ASCII p1;
    p1.value();
    return 0;
}