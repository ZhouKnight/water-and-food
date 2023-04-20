#include<iostream>
using namespace std;
class season{
    private:
    int num;
    public:
    season(int n):num(n)
    {

    }
    ~season()
    {

    }
    void execute();
};
void season::execute(){
    switch (num)
    {
        case 1: cout<<"Spring";
                break;
        case 2: cout<<"Summer";
                break;
        case 3: cout<<"Fall";
                break;
        case 4: cout<<"Winter";
    }
}
int main()
{
    int n;
    cin>>n;
    season a(n);
    a.execute();
    return 0;
}