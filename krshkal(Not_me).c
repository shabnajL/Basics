#include<stdio.h>
#define V 9
//#define V 4
int parent[V],n=V;
int cost[V][V]={{0,10, 12, 0, 0, 0, 0, 0, 0},
                {10, 0, 9, 8, 0, 0, 0, 0, 0},
                {12, 9, 0, 0, 3, 1, 0, 0, 0},
                {0, 8, 0, 0, 4, 0, 8, 5, 0},
                {0, 0, 3, 4, 0, 3, 0, 0, 0},
                {0, 0, 1, 0, 3, 0, 0, 6, 0},
                {0, 0, 0, 8, 0, 0, 0, 9, 2},
                {0, 0, 0, 5, 0, 6, 9, 0, 11},
                {0, 0, 0, 0, 0, 0, 2, 11, 0}
                };

int find(int i)
{
    while(parent[i]){
        i=parent[i];
    }
    return i;
}

int uni(int i,int j)
{
    if(i!=j)
    {
        parent[j]=i;
        return 1;
    }
    return 0;
}

void kruskal()
{
    int min,mincost=0,ne=0,i,j,u,v,a,b;
    for(i=0; i<n; i++){
        parent[i]=0;
    }

    while(ne<n-1)
    {
        min=999;
        for(i=0; i<n; i++){
            for(j=0; j<n; j++)
            {
                if(cost[i][j]==0)
                {
                    cost[i][j]=999;
                }
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    u=a=i;
                    v=b=j;
                }
            }
        }

        u=find(u);
        v=find(v);

        if(uni(u,v))
        {
            ne=ne+1;
            mincost=mincost+min;
            printf("%d --> %d is = %d\n", a,b,min);
        }
        cost[a][b]=cost[b][a]=999;
    }

    printf("\nMin cost : %d\n", mincost);
}

int main()
{
    int i,j;
    printf("The edges of MST are : \n\n");
    printf("U     V      W\n");
    printf("----------------\n");
    kruskal();

    return 0;
}
