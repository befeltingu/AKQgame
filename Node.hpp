//
// Created by David SeWell on 1/24/18.
//

#ifndef MCTS_NODE_HPP
#define MCTS_NODE_HPP


#include <string>
#include <vector>


class Node {

    private:

        std::string action;

        std::vector<Node> children;

        bool isLeaf;

        int nodeIndex;

        std::string player;

        float p1CIP;

        float p2CIP;

        int visitCount;

    public:

        Node(std::string player,std::string action, int nodeIndex, bool isLeaf,
             float p1CIP, float p2CIP);
};


#endif //MCTS_NODE_HPP
