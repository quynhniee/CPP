#include<iostream>
#define MAX 100
#define INF 1000000
using namespace std;
class graph{
    int     n, s, a[MAX][MAX], d[MAX], truoc[MAX], chuaxet[MAX];
    public:
    void    readdata();
    int     gets(){ return s;   }
    void    dijkstra(int s);
};
void    graph::readdata(){
    cin>>n>>s;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++){
            cin>>a[i][j];
            if(a[i][j]==0)  a[i][j]=INF;
        }
}
void    graph::dijkstra(int s){
    //Khoi tao
    d[s]=0;     truoc[s]=s;     chuaxet[s]=0;
    for(int v=1; v<=n; v++)
        if(v!=s){
            d[v]=a[s][v];   truoc[v]=s;     chuaxet[v]=1;
        }
    //Lap
    for(int k=1; k<=n-1; k++){
        //Tim u co du = min(dz|z thuoc T)
        int mindu=INF, uidx;
        for(int u=1; u<=n; u++)
            if(chuaxet[u]==1)   //tim u trong tap T
                if(d[u]<mindu){
                    mindu=d[u];     uidx=u;
                }
        //Neu tim duoc u <=> mindu != INF
        if(mindu!=INF){
            chuaxet[uidx]=0;    //Loai dinh u min khoi tap nhan tam thoi
            //Cap nhat nhan tam thoi
            for(int v=1; v<=n; v++)
                if(chuaxet[v]==1)
                    if((a[uidx][v]!=INF)&&(d[v]>d[uidx]+a[uidx][v])){
                        d[v]=d[uidx]+a[uidx][v];
                        truoc[v]=uidx;
                    }
        }
    }
    //In ket qua
    for(int t=1; t<=n; t++)
        if(d[t]==INF)
            cout<<"K/c "<<s<<" -> "<<t<<" = INF;"<<endl;
        else{
            cout<<"K/c "<<s<<" -> "<<t<<" = "<<d[t]<<"; ";
            cout<<t<<" <- ";
            int u=truoc[t];
            while(u!=s){
                cout<<u<<" <- ";    u=truoc[u];
            }
            cout<<s<<endl;
        }
}
int main(){ graph g;    g.readdata();   g.dijkstra(g.gets());   //cout<<"\nOk";
}