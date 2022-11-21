#include <bits/stdc++.h>
using namespace std;


vector < int > bfsOfGraph(int V, vector < int > adj[]) {
  vector < int > bfs;
  vector < int > vis(V, 0);
  queue < int > q;
  q.push(0);
  vis[0] = 1;
  while (!q.empty()) {
    int node = q.front();
    q.pop();
    bfs.push_back(node);

    for (auto i: adj[node]) {
        if (!vis[i]) {
          q.push(i);
        vis[i] = 1;
      }
    }
  }
  return bfs;
}

void addEdge(vector < int > adj[], int u, int v) {
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void printAns(vector < int > & ans) {
  for (int i = 0; i < ans.size(); i++) {
    cout << "visited: "<<ans[i]<<endl;
  }
}

int main() {
#ifndef ONLINE_JUDGE
  //for getting input from input.txt
  freopen("input.txt","r", stdin);
  //for getting output from output.txt
  freopen("output.txt","w",stdout);
#endif
  cout<<"breadth first search:"<<endl;
  vector < int > adj[5];

  addEdge(adj, 0, 1);
  addEdge(adj, 0, 2);
  addEdge(adj, 0, 3);
  addEdge(adj, 2, 4);

  vector<int> ans = bfsOfGraph(5, adj);
  printAns(ans);
  cout <<"shreykhandelwal_209303098"<< endl;

  return 0;
}