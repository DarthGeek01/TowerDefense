//
// Created by ariel on 11/8/16.
//

#ifndef TOWERDEFENSE_MONSTERMAN_H
#define TOWERDEFENSE_MONSTERMAN_H

#include <SFML/Graphics.hpp>
#include <vector>
#include "UI/UIManager.h"
#include "Monster/Monster.h"
#include "State/StateManager.h"

using std::vector;

namespace Monsters {
    class MonsterMan {
    public:
        MonsterMan(sf::RenderWindow &window, UIManager &uiManager, StateManager &stateManager);

		Monster *getMonsterInRange(const sf::Vector2f &point, double range);

        void update();

        void render();

        void createMonster();

		void cleanUpMonsters();

    private:
        vector<Monster *> _monsters;

        sf::Clock _spawnClock;
        sf::RenderWindow &_window;
		UIManager &_uiManager;
		StateManager &_stateManager;
		float _time_to_next_spawn;
		int _difficulty_curve;
    };
}

#endif //TOWERDEFENSE_MONSTERMAN_H
