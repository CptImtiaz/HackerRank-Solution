#include <bits/stdc++.h>

using namespace std;

int main()
{
    int size,pos=0,neg=0,zero=0;
    float arr[100];
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else{
            zero++;
        }
    }

    float positive = (float)pos / size;
    float negative = (float)neg / size;
    float zeros = (float)zero / size;

      cout << fixed << setprecision(6) << positive << endl;
     cout << fixed << setprecision(6) << negative<<endl;
     cout << fixed << setprecision(6) << zeros<<endl;
}
