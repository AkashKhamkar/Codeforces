#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n,i,a[4000];
    scanf("%d",&n);
    for(i=0;i<2*n;i++){
        scanf("%d",&a[i]);
    }
    sort(a, a + 2*n);
    long long sum1=0,sum2=0;
    for(i=0;i<n;i++){
        sum1+=a[i];
        sum2+=a[n+i];
    }
    if(sum2!=sum1){
        for(i=0;i<2*n;i++){
            printf("%d ",a[i]);
        }
    }
    else
    printf("-1");
    return 0;
}