#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the divisors function below.
 */
int divisors(int n) {
        int ret=0;
                if (n%2==0)ret++;
            for(int i=2; i*i <=n;i++){
                if(i*i==n&& i%2==0)ret++;
                    else
                    {
                        if(n%i==0 ){
                                if(i%2==0 )
                            ret ++;
                            if((n/i)%2 ==0)ret++;


                    }

                    }



            }
        return ret;

    /*
     * Write your code here.
     */

}

int main()
{


    int t;
    cin >> t;


    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;


        int result = divisors(n);

        cout << result << "\n";
    }



    return 0;
}
