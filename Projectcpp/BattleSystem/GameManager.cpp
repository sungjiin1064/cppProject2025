#include "GameManager.h"

void GameManager::GameLoop()
{
	while (true)
	{
		Animation();
		Battle();		
	}
}

void GameManager::Battle()
{
	// ���� UI ���
	GoToXY(50, 5);
	cout << "�÷��̾��� ����";
	GoToXY(50, 6);
	cout << "�÷��̾��� ü�� : "<< player.HP;
	GoToXY(50, 7);
	cout << "�÷��̾��� ���ݷ� : " << player.ATK;
	GoToXY(50, 8);
	cout << "�÷��̾��� ���� : " << player.DEF;

	GoToXY(80, 5);
	cout << "������ ����";
	GoToXY(80, 6);
	cout << "������ ü�� : " << currentEnemy.HP;
	GoToXY(80, 7);
	cout << "������ ���ݷ� : " << currentEnemy.ATK;
	GoToXY(80, 8);
	cout << "������ ���� : " << currentEnemy.DEF;


	// �÷��̾��� ���� ���

	// �÷��̾� ���� ���� �״��� ���� ������ ����
	if (currentTurnState == PLAYERTUEN)
	{
		PlayerTurn();
	}
	else if (currentTurnState == ENEMYTURN)
	{
		EnemyTurn();
	}
	else if (currentTurnState == GAMECLEAR)
	{
		// GameClear �����ζ� ����
	}
	else if (currentTurnState == GAMEEND)
	{
		// GameEnd �����ζ� ����
	}

}

void GameManager::Animation()
{
	system("cls");
	player.SetBattleImage(PlayerIdle);
	currentEnemy.SetBattleImage(SlimeIdle);
	Sleep(500);
	system("cls");
	player.SetBattleImage(PlayerMove);
	currentEnemy.SetBattleImage(SlimeMove);
	Sleep(500);
}

void GameManager::PlayerTurn()
{
	//GoToXY(0, 15);
	cout << "���� �÷��̾��� ���Դϴ�" <<  endl;
	cout << "1. �����Ѵ�.  2. ����Ѵ�.  3. �������� ����Ѵ�" <<  endl;

	int input = 0;
	cin >> input;
	switch(input)
	{
		case 1: currentEnemy.Attacked(player.ATK); break;
		case 2:player.Defence(); break;
		case 3:player.UseItem(10); break;
		default: break;		
	}
	currentTurnState = ENEMYTURN;
}


void GameManager::EnemyTurn()
{
	cout << "���� ������ ���Դϴ�" << endl;

	player.Attacked(currentEnemy.ATK);

	cout << "Ű�� �Է��ϸ� �÷��̾��� ���� ����˴ϴ�." << endl;
	_getch();

	currentTurnState = PLAYERTUEN;
}
