#pragma once
#include <iostream>
#include <string>

class GameEngine {
public:
    void Init(const std::string& title) {
        std::cout << "🚨 Loading " << title << "..." << std::endl;
    }

    void Shutdown() {
        std::cout << "\n🔚 Shutting down Neuroforge Engine." << std::endl;
    }
};
