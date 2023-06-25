    #include <iostream>

    using namespace std;

    int main()
    {
       int n;cin>>n;
       int gr1[7]={1,3,5,7,8,10,12};
       int gr2[4]={4,6,9,11};
       for(int i=0;i<n;i++){
       bool n1g1=0,n1g2=0,n2g1=0,n2g2=0;
       bool sameGroup=0;
       int n1,n2;cin>>n1>>n2;
       if(n1==2||n2==2)sameGroup=0;

       else
       {
           for(int j=0;j<7;j++){
            if(n1==gr1[j])n1g1=1;
            if(n2==gr1[j])n2g1=1;
           }
             for(int j=0;j<4;j++){
            if(n2==gr2[j])n2g2=1;
            if(n1==gr2[j])n1g2=1;
           }

           if((n1g1==n2g1)||(n1g2==n2g2))sameGroup=1;
           else
            sameGroup=0;
       }











       if(sameGroup)cout<<"Yes";
       else
        cout<<"No;

        cout<<endl;
       }

        return 0;
    }
