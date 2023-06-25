#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> days;
        vector<int> months;
        vector<int> years;
        vector<int> consumtion;
     int month_days[13] = {0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int main()
{
    int n;
    while(cin>>n,n){
        int sum=0,cnt=0;
        days.resize(n);
        years.resize(n);
        months.resize(n);
        consumtion.resize(n);
                for(int i=0;i<n;++i){
                    cin>>days[i]>>months[i]>>years[i]>>consumtion[i];

                }


        for(int i=0;i<n-1;++i){
            int new_day;
            int new_month;
            int new_year;


            if(months[i]==12 && days[i]==31){
                new_day =1 ;
                new_month=1;
                new_year= years[i]+1;
            }


            else if (years[i]%4 ==0  &&(years[i]%400==0 || years[i]%100 !=0 )&& months[i]==2 &&days[i]==28){
                    new_day =29 ;
                new_month=2;
                new_year= years[i];

            }
            else if ( months[i]==2 &&days[i]==29){
                new_day =1 ;
                new_month=3;
                new_year= years[i];


            }

            else
            {

                new_day = (days[i]+1)%  month_days[months[i]];
                new_month = months[i]+((days[i]+1)/month_days[months[i]]);
                new_year= years[i];
            }

            if(new_day == days[i+1]&&new_month == months[i+1]&& new_year == years[i+1]){
                cnt++;
                sum+= consumtion[i+1]- consumtion[i];

            }





        }





                cout << cnt << " " << sum << endl;


    }
    return 0;
}
