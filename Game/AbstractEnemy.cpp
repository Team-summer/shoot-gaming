#include "AbstractEnemy.h"

using namespace std;

AbstractEnemy::AbstractEnemy(double x, double y, int hp, string img_path) : 
	_x(x),
	_y(y),
	_cnt(0),
	_flag(live),
	_max_hp(hp),
	_hp(hp),
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