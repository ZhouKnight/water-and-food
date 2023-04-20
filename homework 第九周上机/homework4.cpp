#include<iostream>
using namespace std;
class grade
{
private:
        int num;
public:
    grade(int n):num(n){};
    ~grade();
    void execute();
};
void grade::execute()
{
    int x=num/10;
    switch(x){
        case 10:
        case 9:     cout<<'A';
                    break;
        case 8:     cout<<'B';
                    break;
        case 7:
        case 6:     cout<<'C';
                    break;
        default :   cout<<'E';
    }
}
grade::~grade()
{
}
int main()
{
    int n;
    cin>>n;
    grade a(n);
    a.execute();
    return 0;
}
