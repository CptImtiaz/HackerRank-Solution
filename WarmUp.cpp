#include <bits/stdc++.h>

using namespace std;

void Input(int a[],int b[],int size)
{
    int alice=0;
    int bob=0;
    for(int i=0;i<size;i++){
    if(a[i]>b[i])
    {
         alice=alice+1;
    }
    else if(a[i]<b[i])
    {
         bob=bob+1;
    }

    else
    {
        alice=alice+0;
        bob=bob+0;
    }

}
cout<<alice<<" "<<bob;
}

int main()
{
   int size=3;
   int a[3];
   int b[3];
   int i;



    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<size;i++)
    {
        cin>>b[i];
    }
Input(a,b,size);

}
