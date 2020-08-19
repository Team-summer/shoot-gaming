#pragma once

#include "Task.h"
#include <string>

class AbstractEnemy : public Task
{
	enum eE_Flag {
		live,
		death,
	};

public:
	AbstractEnemy(int hp, int _pattern, double x, double y, std::string img_path);
	virtual ~AbstractEnemy() = default;
	virtual void init() = 0;
	bool update();
	virtual void draw() const = 0;

private:
		//�t���O
	int	_flag,

		//�J�E���g
		_cnt,
		
		//�ړ��p�^�[��
		_pattern,

		//�q�b�g�|�C���g
		_hp,

		//�ő�q�b�g�|�C���g
		_max_hp,

		//��؎���
		_wait,

		//��
		_width,
		//����
		_heigh;

		//�摜�t�@�C���̃p�X
	std::string _img;

		//���W
	double _x, _y,
		
		//�X�s�[�h
		_sp,

		//�p�x
		_ang;


	/*�e���֘A*/

		//�e�̎��
	int _bltype,

		//�F
		_color;
};