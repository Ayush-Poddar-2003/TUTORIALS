#include<iostream>
using namespace std;

/*

CONSTRUCTOR HANDLING


*/

class A
{
    protected:
    int a;
    public:
        A(int x){
            a=x;
        }
        void display(){
            cout << "\nA : " << a;
        }
};

class B
{
    protected :
        int b;
    public:
        B(int y){
            b=y;
        }
        void display2(){
            cout << "\nB : "<< b;
        }
};

class C : public A, public B
{
    int c;
        public:
        C(int p,int q,int r):A(p),B(q)
        {
            c = r;
        }
        void display3(){
            cout << "\nC : "<< c;
        }
};

int main()
{
    C obj(10,20,30);

    obj.display();
    obj.display2();
    obj.display3();

}