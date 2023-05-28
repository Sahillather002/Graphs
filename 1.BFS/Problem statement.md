Problem Statement
Suggest Edit
You are given an undirected and disconnected graph G(V, E) having V vertices numbered from 0 to V-1 and E edges. Your task is to print its BFS traversal starting from the 0th vertex.
BFS or Breadth-First Traversal of a graph is an algorithm used to visit all of the nodes of a given graph. In this traversal algorithm, one node is selected, and then all of the adjacent nodes are visited one by one.
An undirected graph is a graph where all the edges are bidirectional, i.e., they point from source to destination and destination to source.
A graph is disconnected if at least two vertices of the graph are not connected by a path.
Note:
1. Here, you need to consider that you need to print the BFS path starting from vertex 0 only. 
2. V is the number of vertices present in graph G, and all vertices are numbered from 0 to V-1. 
3. E is the number of edges present in graph G.
4. Graph input is provided as the number of vertices and a list of edges.
5. Handle for Disconnected Graphs as well.
For Example: Consider graph:
![image](https://github.com/Sahillather002/Graphs/assets/72077931/df1aadde-7bd1-4cf1-8227-6d1d239b2597)

example

Here, starting from 0, it is connected to 1 and 2 so, BFS traversal from here will be [0, 1, 2 ]. Now, 3 is also connected to 2. So, BFS traversal becomes [0, 1, 2, 3].
Note:
For each node, the correct order of printing the connected nodes will be sorted order, i.e., if {3,6,9,4} are connected to 1, then the correct order of their printing is {1,3,4,6,9}.
Detailed explanation ( Input/output format, Notes, Images )

* Sample Input 1:

![image](https://github.com/Sahillather002/Graphs/assets/72077931/06d9b931-648e-493c-a0a7-da423b51818e)

4 4
0 1
0 3
1 2
2 3
Sample Output 1:
0 1 3 2
Explanation For Sample Input 1:
example

Starting from 0, it is connected to 1 and 3, which will be printed. Then comes 2, which was connected to 1. 

* Sample Input 2:

![image](https://github.com/Sahillather002/Graphs/assets/72077931/273d3173-66d4-4109-b266-4e4d81a22ceb)

4 3
0 1
0 3
1 3
Sample Output 2:
0 1 3 2
Explanation For Sample Input 2:
example

Starting from 0, it is connected to 1 and 3, which will be printed. The remaining node is 2, which will be printed at the end.
