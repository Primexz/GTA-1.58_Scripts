#region Local Var
	char* sLocal_0 = NULL;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	int iLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	struct<3> Local_22 = { 0, 0, 0 } ;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	struct<2> Local_76 = { 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	var uLocal_84 = 0;
	int iLocal_85[2] = { 0, 0 };
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91[65] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_157 = { 0, 0 } ;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 15;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	struct<2> Local_189 = { 0, 0 } ;
	struct<2> Local_191 = { 0, 0 } ;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	var uLocal_201[1] = { 0 };
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	sLocal_0 = "1.56.14";
	iLocal_26 = -1;
	iLocal_27 = -1;
	iLocal_75 = -1;
	iLocal_79 = -1;
	iLocal_160 = 1;
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (iScriptParam_0 == iScriptParam_0)
	{
	}
	Global_1577977 = MISC::GET_HASH_KEY(sLocal_0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	while (true)
	{
		if (func_319())
		{
			func_317();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723433.f_3)
		{
			func_316();
			func_315();
			func_312();
			func_310();
			func_309();
			func_303();
			func_302();
			func_298();
			func_288();
			func_284();
			func_272();
			func_269();
			func_267();
			func_265();
			func_264();
			func_259();
			func_258();
			func_257();
			func_237();
			func_236();
			func_230();
			func_211();
			func_210();
			func_203();
			func_201();
			func_200();
			func_195();
			func_192();
			func_186();
			func_183();
			func_181();
			func_178();
			func_166();
			func_165();
			func_164();
			func_161();
			func_159();
			func_142();
			func_139();
			func_136();
			func_135();
			func_132();
			func_130();
			func_123();
			func_122();
			func_121();
			func_107();
			func_105();
			func_97();
			func_79();
			func_75();
			func_73();
			func_72();
			func_71();
			func_70();
			func_66();
			func_62();
			func_61();
			func_46();
		}
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			func_41();
			func_40();
			func_39();
			func_36();
			func_35();
			func_33();
			func_30();
			func_24();
			func_23();
			func_21();
			func_19();
		}
		func_12();
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_1()
{
	int iVar0;
	
	if (!iLocal_203)
	{
		if (func_3())
		{
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13) && func_2(Global_794709.f_177589[iVar0 /*13*/].f_1))
				{
					Global_794709.f_4[iVar0 /*88*/].f_70 = 1;
				}
				iVar0++;
			}
			iLocal_203 = 1;
		}
	}
}

int func_2(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_262145.f_31350[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_3()
{
	return Global_2723433.f_6;
}

void func_4()
{
	if (func_5())
	{
		if (!iLocal_199)
		{
			NETWORK::NETWORK_SUPPRESS_INVITE(true);
			iLocal_199 = 1;
		}
	}
	else if (iLocal_199)
	{
		NETWORK::NETWORK_SUPPRESS_INVITE(false);
		iLocal_199 = 0;
	}
}

int func_5()
{
	if (((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_10()) || func_9()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_6(PLAYER::PLAYER_ID()) && Global_1946928 != 7)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0)
{
	if (iParam0 != func_8() && func_7(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_7(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2703656.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_8()
{
	return -1;
}

bool func_9()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

int func_10()
{
	if (func_11() == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()
{
	return Global_1574629.f_18;
}

void func_12()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_18()) && !func_9())
	{
		switch (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_6)
		{
			case 155:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 372,7166f, -61,5635f, 106,1633f, 374,0844f, -62,0511f, 108,5383f, 1,4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 374,8303f, -60,0519f, 106,1633f, 373,443f, -59,5593f, 108,5383f, 1,25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 156:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027,933f, -436,7131f, 66,6614f, -1026,643f, -436,0464f, 69,0364f, 1,4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1027,595f, -434,1366f, 66,6614f, -1028,902f, -434,8141f, 69,0364f, 1,25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 157:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -578,381f, -711,6314f, 115,8054f, -579,8333f, -711,6372f, 118,1804f, 1,4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -579,856f, -713,7709f, 115,8054f, -578,3839f, -713,7631f, 118,1804f, 1,25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			
			case 158:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -998,9874f, -770,6858f, 64,6945f, -998,9971f, -769,2336f, 67,0695f, 1,4375f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1001,131f, -769,2165f, 64,6945f, -1001,119f, -770,6886f, 67,0695f, 1,25f, false, true, 0))
				{
					iVar0 = 1;
				}
				break;
			}
	}
	if (iVar0 && func_17())
	{
		if (func_16("BUNK_PC_BLCK2"))
		{
			func_15("FHQ_PC_BLCK", 1000);
		}
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (Global_43328[iVar1 /*32*/])
			{
				if (MISC::GET_HASH_KEY(&(Global_43328[iVar1 /*32*/].f_8)) == 1654027762)
				{
					StringCopy(&(Global_43328[iVar1 /*32*/].f_8), "FHQ_PC_BLCK", 16);
				}
			}
			iVar1++;
		}
	}
	else if (((((((((iVar0 && (Global_2714627.f_744 || uLocal_84)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && CAM::IS_SCREEN_FADED_IN()) && !func_14()) && HUD::GET_PAUSE_MENU_STATE() == 0) && func_10()) && !func_13()) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!iLocal_83)
		{
			uLocal_84 = Global_2714627.f_744;
			Global_2714627.f_744 = 0;
			iLocal_83 = 1;
		}
	}
	else if (iLocal_83)
	{
		Global_2714627.f_744 = uLocal_84;
		iLocal_83 = 0;
	}
}

bool func_13()
{
	return Global_2714627.f_691;
}

bool func_14()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6135 + 100;
}

void func_15(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
}

bool func_16(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_17()
{
	return Global_1575005 == 10;
}

bool func_18()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

void func_19()
{
	bool bVar0;
	int iVar1;
	
	if (Global_262145.f_4993[7] != Global_4718592.f_86750)
	{
		return;
	}
	iVar1 = 13;
	if (func_20(Global_4980736.f_88118[iVar1 /*926*/].f_81, Global_4980736.f_88118[iVar1 /*926*/].f_80, Global_4980736.f_88118[iVar1 /*926*/].f_79, 0, Global_4980736.f_88118[iVar1 /*926*/].f_131, Global_4980736.f_88118[iVar1 /*926*/].f_132))
	{
		bVar0 = true;
	}
	if (Global_4980736.f_88118[iVar1 /*926*/].f_471 > -1 && Global_4980736.f_88118[iVar1 /*926*/].f_468 > -1)
	{
		if (func_20(Global_4980736.f_88118[iVar1 /*926*/].f_474, Global_4980736.f_88118[iVar1 /*926*/].f_468, Global_4980736.f_88118[iVar1 /*926*/].f_471, 0, Global_4980736.f_88118[iVar1 /*926*/].f_480, Global_4980736.f_88118[iVar1 /*926*/].f_483))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88118[iVar1 /*926*/].f_472 > -1 && Global_4980736.f_88118[iVar1 /*926*/].f_469 > -1)
	{
		if (func_20(Global_4980736.f_88118[iVar1 /*926*/].f_475, Global_4980736.f_88118[iVar1 /*926*/].f_469, Global_4980736.f_88118[iVar1 /*926*/].f_472, 0, Global_4980736.f_88118[iVar1 /*926*/].f_481, Global_4980736.f_88118[iVar1 /*926*/].f_484))
		{
			bVar0 = true;
		}
	}
	if (Global_4980736.f_88118[iVar1 /*926*/].f_473 > -1 && Global_4980736.f_88118[iVar1 /*926*/].f_470 > -1)
	{
		if (func_20(Global_4980736.f_88118[iVar1 /*926*/].f_476, Global_4980736.f_88118[iVar1 /*926*/].f_470, Global_4980736.f_88118[iVar1 /*926*/].f_473, 0, Global_4980736.f_88118[iVar1 /*926*/].f_482, Global_4980736.f_88118[iVar1 /*926*/].f_485))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Global_4980736.f_88118[iVar1 /*926*/].f_79 = 0;
		Global_4980736.f_88118[iVar1 /*926*/].f_471 = 0;
		Global_4980736.f_88118[iVar1 /*926*/].f_472 = 0;
		Global_4980736.f_88118[iVar1 /*926*/].f_473 = 0;
	}
}

int func_20(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			if (iParam2 <= Global_1058064.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (!bParam3 && iParam2 == Global_1058064.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (iParam2 == Global_1058064.f_14[iParam1])
			{
				iVar0 = 1;
			}
			else if (iParam2 < Global_1058064.f_14[iParam1])
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (((Global_2714627.f_17 || Global_2714627.f_18) || Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_119 == 7) || Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
			{
				if (MISC::IS_BIT_SET(Global_1058064.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			else if (iParam2 <= Global_1058064.f_14[iParam1])
			{
				if (MISC::IS_BIT_SET(Global_1058064.f_2, (24 + iParam1)))
				{
					iVar0 = 1;
				}
			}
			break;
		
		case 9:
			if (Global_1058064.f_104[iParam1] >= iParam4 && iParam2 <= Global_1058064.f_14[iParam1])
			{
				iVar0 = 1;
			}
			if (iParam1 > -1)
			{
				if ((iParam5 > -1 && Global_1058064.f_14[iParam1] > -1) && iParam5 <= Global_1058064.f_14[iParam1])
				{
					iVar0 = 1;
				}
			}
			break;
	}
	return iVar0;
}

void func_21()
{
	int iVar0;
	var uVar1[64];
	int iVar66;
	struct<3> Var67;
	float fVar70;
	
	if (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_119 == 2)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iVar0 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar1, -1);
			iVar66 = 0;
			while (iVar66 <= iVar0)
			{
				if (iVar66 < 64)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar1[iVar66]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar1[iVar66]) == joaat("ig_rashcosvki"))
						{
							Var67 = { ENTITY::GET_ENTITY_COORDS(uVar1[iVar66], true) };
							if (func_22(Var67, 1707f, 2520f, 45f, 5f, 0))
							{
								if (Var67.f_2 <= 45f)
								{
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar1[iVar66]))
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uVar1[iVar66]);
										fVar70 = 0f;
										MISC::GET_GROUND_Z_FOR_3D_COORD(Var67, &fVar70, false, false);
										Var67.f_2 = fVar70;
										ENTITY::SET_ENTITY_COORDS(uVar1[iVar66], Var67, true, false, false, true);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uVar1[iVar66], false, false);
									}
								}
							}
						}
						else
						{
							iVar66++;
						}
					}

int func_22(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_23()
{
	if (Global_4718592.f_86750 == 380938673 || Global_4718592.f_86750 == 1597839856)
	{
		if (!MISC::IS_BIT_SET(Global_4718592.f_35, 2))
		{
			MISC::SET_BIT(&(Global_4718592.f_35), 2);
		}
	}
}

void func_24()
{
	int iVar0;
	
	if (Global_4718592.f_86750 != Global_262145.f_31350[2])
	{
		iLocal_159 = 0;
		func_29(&Local_157);
		return;
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_159 = 0;
		func_29(&Local_157);
		return;
	}
	iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("FIX_LAMAR", 0);
	if (func_28(iVar0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash")) && !MISC::IS_BIT_SET(iLocal_159, 0))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 0);
			func_27(&Local_157, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash2")) && !MISC::IS_BIT_SET(iLocal_159, 1))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 1);
			func_27(&Local_157, 0, 0);
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("Heist4CameraFlash3")) && !MISC::IS_BIT_SET(iLocal_159, 2))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("Heist4CameraFlash", 0, false);
			GRAPHICS::TOGGLE_PAUSED_RENDERPHASES(false);
			MISC::SET_BIT(&iLocal_159, 2);
			func_27(&Local_157, 0, 0);
		}
		if (func_26(&Local_157) && func_25(Local_157, 1500, 0))
		{
			func_29(&Local_157);
			GRAPHICS::RESET_PAUSED_RENDERPHASES();
			GRAPHICS::ANIMPOSTFX_STOP_ALL();
		}
	}
}

int func_25(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (iParam2 == -1)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam3)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iParam0)) >= iParam2)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), iParam0)) >= iParam2)
	{
		return 1;
	}
	return 0;
}

bool func_26(var uParam0)
{
	return uParam0->f_1;
}

void func_27(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

int func_28(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_29(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_30()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5])
	{
		iLocal_81 = 0;
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128495[0 /*565*/].f_18), 20);
	MISC::CLEAR_BIT(&(Global_4718592.f_128495[0 /*565*/].f_16), 3);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		iLocal_81 = 0;
		return;
	}
	if (Global_1958759 == -1)
	{
		iLocal_81 = 0;
		return;
	}
	iVar0 = (Global_1958759 - func_32());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		return;
	}
	if (iLocal_81)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		if (iVar1 >= Global_1058064.f_94[0])
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(Global_1853128[iVar3 /*888*/].f_36.f_18, 6))
			{
			}
			else if (MISC::IS_BIT_SET(Global_1853128[iVar3 /*888*/].f_36.f_18, 14))
			{
			}
			else if (Global_1853128[iVar3 /*888*/].f_205 == 8)
			{
			}
			else
			{
				if (iVar3 == PLAYER::PLAYER_ID())
				{
					iVar2 = iVar1;
					Jump @271; //curOff = 250
				}
				iVar1++;
			}
			iVar3++;
		}
	}
	if (iVar2 >= 4)
	{
		return;
	}
	Var4 = { Global_4718592.f_128495[iVar0 /*565*/].f_26[iVar2 /*3*/] };
	fVar7 = Global_4718592.f_128495[iVar0 /*565*/].f_66[iVar2];
	if (func_31(Var4))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var4, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar7);
	iLocal_81 = 1;
}

