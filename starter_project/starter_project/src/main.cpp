#include <iostream>
#include <string>

enum rps_e {
	r,p,s,f
};

int main() {
	
	std::cout << "Hello World?" << std::endl;
	std::cout << "" << std::endl;
	std::cout << "This is a game of rock papper Scissors" << std::endl;
	std::cout << "r = Rock, p = Papper, s = Scissors, x to enter" << std::endl;

	bool doloop = true;
	while (doloop){
		std::string rps;
		std::getline(std::cin, rps);
		int rps_i = f;
		int rand_n = rand() % 3;
		if (rps == "r"){
			rps_i = r;
		}
		if (rps == "p"){
			rps_i = p;
		}
		if (rps == "s") {
			rps_i = s;
		}
		if (rps == "x") {
			doloop = false;
			break;
		}
		if (rps_i != f) {

			if (rand_n == rps_i) {
				std::cout << "it's a tie" << std::endl;
			}
			else if (rps_i == s ) {
				if (rand_n == p){
					std::cout << "You Win, thay went Papper" << std::endl;
				}
				else {
					std::cout << "You loos, thay went Rock" << std::endl;
				}
			}
			else if (rps_i == r) {
				if (rand_n == s) {
					std::cout << "You Win, thay went Scissors" << std::endl;
				}
				else {
					std::cout << "You loos, thay went Papper" << std::endl;
				}
			}
			else if (rps_i == p) {
				if (rand_n == r) {
					std::cout << "You loos, thay went Rock" << std::endl;
				}
				else {
					std::cout << "You Win, thay went Scissors" << std::endl;
				}
			}
		}
		else{
			std::cout << "invalid input" << std::endl;
		}
	}
}
