#include <iostream>
int fb(int n){
if(n==1)return 1;
return n+fb(n-1);

}

using namespace std;

int main()
{
    cout << fb(4) << endl;
    return 0;
}
