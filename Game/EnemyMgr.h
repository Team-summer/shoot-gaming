#pragma once

#include "Task.h"
#include "AbstractEnemy.h"
#include <string>
#include <vector>
#include <queue>

struct E_info
{
	int type,
		appear_time,
		pattern,
		hp;
	double x, y;

	/*	
		ストラクトのメンバに順次アクセスする方法が
		思いつかなかったので…
	*/
	E_info(std::vector<int> v) {
		type = v.at(0);
		appear_time = v.at(1);
		pattern = v.at(2);
		hp = v.at(3);
		x = double(v.at(4));
		y = double(v.at(5));
	}
};

class EnemyMgr : public Task
{
public:
	EnemyMgr(std::string stage_file);
	virtual ~EnemyMgr() = default;
	void init() = 0;
	bool update() = 0;
	void draw() const = 0;

private:
	std::queue<E_info> _stage;
	std::vector<AbstractEnemy> _enemy;

	void Load(std::string fname);
};