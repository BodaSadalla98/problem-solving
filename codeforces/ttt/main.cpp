#include <iostream>
#include<bits/stdc++.h>
using namespace std;


 vector<pair<double,int> >valuePerkg;
    vector<int> values;
  vector<int> weights;




int main() {
  int n;
  double capacity;

    cin >> n >> capacity;
    valuePerkg.resize(n);

values.resize(n);
weights.resize(n);


  for (int i = 0; i < n; i++) {
    std::cin >> values[i] >> weights[i];


 valuePerkg[i].first= (double)values[i]/weights[i];
valuePerkg[i].second=weights[i];
  // cout<<  valuePerkg[i]<<endl;
  }

 sort(valuePerkg.rbegin(),valuePerkg.rend());

 //cout<<  valuePerkg[0]<<endl;
 double value = 0.0;
for(int i=0;i<n;i++){
        if(capacity>valuePerkg[i].second){
            capacity-=valuePerkg[i].second;
            value+= valuePerkg[i].first*valuePerkg[i].second;

        }
        else    {

     //   cout<< valuePerkg[i]<< "   "<<capacity<<endl;
             value  +=   valuePerkg[i].first* (double)capacity;
                break;

        }


}

  std::cout.precision(10);
  std::cout << value << std::endl;
  return 0;
}
