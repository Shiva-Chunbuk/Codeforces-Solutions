#include<bits/stdc++.h>
using namespace std;
int main(){
 int a;
 scanf("%d",&a);
 for(int i=1;i<=a;i++)
 {
  int b;
  scanf("%d",&b);
  int arr[b+10];
  for(int t=1;t<=b;t++)
  {
   scanf("%d",&arr[t]);
  }
  int c;
  for(int t=1;t<=b;t++)
  {
   scanf("%d",&c);
   int U=0,D=0;getchar();
   for(int f=1;f<=c;f++)
   {
    if(getchar()=='U')U++;
    else D++;
   }
   int x=(D-U)%10;
   arr[t]=(arr[t]+x)%10;
   if(arr[t]<0)arr[t]+=10;
   printf("%d ",arr[t]);
  }
  printf("\n");
 }
}
                               