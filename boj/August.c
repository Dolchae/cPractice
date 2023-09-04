//10162
#include <stdio.h>

int main() {
    int t,a=0,b=0,c=0;
    int i=0;
    scanf("%d",&t);
    while(t>0) {
        if(t>=300) {
            a++;
            t-=300;
        }
        else if(t>=60) {
            b++;
            t-=60;
        }
        else {
            c++;
            t-=10;
        }
    }
    if(t!=0)
        printf("-1");
    else
        printf("%d %d %d",a,b,c);
    return 0;
}


//10988
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int check = 1;
    scanf("%s",word);
    int len = strlen(word);
    for(int i=0;i<=len/2;i++) {
        if(word[i]!=word[len-i-1]) {
            check--;
            break;
        }
    }
    printf("%d",check);

    return 0;
}


//2511
#include <stdio.h>

int main() {
    int player_A[10],player_B[10];
    int i,score_A=0,score_B=0;

    for(i=0;i<10;i++)
        scanf("%d",player_A+i);
    for(i=0;i<10;i++)
        scanf("%d",player_B+i);
    for(i=0;i<10;i++) {
        if(player_A[i]>player_B[i])
            score_A += 3;
        else if(player_A[i]<player_B[i])
            score_B += 3;
        else {
            score_A++;
            score_B++;
        }

    }
    if(score_A==score_B) {
        for(i=9;i>=0;i--) {
            if(player_A[i]>player_B[i]) {
                printf("%d %d\nA",score_A,score_B);
                break;
            }
            else if(player_B[i]>player_A[i]) {
                printf("%d %d\nB",score_A,score_B);
                break;
            }
        }
        if(i==-1)
            printf("%d %d\nD",score_A,score_B);
    }
    else {
        if(score_A>score_B)
            printf("%d %d\nA",score_A,score_B);
        else
            printf("%d %d\nB",score_A,score_B);
    }

    return 0;
}


//22341
#include <stdio.h>

int main() {
    int n,c,x,y;
    scanf("%d %d",&n,&c);
    int a=n,b=n;
    for(int i=0;i<c;i++) {
        scanf("%d %d",&x,&y);
        if(x>=a || y>=b)
            continue;
        else {
            if(x*b>a*y) {
                a=x;
            }
            else if(x*b<a*y) {
                b=y;
            }
            else
                a=x;
        }
    }
    printf("%d",a*b);

    return 0;
}


//2292
#include <stdio.h>

int main() {
    int n,ans=0,i=0;
    scanf("%d",&n);
    if(n==1) {
        printf("1");
        return 0;
    }
    n--;
    while(n>0) {
        n -= 6*i;
        ans++;
        i++;
    }
    printf("%d",ans);
    return 0;
}


//10870
#include <stdio.h>

int main() {
    int n,fir=0,sec=1,ans=0;
    scanf("%d",&n);
    if(n==2) {
        printf("1");
        return 0;
    }
    for(int i=0;i<n;i++) {
        fir = sec;
        sec = ans;
        ans = fir+sec;
    }
    printf("%d ",ans);
    
    return 0;
}


//10872
#include <stdio.h>

int main() {
    int n,ans=1;
    scanf("%d",&n);

    for(int i=1;i<n+1;i++) {
        ans *= i;
    }
    printf("%d",ans);

    return 0;
}