int func_31(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_32()
{
	if (Global_4718592.f_138118 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_33()
{
	if (Global_1977248 || Global_1977247)
	{
		if ((!func_13() && !func_34()) && !func_9())
		{
			Global_1977248 = 0;
			Global_1977247 = 0;
		}
	}
}

bool func_34()
{
	return Global_2714627.f_692;
}

void func_35()
{
	if (Global_4718592.f_86750 != Global_262145.f_31343[5])
	{
		return;
	}
	MISC::SET_BIT(&(Global_4718592.f_128495[2 /*565*/].f_19), 2);
}

void func_36()
{
	if (Global_4718592.f_86750 != Global_262145.f_31343[3] || Global_1574629.f_18 != 0)
	{
		if (iLocal_35)
		{
			Global_1058355 = { 0f, 0f, 0f };
			MISC::CLEAR_BIT(&(Global_1058064.f_280), 17);
			MISC::CLEAR_BIT(&(Global_1058026.f_30), 30);
			MISC::CLEAR_BIT(&(Global_1058026.f_35), 7);
			MISC::CLEAR_BIT(&(Global_1058026.f_31), 6);
		}
		iLocal_35 = 0;
		func_29(&uLocal_33);
		return;
	}
	if (Global_1058064.f_14[0] == 10)
	{
		if (!func_26(&uLocal_33))
		{
			func_38(&uLocal_33, 0, 0);
		}
		else if (func_37(&uLocal_33, 14000, 0))
		{
			if (!iLocal_35)
			{
				MISC::SET_BIT(&(Global_1058064.f_280), 17);
				iLocal_35 = 1;
				Global_4718592.f_112674[2 /*1582*/].f_1529 = 0;
				MISC::CLEAR_BIT(&(Global_4718592.f_112674[2 /*1582*/].f_5), 20);
				MISC::CLEAR_BIT(&(Global_4718592.f_112674[2 /*1582*/].f_5), 28);
				MISC::SET_BIT(&(Global_1058026.f_30), 30);
				MISC::SET_BIT(&(Global_1058026.f_35), 7);
				MISC::SET_BIT(&(Global_1058026.f_31), 6);
				Global_1058355 = { Global_1058352 };
			}
		}
	}
}

int func_37(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_27(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_38(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_39()
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5] || Global_1574629.f_18 != 0)
	{
		iLocal_36 = 0;
		iLocal_37 = 0;
		iLocal_39 = 0;
		iLocal_38 = 0;
		return;
	}
	if (iLocal_37 >= 4)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_39))
	{
		Var0 = { -1003f, -3007,9f, 15,2f };
		iLocal_39 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 3f, joaat("schafter6"), 65602);
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_36, iLocal_38))
	{
		iVar3 = (-1 + iLocal_38);
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_39, iVar3, true);
		if (ENTITY::DOES_ENTITY_EXIST(iVar4) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar4, false);
			ENTITY::SET_ENTITY_DYNAMIC(iVar4, true);
			PED::SET_PED_CONFIG_FLAG(iVar4, 106, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 107, false);
			PED::SET_PED_CONFIG_FLAG(iVar4, 108, false);
			MISC::SET_BIT(&iLocal_36, iLocal_38);
			iLocal_37++;
		}
	}
	iLocal_38++;
	if (iLocal_38 >= (8 - 1))
	{
		iLocal_38 = 0;
	}
}

void func_40()
{
	struct<3> Var0;
	int iVar3;
	
	if (Global_4718592.f_86750 != Global_262145.f_31343[5] || Global_1574629.f_18 != 0)
	{
		iLocal_31 = 0;
		iLocal_32 = 0;
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 30) != 0)
	{
		return;
	}
	Var0 = { -952,13f, -2990,26f, 22,73f };
	iVar3 = 1906226714;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
	{
		iLocal_31 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 2f, joaat("jet"), 16386);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_31))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_31))
	{
		return;
	}
	if (!INTERIOR::IS_VALID_INTERIOR(iLocal_32))
	{
		iLocal_32 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
		return;
	}
	INTERIOR::FORCE_ROOM_FOR_ENTITY(iLocal_31, iLocal_32, iVar3);
}

void func_41()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (Global_1958759 == -1)
	{
		func_45();
		return;
	}
	iVar0 = (Global_1958759 - func_44());
	if (iVar0 <= -1 || iVar0 >= 5)
	{
		func_45();
		return;
	}
	sVar1 = func_43(&(Global_4718592.f_128495[iVar0 /*565*/]));
	if (!MISC::ARE_STRINGS_EQUAL("FIX_BIL_MCS2", sVar1) && !MISC::ARE_STRINGS_EQUAL("FIX_TRIP2_MCS1", sVar1))
	{
		func_45();
		return;
	}
	iLocal_30 = 1;
	if (CUTSCENE::HAS_CUTSCENE_LOADED() && !Global_1058362)
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	Global_1058362 = 1;
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	func_27(&uLocal_28, 0, 0);
	iVar2 = func_42(&uLocal_28, 0, 0);
	iVar3 = CUTSCENE::_0x971D7B15BCDBEF99() + 5000;
	if (iVar2 > iVar3)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		}
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

int func_42(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_43(var uParam0)
{
	return uParam0;
}

int func_44()
{
	if (Global_4718592.f_138118 >= 1)
	{
		return 10;
	}
	return 5;
}

void func_45()
{
	func_29(&uLocal_28);
	if (iLocal_30)
	{
		iLocal_30 = 0;
		Global_1058362 = 0;
	}
}

void func_46()
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	float fVar46;
	float fVar47;
	struct<3> Var48;
	
	if (func_26(&uLocal_20))
	{
		MISC::SET_BIT(&Global_7825, 2);
		if (func_37(&uLocal_20, 60000, 0))
		{
			func_38(&uLocal_20, 0, 0);
			func_29(&uLocal_20);
		}
	}
	if (func_26(&uLocal_18) && func_37(&uLocal_18, 1000, 0))
	{
		if (iLocal_27 == -1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				iLocal_27 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_27, "05", PLAYER::PLAYER_PED_ID(), "DLC_GR_CS2_Sounds", false, 0);
			}
		}
		else if (func_37(&uLocal_18, 4000, 0))
		{
			if (!AUDIO::HAS_SOUND_FINISHED(iLocal_27))
			{
				AUDIO::STOP_SOUND(iLocal_27);
			}
			AUDIO::RELEASE_SOUND_ID(iLocal_27);
			iLocal_27 = -1;
			AUDIO::STOP_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
			func_38(&uLocal_18, 0, 0);
			func_29(&uLocal_18);
		}
	}
	if (!iLocal_12 && !func_56())
	{
		return;
	}
	iLocal_12 = 1;
	MISC::SET_BIT(&Global_7825, 2);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_11))
	{
		iVar0 = joaat("imp_prop_ship_01a");
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_11 = OBJECT::CREATE_OBJECT_NO_OFFSET(iVar0, 360,8759f, 5623,427f, 780,1747f, false, false, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_11, true);
			ENTITY::SET_ENTITY_LOD_DIST(iLocal_11, 8000);
			iVar1 = func_55(7868, -1, 0);
			func_52(7868, iVar1 + 1, -1, 1, 0);
			Var2.f_1 = 1;
			Var2.f_0 = 24;
			STATS::_PLAYSTATS_GUNRUN_MISSION_ENDED(&Var2);
			Local_22 = { ENTITY::GET_ENTITY_COORDS(iLocal_11, false) };
			iLocal_25 = 0;
		}
	}
	else
	{
		func_51();
		if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
		{
			if (iLocal_26 == -1)
			{
				AUDIO::START_AUDIO_SCENE("DLC_GR_CS2_General_Scene");
				iLocal_26 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_26, "07", iLocal_11, "DLC_GR_CS2_Sounds", false, 0);
			}
			if (!iLocal_13)
			{
				if (func_37(&uLocal_14, 4500, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_11, false);
					func_38(&uLocal_14, 0, 0);
					func_29(&uLocal_14);
					func_27(&uLocal_16, 0, 0);
					iLocal_13 = 1;
				}
			}
			else
			{
				fVar46 = (SYSTEM::TO_FLOAT(func_42(&uLocal_16, 0, 0)) / SYSTEM::TO_FLOAT(func_50()));
				fVar47 = (SYSTEM::TO_FLOAT(func_42(&uLocal_14, 0, 0)) / SYSTEM::TO_FLOAT(func_49()));
				fVar47 = (fVar47 * fVar46);
				Var48 = { func_47(Local_22, func_48(), fVar47) };
				ENTITY::SET_ENTITY_COORDS(iLocal_11, Var48, true, false, false, true);
				if (fVar47 >= 1f)
				{
					iLocal_25++;
					Local_22 = { ENTITY::GET_ENTITY_COORDS(iLocal_11, false) };
					func_38(&uLocal_14, 0, 0);
					func_29(&uLocal_14);
					if (func_49() == -1)
					{
						OBJECT::DELETE_OBJECT(&iLocal_11);
						MISC::FORCE_LIGHTNING_FLASH();
						if (!AUDIO::HAS_SOUND_FINISHED(iLocal_26))
						{
							AUDIO::STOP_SOUND(iLocal_26);
						}
						AUDIO::RELEASE_SOUND_ID(iLocal_26);
						iLocal_26 = -1;
						func_27(&uLocal_18, 0, 0);
						func_27(&uLocal_20, 0, 0);
						func_38(&uLocal_16, 0, 0);
						func_29(&uLocal_16);
						Local_22 = { 0f, 0f, 0f };
						iLocal_25 = 0;
						iLocal_12 = 0;
						iLocal_13 = 0;
					}
				}
			}
		}
	}
}

Vector3 func_47(struct<3> Param0, struct<3> Param3, float fParam6)
{
	return FtoV((1f - fParam6)) * Param0 + Vector(fParam6, fParam6, fParam6) * Param3;
}

Vector3 func_48()
{
	switch (iLocal_25)
	{
		case 0:
			return 306,567f, 5652,283f, 785,594f;
		
		case 1:
			return -1082,865f, 6390,52f, 924,2493f;
		
		case 2:
			return -2542,874f, 7217,514f, 1051,333f;
		
		case 3:
			return -4139,106f, 8143,302f, 1412,694f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_49()
{
	switch (iLocal_25)
	{
		case 0:
			return 2000;
		
		case 1:
			return 1000;
		
		case 2:
			return 100;
		
		case 3:
			return 50;
		
		default:
	}
	return -1;
}

int func_50()
{
	return 3150;
}

void func_51()
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_11, 2) };
	Var0.f_0 = 0f;
	Var0.f_1 = 0f;
	Var0.f_2 = (Var0.f_2 + 1f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_11, Var0, 2, true);
}

void func_52(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_53(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_53(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_54();
		if (iVar1 > -1)
		{
			Global_2821607 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2821607 = 1;
		}
	}
	return iVar0;
}

int func_54()
{
	return Global_1574907;
}

int func_55(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_53(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_56()
{
	if (((((((func_60(22107, -1) && Global_2671444 == 7) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && func_59(PLAYER::PLAYER_PED_ID(), 426,433f, 5614,172f, 766,414f, 1f)) && Global_2715542.f_3076.f_178 >= 1) && Global_2715542.f_3076.f_178 < 4) && func_58()) && func_57())
	{
		return 1;
	}
	return 0;
}

int func_57()
{
	if (func_60(15476, -1) && func_55(5452, func_54(), 0) > 577)
	{
		return 1;
	}
	return 0;
}

int func_58()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0,5f)
	{
		if ((iVar0 == joaat("rain") || iVar0 == joaat("THUNDER")) || iVar1 == -1429616491)
		{
			return 1;
		}
	}
	else if ((iVar1 == joaat("rain") || iVar1 == joaat("THUNDER")) || iVar1 == -1429616491)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, struct<3> Param1, float fParam4)
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, true), Param1) <= (fParam4 * fParam4);
}

bool func_60(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_54();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

void func_61()
{
	if (Global_1922813)
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
	}
}

void func_62()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	iVar0 = 0;
	if ((Global_1946928 == 1 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_smpl_interior_int")) == 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_armory_truck")) == 1)
	{
		iVar0 = 1;
	}
	if ((iVar0 && !func_65(PLAYER::PLAYER_ID())) && !func_64(PLAYER::PLAYER_ID()))
	{
		if (!Global_1659375.f_656)
		{
			Global_1659375.f_656 = 1;
			iLocal_204 = 1;
		}
		if (!MISC::IS_BIT_SET(Global_1946934.f_4521, 1))
		{
			if (((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_28(PLAYER::PLAYER_PED_ID())) && !func_63())
			{
				MISC::SET_BIT(&(Global_1946934.f_4521), 1);
			}
		}
	}
	else if (iLocal_204)
	{
		Global_1659375.f_656 = 0;
		iLocal_204 = 0;
	}
}

bool func_63()
{
	bool bVar0;
	
	if (func_28(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 1097,535f, -3016,011f, -40,7658f, 1109,298f, -2983,69f, -34,1882f, false, true, 0);
	}
	return bVar0;
}

int func_64(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
		else if ((Global_1575046 && iParam0 == PLAYER::PLAYER_ID()) && func_7(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6 != -1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_8() && func_7(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

void func_66()
{
	if ((func_68(PLAYER::PLAYER_ID()) && func_28(PLAYER::PLAYER_PED_ID())) && !Global_2703656.f_3442)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -2144,838f, 1111,555f, -25,61724f, -2144,808f, 1125,779f, -22,36767f, 7,75f, false, true, 0))
		{
			PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uLocal_201);
			if (func_28(uLocal_201[0]))
			{
				if (ENTITY::GET_ENTITY_MODEL(uLocal_201[0]) == joaat("vagner"))
				{
					func_67(1);
				}
				else
				{
					func_67(0);
				}
			}
		}
	}
	else
	{
		func_67(0);
	}
}

void func_67(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1965072.f_1)
		{
			Global_1965072.f_1 = 1;
		}
	}
	else if (Global_1965072.f_1)
	{
		Global_1965072.f_1 = 0;
	}
}

int func_68(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("mpsv_lp0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	}
	return -1;
}

void func_70()
{
	Global_262145.f_31467 = 1;
	Global_262145.f_31468 = 1;
	Global_262145.f_31469 = 1;
	Global_262145.f_31470 = 1;
	Global_262145.f_31471 = 1;
	Global_262145.f_31472 = 1;
	Global_262145.f_31473 = 1;
	Global_262145.f_31474 = 1;
	Global_262145.f_31475 = 1;
	Global_262145.f_31476 = 1;
	Global_262145.f_31477 = 1;
	Global_262145.f_31478 = 1;
	Global_262145.f_31479 = 1;
	Global_262145.f_31480 = 1;
	Global_262145.f_31481 = 1;
	Global_262145.f_31452 = 1636243200;
	Global_262145.f_31453 = 1636243200;
	Global_262145.f_31454 = 1636243200;
	Global_262145.f_31455 = 1636243200;
	Global_262145.f_31456 = 1636243200;
	Global_262145.f_31457 = 1636243200;
	Global_262145.f_31458 = 1636243200;
	Global_262145.f_31459 = 1636243200;
	Global_262145.f_31460 = 1636243200;
	Global_262145.f_31461 = 1636243200;
	Global_262145.f_31462 = 1636243200;
	Global_262145.f_31463 = 1636243200;
	Global_262145.f_31464 = 1636243200;
	Global_262145.f_31465 = 1636243200;
	Global_262145.f_31466 = 1636243200;
}

void func_71()
{
	if (Global_1958912)
	{
		Global_1958912 = 0;
	}
}

void func_72()
{
	bool bVar0;
	
	if (iLocal_200 == 1 && Global_1946901)
	{
		bVar0 = false;
		if (!func_7(PLAYER::PLAYER_ID(), 1, 0) && !MISC::IS_BIT_SET(Global_1946934, 27))
		{
			bVar0 = true;
		}
		if (!bVar0 && !func_10())
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			if ((((func_28(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && CAM::IS_SCREEN_FADED_IN()) && !func_64(PLAYER::PLAYER_ID()))
			{
				if (!func_65(PLAYER::PLAYER_ID()) && !MISC::IS_BIT_SET(Global_1946934, 27))
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			Global_1946914 = 0;
			Global_1946901 = 0;
			Global_1946902 = 0;
		}
	}
}

void func_73()
{
	int iVar0;
	
	iLocal_200++;
	if (iLocal_200 == 30)
	{
		iLocal_200 = 0;
	}
	else
	{
		return;
	}
	if (((((((((!func_28(PLAYER::PLAYER_PED_ID()) || !func_7(PLAYER::PLAYER_ID(), 1, 1)) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) || !func_10()) || func_65(PLAYER::PLAYER_ID())) || func_74(PLAYER::PLAYER_ID())) || func_64(PLAYER::PLAYER_ID())) || Global_2703656.f_3442) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_28(iVar0))
		{
			if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
			{
				if (ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(iVar0))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, 0f);
					ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
					ENTITY::SET_ENTITY_PROOFS(iVar0, false, false, false, false, false, false, true, false);
				}
			}
		}
	}
}

int func_74(int iParam0)
{
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 14))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 11))
	{
		return 1;
	}
	return 0;
}

