#include<iostream>
using namespace std;


int sumrange(int tree[],int s,int e,int sq,int eq,int i)
{
    if(sq<=s && eq>=e)
        return tree[i];
    if(eq<s || sq>e)
        return 0;
    int mid=(s+e)/2;

 int tr=(sumrange(tree,s,mid,sq,eq,2*i+1)+sumrange(tree,mid+1,e,sq,eq,2*i+2));
return tr;
}


void segtree(int a[],int s,int e,int i,int tree[])
{
    if(s==e)
        {tree[i]=a[s];
        return;}
    int mid=(s+e)/2;
    segtree(a,s,mid,2*i+1,tree);
    segtree(a,mid+1,e,2*i+2,tree);

tree[i]=tree[2*i+1]+tree[2*i+2];

}
int main()
{
    int n,i;
    cin>>n;
    int a[n],tree[2*n-1];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    segtree(a,0,n-1,0,tree);
    for(i=0;i<2*n-1;i++)
        cout<<tree[i]<<" ";

    int tmax=sumrange(tree,0,n-1,1,3,0);
    cout<<"\n"<<tmax<<endl;

}
