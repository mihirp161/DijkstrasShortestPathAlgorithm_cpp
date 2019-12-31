/*
	Author:		Mihir Patel
	Purpose:	Following is a header+source file for the Edge. It keeps the graph's
				edges, edge's weight.
*/
#ifndef EDGE_HPP
#define EDGE_HPP

#include <string>

class Edge {
private:
	std::string edge_a; /*Current edge*/
	std::string edge_b; /*adjacent edge*/
	unsigned long weight; /*Weight associated with an edge*/
protected:
public:
	friend class Graph;/*Friended to give access*/

	/*Argument constructor to set the new information about the edge*/
	Edge(std::string a = "", std::string b = "", unsigned long w = 0) {
		edge_a = a;
		edge_b = b;
		weight = w;
	}
	~Edge() {}
};
#endif //!EDGE_HPP