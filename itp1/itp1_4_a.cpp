#include <stdio.h>
using namespace std;

int main(){
    int a,b,d,r;
    double f;

    scanf("%d %d",&a,&b);
    d = a / b;
    r = a % b;
    f = (double)a / (double)b;

    printf("%d %d %.8lf\n",d,r,f);
    return 0;
}
