Project Proposal
-----------------
Dr. William Oropallo (Former Instructor I at the University of South Florida)

Author
-------
Mihir Patel   

Description
-------------   
Program would be implementing an undirected weighted Graph ADT and performing Dijkstra's Algorithm to find the shortest path between two vertices. The graph is implemented using  an adjacency list. The graph has an implementation of methods that add and remove vertices, add and remove edges, and calculate the shortest path. Each vertex in the graph have a string label that will help identify that vertex to you and the test file. 

Furthermore, there are following abstractions-  

1) **void addVertex(std::string label)**    
  - Creates and adds a vertex to the graph with label. No two vertices have the same label. 

2) **void removeVertex(std::string label)**    
  - Removes the vertex with label from the graph. Also removes the edges between that vertex and the other vertices of the graph. 

3) **void addEdge(std::string label1, std::string label2, unsigned long weight)**   
  - Adds an edge of value weight to the graph between the vertex with label1 and the vertex with label2. 

4) **void removeEdge(std::string label1, std::string label2)**   
  - Removes the edge from the graph between the vertex with label1 and the vertex with label2.

5) **unsigned long shortestPath(std::string startLabel, std::string endLabel, std::vector<std::string> &path)**   
  - Calculates the shortest path between the vertex with startLabel and the vertex with endLabel using Dijkstra's Algorithm. A vector is passed into the method that stores the shortest path between the vertices. The return value is the sum of the edges between the start and end vertices on the shortest path. 

Please use test file GreedyAlgoTest.cpp to test your given input. 
      
Examples   
--------   
Below are some examples of how this code runs. The test file can also be used to get an idea of how the code can run. 

````````cpp
std::vector<std::string> vertices1 = { "1", "2", "3", "4", "5", "6" }; 

std::vector<std::tuple<std::string, std::string, unsigned long>> 
edges1 = { {"1", "2", 7}, {"1", "3", 9}, {"1", "6", 14}, {"2", "3", 10}, {"2", "4", 15}, {"3", "4", 11}, {"3", "6", 2}, {"4", "5", 6}, {"5", "6", 9} }; 
for (const auto label : vertices1) g.addVertex(label); 
for (const auto &tuple : edges1) g.addEdge(std::get<0>(tuple), std::get<1>(tuple), std::get<2>(tuple));
g.shortestPath("1", "5", path); // == 20 
g.shortestPath("1", "5", path); // = { "1", "3", "6", "5" }      
````````
