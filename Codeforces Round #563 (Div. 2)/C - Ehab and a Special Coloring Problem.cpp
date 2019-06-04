#include<iostream>
#include<algorithm>
#include<cstdio>
using namespace std;
int main(){
    int prime[100000],a[100010],n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        prime[i]=1;
    }
    int id=1;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            for(int j=i;j<=n;j+=i){
                a[j]=id;
                prime[j]=false;
            }
            id++;
        }
        
    }
    for(int i=2;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}