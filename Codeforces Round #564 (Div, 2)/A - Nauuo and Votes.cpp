#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    if(z==0){
        if(x>y) printf("+");
        if(x<y) printf("-");
        else printf("0");
    }
    if(z!=0){
        if((x>y)&&((x-y)>z)){
            printf("+");
        }
        else if((x>y)&&((x-y)<=z)){
            printf("?");
        }
        if((x<y)&&((y-x)>z)){
            printf("-");
        }
        else if((x<y)&&((y-x)<=z))
        {
            printf("?");
        }
        if(x==y){
            printf("?");
        }
    }
    return 0;
}