void func_75()
{
	if (func_78())
	{
		func_38(&uLocal_197, 1, 0);
	}
	if (func_77())
	{
		if (!iLocal_194)
		{
			Global_262145.f_12919 = 1;
			Global_262145.f_12920 = 1;
			Global_262145.f_12921 = 1;
			Global_262145.f_12922 = 1;
			Global_262145.f_12923 = 1;
			Global_262145.f_12924 = 1;
			Global_262145.f_12925 = 1;
			Global_262145.f_12926 = 1;
			if (func_78())
			{
				Global_2703656.f_847.f_16 = 1;
				iLocal_193 = 1;
			}
			else if (!func_37(&uLocal_197, 1000, 1))
			{
				iLocal_193 = 1;
			}
			iLocal_194 = 1;
		}
		if (func_78() && func_76())
		{
			Global_2703656.f_847.f_16 = 1;
		}
	}
	else if (iLocal_194)
	{
		Global_262145.f_12919 = 0;
		Global_262145.f_12920 = 0;
		Global_262145.f_12921 = 0;
		Global_262145.f_12922 = 0;
		Global_262145.f_12923 = 0;
		Global_262145.f_12924 = 0;
		Global_262145.f_12925 = 0;
		Global_262145.f_12926 = 0;
		if (func_78())
		{
			Global_2703656.f_847.f_16 = 1;
		}
		iLocal_194 = 0;
	}
	if (iLocal_193)
	{
		Global_1938241.f_44 = 1;
		if (!func_26(&uLocal_195))
		{
			func_27(&uLocal_195, 1, 0);
		}
		if ((CAM::IS_SCREEN_FADED_IN() && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_37(&uLocal_195, 2000, 1))
		{
			Global_1938241.f_44 = 0;
			iLocal_193 = 0;
			func_29(&uLocal_195);
		}
	}
}

var func_76()
{
	return Global_1964196;
}

int func_77()
{
	if (!func_28(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	switch (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_30)
	{
		case 83:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797,2475f, 320,8778f, 186,3198f, -797,2629f, 328,7055f, 189,591f, 6,6875f, false, true, 0);
			break;
		
		case 84:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -797,5227f, 320,9101f, 216,0381f, -797,2699f, 328,7055f, 219,3134f, 6,6875f, false, true, 0);
			break;
		
		case 85:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -763,4833f, 329,0945f, 195,0859f, -763,2568f, 336,8706f, 198,3614f, 6,6875f, false, true, 0);
			break;
	}
	return 0;
}

int func_78()
{
	if (Global_2703656.f_847.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_79()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	func_96(1, Local_189);
	func_94(Local_191);
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if ((func_93(PLAYER::PLAYER_ID()) || func_92(PLAYER::PLAYER_ID())) && !func_91())
		{
			bVar0 = true;
			if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_65(PLAYER::PLAYER_ID())) && !func_96(1, Local_189)) && !func_94(Local_191)) && !Global_1946858) && !func_90())
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (Global_2359296[func_89() /*5559*/].f_675.f_2 != -1 && MISC::IS_BIT_SET(Global_1585844[Global_2359296[func_89() /*5559*/].f_675.f_2 /*142*/].f_103, 0))
					{
						func_84(1, 0, 1, 0, 0);
					}
					else
					{
						bVar0 = false;
					}
				}
			}
		}
	}
	if (bVar0)
	{
		if (!iLocal_188)
		{
			func_83(45, 2, 1);
			func_83(45, 8, 1);
			iLocal_188 = 1;
		}
	}
	else if (iLocal_188)
	{
		func_80(45, 2, 1);
		func_80(45, 8, 1);
		iLocal_188 = 0;
	}
}

void func_80(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			iVar0 = func_55(func_81(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_52(func_81(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

int func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 828;
			break;
		
		case 1:
			return 829;
			break;
		
		case 2:
			return 830;
			break;
		
		case 3:
			return 831;
			break;
		
		case 4:
			return 832;
			break;
		
		case 5:
			return 833;
			break;
		
		case 6:
			return 834;
			break;
		
		case 7:
			return 835;
			break;
		
		case 8:
			return 836;
			break;
		
		case 9:
			return 837;
			break;
		
		case 10:
			return 838;
			break;
		
		case 11:
			return 839;
			break;
		
		case 12:
			return 840;
			break;
		
		case 13:
			return 841;
			break;
		
		case 14:
			return 842;
			break;
		
		case 15:
			return 844;
			break;
		
		case 16:
			return 845;
			break;
		
		case 17:
			return 846;
			break;
		
		case 18:
			return 847;
			break;
		
		case 19:
			return 848;
			break;
		
		case 20:
			return 849;
			break;
		
		case 21:
			return 850;
			break;
		
		case 22:
			return 851;
			break;
		
		case 23:
			return 852;
			break;
		
		case 24:
			return 853;
			break;
		
		case 25:
			return 854;
			break;
		
		case 26:
			return 855;
			break;
		
		case 27:
			return 856;
			break;
		
		case 28:
			return 857;
			break;
		
		case 29:
			return 858;
			break;
		
		case 30:
			return 859;
			break;
		
		case 31:
			return 860;
			break;
		
		case 32:
			return 861;
			break;
		
		case 33:
			return 862;
			break;
		
		case 34:
			return 863;
			break;
		
		case 35:
			return 864;
			break;
		
		case 36:
			return 865;
			break;
		
		case 37:
			return 866;
			break;
		
		case 38:
			return 867;
			break;
		
		case 39:
			return 868;
			break;
		
		case 40:
			return 872;
			break;
		
		case 41:
			return 873;
			break;
		
		case 42:
			return 874;
			break;
		
		case 43:
			return 875;
			break;
		
		case 44:
			return 10851;
			break;
		
		case 45:
			return 3810;
			break;
		
		case 46:
			return 5385;
			break;
		
		case 47:
			return 6157;
			break;
		
		case 48:
			return 7234;
			break;
		
		case 49:
			return 7880;
			break;
		
		case 52:
			return 8916;
			break;
		
		case 50:
			return 8267;
			break;
		
		case 51:
			return 8269;
			break;
		
		case 53:
			return 9556;
			break;
		
		case 54:
			return 9632;
			break;
		
		case 55:
			return 9847;
			break;
		
		default:
			break;
	}
	return 12597;
}

int func_82()
{
	return Global_31505;
}

void func_83(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_100026.f_1392[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_82() == 0)
		{
			iVar0 = func_55(func_81(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_52(func_81(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_112915.f_668[iParam0]), iParam1);
	}
}

void func_84(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam0)
	{
		func_88(2);
	}
	else
	{
		func_88(1);
	}
	if (bParam1)
	{
		func_88(11);
	}
	if (bParam2)
	{
		func_88(32);
		if (bParam3)
		{
			if (MISC::IS_BIT_SET(Global_1585844[func_87() /*142*/].f_103, 0))
			{
				func_88(33);
			}
		}
		else
		{
			func_86(33);
		}
	}
	if (bParam4)
	{
		func_88(36);
	}
	if (func_85(36))
	{
		if (func_85(2))
		{
			func_86(36);
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2810287.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

bool func_85(int iParam0)
{
	if (iParam0 < 32)
	{
		return MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32));
}

void func_86(int iParam0)
{
	if (iParam0 < 32)
	{
		if (MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

int func_87()
{
	return Global_2359296[func_89() /*5559*/].f_675.f_2;
}

void func_88(int iParam0)
{
	if (iParam0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_2703656.f_75.f_1, iParam0))
		{
			MISC::SET_BIT(&(Global_2703656.f_75.f_1), iParam0);
		}
	}
	else if (!MISC::IS_BIT_SET(Global_2703656.f_75.f_2, (iParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703656.f_75.f_2), (iParam0 - 32));
	}
}

int func_89()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

bool func_90()
{
	return HUD::GET_PAUSE_MENU_STATE() != 0;
}

int func_91()
{
	if (func_28(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Global_103435, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 201,2196f, 5174,217f, -89,99727f, 198,8149f, 5175,969f, -87,49727f, 1,75f, false, true, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_92(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_93(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return Global_2689156[iParam0 /*453*/].f_319.f_6 == 122;
			}
		}
	}
	return 0;
}

int func_94(var uParam0, var uParam1)
{
	if (func_14() && (func_95(&(Global_22830.f_1), "DEL_VEH_SEL0") || func_95(&(Global_22830.f_1), "DEL_VEH_SEL3")))
	{
		func_38(&uParam0, 1, 0);
		return 1;
	}
	else if (func_26(&uParam0) && !func_37(&uParam0, 1000, 1))
	{
		return 1;
	}
	return 0;
}

int func_95(char* sParam0, char* sParam1)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_96(int iParam0, var uParam1, var uParam2)
{
	if (Global_75021)
	{
		func_38(&uParam1, 1, 0);
		return 1;
	}
	else if ((iParam0 && func_26(&uParam1)) && !func_37(&uParam1, 1000, 1))
	{
		return 1;
	}
	return 0;
}

void func_97()
{
	int iVar0;
	
	if ((func_9() && func_104(Global_4718592.f_138117)) && func_103() == 26)
	{
		if (!iLocal_187)
		{
			iVar0 = func_98();
			if (iVar0 != -1)
			{
				if (func_26(&(Global_1890187[iVar0 /*105*/].f_31)))
				{
					if (func_37(&(Global_1890187[iVar0 /*105*/].f_31), 37500, 0))
					{
						Global_2715542.f_6286 = -1;
						iLocal_187 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_187)
	{
		iLocal_187 = 0;
	}
}

int func_98()
{
	return func_99();
}

int func_99()
{
	struct<13> Var0;
	
	Var0 = { func_101() };
	if (func_100(Var0))
	{
		return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	return func_8();
}

bool func_100(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

struct<13> func_101()
{
	int iVar0;
	struct<13> Var1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_102(iVar0))
		{
			return Global_2715542.f_1.f_845[iVar0 /*57*/];
		}
		iVar0++;
	}
	return Var1;
}

bool func_102(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2715542.f_1.f_845[iParam0 /*57*/].f_50, 0);
}

int func_103()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192;
}

bool func_104(int iParam0)
{
	return iParam0 == 88;
}

void func_105()
{
	int iVar0;
	
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !Global_2667222.f_2678) && !MISC::IS_BIT_SET(Global_1946934, 27))
	{
		if ((((MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 4) && Global_1946928 == 4) && Global_1946934.f_508) && Global_1946934.f_516) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_fixer_hq")) == 1)
		{
			iVar0 = func_106(PLAYER::PLAYER_ID());
			if (func_69(iVar0) == 24)
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					if (func_26(&uLocal_185))
					{
						if (func_37(&uLocal_185, 20000, 1))
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
							func_29(&uLocal_185);
						}
					}
					else
					{
						func_27(&uLocal_185, 1, 0);
					}
				}
				else if (func_26(&uLocal_185))
				{
					func_29(&uLocal_185);
				}
			}
			else
			{
				func_29(&uLocal_185);
			}
		}
		else
		{
			func_29(&uLocal_185);
		}
	}
	else
	{
		func_29(&uLocal_185);
	}
}

int func_106(int iParam0)
{
	if (iParam0 != func_8() && func_7(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

void func_107()
{
	if (!func_114())
	{
		if (func_26(&uLocal_183))
		{
			func_29(&uLocal_183);
		}
		iLocal_182 = 0;
		iLocal_181 = 0;
		return;
	}
	if (((!MISC::IS_BIT_SET(Global_1977217.f_1, 17) && !MISC::IS_BIT_SET(Global_1977217.f_1, 0)) && func_113(PLAYER::PLAYER_ID())) && !func_111(PLAYER::PLAYER_ID(), 0))
	{
		if (func_26(&(Global_1977217.f_4)))
		{
			if (iLocal_182)
			{
				func_29(&(Global_1977217.f_4));
				func_108(&(Global_1977217.f_4), iLocal_181, 0, 0);
				iLocal_182 = 0;
			}
			if (!func_26(&uLocal_183))
			{
				MISC::_COPY_MEMORY(&uLocal_183, &(Global_1977217.f_4), 2);
				iLocal_181 = 0;
			}
		}
		else if (func_26(&uLocal_183))
		{
			iLocal_181 = func_42(&uLocal_183, 0, 0);
			iLocal_182 = 1;
			func_29(&uLocal_183);
		}
	}
}

void func_108(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1 == 0)
	{
		*uParam0 = NETWORK::GET_TIME_OFFSET(func_110(bParam2, bParam3), func_109(-iParam1, 0));
		uParam0->f_1 = 1;
	}
}

int func_109(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_110(bool bParam0, bool bParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam0)
	{
		if (!bParam1)
		{
			return NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			return NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	return MISC::GET_GAME_TIMER();
}

int func_111(int iParam0, int iParam1)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, func_112(iParam1));
	}
	return 0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		default:
	}
	return -1;
}

int func_113(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, 2);
	}
	return 0;
}

int func_114()
{
	if ((((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || func_9()) || func_117()) || func_116(PLAYER::PLAYER_ID())) || func_115(PLAYER::PLAYER_ID())) || !MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_139, 22))
	{
		return 0;
	}
	return 1;
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2783989;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_116(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1893548[iVar0 /*600*/].f_1, 0);
	}
	return 0;
}

