#include <stdio.h>
#include <stdlib.h>

int main() {
    int x =1,y =2,z =3,*px,*py,*pz;
    px =&x;
    py =&y;
    pz =&z;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    printf("px =%p,py =%p,pz=%p\n",px,py,pz);
    printf("*px =%d,*py=%d,*pz=%d\n",*px,*py,*pz);
    printf("Swapping pointers.\n");
    pz =px;
    px =py;
    py =pz;
    printf("all the values after swapping are :\n");
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    printf("px=%p,py=%p,pz=%p\n",px,py,pz);
    printf("*px=%d,*py=%d,*pz=%d\n",*px,*py,*pz);
}
