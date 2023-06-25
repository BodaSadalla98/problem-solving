#include <iostream>

using namespace std;
 int fob(int n){
 if(n==1)return 1;
 return n+ fob(n-1);

 }
int main()
{
    cout << fob(2) << endl;
    return 0;
}
