#include <iostream>

using namespace std;

int main()
{
        int n, temp, minmum=-1, sum=0;
        cin>>n;
    for(int i=0;i<n;i++){
            cin>>temp;
            minmum= max(temp, minmum);
            sum+=temp;

    }

        for(int i=minmum;i<10000;i++){
            int x = (n*i) - sum;
        if(x > sum){
         cout << i<< endl;
        return 0;
}

}

    return 0;
}
