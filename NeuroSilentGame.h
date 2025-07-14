#pragma once
#include "../Engine/GameEngine.h"
#include <iostream>

class NeuroSilentGame {
    GameEngine* engine;
    int health = 100;
    int sanity = 100;

public:
    NeuroSilentGame(GameEngine* eng) : engine(eng) {}

    void Run() {
        std::cout << "\n🌫️ Welcome to Lagos (Scene 1)" << std::endl;
        std::cout << "🔥 The city burns behind you..." << std::endl;
        std::cout << "👣 You step into the fog." << std::endl;

        NextScene();
    }

    void NextScene() {
        std::cout << "\n➡️ Transitioning to Highway..." << std::endl;
        std::cout << "🚗 You're driving... The fog grows stronger." << std::endl;
        sanity -= 30;
        ShowStatus();

        std::cout << "\n🕯️ Entering Ibadan – the Nightmare Zone." << std::endl;
        health -= 20;
        sanity -= 40;
        ShowStatus();

        if (health <= 0 || sanity <= 0) {
            std::cout << "\n💀 You collapsed in the fog. GAME OVER." << std::endl;
        } else {
            std::cout << "\n🏆 You reached the final billboard: “FORGIVE YOURSELF.”" << std::endl;
            std::cout << "🎬 ENDING UNLOCKED." << std::endl;
        }
    }

    void ShowStatus() {
        std::cout << "\n❤️ Health: " << health << "   🧠 Sanity: " << sanity << std::endl;
    }
};
