#include<iostream>
using namespace std;
class age{
    private:
    int year;
    public:
    age(int n): year(n)
    {

    }
    ~age()
    {

    }
    int execute();
};
int age::execute()
{
    if(year>=1&&year<=10)
    {
        cout<<"children";
    }
    else
    if(year>=11&&year<=20)
    {
        cout<<"teenagers";
    }
    else
    if(year>=41&&year<=50)
    {
        cout<<"middle-aged";
    }
    else if (year>=51&&year<=80)
    {
        cout<<"elderly";
    }
    else if (year>=81&&year<=100)
    {
        cout<<"old man";
    }
}
int main()
{
    int n;
    cin>>n;
    age a(n);
    a.execute();
    return 0;
}