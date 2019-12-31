/*
	Author:		Mihir Patel
	Purpose:	Following is a header file for the Graph. It relies on Edge.hpp and Vertex.hpp.
				It uses a greedy method of Dikjstra algo to give shortest path between start and end
				vertex. Furthermore, it is implemented with Adjancency List to keep graph intact.
*/
#ifndef GRAPH_HPP
#define GRAPH_HPP

#include "GraphBase.hpp"
#include "Edge.hpp"
#include "Vertex.hpp"
#include <iterator>
#include <queue>
#include <limits>
#include <vector>
#include <deque>
#include <algorithm>

class Graph : public GraphBase {
private:
	std::deque<Vertex*> vertexes; /*List to keep vertexes and their distances*/
	std::deque<Edge*> edges; /*List to keep edges and their weight*/
	unsigned long shortest_distance = 0; /*holds the shortest distance after each node visit*/
	int minimum_vertex_idx = 0; /*gets the node index with minimum distances*/
	std::string minimum_element = ""; /*Gets the minimum element at that node*/
	/*Priority queue to store wighted vertxes by distance from starting ndoe in  ascneding manner*/
	std::priority_queue<std::pair<unsigned long, std::string>,
					std::vector<std::pair<unsigned long, std::string>>,
					std::greater<std::pair<unsigned long, std::string>>> list_of_paths;

protected:
	/*Utility functions (more explanation on .cpp)*/
	void check_single_str(std::string input_str); /*Checks single string input*/
	void check_two_str(std::string input_str1, std::string input_str2); /*Checks two string inputs*/
	void path_start(std::string startLabel); /*Starts the path at A*/
	void construct_path(std::string startLabel);/*Make the path using the priority queue*/
	void find_minimum_vertex_idx(std::string& minimum_element); /*Get the minimum index for a vertex*/
	void get_minimum_distance(std::string startLabel); /*put distances in the string*/
	void lay_path(std::string endLabel, std::vector<std::string>& path); /* make a path from A to B*/
	void path_reset(); /*begin a fresh path*/

public:
	Graph() {} /*Default*/
	~Graph(); /*Explicity defined to dismantle the graph*/
	/*Assignment related functions*/
	void addVertex(std::string label);
	void removeVertex(std::string label);
	void addEdge(std::string label1, std::string label2, unsigned long weight);
	void removeEdge(std::string label1, std::string label2);
	unsigned long shortestPath(std::string startLabel, std::string endLabel, std::vector<std::string> &path);
};
#endif // !GRAPH_HPP