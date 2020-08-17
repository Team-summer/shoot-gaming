#include <DxLib.h>
#include "AbstractPlayer.h"
#include "Keyboard.h"

const static double SPEED = 9.0;

AbstractPlayer::AbstractPlayer(double x, double y, int life, std::string img_path) :
	_x(x),
	_y(y),
	_lives(life),
	_img(img_path)
{
}

bool AbstractPlayer::update()
{
	if(!_lives) return false;

	double X = 0, Y = 0;
	if (Keyboard::getIns()->getPressingCount(KEY_INPUT_LEFT))
	{
		X += SPEED;
	}
	if (Keyboard::getIns()->getPressingCount(KEY_INPUT_RIGHT))
	{
		X -= SPEED;
	}
	if (Keyboard::getIns()->getPressingCount(KEY_INPUT_UP))
	{
		Y -= SPEED;
	}
	if (Keyboard::getIns()->getPressingCount(KEY_INPUT_DOWN))
	{
		Y += SPEED;
	}
	//ŽÎ‚ßˆÚ“®
	if (X && Y) {
		X /= (double)sqrt(2.0);
		Y /= (double)sqrt(2.0);
	}

	if (Keyboard::getIns()->getPressingCount(KEY_INPUT_LCONTROL))
	{
		X /= 3.0;
		Y /= 3.0;
	}

	_x += X;
	_y += Y;

	return true;
}