int func_117()
{
	if (func_120(PLAYER::PLAYER_ID(), 0) && func_118(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_118(int iParam0)
{
	return func_119(iParam0, 20);
}

bool func_119(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_120(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

void func_121()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_8, 25))
	{
		if (Global_4282954 != -1)
		{
			Global_4282954 = -1;
		}
	}
}

void func_122()
{
	int iVar0;
	
	if (Global_4718592.f_86750 == Global_262145.f_31343[5])
	{
		if (!iLocal_161)
		{
			iLocal_161 = 1;
		}
	}
	else if (iLocal_161)
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-935,7f, -2992,2f, 13,9f, "v_hanger");
		if (INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			INTERIOR::DISABLE_INTERIOR(iVar0, false);
			iLocal_161 = 0;
		}
	}
	if (!MISC::IS_BIT_SET(Global_4718592.f_131901, 21))
	{
		if (!iLocal_162 && !STREAMING::IS_IPL_ACTIVE("sf_dlc_fixer_hanger_door"))
		{
			ENTITY::CREATE_MODEL_HIDE(-1010,708f, -2980,452f, 25,5042f, 1f, 336991465, true);
			iLocal_162 = 1;
		}
	}
	else if (iLocal_162)
	{
		ENTITY::REMOVE_MODEL_HIDE(-1010,708f, -2980,452f, 25,5042f, 1f, 336991465, false);
		iLocal_162 = 0;
	}
}

void func_123()
{
	if (func_127() && (((MISC::IS_BIT_SET(Global_1946934.f_4, 2) || Global_2667222.f_2679) || func_124(PLAYER::PLAYER_PED_ID()) >= 10) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())))
	{
		if (func_28(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4922,84f, -4907,485f, 2,228949f, 4919,344f, -4904,029f, 4,454555f, 3,25f, false, true, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 51, true);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

int func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = func_126(iParam0);
	iVar1 = func_125(iVar0);
	if (iVar1 == -1)
	{
		return -1;
	}
	return Global_43560[iVar1 /*5*/].f_3;
}

int func_125(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_43560[iVar0 /*5*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_126(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam0 == Global_43560[iVar0 /*5*/].f_1)
		{
			return Global_43560[iVar0 /*5*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_127()
{
	return func_128(PLAYER::PLAYER_ID());
}

bool func_128(int iParam0)
{
	return func_129(&(Global_2689156[iParam0 /*453*/].f_435), 0);
}

bool func_129(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(*uParam0, iParam1);
}

void func_130()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if ((MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_344, 31) && !func_131(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 51);
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
		if (Global_1836747.f_67)
		{
			iVar0 = (Global_2715542.f_4316.f_378[70] - 2000);
			if (!func_26(&(Global_2715542.f_4316.f_227[70 /*2*/])) || func_37(&(Global_2715542.f_4316.f_227[70 /*2*/]), iVar0, 1))
			{
				func_38(&(Global_2715542.f_4316.f_227[70 /*2*/]), 1, 0);
				iLocal_160 = 1;
				Global_2715542.f_4316.f_378[70] = Global_262145.f_25437;
			}
		}
		else if (iLocal_160)
		{
			func_29(&(Global_2715542.f_4316.f_227[70 /*2*/]));
			Global_2715542.f_4316.f_378[70] = Global_262145.f_25437;
			iLocal_160 = 0;
		}
	}
}

int func_131(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_403.f_3, 6);
	}
	return 0;
}

void func_132()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	if ((func_134(PLAYER::PLAYER_ID()) && func_133(PLAYER::PLAYER_ID()) != 229) && func_133(PLAYER::PLAYER_ID()) != 230)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660673)
		{
			if (Global_1660673.f_1[iVar1] == 1572255940)
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			Global_1660673.f_1[Global_1660673] = 1572255940;
			Global_1660673++;
		}
	}
	else if (Global_1660673 > 0)
	{
		iVar1 = 0;
		while (iVar1 < Global_1660673)
		{
			if (Global_1660673.f_1[iVar1] == 1572255940)
			{
				Global_1660673.f_1[iVar1] = 0;
				Global_1660673 = (Global_1660673 - 1);
			}
			iVar1++;
		}
	}
}

int func_133(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

int func_134(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_119(iParam0, 9);
	}
	return 0;
}

void func_135()
{
	if (Global_2810287.f_962)
	{
		if (Global_2703656.f_75.f_16)
		{
			Global_2810287.f_962 = 0;
		}
	}
}

void func_136()
{
	if (Global_1977096.f_3 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_1977153.f_1, 11) && !MISC::IS_BIT_SET(Global_1977096.f_10, 1))
		{
			if (func_137() && MISC::IS_BIT_SET(Global_1977096.f_10, 0))
			{
				if (Global_262145.f_30573)
				{
					Global_262145.f_30573 = 0;
				}
			}
		}
	}
	else if (Global_1977096.f_3 != 0)
	{
		if (!Global_262145.f_30573)
		{
			Global_262145.f_30573 = 1;
		}
	}
}

int func_137()
{
	if (func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		return func_138(PLAYER::PLAYER_PED_ID(), 987,32f, 79,32f, 79,99f, 0) <= 20f;
	}
	return 0;
}

float func_138(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

void func_139()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	bool bVar8;
	
	if (((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !func_10()) || func_128(PLAYER::PLAYER_ID()))
	{
		return;
	}
	Var5 = { func_141() };
	iVar0 = 0;
	while (iVar0 < 17)
	{
		Var2 = { func_140(iVar0) };
		if (!func_31(Var2))
		{
			fVar1 = SYSTEM::VDIST2(Var2, Var5);
			if (fVar1 > 4E+08f)
			{
				bVar8 = true;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if (func_7(PLAYER::PLAYER_ID(), 1, 1))
		{
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

Vector3 func_140(int iParam0)
{
	if (iParam0 < 17)
	{
		return Global_262145.f_6158[iParam0 /*3*/];
	}
	return 0f, 0f, 0f;
}

Vector3 func_141()
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	}
	else
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	return ENTITY::GET_ENTITY_COORDS(iVar0, false);
}

void func_142()
{
	int iVar0;
	int iVar1;
	
	if (!Global_1659375.f_556)
	{
		Global_1659375.f_556 = 1;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				func_143(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_143(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case -1386010354:
			func_144(iParam0);
			break;
	}
}

void func_144(int iParam0)
{
	struct<10> Var0;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var0.f_3 = 4;
	SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 10);
	bVar11 = false;
	iVar10 = 0;
	while (iVar10 < Var0.f_3)
	{
		if (NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[iVar10])
		{
			bVar11 = true;
		}
		iVar10++;
	}
	if (bVar11)
	{
		if (NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) == Var0.f_3[0])
		{
			func_145(Var0.f_2, &(Var0.f_3), Var0.f_8, Var0.f_9);
		}
		else
		{
			iVar12 = -1;
			func_145(Var0.f_2, &(Var0.f_3), Var0.f_8, iVar12);
		}
	}
}

void func_145(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (*uParam1 > 4)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((*uParam1)[iVar0] == 0)
		{
			(*uParam1)[iVar0] = -1;
		}
		iVar0++;
	}
	bVar1 = true;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!(*uParam1)[iVar0] == -1)
		{
			bVar1 = false;
		}
		iVar0++;
	}
	if (bVar1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar4 = (*uParam1)[iVar0];
		if (iVar4 < 0)
		{
			iVar4 = (iVar4 * -1);
		}
		iVar3 = (2147483647 - iVar2);
		if (iVar4 > iVar3)
		{
			iVar2 = (iVar4 - iVar3);
		}
		else
		{
			iVar2 = (iVar2 + iVar4);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_9[iVar0] = -1;
		iVar0++;
	}
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_3 = uParam0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_2 = iVar2;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/] = 0;
	Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_1 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_4[iVar0] = (*uParam1)[iVar0];
		iVar0++;
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		SCRIPT::SET_NO_LOADING_SCREEN(true);
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	if (iParam2 == -1)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			Global_4527588[PLAYER::PLAYER_ID() /*19*/].f_14 = 0;
		}
	}
	func_147(PLAYER::PLAYER_ID(), 0, 57348, 0);
	func_146();
	Global_4516656.f_943 = 0;
}

void func_146()
{
	Global_4516656.f_944 = NETWORK::GET_NETWORK_TIME_ACCURATE();
}

void func_147(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_158())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_10())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_156(PLAYER::PLAYER_ID(), 0) && !func_155()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689156[iParam0 /*453*/].f_253 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_152(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_151(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_150();
					func_149();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689156[iParam0 /*453*/].f_254 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667222.f_2679)
				{
					Global_2667222.f_2679 = 0;
				}
			}
			else
			{
				if (!func_151(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_148(Global_4718592.f_138117))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575022)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_148(int iParam0)
{
	return iParam0 == 17;
}

void func_149()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_150()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_151(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_152(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_154();
			}
			else if (!MISC::IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_156(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_153(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_153(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_154()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_155()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

bool func_156(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_157(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853128[iParam0 /*888*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_157(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_54();
	}
	if (Global_1575026[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574901[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_158()
{
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

void func_159()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && Global_4718592 == 0)
	{
		if (!iLocal_90)
		{
			iVar0 = 0;
			while (iVar0 < 65)
			{
				iLocal_91[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 2018)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 14) && (func_2(Global_794709.f_177589[iVar0 /*13*/].f_1) || func_160(Global_794709.f_177589[iVar0 /*13*/].f_1)))
				{
					MISC::CLEAR_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
					iVar1 = (iVar0 / 32);
					iVar2 = (iVar0 % 32);
					MISC::SET_BIT(&(iLocal_91[iVar1]), iVar2);
				}
				iVar0++;
			}
			iLocal_90 = 1;
		}
	}
	else if (iLocal_90)
	{
		iVar0 = 0;
		while (iVar0 < 2018)
		{
			iVar3 = (iVar0 / 32);
			iVar4 = (iVar0 % 32);
			if (MISC::IS_BIT_SET(iLocal_91[iVar3], iVar4))
			{
				MISC::SET_BIT(&(Global_794709.f_4[iVar0 /*88*/].f_76), 14);
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 65)
		{
			iLocal_91[iVar0] = 0;
			iVar0++;
		}
		iLocal_90 = 0;
	}
}

int func_160(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31343[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_161()
{
	if (func_163())
	{
		func_162(0);
	}
}

void func_162(int iParam0)
{
	Global_76659 = iParam0;
}

bool func_163()
{
	return Global_76659;
}

void func_164()
{
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 6))
	{
		iLocal_88 = 1;
		iLocal_89 = 1;
	}
	else
	{
		if (iLocal_88)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1965719) && !ENTITY::IS_ENTITY_DEAD(Global_1965719, false))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1965719))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1965719, false);
					iLocal_88 = 0;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_1965719);
				}
			}
			else
			{
				iLocal_88 = 0;
			}
		}
		if (iLocal_89)
		{
			if (((!HUD::IS_WARNING_MESSAGE_ACTIVE() && func_10()) && CAM::IS_SCREEN_FADED_IN()) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2810287.f_298) && !ENTITY::IS_ENTITY_DEAD(Global_2810287.f_298, false))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2810287.f_298))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_2810287.f_298, false);
						iLocal_89 = 0;
					}
					else
					{
						NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Global_2810287.f_298);
					}
				}
			}
		}
	}
}

void func_165()
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		iLocal_80 = 0;
		return;
	}
	if (Global_262145.f_30684[7] != Global_4718592.f_86750)
	{
		iLocal_80 = 0;
		return;
	}
	if (iLocal_80)
	{
		return;
	}
	Global_4980736.f_88118[66 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[67 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[68 /*926*/].f_839.f_8 = 0f;
	Global_4980736.f_88118[69 /*926*/].f_839.f_8 = 0f;
	MISC::SET_BIT(&(Global_4980736.f_88118[66 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[67 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[68 /*926*/].f_530), 25);
	MISC::SET_BIT(&(Global_4980736.f_88118[69 /*926*/].f_530), 25);
	iLocal_80 = 1;
}

void func_166()
{
	int iVar0;
	int iVar1;
	
	if (func_176(PLAYER::PLAYER_ID()) && func_175(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_170(PLAYER::PLAYER_ID(), 0, 1);
		if ((iVar0 != 7 && iVar0 != 8) && iVar0 != 9)
		{
			func_168(0, 8, 1);
		}
		if (func_167())
		{
			iVar1 = 0;
			while (iVar1 <= 21)
			{
				if (iVar1 < 4 || iVar1 > 7)
				{
					Global_22830.f_1610[iVar1] = 0;
				}
				if (iVar1 > 18)
				{
					StringCopy(&(Global_22830.f_73[iVar1 /*6*/]), "CELL_MP_302", 24);
				}
				iVar1++;
			}
		}
	}
}

bool func_167()
{
	return MISC::IS_BIT_SET(Global_1973263, 1);
}

void func_168(int iParam0, int iParam1, int iParam2)
{
	func_52(func_169(iParam0, iParam2), iParam1, -1, 1, 0);
	switch (iParam2)
	{
		case 0:
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_411[iParam0] = iParam1;
			break;
		
		case 1:
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_468[iParam0] = iParam1;
			break;
	}
}

int func_169(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 8749;
					break;
				
				case 1:
					return 9631;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 8750;
					break;
				
				case 1:
					return 9911;
					break;
			}
			break;
		
		case 2:
			return 8751;
			break;
		
		case 3:
			return 8752;
			break;
		
		case 4:
			return 8753;
			break;
		
		case 5:
			return 8754;
			break;
		
		case 6:
			return 8755;
			break;
		
		case 7:
			return 8756;
			break;
		
		case 8:
			return 8757;
			break;
		
		case 9:
			return 8758;
			break;
		
		case 10:
			return 8759;
			break;
		
		case 11:
			return 8760;
			break;
		
		case 12:
			return 8761;
			break;
		
		case 13:
			return 8762;
			break;
		
		case 14:
			return 8763;
			break;
		
		case 15:
			return 8764;
			break;
		
		case 16:
			return 8765;
			break;
		
		case 17:
			return 8766;
			break;
		
		case 18:
			return 8767;
			break;
		
		case 19:
			return 8768;
			break;
		
		case 20:
			return 8769;
			break;
		
		case 21:
			return 8770;
			break;
		
		case 22:
			return 8771;
			break;
		
		case 23:
			return 8772;
			break;
		
		case 24:
			return 8773;
			break;
		
		case 25:
			return 8774;
			break;
		
		case 26:
			return 8775;
			break;
		
		case 27:
			return 8776;
			break;
		
		case 28:
			return 8777;
			break;
		
		case 29:
			return 8778;
			break;
		
		case 30:
			return 8779;
			break;
		
		case 31:
			return 8780;
			break;
		
		case 32:
			return 8781;
			break;
		
		case 33:
			return 8782;
			break;
		
		case 34:
			return 8783;
			break;
		
		case 35:
			return 8784;
			break;
		
		case 36:
			return 8785;
			break;
		
		case 37:
		case 38:
		case 39:
		case 40:
			return 8786;
			break;
	}
	return 8749;
}

int func_170(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_8())
	{
		switch (iParam2)
		{
			case 0:
				iVar0 = Global_1853128[iParam0 /*888*/].f_267.f_411[iParam1];
				break;
			
			case 1:
				iVar0 = Global_1853128[iParam0 /*888*/].f_267.f_468[iParam1];
				break;
		}
		iVar1 = func_174(iVar0);
		if (iVar1 != -1)
		{
			if ((func_173(iParam0, iVar1, iParam2) && func_172(iParam0, iVar1, iParam2)) || func_171(iVar1))
			{
				return iVar0;
			}
		}
	}
	return 0;
}

int func_171(int iParam0)
{
	switch (iParam0)
	{
		case 18:
		case 17:
		case 19:
			return 1;
			break;
	}
	return 0;
}

int func_172(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		iVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_409.f_1, iVar0);
				break;
			}
	}
	return 1;
}

