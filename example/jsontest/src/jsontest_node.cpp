#include <iostream>
#include <json/json.h>
#include <fstream>

int main() {
     Json::Value root;
     std::ifstream file("test.json");
     file >> root;
     std::cout << root;
}
