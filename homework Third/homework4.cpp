#include<iostream>
using namespace std;
class data{
    private:
    double d1,d2,d3,d4,d5,d6;
    double taverage;
    public:
    data(double d11,double d12,double d13,double d14,double d15,double d16): d1(d11),d2(d12),d3(d13),d4(d14),d5(d15),d6(d16)
    {

    }
    ~data(){   
    }
    double average();
    double fangcha();
};
double data::average()
{
    taverage=(d1+d2+d3+d4+d5+d6)/6;
    return taverage;
}
double data::fangcha()
{
    return ((d1-taverage)*(d1-taverage)+(d2-taverage)*(d2-taverage)+(d3-taverage)*(d3*taverage)+(d4-taverage)*(d4-taverage)+(d5-taverage)+(d6-taverage)*(d6-taverage))/taverage;
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        double d1,d2,d3,d4,d5,d6;
        cin>>d1>>d2>>d3>>d4>>d5>>d6;
        data test(d1,d2,d3,d4,d5,d6);
        printf("%.2f ",test.average());
        printf("%.2f\n",test.fangcha());
       
    }
    return 0;
}