#include<iostream>
using namespace std;
class three{
    private :
    int x;
    public:
    three(int n):x(n){

    }
    ~three(){

    }
    int execute_sum();
};
int three::execute_sum()
{
    int a=x/100;
    int b=x/10%10;
    int c=x%10;
    return a+b+c;
}
int main()
{
    int n;
    cin>>n;
    three a(n);
    cout<<a.execute_sum();
    return 0;
}