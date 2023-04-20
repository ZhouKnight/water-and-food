#include<iostream>
using namespace std;
class bjt{
    private:
    int hour;
    int min;
    public:
    bjt(int time):hour(time/100),min(time%100)
    {

    }
    ~bjt(){
        
    };
    int hold();
};
int bjt::hold()
{
    if(hour>=8)
    {
        int tem=(hour-8)*100+min;
        return tem;
    }
    else
    {
        int tem=(hour-8+24)*100+min;
        return tem;
    }
}
int main()
{
    int num;
    cin>>num;
    bjt exp(num);
    cout<<exp.hold();
    return 0;
}