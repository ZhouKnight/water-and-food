#include<iostream>
using namespace std;
class huiwen
{
    private:
    int m;
    int k;
    public:
    int find(int num);
    void out(int s,int n);
    huiwen();
    ~huiwen();
};
huiwen::huiwen()
{

}
huiwen::~huiwen()
{

}
int huiwen::find(int num)
{
    int flag=0;
    int count=0;
    int a=0;
    int b=num;
    while(b>0)
    {
       a=a*10+b%10;
       b=b/10; 
    }
    if(a==num)
    flag=1;
    return flag;
}
void huiwen::out(int s,int n)
{
    int count=0;
    m=s;
    k=n;
    for(int i=m;count<k;i++)
    {
        if(find(i))
        {
            cout<<i<<' ';
            count++;
        }
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        huiwen a;
        int s,n;
        cin>>s>>n;
        a.out(s,n);
    }
    return 0;
}