
//#include "GameManager.h"
//#include "Character.h"
//#include "Enemy.h"

#include "Image.h"
#include "Common.h"

class GameManager
{
	Player Sword;
	Player Arrow;
	Enemy Slime;

	//GameManager(Enemy enemy, Player player) : currentEnemy(enemy), userPlayer(player) {}
	GameManager()
		: Sword(10, 10, 11, 100, "기 사", SwordIdle),
		Arrow(10, 10, 11, 100, "기 사", ArrowIdle),
		Slime(40, 10, 6, 50, "슬라임", SlimeIdle) {}
};

class CharacterAll
{
public:
	int posX;
	int posY;
	int attack;
	int hp;
	string name;
	char Image[UNIT_HEIGHT][UNIT_WIDTH + 1];

	CharacterAll(int posX, int posY, int attack, int hp, string name, char Image[UNIT_HEIGHT][UNIT_WIDTH + 1]) :
		posX(posX), posY(posY), attack(attack), hp(hp), name(name)
	{
		for (int y = 0;y < UNIT_HEIGHT;y++)
		{
			for (int x = 0;x < UNIT_WIDTH;x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}

	}

	void ChangeImage()
	{
		for (int y = 0; y < UNIT_HEIGHT; y++)
		{
			for (int x = 0; x < UNIT_WIDTH;x++)
			{
				this->Image[y][x] = Image[y][x];
			}
		}
	}

	void ShowImage(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
	{
		for (int y = 0; y < UNIT_HEIGHT;y++)
		{
			for (int x = 0; x < UNIT_WIDTH; x++)
			{
				GoToXY(posX + x, posY + y);
				cout << Image[y][x];
			}
			cout << endl;
		}

	}

	void SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
	{
		ChangeImage();
		ShowImage(Image);
	}

};

class Player : public CharacterAll
{
public:
	Player(int posX, int posY, int attack, int hp, string name, char Image[UNIT_HEIGHT][UNIT_WIDTH + 1]) :
		CharacterAll(posX, posY, attack, hp, name, Image) {
	}

	void ChangeImage()
	{
		CharacterAll::ChangeImage();
	}
	void ShowImage(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
	{
		CharacterAll::ShowImage(Image);
	}

	void SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
	{
		CharacterAll::SetBattle(Image);
	}
};

class Enemy : public CharacterAll
{
public:
	Enemy(int posX, int posY, int attack, int hp, string name, char Image[UNIT_HEIGHT][UNIT_WIDTH + 1]) :
		CharacterAll(posX, posY, attack, hp, name, Image) {
	}

	void MoveToPoint(CharacterAll& player, CharacterAll& slime);

	void ChangeImage()
	{
		CharacterAll::ChangeImage();
	}

	void ShowImage(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1])
	{
		CharacterAll::ShowImage(Image);
	}

	void SetBattle(char Image[UNIT_HEIGHT][UNIT_WIDTH + 1], CharacterAll& player, CharacterAll& slime);

	void IsBattle(CharacterAll& player, CharacterAll& slime);






};

int main()
{
	//GameManager().GameStart();
	//return 0;

	
	
	while (true)
	{
	}
}