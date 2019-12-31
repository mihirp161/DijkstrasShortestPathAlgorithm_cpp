/*
	Author:		Mihir Patel
	Purpose:	Following is a header+source file for the Vertex. It keeps the graph's
				vertexes, list of short path.
*/
#ifndef VERTEX_HPP
#define VERTEX_HPP

#include <string>
#include <vector>

class Vertex{
private:
	std::string vertex; /*a node*/
	unsigned long minimum_distance; /*keeps the minimum distance between two edges*/
	std::vector<std::string> shortest_path;/*keeps the shortest paths/edges in the vector*/
	bool seen; /*variable to see if a node in the way has been seen*/
protected:
public:
	friend class Graph;/*Friended to graph to give access*/
	/*Default constructor and destructor*/
	Vertex() { vertex = ""; }
	~Vertex() {}
};
#endif // !VERTEX_HPP

