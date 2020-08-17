#pragma once

#include <string>


class Define final {
public:
	const static int WIN_W;	//ウィンドウサイズ横
	const static int WIN_H;	//ウィンドウサイズ縦

	const static float PI;	//円周率

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
		max_itembox,		//初期値180 一回あたり10 上限解放回数


		SavePlayerDataNum
	};

	enum eSaveClearStageData
	{
		p_clear_MainStage, //メインステージのクリア状況


		SaveClearStageDataNum
	};

	enum eSavePossessionsData
	{
		p_charalist,
		p_itemlist,


		SavePossessionsDataNum
	};

	//Title画面
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


	//難易度
	enum eLevel {
		Easy,
		Normal,
		LevelNum
	};

	//攻撃
	enum eAtFlag {
		Atk,
		Mat,
		TrueDamge
	};

	//バトル
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
		//Playerデータ
		PlayerData,

		//クリアステージデータ
		ClearStage,

		//所持キャラリスト
		CharaList,

		//所持アイテムリスト
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

	//フレーム
	const static int FRAME;

	//攻撃補正
	const static int ENEMY_ATTACK;
	const static int PLAYER_ATTACK;

	//防御補正
	const static int ENEMY_DEFENSE;
	const static int PLAYER_DEFENSE;

	//戦闘時の出現数
	const static int ENEMY_NUM;

	//キャラの数
	const static int PLAYER_NUM;

	//ファイル
	const static std::string CHARA;
};