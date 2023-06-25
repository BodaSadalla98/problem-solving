    #include <iostream>
    #include<bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t; cin>>t;

        while(t--){
            int a,b,dead_x,dead_y;
            cin>>a>>b>>dead_x>>dead_y;
            a--,b--;
            int best = 0;
            for(int i=0;i<=a;i++){
                for(int j = 0;j<=b;j++){
                        int temp;
                        if(i == dead_x &&  j == dead_y)continue;
                    int ma_rows,ma_columns;
                     if (i > dead_x || j > dead_y )
                       {
                          temp = (a-i+1) * (b-j+1);

                       }

                    else if   (i < dead_x && j < dead_y ) temp = max( ( (dead_x-i) * (b-j+1 )) , ( (dead_y-j) * ( a-i+1) ));
                    else if (i == dead_x ) temp = (dead_y - j) * ( a-i+1);
                     else if (j == dead_y ) temp = (dead_x - i )*( b-j+1);


                 //  else if( j < dead_y && i == dead_x )ma_columns=1,ma_rows=a;

                     //  else  if( i < dead_x && j == dead_y )ma_columns=b,ma_rows=1;






                        if(temp > best){
                            best = temp;
                        }




                }
            }



            printf("%d\n",best);
        }
        return 0;
    }
