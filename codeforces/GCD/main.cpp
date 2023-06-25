#include <iostream>

using namespace std;


int GCD(int a ,int b){
if(b==0)return a;

else
    return GCD(b,a%b);

}
int main()
{
    cout<<GCD(3918848,1653264);
    return 0;
}
