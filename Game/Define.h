#pragma once

#include <string>


class Define final {
public:
	const static int WIN_W;	//�E�B���h�E�T�C�Y��
	const static int WIN_H;	//�E�B���h�E�T�C�Y�c

	const static float PI;	//�~����

	enum eCharaData
	{
		id,
		job,
		rank,
		name,
		type,
		hp,
		atk,
		def,
		mat,
		mdf,
		agl,
		luk,
		skill1,
		skill2,
		skill3,
		passive_skill,


		CharaDataNum
	};

	enum eSavePlayerData
	{
		p_id,
		play_time,
		prev_login,
		prev_logout,
		p_lv,
		ex,
		money,
		possess_item_num,
		possess_chara_num,
		max_itembox,		//�����l180 ��񂠂���10 ��������


		SavePlayerDataNum
	};

	enum eSaveClearStageData
	{
		p_clear_MainStage, //���C���X�e�[�W�̃N���A��


		SaveClearStageDataNum
	};

	enum eSavePossessionsData
	{
		p_charalist,
		p_itemlist,


		SavePossessionsDataNum
	};

	//Title���
	const static int START_X;
	const static int START_Y;
	const static int END_X;
	const static int END_Y;
	const static int UNPOPULATED_X;
	const static int UNPOPULATED_Y;

	enum eTitleSelect {
		Start,
		End,
		Umpopulated,

		TitleNum,
	};

	enum  eSetCharacterSelect {
		C1,
		C2,
		C3,
		C4,

		SetCharaNum
	};


	//��Փx
	enum eLevel {
		Easy,
		Normal,
		LevelNum
	};

	//�U��
	enum eAtFlag {
		Atk,
		Mat,
		TrueDamge
	};

	//�o�g��
	enum eBttle {
		N_Battle,
		Ex_Battle,
		Boss_Battle
	};

	enum eFeldType {
		Normal_Type,
		Fire_Type,
		Water_Type,
		Wind_Type,

	};

	enum  eCharacter {
		Warrior,
		Archer,
		Witch,
		Healer,
	};

	enum eSaveData {
		//Player�f�[�^
		PlayerData,

		//�N���A�X�e�[�W�f�[�^
		ClearStage,

		//�����L�������X�g
		CharaList,

		//�����A�C�e�����X�g
		ItemList,


	};

	enum eCharaJob {
		defender,
		attacker,
		healer,
		supporter,
	};

	enum  eEnemyJob {
		e_defender,
		e_attacker,
		e_healer,
		e_supporter,

		boss_physical,
		boss_magic,
	};

	enum eDamageTarget {
		single,
		all,
		front_all,
		rear_all,
	};

	enum eDamageType {
		penetration,
		physical,
		magic,
	};

	enum eCharaPosition {
		front_right,
		front_middle,
		front_left,
		rear_right,
		rear_middle,
		rear_left,
	};

	enum eMapType {
		wall,
		road,
		start,
		goal,

		eMapTypeNum
	};

	//�t���[��
	const static int FRAME;

	//�U���␳
	const static int ENEMY_ATTACK;
	const static int PLAYER_ATTACK;

	//�h��␳
	const static int ENEMY_DEFENSE;
	const static int PLAYER_DEFENSE;

	//�퓬���̏o����
	const static int ENEMY_NUM;

	//�L�����̐�
	const static int PLAYER_NUM;

	//�t�@�C��
	const static std::string CHARA;
};