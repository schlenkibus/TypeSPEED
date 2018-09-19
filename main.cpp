#include <iostream>
#include <chrono>

struct GameData {
	int sumWords = 0;
	int completeWords = 0;
	int characters = 0;
	float wordsPerMinute = 0.0;
	bool shouldRestartGameRound = true;
}

std::string getRandomWord(int seed) {
	return seed;
}

int main(int argc, char** argv) {
	std::unique_ptr<std:thread<void(void)>> gameRound;
	std::string readLine;
	std::cout << "Press Any Key to start 60sec Game!\n";
	std::cin >> readLine;
	
	auto start = std::chrono::high_precision_clock::now();

	while(start + std::chrono::seconds > std::chrono::high_precision_clock::now()) {
		if(gameRound == nullptr) {
			gameRound = std::make_unique<std::thread<void(void)>>([&](){
				std::string readLine;
				auto correctWord = getRandomWord(data.completeWords);
				std::cin >> readLine;
				
				if(correctWord == readLine) {
					data.characters += correctWord.length();
					data.correctWords++;
				} else {
					
					data.characters += 
				}
			});
		} else if(data.shouldRestartGameRound) {
			gameRound = nullptr;
		}
	}
}
