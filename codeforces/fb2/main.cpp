#include <iostream>

using namespace std;

int fb(int n){
if(n==1)return 1;
else
  return n+fb(n-1);

}
int main()
{
    cout << fb(5) << endl;
    return 0;
}
