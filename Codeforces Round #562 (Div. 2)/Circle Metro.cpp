#include <iostream>
using namespace std;
int main()
{
    int n,a,x,b,y,count=0,i,t1,t2;
    scanf("%d%d%d%d%d",&n,&a,&x,&b,&y);
    t1=a;
    t2=b;
    while((t1!=x)&&(t2!=y)){
        if(t1==t2){
            count++;
        }
        if(t1==n){
            t1=1;
        }
        else if(t1<x){
            t1++;
        }
        else if((t1>x)&&(t1<n)){
            t1++;
        }
        if(t2>y){
            t2--;
        }
        else if((t2<y)&&(t2>1)){
            t2--;
        }
        else if(t2==1){
            t2=n;
        }
        if(t1==t2){
            count++;
        }
    }
    if(count!=0){
        printf("YES");
    }
    else
    printf("NO");
    return 0;
}