int func_173(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		iVar0 = iParam1;
		switch (iParam2)
		{
			case 0:
				return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_409, iVar0);
				break;
			}
	}
	return 1;
}

int func_174(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 10;
		
		case 5:
			return 0;
		
		case 6:
			return 1;
		
		case 7:
			return 5;
		
		case 8:
			return 3;
		
		case 9:
			return 4;
		
		case 10:
			return 2;
		
		case 11:
			return 6;
		
		case 12:
			return 7;
		
		case 13:
			return 8;
		
		case 14:
			return 12;
		
		case 15:
			return 11;
		
		case 16:
			return 13;
		
		case 17:
			return 9;
		
		case 18:
			return 17;
		
		case 19:
			return 18;
		
		case 20:
			return 19;
		
		case 21:
			return 14;
		
		case 22:
			return 15;
		
		case 23:
			return 16;
		
		default:
	}
	return -1;
}

int func_175(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_460.f_3, 3);
	}
	return 0;
}

int func_176(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_177(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

void func_178()
{
	if (!func_180(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3, 1))
	{
		if (((((((((((((func_179(0) && func_179(1)) && func_179(2)) && func_179(3)) && func_179(4)) && func_179(5)) && func_179(6)) && func_179(7)) && func_179(8)) && func_179(9)) && func_179(10)) && func_179(11)) && func_179(12)) && func_179(13))
		{
			MISC::SET_BIT(&(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_403.f_3), 1);
		}
	}
}

bool func_179(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_409, iVar0);
}

bool func_180(int iParam0)
{
	return Global_1853128[iParam0 /*888*/].f_267.f_403 != 0;
}

void func_181()
{
	int iVar0;
	
	iVar0 = func_54();
	if (iVar0 == 0 || iVar0 == 1)
	{
		if (!iLocal_85[iVar0])
		{
			if (func_60(31736, -1))
			{
				func_182(32314, 1, -1);
				iLocal_85[iVar0] = 1;
			}
		}
	}
}

void func_182(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_54();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_183()
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_82)
	{
		iVar0 = func_55(7854, -1, 0);
		if (iVar0 != 0)
		{
			iVar1 = iVar0;
			func_184(iVar1);
			iLocal_82 = 1;
		}
		else
		{
			iLocal_82 = 1;
		}
	}
}

void func_184(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	func_52(7854, iParam0, -1, 1, 0);
	func_185(7285, 122, -1, 1);
	Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_349 = iParam0;
}

