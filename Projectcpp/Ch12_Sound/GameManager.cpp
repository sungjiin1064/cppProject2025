#include "GameManager.h"

void GameManager::ShowTitle()
{

}

void GameManager::ShopPhase()
{

}

void GameManager::GamePhase()
{

}

void GameManager::Play()
{
	ShowTitle();

	while (true)
	{
		ShopPhase();
		GamePhase();
	}
}
