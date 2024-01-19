#include<bits/stdc++.h>
using namespace std;
    class solve{
        public:
    vector<int>parent;
    vector<int>rank;
    vector<int>size;
    int find(int i){
        if(i==parent[i])return i;
        return parent[i]=find(parent[i]);
    }
    void Unionby_rank(int u,int v){
        int u_parent=find(u);
        int v_parent=find(v);
        if(u_parent==v_parent)return;
        if(rank[u_parent]>rank[v_parent]){
            parent[v_parent]=u_parent;
            
        }else if(rank[u_parent]<rank[v_parent]){
            parent[u_parent]=v_parent;
        }else{
                        parent[v_parent]=u_parent;
                        rank[u_parent]++;


        }
        
        
    }
    void Unionby_size(int x,int y){
        int u=find(x);
        int v=find(y);
        if(u==v)return ;
        if(size[u]>size[v]){
            size[u]+=size[v];
            parent[v]=u;
        }else{
          size[v]+=size[u];
          parent[u]=parent[v];
        }

    }
	int detectCycle(int V, vector<int>adj[])
	
	{
	    // Code here
	    parent.resize(V);
	    rank.resize(V,0);
        size.resize(V,1);
	    for(int i=0;i<V;i++){
	        parent[i]=i;
	    }
	    for(int i=0;i<V;i++){
	        for(auto it:adj[i]){
	            if(i<it){
	                int u=find(i);
	                int v=find(it);
	                if(u==v)return true;
	                Unionby_size(i,it);
	            }
	        }
	    }
	    return false;
	    
	}
    };
   
int main(){
   vector<int>adj[]={{1,2},{0,2},{1,0}};
   solve obj;
   cout<<obj.detectCycle(3,adj);

   

}