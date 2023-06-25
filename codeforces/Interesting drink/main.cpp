#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n , days,x;
    int counter =0;
    cin >> n;
    int ia[n];
    for(int i=0;i<n; i++)
    {
        cin >> ia[i];
    }
    sort(ia ,ia+n);
    cin >> days;
    int price[days];
    for (int i =0; i < days; i++)
    {
        counter=0;
        cin >> x;
        price[i] =x;


        for(int j=0; j< n ; j++)
        {
            if(i< ia[j]) break;
            counter++;
        }

    cout << counter << endl;
    }
    return 0;
}
