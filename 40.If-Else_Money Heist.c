#include <stdio.h>

int main() {

    int a,b,c,d,e,f,g,h,i,j;
    int k,l,m,n,o,p;

    // Read 10 digits
    scanf("%d %d %d %d %d %d %d %d %d %d",
          &a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    // Read operations
    scanf("%d %d", &k, &l);
    scanf("%d %d", &m, &n);
    scanf("%d %d", &o, &p);

    /* First operation */
    if(k==0) a=(a+l)%10;
    else if(k==1) b=(b+l)%10;
    else if(k==2) c=(c+l)%10;
    else if(k==3) d=(d+l)%10;
    else if(k==4) e=(e+l)%10;
    else if(k==5) f=(f+l)%10;
    else if(k==6) g=(g+l)%10;
    else if(k==7) h=(h+l)%10;
    else if(k==8) i=(i+l)%10;
    else if(k==9) j=(j+l)%10;

    /* Second operation */
    if(m==0) a=(a+n)%10;
    else if(m==1) b=(b+n)%10;
    else if(m==2) c=(c+n)%10;
    else if(m==3) d=(d+n)%10;
    else if(m==4) e=(e+n)%10;
    else if(m==5) f=(f+n)%10;
    else if(m==6) g=(g+n)%10;
    else if(m==7) h=(h+n)%10;
    else if(m==8) i=(i+n)%10;
    else if(m==9) j=(j+n)%10;

    /* Third operation */
    if(o==0) a=(a+p)%10;
    else if(o==1) b=(b+p)%10;
    else if(o==2) c=(c+p)%10;
    else if(o==3) d=(d+p)%10;
    else if(o==4) e=(e+p)%10;
    else if(o==5) f=(f+p)%10;
    else if(o==6) g=(g+p)%10;
    else if(o==7) h=(h+p)%10;
    else if(o==8) i=(i+p)%10;
    else if(o==9) j=(j+p)%10;

    // Output result
    printf("%d %d %d %d %d %d %d %d %d %d",
           a,b,c,d,e,f,g,h,i,j);

    return 0;
}
