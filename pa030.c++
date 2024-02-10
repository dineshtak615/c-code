#include<iostream>
using namespace std;
//object oriented programmig in c++( hi oops )

class employee
{
    private:
    int a, b,c;
    public:
    int d,e;
void setdata(int a1,int b2,int c3);//declearation
void getdata(){
cout<<"the value of a is "<<a<<endl;
cout<<"the value of b is "<<b<<endl;
cout<<"the value of c is "<<c<<endl;
cout<<"the value of d is "<<d<<endl;
cout<<"the value of e is "<<e<<endl;
}
};
void employee :: setdata(int a1 ,int b2 ,int c3){
    a=a1;
    b=b2;
    c=c3;

}
int main()
{
    employee h;
    h.d=34;
    h.e=89;
    h.setdata(1,2,3);
    h.getdata();
    return 0;
}  
