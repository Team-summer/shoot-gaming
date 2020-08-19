#include "AbstractEnemy.h"

using namespace std;

AbstractEnemy::AbstractEnemy(int hp, int pattern, double x, double y, string img_path) :
	_max_hp(hp),
	_hp(hp),
	_pattern(pattern),
	_x(x),
	_y(y),
	_cnt(0),
	_flag(live),
	_img(img_path)
{
}

bool AbstractEnemy::update()
{
	if (_hp <= 0) {
		return false;
	}

	_cnt++;
	_x += cos(_ang) * _sp;
	_y += sin(_ang) * _sp;

	return true;
}