#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,i,j,c[2];
    scanf("%d",&n);
    int a[1000000];
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
        c[a[i]%2]=1;
    }
    if(c[0] && c[1]){
        sort(a+1,a+n+1);
    }
    for(i=1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}