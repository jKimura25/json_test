#include <iostream>
#include "config.h"
#include "includes/json.hpp"

using json = nlohmann::json;
int main(int argc, char **argv) {
	json jWorld;
	jWorld["message"] = "haiii :3";
	std::cout << jWorld["message"] << std::endl;
	return 0;
}
