
#include <bits/stdc++.h>

using namespace std;

int main()
{
     int arr[100][100];
    int size,sum1=0,sum2=0;


    cin>>size;

    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            cin>>arr[r][c];
        }
    }
for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            if(r==c)
            {
                 sum1=sum1+arr[r][c];
            }
        }
    }
    for(int r=0;r<size;r++)
    {
        for(int c=0;c<size;c++)
        {
            if(r+c==size-1)
            {
                 sum2=sum2+arr[r][c];
            }
        }
    }
    int result = abs(sum1-sum2);
   cout<<result;
}
