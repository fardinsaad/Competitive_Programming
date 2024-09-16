#include<bits/stdc++.h>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int lev=-1,n,val[50],a[50];
vector <int> vct[100];
int ppp=0;
void visit(int k)
{
    int i;
    val[k]=++lev;
    if(lev==n)
    {
        for(i=0;i<n;i++) { cout<<"LOL";
        //printf("%2d",a[val[i]]);
        vct[ppp].push_back(a[val[i]]);
        }
        printf("\n");

    }
    ppp++;
    for(i=0;i<n;i++)
    if(val[i]==0)
    visit(i);
    lev--;
    val[k]=0;

}

int main()
{
    int i,j;

    printf("Enter how many numbers?n");
    scanf("%d",&n);
    printf("nEnter %d numbers:nn",n);
    for(i=0;i<n;i++)
    {
        val[i]=0;
        j=i+1;
        scanf("%dnn",&a[j]);
    }
    visit(0);
    getch();
    for(j=0;j<;j++) {
    for(i=0;i<vct[j].size();i++) {
        cout<<vct[j][i];
    } cout<<"\n"; }
}
