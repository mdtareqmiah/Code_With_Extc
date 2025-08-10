#include<bits/stdc++.h>
using namespace std;

struct Node{
    int at, cost;
    Node(int _at, int _cost){
        at=_at;
        cost=_cost;

    }
};

bool operator<(Node a, Node b){
    return a.cost>b.cost;
}

struct Edge{
    int v,w;
};

vector<Edge> adj[100];
priority_queue<Node>pq;
int dist[100];
int n;

void dijkstra(int s){
    for(int i=1; i<=n; i++){
        dist[i]=1e18;

    }
    dist[s]=0;
    pq.push(Node(s,0));

    while(!pq.empty()){
        Node u=pq.top();
        pq.pop();

        if(u.cost != dist[u.at]){
            continue;
        }
        for(Edge e : adj[u.at]){
            if(dist[e.v]>u.cost+e.w){
                dist[e.v]=u.cost+e.w;
                pq.push(Node(e.v, dist[e.v]));
            }
        }
    }
}