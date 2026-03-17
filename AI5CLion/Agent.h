//
// Created by sr0005 on 3/11/2026.
//

#include<vector>
#include<string>

#ifndef AI5CLION_AGENT_H
#define AI5CLION_AGENT_H


class Agent {
public:
    std::vector<std::vector<int>> nuerons;
    std::string runNet(std::vector<std::vector<int>>);
    int test();
    std::string useNet(void);
    std::vector<std::vector<int>> genNet();
    std::vector<std::vector<int>> MutateNet();

};


#endif //AI5CLION_AGENT_H