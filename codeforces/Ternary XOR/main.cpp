#include <iostream>

using namespace std;

int main()
{

    int t;cin>>t;
    while(t--){
            int n;cin>>n;

            string x;cin>>x;
            bool toggle = 1, found = 0;
            string a = "", b = "";
            for(int i=0;i<n;i++){
                if(x[i] == '2')
                {

                    if(!found)
                    a+='1',b+='1';
                    else
                        a+='0',b+='2';



            }

                else if (x[i] == '1' )
                {
                    if(!found)
                    {

                        found = 1;
                    a+='1',b+='0';
                    }

                    else
                        a+='0',b+='1';


                }


                else
                        a+='0',b+='0';


            }

            cout<<a<<endl<<b<<endl;

    }
    return 0;
}
