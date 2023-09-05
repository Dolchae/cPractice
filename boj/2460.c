#include <stdio.h>

int main() {
    int train[10][2],ans[10]={0},max=0;
    for(int i=0;i<10;i++) {
        scanf("%d %d",&train[i][0],&train[i][1]);
    }
    ans[0] = train[0][1];
    for(int i=1;i<10;i++) {
        ans[i] = ans[i-1] - train[i][0] + train[i][1];
    }
    for(int i=0;i<10;i++) {
        if(max<ans[i])
            max = ans[i];
    }
    printf("%d\n",max);

    return 0;
}
