#include<iostream.h>
#include<conio.h>
int main()
{
    int a[20][20],i,j,m,s=0;
    cout<<"m=";cin>>m;
    for(i=1;i<=m;i++)
       for(j=1;j<=m;j++)
          {
             cout<<"a["<<i<<"]["<<j<<"]=";
             cin>>a[i][j];
           }
     for(i=1;i<=m;i++)
        for(j=1;j<=m;j++)
            s=s+a[i][j];
     cout<<"s="<<s<<endl;
getch();
}