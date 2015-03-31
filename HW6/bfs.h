/**
 * An implementation of a binary search tree
 * Brandon Max - maxbrand
 * A49257553
 */
using namespace std;
#include <list>
#include <vector>
#include <map>
class Graph
{
  public:
    Graph(int size) : size(size) { }
    ~Graph();

    // You need to implement these
    bool addEdge(int s, int d);
    bool IsEmpty() const { return Size() == 0; }
    void BFS(int s);
    int Size() const { return size; }
    int size;
    map<int,vector<int>> adj;

};
bool Graph::addEdge(int source, int dest) {
  this->adj[source].push_back(dest);
  return true;
}
void Graph::BFS(int s)
{
  // Mark all the vertices as not visited
  bool *visited = new bool[size];
  for(int i = 0; i <= size; i++)
    visited[i] = false;

  // Create a queue for BFS
  list<int> queue;
  map<int,int> d; // for distance
  map<int, string> p; // for parent

  // Mark the current node as visited and enqueue it
  visited[s] = true;
  queue.push_back(s);
  d.insert({s, 0});
  p.insert({s, "nil"});

  cout << "D = ";
  while(!queue.empty())
  {
    // Dequeue a vertex from queue and print it
    s = queue.front();
    cout << s << " ";
    queue.pop_front();

    // Get all adjacent vertices of the dequeued vertex s
    // If a adjacent has not been visited, then mark it visited
    // and enqueue it
    for(int i : adj[s])
    {
      if(!visited[i])
      {
        d.insert({i, d.find(s)->second+1});
        p.insert({i, to_string(s)});
        visited[i] = true;
        queue.push_back(i);
      }
    }
  }
  cout << endl;
  for(auto it = p.cbegin(); it != p.cend(); ++it)
  {
    cout << it->first <<".p="<<it->second<<", ";
  }
  cout<<endl;
  for(auto it = d.cbegin(); it != d.cend(); ++it)
  {
    cout << it->first <<".d="<<it->second<<", ";
  }
  cout << endl;
}
/*
 * Inserts the element into the tree
 * Returns true if the insertion was successful
 * Returns false if the element already existed.
 */
