#include "bintree.h"
#include <typeinfo>
#include <vector>
#include <numeric>
#include <iostream>
#include <random>
#include <algorithm>
#include <sstream>
#include <iomanip>
int main(){

std::vector<int> v(9000);
std::iota(std::begin(v), std::end(v), 1); // Fill with 1,2, ..., 9999.

/*for(auto i = v.begin(); i != v.end(); ++i) {
    std::cout << *i << ' ';}*/

std::mt19937 rng(2638);
std::shuffle(std::begin(v), std::end(v), rng);

std::vector<int> maxResults(800);
std::vector<int> minResults(800);


for (auto i = 0; i < 800;i++){
    Node* root = nullptr;
    for (auto j = 0; j < 9000;j++){
        insert(root,v[j],v[j]);
    }
    maxResults[i] = max_height(root);
    minResults[i] = min_height(root);
    delete_tree(root);
    // std::shuffle(std::begin(v), std::end(v), rng);           // RNG shuffle
    std::next_permutation(std::begin(v), std::end(v));        // Permutation shuffle
}

// Average hight

// two decimal points
std::ostringstream strs;
strs << std::fixed << std::setprecision(2) << std::accumulate(maxResults.begin(), maxResults.end(), 0.0) / maxResults.size();
std::string aveHeight = strs.str();
std::cout << "Average height: " << aveHeight << std::endl;

// max height
float maxHeight = *std::max_element(maxResults.begin(), maxResults.end());
std::cout << "Max height: " << maxHeight << std::endl;

// ave min height
strs.str("");
strs << std::fixed << std::setprecision(2) << std::accumulate(minResults.begin(), minResults.end(), 0.0) / minResults.size();
aveHeight = strs.str();
std::cout << "Average min height: " << aveHeight << std::endl;

// lowest minimum height
strs.str("");
strs << std::fixed << std::setprecision(2)<< *std::min_element(minResults.begin(), minResults.end());
aveHeight = strs.str();
std::cout << "Lowest minimum height: " << aveHeight << std::endl;

//Average difference between max and min height
std::vector<float> diffResults(800);
for (auto i = 0; i < 800;i++){
    diffResults[i] = maxResults[i] - minResults[i];
}
strs.str("");
strs << std::fixed << std::setprecision(2) << std::accumulate(diffResults.begin(), diffResults.end(), 0.0) / diffResults.size();
aveHeight = strs.str();
std::cout << "Average difference between max and min height: " << aveHeight << std::endl;

// Greatest difference between max and min height
strs.str("");
strs << std::fixed << std::setprecision(2)<< *std::max_element(diffResults.begin(), diffResults.end());
aveHeight = strs.str();
std::cout << "Greatest difference between max and min height: " << aveHeight << std::endl;

// Lowest difference between max and min height
strs.str("");
strs << std::fixed << std::setprecision(2)<< *std::min_element(diffResults.begin(), diffResults.end());
aveHeight = strs.str();
std::cout << "Lowest difference between max and min height: " << aveHeight << std::endl;

// print maxResults

    return 0;
}