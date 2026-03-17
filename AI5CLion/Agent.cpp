//
// Created by sr0005 on 3/11/2026.
//

#include "Agent.h"
#include <vector>
#include <string>
#include "rand.h"


Rand random = Rand();
std::string Agent::runNet(int*){ // Runs the net and returns 3 values for what it thinks the shape is while taking an input of a list 1D coords
    std::string scores;
    return scores;
}


int Agent::test(void){ // Runs the network and returns the score
    return 0;
}

std::string Agent::useNet(void){ // Runs the net and returns what it thinks the shape was
    return "null";
}
std::vector<std::vector<int>> Agent::genNet() {
    std::vector<std::vector<int>> net = {{0}};
    for (int i = 0; i < 64; i++) {
        net[0].push_back(0);

    }
    for (int i = 0; i < random.genNum(12); i++) {
        std::vector<int> row;
        for (int j = 0; j <random.genNum(128); j++) {
            row.push_back(random.genNum(net[i].size()));
        }
        net.push_back(row);
    }
    return net;
}

std::vector<std::vector<int> > Agent::MutateNet() {

    return{{0}} ;
}



