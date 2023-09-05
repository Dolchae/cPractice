#include <stdio.h>

int main() {
    int n,check=0,ans=0;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++) {
        scanf("%d",&score[i]);
        if(score[i]==1) {
            check++;
            ans += check;
        }
        else
            check=0;
    }
    printf("%d",ans);

    return 0;
}
