#include <stdio.h>
int main(){
	int A,B;
	 int Q,W,E,R;
    scanf("%d %d",&A,&B);
    Q=A+B;
    W=A-B;
    E=A*B;
    R=A/B;
    printf("%d+%d=%d\n",A,B,Q);
    printf("%d-%d=%d\n",A,B,W);
    printf("%d*%d=%d\n",A,B,E);
    printf("%d/%d=%d\n",A,B,R);
     return 0;
}
