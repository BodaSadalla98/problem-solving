#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<pair<int,int>> segments;
    vector<int > talls;

int main()
{

        int n,m,l;
        cin>>n>>m>>l;
    segments.resize(n+1);
    talls.resize(n+1);
   int counter=0;
            for(int i=0;i<n;i++)
            cin >>talls[i];
        bool insideAsegment=0;
             for(int i=0;i<n;i++){
            if(talls[i]>l && !insideAsegment){
            //start a new segement
                insideAsegment=1;
                segments[counter].first = i;
                //if(i+1==n){segments[counter].second = i;counter++;}

}
        else if (talls[i]<=l&& insideAsegment){
                insideAsegment=0;

            // end of the segment

    segments[counter].second = i;
    counter++;
}
          if(i+1==n){segments[counter].second = i;counter++;}

    }


     //   for(auto i=0;i<counter; ++i)cout<<segments[i].first<<' '<<segments[i].second<<"\n";


        for(int i=0;i<m;i++){

        int temp;

        cin>>temp;
            if (temp ==0){

                cout<<counter<<endl;




}
        else {

                int t1,t2;
                cin>>t1>>t2;
                        t1--;
                    talls[t1]+=t2;
                    if(talls[t1]>l){
                        bool new_segment =1;
                            int c=0;
                for (int j=0;j<counter;++j){
                    if(t1 - segments[j].first==  -1  ){
                            new_segment=0;c++;
                        segments[j].first= t1;
        }
                    else if ( t1- segments[j].second==1 ){
                     segments[j].second= t1;c++;
                        new_segment=0;

}
                    else if ( t1<= segments[j].second && t1>= segments[j].first)

                {new_segment=0;}



                }
                    if(c==2)counter--;
                    if(new_segment){
                        segments[counter].first = t1;
                        segments[counter].second = t1;
                        counter++;
}


}




}










}






    return 0;
}
