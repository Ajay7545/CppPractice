#include<iostream>
using namespace std;

int minsearch(int tree[],int s,int e,int sq,int eq,int i)
{
    if(sq<=s && eq>=e)
        return tree[i];
    if(sq>e || eq<s)
        return 100;
    int mid=(s+e)/2;

    return min(minsearch(tree,s,mid,sq,eq,2*i+1),minsearch(tree,mid+1,e,sq,eq,2*i+2));
}
int maxsearch(int tree[],int s,int e,int sq,int eq,int i)
{
    if(sq<=s && eq>=e)
        return tree[i];
    if(eq<s || sq>e)
        return -100;
    int mid=(s+e)/2;
    return max(maxsearch(tree,s,mid,sq,eq,2*i+1),maxsearch(tree,mid+1,e,sq,eq,2*i+2));
}


void segtree(int a[],int s,int e,int i,int tree[])
{
    if(s==e)
        {tree[i]=a[s];
        return;}
    int mid=(s+e)/2;
    segtree(a,s,mid,2*i+1,tree);
    segtree(a,mid+1,e,2*i+2,tree);

    if(tree[2*i+1]>tree[2*i+2])   //for max
        tree[i]=tree[2*i+1];
    else
        tree[i]=tree[2*i+2];

     /*if(tree[2*i+1]<tree[2*i+2])   //for min
        tree[i]=tree[2*i+1];
    else
        tree[i]=tree[2*i+2];*/

    //tree[i]=tree[2*i+1]+tree[2*i+2];    //range sum
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
    //int tmin=minsearch(tree,0,n-1,1,2,0);
    //cout<<"\n"<<tmin<<endl;
    int tmax=maxsearch(tree,0,n-1,1,3,0);
    cout<<"\n"<<tmax<<endl;

}
