#include<iostream>
using namespace std;
void qs(int a[],int n);
void quicks(int a[],int n,int BEG,int END,int *LOCP);
int main()
{int i;
int a[]={4,7,6,5,2,9,8};
qs(a,7);
for(i=0;i<7;i++)
    cout<<a[i]<<endl;
}
void qs(int a[],int n)
{
    int beg,endd,loc,top=-1;
    int lower[10],upper[10];
    if(n>1)
    {
        top++;
        lower[top]=0;
        upper[top]=n-1;
    }
    while(top!=-1)
    {
        beg=lower[top];
        endd=upper[top];
        top--;
        quicks(a,n,beg,endd,&loc);
    if(beg<loc-1){
            top++;
    lower[top]=beg;
    upper[top]=loc-1;
    }
    if(loc+1<endd){
        top++;
        lower[top]=loc+1;
        upper[top]=endd;
    }
    }
}

void quicks(int a[],int n,int BEG,int END,int *LOCP)
{
    int TEMP,LEFT,RIGHT;
    LEFT=BEG; RIGHT=END;
    *LOCP=BEG;
    step2:
        while(a[*LOCP]<a[RIGHT]&& *LOCP!=RIGHT)
            RIGHT--;
        if(RIGHT==*LOCP)
            return;
        if(a[*LOCP]>a[RIGHT])
        {
            TEMP=a[*LOCP];
            a[*LOCP]=a[RIGHT];
            a[RIGHT]=TEMP;
        }
    goto step3;
    step3:
        while(a[*LOCP]>a[LEFT]&& *LOCP!=LEFT)
            LEFT++;
        if(*LOCP==LEFT)
            return;
        if(a[*LOCP]<a[LEFT])
        {
            TEMP=a[*LOCP];
            a[*LOCP]=a[LEFT];
            a[LEFT]=TEMP;
        }
        goto step2;

}
