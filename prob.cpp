#include<iostream>
using namespace std;

class prob
{
private:
    /* data */
    int a ;
    int b ;
public:
    prob(/* args */);
    ~prob();

    prob(int a, int b){
        this->a=19;
        this->b=20;
    }

    void displayName(){
        cout<<"suraj"+a+b;
    }
};
int main(){
    prob p(1,2);
    p.displayName();

    return 0;
}