void func_185(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_53(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_53(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_53(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_53(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_53(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_53(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_53(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_53(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_53(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_53(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_53(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_53(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_53(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_53(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_53(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_53(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_53(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_53(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_53(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_53(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_53(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_53(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_53(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_53(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_53(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_53(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_53(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_53(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_53(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_53(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_53(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_53(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_53(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_53(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_53(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_53(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_53(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_53(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_53(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_53(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_53(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_53(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_53(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_53(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_53(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_53(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_53(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_53(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_53(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_53(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_53(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_53(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_53(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_53(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_186()
{
	if (!func_188(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_127())
	{
		return;
	}
	func_187();
	PAD::DISABLE_CONTROL_ACTION(0, 25, true);
}

void func_187()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (!(iVar0 == joaat("weapon_unarmed") || iVar0 == joaat("object")))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
		}
	}
}

bool func_188(int iParam0)
{
	return func_189(func_190(iParam0));
}

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_190(int iParam0)
{
	if (func_133(iParam0) == 256)
	{
		return func_191(iParam0);
	}
	return -1;
}

int func_191(int iParam0)
{
	if (func_120(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

void func_192()
{
	if (!func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_194(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_193())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007,262f, -79,05004f, -100,0031f, -1008,166f, -79,02464f, -98,00307f, 0,9f, false, true, 0))
	{
		PED::SET_PED_CAPSULE(PLAYER::PLAYER_PED_ID(), 0,16f);
	}
}

int func_193()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_505, 29) || MISC::IS_BIT_SET(Global_1946934.f_505, 30))
	{
		return 1;
	}
	return 0;
}

int func_194(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 21;
			}
		}
	}
	return 0;
}

void func_195()
{
	struct<3> Var0;
	float fVar3;
	
	if (!func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_194(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_193())
	{
		return;
	}
	if (!iLocal_78)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1009,889f, -85,44301f, -100,4031f, -1009,788f, -94,42639f, -97,56435f, 3,5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 0;
			iLocal_78 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1013,188f, -49,82637f, -100,0031f, -1023,535f, -49,96507f, -97,50307f, 3,5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 1;
			iLocal_78 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1008,102f, -49,8092f, -100,0031f, -1002,001f, -49,79685f, -97,46447f, 3,5f, false, true, 0))
		{
			CAM::DO_SCREEN_FADE_OUT(500);
			iLocal_79 = 2;
			iLocal_78 = 1;
		}
	}
	else
	{
		func_199(iLocal_79, &Var0, &fVar3);
		if (CAM::IS_SCREEN_FADED_OUT() && func_197(Var0, fVar3, 0, 1, 0, 0, 1, 0, 1, 0, 0))
		{
			CAM::DO_SCREEN_FADE_IN(500);
			func_196("MUS_STIO_DOOR_R", -1);
			iLocal_78 = 0;
		}
	}
}

void func_196(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_197(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, float fParam12)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	Global_22691.f_6 = 1;
	if (Global_2703656.f_924 && Global_2703656.f_932)
	{
		func_198(0, bParam9);
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam9)
	{
		if (Global_2703656.f_924)
		{
			func_198(0, bParam9);
		}
		return 0;
	}
	if ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !bParam9) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		return 0;
	}
	if (fParam3 < 0f)
	{
		fParam3 = (fParam3 + 360f);
	}
	if (fParam3 >= 360f)
	{
		fParam3 = (fParam3 + -360f);
	}
	if (!Global_2703656.f_924 && !bParam11)
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		if ((MISC::ABSF((Var1.f_0 - Param0.f_0)) < 0,2f && MISC::ABSF((Var1.f_1 - Param0.f_1)) < 0,2f) && MISC::ABSF((Var1.f_2 - Param0.f_2)) < 1,2f)
		{
			fVar4 = (fParam3 - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 + -360f);
			}
			if (fVar4 < -180f)
			{
				fVar4 = (fVar4 + 360f);
			}
			if (MISC::ABSF(fVar4) < 1f)
			{
				Global_2703656.f_924 = 0;
				Global_2703656.f_925 = 0;
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					PLAYER::STOP_PLAYER_TELEPORT();
				}
				return 1;
			}
		}
	}
	if (((!Param0.f_0 == Global_2703656.f_926 || !Param0.f_1 == Global_2703656.f_926.f_1) || !Param0.f_2 == Global_2703656.f_926.f_2) || !fParam3 == Global_2703656.f_929)
	{
		if (Global_2703656.f_924 == 1)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2703656.f_930) < 10000)
			{
				return 0;
			}
			PLAYER::STOP_PLAYER_TELEPORT();
			Global_2703656.f_925 = 1;
		}
		else
		{
			Global_2703656.f_925 = 0;
		}
		Global_2703656.f_926 = { Param0 };
		Global_2703656.f_929 = fParam3;
		Global_2703656.f_924 = 0;
	}
	if (bParam4)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("kosatka"))
			{
				bParam4 = false;
			}
		}
	}
	if (!Global_2703656.f_924 && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		if (bParam4)
		{
			bParam5 = false;
		}
		iParam7 = iParam7;
		if (bParam5)
		{
		}
		if (bParam8)
		{
		}
		if (Global_2703656.f_931 > -1)
		{
			Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_924 = 1;
		}
		else
		{
			if (bParam9)
			{
				if (bParam4)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, Param0, false, true, true, true);
							ENTITY::SET_ENTITY_HEADING(iVar0, fParam3);
							if (fParam12 != 0f)
							{
								ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
							}
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
						}
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
					}
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, false, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
				}
				func_198(bParam6, bParam9);
				return 1;
			}
			else
			{
				STREAMING::CLEAR_FOCUS();
				PLAYER::START_PLAYER_TELEPORT(PLAYER::PLAYER_ID(), Param0, fParam3, bParam4, bParam10, false);
			}
			Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_924 = 1;
		}
	}
	if (Global_2703656.f_924)
	{
		Global_22691.f_6 = 1;
		Global_2703656.f_930 = NETWORK::GET_NETWORK_TIME();
		if (Global_2703656.f_931 > -1)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			}
		}
		else
		{
			if (bParam9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Global_2703656.f_926) < 2f)
				{
					if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					{
						PLAYER::STOP_PLAYER_TELEPORT();
					}
					func_198(bParam6, bParam9);
					return 1;
				}
			}
			if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
			{
				if (fParam12 != 0f)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_ROTATION(iVar0, fParam12, 0f, fParam3, 2, true);
						Global_2703656.f_932 = 1;
						return 0;
					}
				}
				func_198(bParam6, bParam9);
				return 1;
			}
		}
	}
	return 0;
}

void func_198(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	}
	if (!bParam1)
	{
		STREAMING::CLEAR_FOCUS();
	}
	if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
		PLAYER::STOP_PLAYER_TELEPORT();
	}
	func_149();
}

int func_199(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -1010,057f, -84,228f, -100,4031f };
			*uParam2 = 0f;
			return 1;
			break;
		
		case 1:
			*uParam1 = { -1012,153f, -49,7938f, -100,4031f };
			*uParam2 = 270,5516f;
			return 1;
			break;
		
		case 2:
			*uParam1 = { -1009,128f, -49,7938f, -100,4031f };
			*uParam2 = 90,9647f;
			return 1;
			break;
	}
	return 0;
}

void func_200()
{
	if (!func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (!func_194(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_193())
	{
		return;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1010,787f, -47,99169f, -100,3851f, -1010,684f, -55,70412f, -98,15313f, 6f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1007,917f, -85,33492f, -100,3889f, -1011,801f, -85,40305f, -98,14022f, 3,5f, false, true, 0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1,499f);
	}
}

void func_201()
{
	if (func_133(PLAYER::PLAYER_ID()) != 262)
	{
		func_202();
		return;
	}
	if (iLocal_10)
	{
		return;
	}
	iLocal_9 = 1;
	if (!func_37(&uLocal_7, 5000, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 18, true);
		PAD::DISABLE_CONTROL_ACTION(2, 18, true);
		PAD::DISABLE_CONTROL_ACTION(1, 18, true);
		return;
	}
	iLocal_10 = 1;
}

void func_202()
{
	func_29(&uLocal_7);
	if (iLocal_9)
	{
		iLocal_9 = 0;
	}
	if (iLocal_10)
	{
		iLocal_10 = 0;
	}
}

void func_203()
{
	if (!func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (Global_262145.f_31488 == 0 && iLocal_3 == 0)
	{
		return;
	}
	if (func_204() && Global_262145.f_31488)
	{
		Global_262145.f_31488 = 0;
		iLocal_3 = 1;
	}
	if (!func_204() && iLocal_3)
	{
		Global_262145.f_31488 = 1;
		iLocal_3 = 0;
	}
}

int func_204()
{
	int iVar0;
	
	if ((func_207(PLAYER::PLAYER_ID(), 1) || (func_206(PLAYER::PLAYER_ID()) && !func_120(PLAYER::PLAYER_ID(), 0))) || func_205())
	{
		return 1;
	}
	if (func_120(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = func_133(PLAYER::PLAYER_ID());
		switch (iVar0)
		{
			case 192:
			case 190:
			case 167:
			case 168:
			case 178:
			case 188:
			case 225:
			case 226:
			case 229:
			case 230:
			case 233:
			case 237:
			case 271:
			case 262:
			case 263:
			case 285:
			case 284:
			case 264:
				return 1;
			}
		
		default:
	}
	return 0;
}

var func_205()
{
	return Global_1835491;
}

int func_206(int iParam0)
{
	if (func_116(iParam0))
	{
		return 1;
	}
	if (func_134(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_207(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_208(iParam0))
		{
			return 1;
		}
	}
	if ((((Global_1853128[iParam0 /*888*/] == 2 || Global_1853128[iParam0 /*888*/] == 1) || Global_1853128[iParam0 /*888*/] == 0) || Global_1853128[iParam0 /*888*/] == 3) || Global_1853128[iParam0 /*888*/] == 8)
	{
		return 1;
	}
	return 0;
}

bool func_208(int iParam0)
{
	return func_209(iParam0);
}

bool func_209(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

void func_210()
{
	int iVar0;
	int iVar1;
	
	if (!func_7(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (!func_194(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (func_193())
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if ((((Global_1578985.f_3 != -1 || CUTSCENE::IS_CUTSCENE_PLAYING()) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		if (MISC::IS_BIT_SET(iLocal_4, 0))
		{
			MISC::CLEAR_BIT(&iLocal_4, 0);
		}
		if (MISC::IS_BIT_SET(iLocal_4, 1))
		{
			MISC::CLEAR_BIT(&iLocal_4, 1);
		}
		return;
	}
	if (!(Global_1578985.f_2 == 11 || Global_1578985.f_2 == 12) && !MISC::IS_BIT_SET(iLocal_4, 0))
	{
		if (PED::GET_CLOSEST_PED(-1004,985f, -78,122f, -98,972f, 0,5f, true, true, &iVar0, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
			MISC::SET_BIT(&iLocal_4, 0);
		}
	}
	if (Global_1578985.f_2 == 8 && !MISC::IS_BIT_SET(iLocal_4, 1))
	{
		if (PED::GET_CLOSEST_PED(-1004,94f, -80,51f, -98,972f, 0,5f, true, true, &iVar1, false, false, -1) && ENTITY::IS_ENTITY_VISIBLE(iVar1))
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar1, false, false);
			MISC::SET_BIT(&iLocal_4, 1);
		}
	}
}

void func_211()
{
	int iVar0;
	char* sVar1;
	
	if (func_229(PLAYER::PLAYER_ID()))
	{
		iVar0 = func_223();
		if ((iVar0 != func_8() && func_215(iVar0)) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Local_76.f_1))
			{
				sVar1 = func_214(0);
				Local_76.f_0 = MISC::GET_HASH_KEY(sVar1);
				if (func_213(Local_76.f_0))
				{
					Local_76.f_1 = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_76.f_0, -1024,45f, -422,027f, 72,259f, false, false, false);
					ENTITY::SET_ENTITY_ROTATION(Local_76.f_1, 0f, 0f, 132f, 2, true);
					ENTITY::FREEZE_ENTITY_POSITION(Local_76.f_1, true);
				}
			}
		}
		else
		{
			func_212();
		}
	}
	else
	{
		func_212();
	}
}

void func_212()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_76.f_1))
	{
		OBJECT::DELETE_OBJECT(&(Local_76.f_1));
	}
}

bool func_213(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_214(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "sf_prop_sf_scr_m_lrg_01a";
			break;
		
		case 1:
			return "sf_prop_sf_scr_m_lrg_01b";
			break;
		
		case 2:
			return "sf_prop_sf_scr_m_lrg_01c";
			break;
		
		case 3:
			return "sf_prop_sf_monitor_b_02b";
			break;
		
		case 4:
			return "prop_npc_phone";
			break;
	}
	return "INVALID";
}

int func_215(int iParam0)
{
	if (!func_220(iParam0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1946934.f_10, 5))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_219(iParam0) && MISC::IS_BIT_SET(Global_1977217.f_1, 8)) && !func_218())
		{
			return 1;
		}
	}
	else if (func_217(iParam0) && func_216() == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_216()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
}

bool func_217(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_5, 18);
}

bool func_218()
{
	return func_60(28257, -1);
}

int func_219(int iParam0)
{
	if (iParam0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1977258[iParam0 /*55*/].f_27, 0);
	}
	return 0;
}

int func_220(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_9() || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_221() == 1)
	{
		return 0;
	}
	return 1;
}

int func_221()
{
	return func_222(PLAYER::PLAYER_ID());
}

int func_222(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

int func_223()
{
	return func_224(PLAYER::PLAYER_ID());
}

int func_224(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return iParam0;
	}
	if (func_228(iParam0) != -1)
	{
		iVar0 = func_69(func_228(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_226(iParam0, 0))
			{
				return func_225(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_8();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_8();
}

int func_225(int iParam0)
{
	if (iParam0 != func_8())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_8();
}

bool func_226(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_227(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_8();
}

int func_227(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_8())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_228(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_7(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_229(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

void func_230()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_235())
		{
			if (func_234() && func_233() != 18)
			{
				iVar0 = func_99();
				if (iVar0 != func_8() && func_232(iVar0))
				{
					if (Global_4718592.f_527 != Global_2711168[2])
					{
						Global_4718592.f_527 = Global_2711168[2];
						iLocal_75 = Global_2711168[2];
					}
				}
				else if (Global_4718592.f_527 != 1)
				{
					Global_4718592.f_527 = 1;
					iLocal_75 = -1;
				}
			}
			else if (func_231())
			{
				if (iLocal_75 != -1)
				{
					if (Global_2711168[2] != iLocal_75)
					{
						Global_2711168[2] = iLocal_75;
					}
					if (Global_4718592.f_527 != Global_2711168[2])
					{
						Global_4718592.f_527 = Global_2711168[2];
					}
				}
			}
		}
	}
	else if (iLocal_75 != -1)
	{
		iLocal_75 = -1;
	}
}

bool func_231()
{
	return Global_1923723.f_3;
}

int func_232(int iParam0)
{
	if ((func_111(iParam0, 0) && func_111(iParam0, 1)) && func_111(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

int func_233()
{
	return Global_1057405;
}

int func_234()
{
	switch (func_103())
	{
		case 41:
		case 42:
			return 1;
		
		default:
	}
	return 0;
}

bool func_235()
{
	return func_2(Global_4718592.f_86750);
}

void func_236()
{
	if (func_194(PLAYER::PLAYER_ID()) && func_193())
	{
		if (Global_2785380 == 102)
		{
			uLocal_58 = Global_2792497[102 /*66*/][0];
		}
		else
		{
			Global_2792497[102 /*66*/][0] = uLocal_58;
		}
	}
}

void func_237()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_BIT_SET(Global_1946934.f_10, 28))
	{
		if (MISC::COMPARE_STRINGS(&(Global_22830.f_1), "OF_PA_MENUI_1b", false, -1) == 0)
		{
			if (!iLocal_62)
			{
				iVar0 = 0;
				iLocal_63[0] = PLAYER::PLAYER_ID();
				iVar0++;
				iVar1 = 0;
				while (iVar1 < 32)
				{
					iVar2 = iVar1;
					if (!iVar2 == PLAYER::PLAYER_ID())
					{
						if (func_248(iVar2))
						{
							if (iVar0 < 10)
							{
								iLocal_63[iVar0] = iVar2;
							}
						}
					}
					iVar1++;
				}
				iLocal_62 = 1;
			}
			if (iLocal_74)
			{
				if (!func_247() && !PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					iLocal_74 = 0;
				}
			}
			else if (func_247() || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				iVar2 = iLocal_63[Global_22830.f_5996];
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				func_240(iLocal_60, iLocal_61, iVar2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DLC_Fixer_Office_Interior_Scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("DLC_Fixer_Office_Interior_Scene");
				}
			}
		}
		else
		{
			func_238(Global_22830.f_5996, &iLocal_60, &iLocal_61);
			iLocal_62 = 0;
			iLocal_74 = 1;
		}
	}
}

void func_238(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		*iParam1 = 553;
		*iParam2 = 0;
	}
	else
	{
		func_239((iParam0 - 1), iParam1, iParam2);
	}
}

void func_239(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 164;
			break;
		
		case 1:
			*uParam1 = 164;
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam1 = 217;
			break;
		
		case 3:
			*uParam1 = 243;
			break;
		
		case 4:
			*uParam1 = 244;
			break;
		
		case 5:
			*uParam1 = 253;
			break;
		
		case 6:
			*uParam1 = 15;
			break;
		
		case 7:
			*uParam1 = 16;
			break;
		
		case 8:
			*uParam1 = 20;
			break;
		
		case 9:
			*uParam1 = 78;
			break;
		
		case 10:
			*uParam1 = 187;
			break;
		
		case 11:
			*uParam1 = 185;
			break;
		
		case 12:
			*uParam1 = 19;
			break;
		
		case 13:
			*uParam1 = 254;
			break;
		
		case 14:
			*uParam1 = 178;
			break;
		
		case 15:
			*uParam1 = 88;
			break;
		
		case 16:
			*uParam1 = 237;
			break;
		
		case 17:
			*uParam1 = 186;
			break;
		
		case 18:
			*uParam1 = 256;
			break;
		
		case 19:
			*uParam1 = 200;
			break;
		
		case 20:
			*uParam1 = 160;
			break;
	}
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	Global_2725260.f_24 = iParam2;
	CAM::DO_SCREEN_FADE_OUT(500);
	func_246(1);
	func_245(iParam0, iParam1);
	func_241(iParam0, iParam1);
}

void func_241(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_244(iParam0, iParam1);
	Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_46 = func_243(iVar0);
	func_242(iVar0, &(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_47), &(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_48));
}

int func_242(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = -1;
	*uParam2 = -1;
	switch (iParam0)
	{
		case 39:
			*uParam1 = 0;
			*uParam2 = 11;
			return 1;
		
		case 43:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 44:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 45:
			*uParam1 = 53;
			*uParam2 = 89;
			return 1;
		
		case 46:
			*uParam1 = 28;
			*uParam2 = 89;
			return 1;
		
		case 47:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 48:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 49:
			*uParam1 = 1;
			*uParam2 = 89;
			return 1;
		
		case 50:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 51:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 52:
			*uParam1 = 64;
			*uParam2 = 111;
			return 1;
		
		case 53:
			*uParam1 = 53;
			*uParam2 = 111;
			return 1;
		
		case 54:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 55:
			*uParam1 = 1;
			*uParam2 = 53;
			return 1;
		
		case 56:
			*uParam1 = 88;
			*uParam2 = 64;
			return 1;
		
		case 57:
			*uParam1 = 28;
			*uParam2 = 64;
			return 1;
		
		case 58:
			*uParam1 = 70;
			*uParam2 = 88;
			return 1;
		
		case 59:
			*uParam1 = 1;
			*uParam2 = 88;
			return 1;
		
		case 60:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 61:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 62:
			*uParam1 = 64;
			*uParam2 = 28;
			return 1;
		
		case 63:
			*uParam1 = 70;
			*uParam2 = 111;
			return 1;
		
		case 64:
			*uParam1 = 28;
			*uParam2 = 111;
			return 1;
		
		case 65:
			*uParam1 = 53;
			*uParam2 = 38;
			return 1;
		
		case 66:
			*uParam1 = 53;
			*uParam2 = 28;
			return 1;
		
		case 67:
			*uParam1 = 111;
			*uParam2 = 28;
			return 1;
		
		case 90:
			*uParam1 = 27;
			*uParam2 = 27;
			return 1;
		
		case 91:
			*uParam1 = 111;
			*uParam2 = 0;
			return 1;
		
		case 115:
			*uParam1 = 40;
			*uParam2 = 12;
			return 1;
		
		case 116:
			*uParam1 = 58;
			*uParam2 = 1;
			return 1;
		
		case 118:
			*uParam1 = 111;
			return 1;
		
		case 119:
			*uParam1 = 120;
			return 1;
		
		case 120:
			*uParam1 = 1;
			*uParam2 = 1;
			return 1;
		
		default:
	}
	return 0;
}

int func_243(int iParam0)
{
	switch (iParam0)
	{
		case 39:
			return 0;
		
		case 40:
			return 1;
		
		case 43:
			return 0;
		
		case 44:
			return 1;
		
		case 45:
			return 2;
		
		case 46:
			return 3;
		
		case 47:
			return 4;
		
		case 48:
			return 5;
		
		case 49:
			return 6;
		
		case 50:
			return 7;
		
		case 51:
			return 8;
		
		case 52:
			return 9;
		
		case 53:
			return 10;
		
		case 54:
			return 11;
		
		case 55:
			return 12;
		
		case 56:
			return 13;
		
		case 57:
			return 14;
		
		case 58:
			return 15;
		
		case 59:
			return 16;
		
		case 60:
			return 17;
		
		case 61:
			return 18;
		
		case 62:
			return 19;
		
		case 63:
			return 20;
		
		case 64:
			return 21;
		
		case 65:
			return 22;
		
		case 66:
			return 23;
		
		case 67:
			return 24;
		
		case 82:
			return 0;
		
		case 83:
			return 1;
		
		case 90:
			return 0;
		
		case 91:
			return 1;
		
		case 97:
			return 0;
		
		case 98:
			return 1;
		
		case 99:
			return 2;
		
		case 100:
			return 3;
		
		case 101:
			return 4;
		
		case 102:
			return 5;
		
		case 103:
			return 6;
		
		case 105:
			return 0;
		
		case 106:
			return 1;
		
		case 107:
			return 2;
		
		case 108:
			return 3;
		
		case 109:
			return 4;
		
		case 110:
			return 5;
		
		case 111:
			return 6;
		
		case 112:
			return 7;
		
		case 113:
			return 8;
		
		case 114:
			return 9;
		
		default:
	}
	return -1;
}

int func_244(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case joaat("mpsv_lp0_31"):
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (iParam1 == 2)
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

void func_245(var uParam0, var uParam1)
{
	Global_2725260.f_20 = 0;
	Global_2725260.f_19 = 1;
	Global_2725260.f_17 = uParam0;
	Global_2725260.f_18 = uParam1;
}

void func_246(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_514), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_514), 3);
	}
	Global_2725260 = bParam0;
}

int func_247()
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4534059 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_248(int iParam0)
{
	int iVar0;
	
	if (((func_7(iParam0, 1, 1) && !func_256(iParam0)) && func_64(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 26))
	{
		if (func_254(iParam0, PLAYER::PLAYER_ID(), 0, 1))
		{
			if (func_253(iParam0, PLAYER::PLAYER_ID()))
			{
				if (!func_65(iParam0) && !func_252(iParam0))
				{
					iVar0 = func_228(PLAYER::PLAYER_ID());
					if (func_221() == func_222(iParam0) || !func_249(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_249(int iParam0)
{
	var uVar0;
	
	uVar0 = { func_250(iParam0) };
	return MISC::IS_BIT_SET(uVar0[0], 1);
}

Vector3 func_250(int iParam0)
{
	struct<3> Var0;
	
	if (iParam0 == -1 || iParam0 == 159)
	{
		Var0 = 2;
		return Var0;
	}
	if (Global_1946934.f_13[iParam0 /*3*/][0] == -1)
	{
		Global_1946934.f_13[iParam0 /*3*/] = { func_251(iParam0) };
	}
	return Global_1946934.f_13[iParam0 /*3*/];
}

Vector3 func_251(int iParam0)
{
	struct<3> Var0;
	
	Var0 = 2;
	MISC::SET_BIT(&(Var0[0]), 7);
	MISC::SET_BIT(&(Var0[0]), 13);
	MISC::SET_BIT(&(Var0[0]), 6);
	MISC::SET_BIT(&(Var0[0]), 22);
	MISC::SET_BIT(&(Var0[0]), 20);
	MISC::SET_BIT(&(Var0[0]), 0);
	MISC::SET_BIT(&(Var0[0]), 3);
	MISC::SET_BIT(&(Var0[0]), 11);
	MISC::SET_BIT(&(Var0[0]), 1);
	MISC::SET_BIT(&(Var0[0]), 19);
	MISC::SET_BIT(&(Var0[0]), 4);
	MISC::SET_BIT(&(Var0[0]), 12);
	MISC::SET_BIT(&(Var0[1]), 0);
	MISC::SET_BIT(&(Var0[1]), 6);
	MISC::SET_BIT(&(Var0[1]), 10);
	MISC::SET_BIT(&(Var0[1]), 7);
	MISC::SET_BIT(&(Var0[1]), 20);
	MISC::SET_BIT(&(Var0[1]), 3);
	MISC::SET_BIT(&(Var0[1]), 21);
	return Var0;
}

bool func_252(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 16);
}

int func_253(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != func_8() && iParam1 != func_8())
	{
		iVar0 = func_225(iParam0);
		if (iVar0 != func_8())
		{
			return iVar0 == func_225(iParam1);
		}
	}
	return 0;
}

int func_254(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (func_255(iParam0, 1, 0) && func_255(iParam1, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/].f_267.f_31 == Global_1853128[iParam1 /*888*/].f_267.f_31 && Global_1853128[iParam0 /*888*/].f_267.f_30 == Global_1853128[iParam1 /*888*/].f_267.f_30)
		{
			if (!bParam2)
			{
				return 1;
			}
			else
			{
				if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 3) && MISC::IS_BIT_SET(Global_1853128[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
				if (!MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 3) && !MISC::IS_BIT_SET(Global_1853128[iParam1 /*888*/].f_267.f_28, 3))
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if ((((Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_7 > -1) && Global_2689156[iParam0 /*453*/].f_319.f_6 == Global_2689156[iParam1 /*453*/].f_319.f_6) && Global_2689156[iParam0 /*453*/].f_319.f_7 == Global_2689156[iParam1 /*453*/].f_319.f_7) && Global_2680195.f_903.f_168[iParam0] == Global_2680195.f_903.f_168[iParam1])
		{
			return 1;
		}
	}
	return 0;
}

int func_255(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0)
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (((((MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 2) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 3)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 5)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 6)) || MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_4, 7)) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_379.f_1, 1))
	{
		return 1;
	}
	return 0;
}

void func_257()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) <= 0)
	{
		return;
	}
	if (Global_1574980 != 58)
	{
		return;
	}
	if ((!MISC::IS_BIT_SET(Global_1058026.f_15, 19) && !MISC::IS_BIT_SET(Global_1058026.f_15, 20)) && !MISC::IS_BIT_SET(Global_1058026.f_15, 21))
	{
		return;
	}
	NETWORK::NETWORK_BAIL(1, 0, 0);
}

void func_258()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		if (Global_4718592.f_86750 == Global_262145.f_31343[1] && Global_1574954)
		{
			if (Global_1057979.f_5 == 0)
			{
				if (!iLocal_59)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
					iLocal_59 = 1;
				}
			}
			else if (iLocal_59)
			{
				NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				iLocal_59 = 0;
			}
		}
	}
}

void func_259()
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_controller_2020")) > 0)
	{
		func_262();
	}
	else
	{
		func_260();
	}
}

void func_260()
{
	int iVar0;
	
	if (iLocal_56 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		if (MISC::IS_BIT_SET(iLocal_56, iVar0))
		{
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_261(iVar0), false);
			MISC::CLEAR_BIT(&iLocal_56, iVar0);
		}
		iVar0++;
	}
	iLocal_57 = 0;
	Global_2785470 = 0;
}

char* func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RADIO_36_AUDIOPLAYER";
		
		case 1:
			return "RADIO_37_MOTOMAMI";
		
		case 2:
			return "RADIO_12_REGGAE";
		
		case 3:
			return "RADIO_15_MOTOWN";
		
		case 4:
			return "RADIO_16_SILVERLAKE";
		
		case 5:
			return "RADIO_17_FUNK";
		
		case 6:
			return "RADIO_18_90S_ROCK";
		
		case 7:
			return "RADIO_04_PUNK";
		
		case 8:
			return "RADIO_05_TALK_01";
		
		case 9:
			return "RADIO_06_COUNTRY";
		
		case 10:
			return "RADIO_07_DANCE_01";
		
		case 11:
			return "RADIO_08_MEXICAN";
		
		case 12:
			return "RADIO_35_DLC_HEI4_MLR";
		
		case 13:
			return "RADIO_13_JAZZ";
		
		case 14:
			return "RADIO_14_DANCE_02";
		
		case 15:
			return "RADIO_20_THELAB";
		
		case 16:
			return "RADIO_34_DLC_HEI4_KULT";
		
		case 17:
			return "RADIO_21_DLC_XM17";
		
		case 18:
			return "RADIO_22_DLC_BATTLE_MIX1_RADIO";
		
		case 19:
			return "RADIO_23_DLC_XM19_RADIO";
		
		case 20:
			return "RADIO_27_DLC_PRHEI4";
		
		case 21:
			return "RADIO_01_CLASS_ROCK";
		
		case 22:
			return "RADIO_02_POP";
		
		case 23:
			return "RADIO_03_HIPHOP_NEW";
		
		case 24:
			return "RADIO_09_HIPHOP_OLD";
		
		case 25:
			return "RADIO_11_TALK_02";
		
		default:
	}
	return "OFF";
}

void func_262()
{
	int iVar0;
	int iVar1;
	
	if (!func_263(Global_4718592.f_86750))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 25)
	{
		iVar1 = func_55(9876, -1, 0);
		if (!MISC::IS_BIT_SET(iLocal_57, iVar0))
		{
			if (MISC::IS_BIT_SET(iVar1, iVar0))
			{
			}
			MISC::SET_BIT(&iLocal_57, iVar0);
			AUDIO::_SET_RADIO_STATION_IS_VISIBLE(func_261(iVar0), true);
		}
		if (!MISC::IS_BIT_SET(iVar1, iVar0) && !MISC::IS_BIT_SET(iLocal_56, iVar0))
		{
			MISC::SET_BIT(&iLocal_56, iVar0);
			Global_2785470 = 1;
		}
		iVar0++;
	}
}

int func_263(int iParam0)
{
	if ((iParam0 == Global_262145.f_31350[0] || iParam0 == Global_262145.f_31350[1]) || iParam0 == Global_262145.f_31350[2])
	{
		return 1;
	}
	return 0;
}

void func_264()
{
	switch (Global_262145.f_30709)
	{
		case joaat("mamba"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,655f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("warrener2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,565f;
			Global_1966336 = -3,3f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("zr350"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,98f;
			Global_1966336 = -2,7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("futo2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,849f;
			Global_1966336 = -4f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator8"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,87f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("previon"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 1,025f;
			Global_1966336 = -3,1f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("growler"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,7f;
			Global_1966336 = -2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("jester4"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,725f;
			Global_1966336 = -2,9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("calico"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,735f;
			Global_1966336 = -2,9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("dominator7"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,735f;
			Global_1966336 = -2,9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("rt3000"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,695f;
			Global_1966336 = -2,7f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("tailgater2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,715f;
			Global_1966336 = -3,2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("cypher"):
			Global_1966333 = 0f;
			Global_1966334 = -1,61f;
			Global_1966335 = 0,755f;
			Global_1966336 = -5f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("sultan3"):
			Global_1966333 = 0f;
			Global_1966334 = -1,6f;
			Global_1966335 = 0,695f;
			Global_1966336 = -3,2f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("clique"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,655f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("ardent"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,655f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("euros"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,655f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("comet6"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,795f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("btype"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,695f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("comet7"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,675f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("sentinel2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,695f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("nero"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,81f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("rapidgt3"):
			Global_1966333 = 0f;
			Global_1966334 = -1,77f;
			Global_1966335 = 0,975f;
			Global_1966336 = -5,1f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("italigto"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,715f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("hakuchou2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,905f;
			Global_1966336 = -3,9f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("turismo2"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,985f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
		
		case joaat("zentorno"):
			Global_1966333 = 0f;
			Global_1966334 = -1,52f;
			Global_1966335 = 0,915f;
			Global_1966336 = -2,6f;
			Global_1966337 = 0f;
			Global_1966338 = 180f;
			break;
	}
}

void func_265()
{
	switch (func_266())
	{
		case joaat("mamba"):
			Global_1966321 = 0,53f;
			break;
		
		case joaat("growler"):
			Global_1966321 = 0,6f;
			break;
		
		case joaat("slamtruck"):
			Global_1966321 = 0,6f;
			break;
		
		case joaat("raiden"):
			Global_1966321 = 0,95f;
			break;
		
		case joaat("jugular"):
			Global_1966321 = 0,65f;
			break;
		
		case joaat("tampa2"):
			Global_1966321 = 0,65f;
			break;
		
		case joaat("t20"):
			Global_1966321 = 0,83f;
			break;
		
		case joaat("zion3"):
			Global_1966321 = 0,59f;
			break;
		
		case joaat("flashgt"):
			Global_1966321 = 0,75f;
			break;
		
		case joaat("retinue"):
			Global_1966321 = 0,62f;
			break;
		
		case joaat("torero"):
			Global_1966321 = 0,75f;
			break;
		
		case joaat("savestra"):
			Global_1966321 = 0,62f;
			break;
		
		case joaat("tailgater2"):
			Global_1966321 = 0,62f;
			break;
		
		case joaat("euros"):
			Global_1966321 = 0,6f;
			break;
	}
}

int func_266()
{
	return Global_262145.f_26423;
}

void func_267()
{
	var uVar0;
	var uVar3;
	
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_property")) < 1)
	{
		return;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return;
	}
	if (func_222(PLAYER::PLAYER_ID()) == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	func_268(&uVar0, &uVar3);
	if ((func_65(PLAYER::PLAYER_ID()) || Global_1946928 != 7) || !ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -1831,333f, 980,1857f, -29,846f, -2225,468f, 1241,217f, -9,4235f, false, true, 0))
	{
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			PAD::DISABLE_CONTROL_ACTION(2, 58, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(2, 51, true);
		}
	}
}

void func_268(var uParam0, var uParam1)
{
	*uParam0 = { -1831,333f, 980,1857f, -29,846f };
	*uParam1 = { -2225,468f, 1241,217f, -9,4235f };
}

void func_269()
{
	if (!func_270())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(2, 51, true);
}

int func_270()
{
	if (MISC::IS_BIT_SET(Global_1946934.f_3, 5))
	{
		return 1;
	}
	if ((func_271(PLAYER::PLAYER_ID()) && func_14()) && func_22(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1085,49f, 211,389f, -49,801f, 10f, 1))
	{
		return 1;
	}
	return 0;
}

int func_271(int iParam0)
{
	if (iParam0 != func_8())
	{
		if (func_7(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_69(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

void func_272()
{
	var uVar0;
	int iVar19;
	bool bVar20;
	int iVar21;
	
	switch (iLocal_54)
	{
		case 0:
			if (HUD::IS_WARNING_MESSAGE_ACTIVE() && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 444479190)
			{
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if ((((((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT()) || !func_10()) || func_9()) || !ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
			{
				iLocal_54 = 0;
				return;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_10 = func_8();
				MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
				MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
				iLocal_55 = Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17;
				func_282(0, -1);
				if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
				}
				iLocal_54 = 2;
				return;
			}
			if ((!HUD::IS_WARNING_MESSAGE_ACTIVE() || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 444479190) && !PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
			{
				iLocal_54 = 0;
			}
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
			MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
			func_282(0, -1);
			Global_1946934.f_4521.f_6 = iLocal_55;
			iLocal_54 = 3;
			break;
		
		case 3:
			if (Global_1946934.f_4521.f_6 == -1)
			{
				if (((func_28(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && func_10()) && !func_9())
				{
					iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_28(iVar19))
					{
						iVar21 = ENTITY::GET_ENTITY_MODEL(iVar19);
						func_279(iLocal_55, &uVar0);
						if (!func_273(&uVar0, iVar19, iVar21, 0))
						{
							bVar20 = true;
						}
					}
					else
					{
						bVar20 = true;
					}
				}
				else
				{
					bVar20 = true;
				}
				if (bVar20)
				{
					MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_1), 31);
					MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_5), 15);
					MISC::CLEAR_BIT(&(Global_1946934.f_4521.f_1), 9);
					func_282(0, -1);
					iLocal_54 = 0;
				}
			}
			break;
	}
}

int func_273(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	struct<3> Var36;
	struct<3> Var39;
	
	func_278(iParam1, iParam2, &Var0, &Var3, &Var6, &Var9);
	func_277(iParam1, iParam2, &Var12, &Var15, &Var18, &Var21);
	Var24 = { func_275(Var12, Var0, 0f, 1f, 0,5f) };
	Var27 = { func_275(Var15, Var3, 0f, 1f, 0,5f) };
	Var30 = { func_275(Var18, Var6, 0f, 1f, 0,5f) };
	Var33 = { func_275(Var21, Var9, 0f, 1f, 0,5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var24, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var27, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_274(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	Var36 = { func_275(Var12, Var15, 0f, 1f, 0,5f) };
	Var39 = { func_275(Var0, Var3, 0f, 1f, 0,5f) };
	if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var36, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var39, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_274(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || iParam3)
		{
			return 1;
		}
	}
	else if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var30, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true) || OBJECT::IS_POINT_IN_ANGLED_AREA(Var33, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true))
	{
		if (func_274(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f) || iParam3)
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, uParam0->f_7, uParam0->f_10, uParam0->f_13, false, true, 0))
	{
		if ((func_274(ENTITY::GET_ENTITY_HEADING(iParam1), uParam0->f_14, 75f) || func_274(ENTITY::GET_ENTITY_HEADING(iParam1), (uParam0->f_14 - 180f), 75f)) || iParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_274(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

Vector3 func_275(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8)
{
	return func_276(Param0.f_0, Param3.f_0, fParam6, fParam7, fParam8), func_276(Param0.f_1, Param3.f_1, fParam6, fParam7, fParam8), func_276(Param0.f_2, Param3.f_2, fParam6, fParam7, fParam8);
}

float func_276(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	return ((((fParam1 - fParam0) / (fParam3 - fParam2)) * (fParam4 - fParam2)) + fParam0);
}

void func_277(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	struct<2> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var0.f_2;
	Var9.f_0 = Var3.f_0;
	Var9.f_1 = Var3.f_1;
	Var9.f_2 = Var0.f_2;
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var0.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var0.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_278(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	struct<2> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	MISC::GET_MODEL_DIMENSIONS(iParam1, &Var0, &Var3);
	Var6.f_0 = Var0.f_0;
	Var6.f_1 = Var3.f_1;
	Var6.f_2 = Var3.f_2;
	Var9 = { Var3 };
	Var12.f_0 = Var0.f_0;
	Var12.f_1 = Var0.f_1;
	Var12.f_2 = Var3.f_2;
	Var15.f_0 = Var3.f_0;
	Var15.f_1 = Var0.f_1;
	Var15.f_2 = Var3.f_2;
	*uParam2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var6) };
	*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var9) };
	*uParam4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var12) };
	*uParam5 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var15) };
}

void func_279(int iParam0, var uParam1)
{
	func_280(iParam0, &(uParam1->f_4), &(uParam1->f_7), &(uParam1->f_10), &(uParam1->f_13), &(uParam1->f_14));
	uParam1->f_2 = 1;
	MISC::SET_BIT(&(uParam1->f_3), 6);
	MISC::SET_BIT(&(uParam1->f_3), 0);
	MISC::SET_BIT(&(uParam1->f_3), 2);
	MISC::SET_BIT(&(uParam1->f_3), 4);
}

void func_280(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	*uParam1 = { func_281(iParam0) };
	switch (iParam0)
	{
		case 149:
			*uParam2 = { 758,6912f, -679,8961f, 28,2984f };
			*uParam3 = { 758,7398f, -675,8193f, 31,3893f };
			*uParam4 = 3,25f;
			*uParam5 = 90f;
			break;
		
		case 150:
			*uParam2 = { -146,3092f, -1341,069f, 28,9145f };
			*uParam3 = { -148,563f, -1341,091f, 32,5145f };
			*uParam4 = 2,75f;
			*uParam5 = 0f;
			break;
		
		case 151:
			*uParam2 = { -173,2224f, -35,69027f, 53,21325f };
			*uParam3 = { -172,0434f, -31,97755f, 51,22238f };
			*uParam4 = 2,5f;
			*uParam5 = 70f;
			break;
		
		case 152:
			*uParam2 = { 231,3824f, -1875,309f, 25,5283f };
			*uParam3 = { 234,1484f, -1871,995f, 28,9791f };
			*uParam4 = 2,25f;
			*uParam5 = 50f;
			break;
		
		case 153:
			*uParam2 = { 488,2599f, -896,563f, 24,7408f };
			*uParam3 = { 488,2544f, -893,4431f, 28,0041f };
			*uParam4 = 2,25f;
			*uParam5 = 85f;
			break;
	}
}

Vector3 func_281(int iParam0)
{
	switch (iParam0)
	{
		case 149:
			return 759,36f, -675,13f, 27,86f;
			break;
		
		case 150:
			return -144,58f, -1341,37f, 28,87f;
			break;
		
		case 151:
			return -171f, -31,4f, 51,27f;
			break;
		
		case 152:
			return 231,54f, -1875,7f, 25,41f;
			break;
		
		case 153:
			return 488,98f, -897,41f, 24,79f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_282(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
		{
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319), 5);
			if (iParam1 != -1)
			{
				func_283(1, iParam1);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
	{
		MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319), 5);
		func_283(0, -1);
	}
}

void func_283(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17 = iParam1;
	}
	else
	{
		Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_17 = -1;
	}
}

void func_284()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2723433.f_3)
	{
		switch (iLocal_51)
		{
			case 0:
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					return;
				}
				if (Global_1946934.f_496 && func_287(Global_1946934.f_3369))
				{
					func_285(1);
					iLocal_51 = 1;
				}
				break;
			
			case 1:
				func_285(1);
				if ((!func_9() && func_10()) && Global_1946928 == 7)
				{
					bVar0 = true;
				}
				else if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					bVar0 = true;
				}
				else if ((func_10() && !func_64(PLAYER::PLAYER_ID())) && !func_6(PLAYER::PLAYER_ID()))
				{
					bVar0 = true;
				}
				if (func_103() == 37 && Global_262145.f_10513)
				{
					func_27(&uLocal_52, 1, 0);
				}
				if (bVar0)
				{
					iLocal_51 = 2;
				}
				break;
			
			case 2:
				func_285(0);
				iLocal_51 = 0;
				break;
		}
	}
	else if (iLocal_51 != 0)
	{
		func_285(0);
		iLocal_51 = 0;
	}
	if (func_26(&uLocal_52))
	{
		if (func_37(&uLocal_52, 20000, 1))
		{
			func_29(&uLocal_52);
			Global_262145.f_10513 = 1;
		}
		else
		{
			Global_262145.f_10513 = 0;
		}
	}
}

void func_285(bool bParam0)
{
	func_286(bParam0);
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946934.f_9), 21);
		MISC::SET_BIT(&(Global_1946934.f_9), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946934.f_9), 21);
		MISC::CLEAR_BIT(&(Global_1946934.f_9), 20);
	}
}

void func_286(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1946934.f_4), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946934.f_4), 7);
	}
}

int func_287(int iParam0)
{
	if ((((iParam0 == 151 || iParam0 == 149) || iParam0 == 153) || iParam0 == 152) || iParam0 == 150)
	{
		return 1;
	}
	return 0;
}

void func_288()
{
	switch (iLocal_50)
	{
		case 0:
			if (MISC::IS_BIT_SET(Global_1946934, 6))
			{
				if (MISC::IS_BIT_SET(Global_2703656.f_75.f_60, 0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) > 0)
				{
					iLocal_50 = 1;
				}
			}
			break;
		
		case 1:
			if (Global_1574580.f_1)
			{
				iLocal_50 = 2;
			}
			else if (func_296())
			{
				iLocal_50 = 0;
			}
			break;
		
		case 2:
			if (!Global_1574580.f_1)
			{
				iLocal_50 = 0;
			}
			else if (func_296())
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			iLocal_50 = 0;
			if (Global_1574580.f_1)
			{
				func_289();
			}
			break;
	}
}

void func_289()
{
	if (Global_1574580.f_1 == 1)
	{
		func_290(7, 0, 1);
		Global_1574580.f_1 = 0;
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_9 = 0;
	}
}

void func_290(int iParam0, int iParam1, bool bParam2)
{
	if (func_295())
	{
		if (iParam1 == 1)
		{
			if (Global_2810287.f_4462 == -1)
			{
				Global_2810287.f_4462 = Global_262145.f_26832;
			}
			func_38(&(Global_2810287.f_4460), 0, 0);
			if (bParam2)
			{
				if (Global_2810287.f_4465 == -1)
				{
					Global_2810287.f_4465 = Global_262145.f_26833;
				}
				func_38(&(Global_2810287.f_4463), 0, 0);
			}
			else
			{
				Global_1574580 = 0;
				Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_8 = 0;
				func_294(1);
			}
		}
		else
		{
			Global_1574580 = 0;
			Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_8 = 0;
			func_294(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_293()) && !func_291(PLAYER::PLAYER_ID()))
		{
			Global_1057404 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_291(int iParam0)
{
	if (func_292(iParam0, 1))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_292(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_208(iParam0))
		{
			return 1;
		}
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_293()
{
	return Global_2714627.f_840;
}

void func_294(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_295())
		{
			if (func_7(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
			{
				Global_1574580.f_2 = 0;
				if (bParam0)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(false, false);
				}
			}
		}
		else
		{
			if (func_7(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0,5f);
				if (Global_1574580.f_1 == 0 || Global_1574580.f_2 == 1)
				{
					NETWORK::_SET_LOCAL_PLAYER_AS_GHOST(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

bool func_295()
{
	return Global_1574580;
}

bool func_296()
{
	return (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_car_meet_sandbox")) <= 0 && !func_297(PLAYER::PLAYER_ID()));
}

int func_297(int iParam0)
{
	if (iParam0 != func_8())
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319.f_5, 6);
	}
	return 0;
}

void func_298()
{
	int iVar0;
	
	if (func_68(PLAYER::PLAYER_ID()))
	{
		if (Global_2810287.f_5193.f_765)
		{
			iVar0 = func_300();
			if ((iVar0 != -1 && iVar0 <= 5000) && !func_26(&uLocal_48))
			{
				func_38(&uLocal_48, 1, 0);
				func_299(1, 1);
			}
		}
	}
	if (func_26(&uLocal_48))
	{
		if (func_37(&uLocal_48, 10000, 1))
		{
			func_29(&uLocal_48);
			func_299(0, 0);
		}
	}
}

void func_299(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!Global_1964897 && bParam0)
		{
			Global_1964897 = 1;
			iLocal_46 = 1;
		}
	}
	else
	{
		if (Global_1964897 && iLocal_46)
		{
			Global_1964897 = 0;
		}
		iLocal_46 = 0;
	}
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_1946934.f_3, 5))
		{
			MISC::SET_BIT(&(Global_1946934.f_3), 5);
			iLocal_47 = 1;
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Global_1946934.f_3, 5) && iLocal_47)
		{
			MISC::CLEAR_BIT(&(Global_1946934.f_3), 5);
		}
		iLocal_47 = 0;
	}
}

int func_300()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (func_301(7, iVar0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) && MISC::GET_HASH_KEY(&(Global_1645739.f_4617.f_11[iVar0 /*16*/])) == 1444771325)
			{
				return Global_1645739.f_4617[iVar0];
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_301(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1645739.f_6736[iParam0], iParam1);
}

void func_302()
{
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return;
	}
	if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319, 5))
	{
		if ((HUD::IS_WARNING_MESSAGE_ACTIVE() && (HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == 15890625 || HUD::_GET_WARNING_MESSAGE_TITLE_HASH() == -862848537)) && HUD::_GET_WARNING_MESSAGE_TITLE_HASH() != 0)
		{
			NETWORK::NETWORK_BAIL(0, 0, 0);
		}
	}
}

void func_303()
{
	if (func_308())
	{
		if (!iLocal_40)
		{
			func_83(45, 1, 1);
			iLocal_40 = 1;
		}
	}
	else if (iLocal_40)
	{
		func_80(45, 1, 1);
		iLocal_40 = 0;
		func_29(&uLocal_41);
	}
	if (func_304())
	{
		if (!iLocal_45)
		{
			Global_1965072 = 1;
			iLocal_45 = 1;
		}
	}
	else if (iLocal_45)
	{
		Global_1965072 = 0;
		iLocal_45 = 0;
		func_29(&uLocal_43);
	}
}

int func_304()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_68(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 235;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 58;
	}
	if (func_16("CM_PV_MEM") || func_16("CM_PV_MEM_PC"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
		{
			func_38(&uLocal_43, 0, 0);
			return 1;
		}
	}
	if (func_26(&uLocal_43) && !func_37(&uLocal_43, 3000, 0))
	{
		return 1;
	}
	if (func_28(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_307(iVar1, 1))
		{
			iVar2 = func_305(iVar1);
			if ((iVar2 != func_8() && iVar2 != PLAYER::PLAYER_ID()) && MISC::IS_BIT_SET(Global_2689156[iVar2 /*453*/].f_319.f_4, 25))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_305(int iParam0)
{
	int iVar0;
	
	if (!func_307(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_306(iVar0, 0, 1, 0);
}

int func_306(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_7(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_7(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_307(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_308()
{
	int iVar0;
	
	if (!func_68(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	iVar0 = 201;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 223;
	}
	if (!func_16("CM_PV_MEM") && !func_16("CM_PV_MEM_PC"))
	{
		return 1;
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, iVar0))
	{
		func_38(&uLocal_41, 0, 0);
		return 1;
	}
	if (func_14() && MISC::ARE_STRINGS_EQUAL(&(Global_22830.f_1), "INST_MENU_TTL"))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
		{
			func_38(&uLocal_41, 0, 0);
			return 1;
		}
	}
	if (func_26(&uLocal_41) && !func_37(&uLocal_41, 3000, 0))
	{
		return 1;
	}
	return 0;
}

void func_309()
{
	if ((Global_111861 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) <= 0) && func_10())
	{
		NETWORK::SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME();
	}
}

void func_310()
{
	int iVar0;
	
	if (!iLocal_6)
	{
		if (Global_1836379)
		{
			iVar0 = func_311(joaat("mpply_char_exploit_level"));
			if (iVar0 >= 4)
			{
				Global_262145.f_10384 = 1;
			}
			iLocal_6 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_6 = 0;
	}
}

int func_311(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_312()
{
	if (!iLocal_5)
	{
		if (Global_1836379)
		{
			if (func_314() || func_313())
			{
				Global_262145.f_19963 = 1;
			}
			else
			{
				Global_262145.f_19963 = 0;
			}
			iLocal_5 = 1;
		}
	}
	else if (!Global_1836379)
	{
		iLocal_5 = 0;
	}
}

int func_313()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_311(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10493)
	{
		return 0;
	}
	uVar1[0] = func_311(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_311(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_311(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_311(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10489 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10493)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

int func_314()
{
	int iVar0;
	var uVar1[4];
	int iVar6;
	
	iVar0 = func_311(joaat("mpply_char_peak_exploit_level"));
	if (iVar0 < Global_262145.f_10492)
	{
		return 0;
	}
	uVar1[0] = func_311(joaat("mpply_prevseasonexploitlevel"));
	uVar1[1] = func_311(joaat("mpply_prevseason2exploitlevel"));
	uVar1[2] = func_311(joaat("mpply_prevseason3exploitlevel"));
	uVar1[3] = func_311(joaat("mpply_prevseason4exploitlevel"));
	iVar6 = 0;
	while (iVar6 < (Global_262145.f_10488 - 1))
	{
		if (uVar1[iVar6] < Global_262145.f_10492)
		{
			return 0;
		}
		iVar6++;
	}
	return 1;
}

void func_315()
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < Global_1853128)
		{
			MISC::SET_BIT(&(Global_1853128[iVar0 /*888*/].f_766), 1);
			iVar0++;
		}
	}
}

void func_316()
{
	if (Global_262145.f_10468 != 120)
	{
		Global_262145.f_10468 = 120;
	}
}

void func_317()
{
	if (iLocal_1)
	{
		HUD::SET_TEXT_SCALE(0f, 0,23f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
		func_318(0,69f, 0,06f, "STRING", sLocal_0);
	}
	if (!iLocal_1)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			switch (iLocal_2)
			{
				case 0:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 1:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 2:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 3:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
					{
						iLocal_2++;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				
				case 4:
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
					{
						iLocal_1 = 1;
						SYSTEM::SETTIMERA(0);
					}
					else if (SYSTEM::TIMERA() > 2000)
					{
						iLocal_2 = 0;
					}
					break;
				}
		}
	}
	else if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		switch (iLocal_2)
		{
			case 0:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 188))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 1:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 2:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 3:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 190))
				{
					iLocal_2++;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			
			case 4:
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 189))
				{
					iLocal_1 = 0;
					SYSTEM::SETTIMERA(0);
				}
				else if (SYSTEM::TIMERA() > 2000)
				{
					iLocal_2 = 0;
				}
				break;
			}
	}
}

void func_318(float fParam0, float fParam1, char* sParam2, char* sParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

bool func_319()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

