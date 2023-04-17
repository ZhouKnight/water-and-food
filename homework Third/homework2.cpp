#include<iostream>
using namespace std;
class circle{
    private:
    double r;
    public:
    void init(int m);
    double d();
    double l();
    double s();
    void out();
};
void circle::init(int m)
{
    r=m;
}
double circle::d()
{
    return 2*r;
}
double circle::l()
{
    return 3.14*d();
}
double circle::s()
{
    return 3.14*r*r;
}
void circle::out()
{
    cout<<"直径="<<d()<<endl;
    cout<<"圆周="<<l()<<endl;
    cout<<"面积="<<s()<<endl;
}
int main()
{
    double a;
    cin>>a;
    circle b;
    b.init(a);
    b.out();
    return 0;
}