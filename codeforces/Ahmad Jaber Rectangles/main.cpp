#include <iostream>

using namespace std;

int main()
{
    long long area, x1,x2,x3,x4,h;
    cin>>x1>>x2>>x3>>x4>>h;

    if ((x1>= x3 && x1<=x4) ){
        if (x2>= x4){
                area = h* (x4-x1);

        }
        else {
            area = h* (x2-x1);
        }


    }
    else if ((x3>= x1 && x3<=x2)){
            if(x4>= x2){
                area = h* (x2-x3);
            }
            else{
                area = h* (x4-x3);
            }

    }
        else area=0;
    cout << area << endl;
    return 0;
}
