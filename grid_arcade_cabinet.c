#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = -1;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	float fLocal_76 = 0f;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	float fLocal_79 = 0f;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	int iLocal_102 = 0;
	var uLocal_103 = 0;
	float fLocal_104 = 0f;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	var uLocal_149 = 0;
	int iLocal_150 = 0;
	struct<22> Local_151 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<453> Local_173 = { 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 0, 255, 0, 0, 4, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -1, 0, 0, -2147483647, -1, 4, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, -1, 0, 0, -2147483647, -1, 4, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -2147483647, 0, -1, 0, 4, 0, 0, 0, 0, 0, -1, 0, -1, -2147483647, 0, -1, -1, -2147483647, 0, -2147483647, 0, 0, 0, -2147483647, -1, -1, 0, 0, 0, 0, 0, 1073741824, -1073741824, 0, 0 } ;
	struct<166> Local_626 = { 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 6, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 7, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -1, -1, -2147483647, -2147483647, 4, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, -2147483647, -2147483647, 3, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, -2147483647, 0, 0, 0, 10 } ;
	var uLocal_792 = 0;
	var uLocal_793 = -1;
	var uLocal_794 = -1;
	var uLocal_795 = 0;
	var uLocal_796 = -1;
	var uLocal_797 = -1;
	var uLocal_798 = 0;
	var uLocal_799 = -1;
	var uLocal_800 = -1;
	var uLocal_801 = 0;
	var uLocal_802 = -1;
	var uLocal_803 = -1;
	var uLocal_804 = 0;
	var uLocal_805 = -1;
	var uLocal_806 = -1;
	var uLocal_807 = 0;
	var uLocal_808 = -1;
	var uLocal_809 = -1;
	var uLocal_810 = 0;
	var uLocal_811 = -1;
	var uLocal_812 = -1;
	var uLocal_813 = 0;
	var uLocal_814 = -1;
	var uLocal_815 = -1;
	var uLocal_816 = 0;
	var uLocal_817 = -1;
	var uLocal_818 = -1;
	var uLocal_819 = 0;
	var uLocal_820 = -1;
	var uLocal_821 = -1;
	var uLocal_822 = 4;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	int iLocal_827[4] = { 0, 0, 0, 0 };
	struct<9> Local_832[4];
	struct<16> Local_869[4];
	struct<37> Local_934[4];
	struct<17> Local_1083 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0 } ;
	var uLocal_1100 = 255;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 255;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 255;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 255;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 255;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 255;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 255;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 255;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 255;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 255;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 255;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 255;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 255;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 255;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 255;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0,001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0,0375f;
	fLocal_33 = 0,17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_62 = ((0,05f + 0,275f) - 0,01f);
	fLocal_76 = 3f;
	fLocal_77 = 0f;
	fLocal_78 = 2f;
	fLocal_79 = 100f;
	iLocal_102 = -1;
	fLocal_104 = 0,5f;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_401(ScriptParam_0);
	}
	while (true)
	{
		func_400();
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_51();
		}
		else
		{
			func_13();
		}
		if (func_1())
		{
			func_13();
		}
	}
}

int func_1()
{
	var uVar0;
	
	func_9(&uVar0);
	if (Global_1575022 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_8())
	{
		return 1;
	}
	if (Global_2727476)
	{
		return 1;
	}
	if (func_7())
	{
		return 1;
	}
	if (func_6(159))
	{
		if (!func_5())
		{
			return 1;
		}
	}
	if (func_6(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_2() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_2()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_2()
{
	switch (func_4())
	{
		case 0:
			return func_3();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_3()
{
	switch (Global_2727578)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_4()
{
	return Global_31505;
}

bool func_5()
{
	return Global_2714627.f_698;
}

int func_6(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_7()
{
	return Global_2725224;
}

bool func_8()
{
	return Global_2714627.f_693;
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -1537646326:
					func_10(iVar0);
					break;
				
				case 801199324:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 848999011)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_10(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_12(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_11(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_11(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_12(int iParam0, bool bParam1, bool bParam2)
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

void func_13()
{
	func_15();
	func_14();
}

void func_14()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_15()
{
	int iVar0;
	
	if (func_50())
	{
		Local_151.f_16 = 1;
	}
	Local_151.f_21 = func_47();
	func_46();
	func_24();
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGrid");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridTiles");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerBlue");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerGreen");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerPurple");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridPlayerYellow");
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPArcadeCabinetGridHUD");
	HUD::CLEAR_ADDITIONAL_TEXT(3, true);
	if (Local_173.f_427 != 0)
	{
		GRAPHICS::_RELEASE_BINK_MOVIE(Local_173.f_427);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_22(func_23(4));
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_173.f_281[iVar0 /*7*/].f_5 >= 0)
		{
			AUDIO::STOP_SOUND(Local_173.f_281[iVar0 /*7*/].f_5);
			AUDIO::RELEASE_SOUND_ID(Local_173.f_281[iVar0 /*7*/].f_5);
		}
		if (Local_173.f_281[iVar0 /*7*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_173.f_281[iVar0 /*7*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_173.f_281[iVar0 /*7*/].f_6);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_173.f_204[iVar0 /*19*/].f_7 >= 0)
		{
			AUDIO::STOP_SOUND(Local_173.f_204[iVar0 /*19*/].f_7);
			AUDIO::RELEASE_SOUND_ID(Local_173.f_204[iVar0 /*19*/].f_7);
		}
		if (Local_173.f_204[iVar0 /*19*/].f_6 >= 0)
		{
			AUDIO::STOP_SOUND(Local_173.f_204[iVar0 /*19*/].f_6);
			AUDIO::RELEASE_SOUND_ID(Local_173.f_204[iVar0 /*19*/].f_6);
		}
		if (Local_173.f_204[iVar0 /*19*/].f_8 >= 0)
		{
			AUDIO::STOP_SOUND(Local_173.f_204[iVar0 /*19*/].f_8);
			AUDIO::RELEASE_SOUND_ID(Local_173.f_204[iVar0 /*19*/].f_8);
		}
		iVar0++;
	}
	if (Local_173.f_178.f_4 >= 0)
	{
		AUDIO::STOP_SOUND(Local_173.f_178.f_4);
		AUDIO::RELEASE_SOUND_ID(Local_173.f_178.f_4);
	}
	if (Local_173.f_428 >= 0)
	{
		AUDIO::STOP_SOUND(Local_173.f_428);
		AUDIO::RELEASE_SOUND_ID(Local_173.f_428);
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW");
	func_20();
	func_19(12);
	Global_1932182 = 0;
	Global_1932182.f_1 = 0;
	func_16(0);
	func_14();
}

void func_16(bool bParam0)
{
	if (bParam0)
	{
		if (!func_17(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_429), 4);
		}
	}
	else if (func_17(PLAYER::PLAYER_ID()))
	{
		MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_429), 4);
	}
}

int func_17(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_429, 4);
	}
	return 0;
}

int func_18()
{
	return -1;
}

void func_19(int iParam0)
{
	Local_173.f_140 = iParam0;
}

void func_20()
{
	Local_173.f_442 = -1;
	Local_173.f_421 = 0;
	if (Local_173.f_418 != -2147483647)
	{
		Local_173.f_418 = -2147483647;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_173.f_419))
	{
		Local_173.f_419 = func_21();
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(true);
	}
}

var func_21()
{
	var uVar0;
	
	return uVar0;
}

void func_22(char* sParam0)
{
	AUDIO::TRIGGER_MUSIC_EVENT(sParam0);
}

char* func_23(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CASINO_TW_TITLE_START";
		
		case 1:
			return "CASINO_TW_GAMEPLAY";
		
		case 2:
			return "CASINO_TW_MID_ROUND";
		
		case 3:
			return "CASINO_TW_SUDDEN_DEATH";
		
		case 4:
			return "CASINO_TW_STOP_MUSIC";
		
		default:
	}
	return "INVALID MUSIC EVENT";
}

void func_24()
{
	Global_1637065 = 0;
	func_44();
	Global_4718592.f_132413 = 0;
	func_43();
	MISC::CLEAR_BIT(&(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887), 16);
	func_42(0, 1, 1, 0);
	func_41();
	if (func_39() && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_26(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		else
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		}
	}
	func_25(0, 0, -1);
	func_25(1, 0, -1);
	func_25(2, 0, -1);
	func_25(3, 0, -1);
	func_25(4, 0, -1);
	func_25(6, 0, -1);
	func_25(7, 0, -1);
	func_25(8, 0, -1);
	func_25(9, 0, -1);
	func_25(10, 0, -1);
	func_25(11, 0, -1);
	func_25(12, 0, -1);
	func_25(13, 0, -1);
	func_25(14, 0, -1);
	func_25(15, 0, -1);
	func_25(16, 0, -1);
}

void func_25(int iParam0, bool bParam1, int iParam2)
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
			{
				Global_1644209.f_137[iParam2] = bParam1;
			}
			break;
		
		default:
			if (bParam1)
			{
				MISC::SET_BIT(&(Global_1644209.f_1046), iParam0);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_1644209.f_1046), iParam0);
			}
			break;
	}
}

void func_26(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	if (func_38())
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
		if (!func_39())
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
				else if (bVar14 || (!func_35(PLAYER::PLAYER_ID(), 0) && !func_34()))
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
					func_31(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_30(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					func_29();
					func_28();
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
				if (!func_30(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
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
					if (func_27(Global_4718592.f_138117))
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

bool func_27(int iParam0)
{
	return iParam0 == 17;
}

void func_28()
{
	struct<3> Var0;
	
	Global_2703656.f_924 = 0;
	Global_2703656.f_925 = 0;
	Global_2703656.f_926 = { 9999,9f, 9999,9f, 9999,9f };
	Global_2703656.f_931 = -1;
	Global_2703656.f_932 = 0;
	Global_2667222.f_2690 = { Var0 };
}

void func_29()
{
	Global_2667222.f_701 = 0;
	Global_2667222.f_2733 = 0;
	Global_2667222.f_514 = 0;
	Global_2667222.f_605 = 0;
	Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_216 = 0;
	Global_2667222.f_2688 = 0;
}

int func_30(int iParam0)
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

void func_31(bool bParam0, int iParam1, int iParam2)
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
				func_33();
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
		if (func_35(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_32(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_32(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_33()
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

bool func_34()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

bool func_35(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_36(-1, 0) == 8;
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

int func_36(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_37();
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

int func_37()
{
	return Global_1574907;
}

int func_38()
{
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887, 2) && !Global_2715542.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_39()
{
	if (func_40() == 0)
	{
		return 1;
	}
	return 0;
}

int func_40()
{
	return Global_1574629.f_18;
}

void func_41()
{
	if (Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 0;
	}
}

int func_42(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != bParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(bParam0, bParam1, true, bParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_43()
{
	if (Global_1932662)
	{
	}
	Global_1932662 = 0;
}

void func_44()
{
	if (!Global_1574737)
	{
		return;
	}
	func_45();
}

void func_45()
{
	Global_1574737 = 0;
	StringCopy(&(Global_1574737.f_1), "", 32);
	Global_1574737.f_9 = 0;
}

void func_46()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_151))
	{
		return;
	}
	if (Local_151.f_19 == 0)
	{
		return;
	}
	Local_151.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_151.f_19);
	unk_0xC9E0752C5AF51DC0(MISC::GET_HASH_KEY(&Local_151), Local_151.f_16, Local_151.f_17, Local_151.f_18, Local_151.f_19, Local_151.f_20, Local_151.f_21);
}

int func_47()
{
	if (PLAYER::PLAYER_ID() != func_18())
	{
		switch (func_48())
		{
			case 17:
				return 2003554330;
				break;
			
			case 15:
				return 729976867;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_48()
{
	return func_49(Global_1946934.f_503);
}

int func_49(int iParam0)
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

int func_50()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_934[iVar0 /*37*/].f_25)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_51()
{
	func_357();
	func_103();
	func_55();
	func_52();
}

void func_52()
{
	func_54();
	if (!func_53())
	{
		HUD::HIDE_HELP_TEXT_THIS_FRAME();
	}
}

bool func_53()
{
	return MISC::IS_BIT_SET(Local_173.f_417, 0);
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_934[iVar0 /*37*/].f_25)
		{
			Local_832[iVar0 /*9*/] = { Local_934[iVar0 /*37*/] };
			Local_869[iVar0 /*16*/] = { Local_934[iVar0 /*37*/].f_9 };
		}
		iVar0++;
	}
}

void func_55()
{
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	switch (Local_626.f_145)
	{
		case 0:
			func_101();
			break;
		
		case 1:
			func_95();
			break;
		
		case 2:
			func_89();
			break;
		
		case 3:
			func_88();
			break;
		
		case 4:
			func_68();
			break;
		
		case 5:
			func_56();
			break;
		
		case 6:
			break;
		
		case 7:
			break;
	}
}

void func_56()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_626.f_147 + 5000)
	{
		return;
	}
	if (func_67())
	{
		func_66(2);
		return;
	}
	func_57();
	func_66(6);
}

void func_57()
{
	struct<3> Var0;
	int iVar43;
	
	Var0 = 14;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_1.f_3.f_1 = -1;
	Var0.f_1.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	Var0.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	iVar43 = 0;
	while (iVar43 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar43)) && !Local_934[iVar43 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar43 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Var0[iVar43 /*3*/] = Local_832[iVar43 /*9*/].f_7;
			Var0[iVar43 /*3*/].f_1 = Local_832[iVar43 /*9*/].f_8;
			Var0[iVar43 /*3*/].f_2 = iVar43;
		}
		iVar43++;
	}
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Var0[iVar43 + 4 /*3*/] = Local_626.f_165[iVar43 /*3*/];
		Var0[iVar43 + 4 /*3*/].f_2 = Local_626.f_165[iVar43 /*3*/].f_2;
		Var0[iVar43 + 4 /*3*/].f_1 = Local_626.f_165[iVar43 /*3*/].f_1;
		iVar43++;
	}
	func_65(&Var0, 0, 13);
	iVar43 = 0;
	while (iVar43 <= 9)
	{
		Local_626.f_165[iVar43 /*3*/] = Var0[iVar43 /*3*/];
		Local_626.f_165[iVar43 /*3*/].f_2 = Var0[iVar43 /*3*/].f_2;
		Local_626.f_165[iVar43 /*3*/].f_1 = Var0[iVar43 /*3*/].f_1;
		func_58(func_60(PLAYER::PLAYER_ID()), 0, iVar43, Local_626.f_165[iVar43 /*3*/], Local_626.f_165[iVar43 /*3*/].f_1, 0);
		iVar43++;
	}
}

void func_58(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5)
{
	struct<7> Var0;
	int iVar7;
	
	Var0.f_0 = -1605670950;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam2;
	Var0.f_4 = uParam3;
	Var0.f_5 = uParam4;
	Var0.f_6 = iParam5;
	iVar7 = func_59(iParam0);
	if (!iVar7 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iVar7);
	}
}

var func_59(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_60(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_18())
	{
		return iParam0;
	}
	if (func_64(iParam0) != -1)
	{
		iVar0 = func_49(func_64(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_62(iParam0, 0))
			{
				return func_61(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_18();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_18();
}

int func_61(int iParam0)
{
	if (iParam0 != func_18())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_18();
}

bool func_62(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_63(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_18();
}

int func_63(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_18())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_64(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_12(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_12(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

void func_65(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar2 = (uParam0[((iParam1 + iParam2) / 2) /*3*/])->f_1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((uParam0[iVar0 /*3*/])->f_1 > iVar2 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (iVar2 > (uParam0[iVar1 /*3*/])->f_1 && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3.f_0 = (*uParam0)[iVar0 /*3*/];
			Var3.f_2 = (uParam0[iVar0 /*3*/])->f_2;
			Var3.f_1 = (uParam0[iVar0 /*3*/])->f_1;
			(*uParam0)[iVar0 /*3*/] = (*uParam0)[iVar1 /*3*/];
			(uParam0[iVar0 /*3*/])->f_2 = (uParam0[iVar1 /*3*/])->f_2;
			(uParam0[iVar0 /*3*/])->f_1 = (uParam0[iVar1 /*3*/])->f_1;
			(*uParam0)[iVar1 /*3*/] = Var3.f_0;
			(uParam0[iVar1 /*3*/])->f_2 = Var3.f_2;
			(uParam0[iVar1 /*3*/])->f_1 = Var3.f_1;
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_65(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_65(uParam0, iParam1, iVar1);
	}
}

void func_66(int iParam0)
{
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	Local_626.f_145 = iParam0;
}

int func_67()
{
	int iVar0;
	int iVar1;
	
	if (Local_173.f_148 <= 1)
	{
		return 0;
	}
	if (Local_626.f_137 >= Local_626.f_138)
	{
		return 0;
	}
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(Local_626.f_138) / 2f));
	if (Local_626.f_137 > iVar0)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_934[iVar1 /*37*/].f_25)
			{
			}
			else if (Local_832[iVar1 /*9*/].f_6 == -1)
			{
			}
			else if (Local_626.f_139[Local_832[iVar1 /*9*/].f_6] > iVar0)
			{
				return 0;
			}
			iVar1++;
		}
	}
	return 1;
}

void func_68()
{
	int iVar0;
	
	func_82();
	func_77(0, 0);
	func_73();
	if (!func_72())
	{
		return;
	}
	iVar0 = func_70();
	if (iVar0 == -1)
	{
		func_77(1, 1);
		Local_626.f_162 = 1;
		return;
	}
	Local_626.f_139[Local_832[iVar0 /*9*/].f_6]++;
	Local_626.f_131[Local_626.f_137] = iVar0;
	Local_626.f_137++;
	Local_626.f_147 = NETWORK::GET_NETWORK_TIME();
	if (!func_67())
	{
		Local_626.f_130 = func_69();
	}
	func_66(5);
}

int func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_934[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (Local_626.f_139[Local_832[iVar2 /*9*/].f_6] > iVar1)
		{
			iVar0 = iVar2;
			iVar1 = Local_626.f_139[Local_832[iVar2 /*9*/].f_6];
		}
		else if (iVar0 > -1 && Local_626.f_139[Local_832[iVar2 /*9*/].f_6] == iVar1)
		{
			if (Local_832[iVar2 /*9*/].f_8 + iLocal_827[Local_832[iVar2 /*9*/].f_6]) > (Local_832[iVar0 /*9*/].f_8 + iLocal_827[Local_832[iVar0 /*9*/].f_6])
			{
				iVar0 = iVar2;
			}
		}
		iVar2++;
	}
	return iVar0;
}

int func_70()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_934[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			if (!Local_626.f_163)
			{
				if (Local_626.f_162 && func_71(iVar2))
				{
				}
				else
				{
					if (Local_626.f_162)
					{
						iVar4 = 0;
					}
					if (iLocal_827[Local_832[iVar2 /*9*/].f_6] > iVar1)
					{
						iVar0 = iVar2;
						iVar1 = iLocal_827[Local_832[iVar2 /*9*/].f_6];
						iVar3 = 0;
					}
					else if (iLocal_827[Local_832[iVar2 /*9*/].f_6] == iVar1)
					{
						iVar3 = 1;
					}
				}
				iVar2++;
				if (iVar3 && !Local_626.f_163)
				{
					iVar0 = -1;
				}
				if (iVar4 && Local_626.f_162)
				{
					Local_626.f_163 = 1;
				}
				return iVar0;
			}

int func_71(int iParam0)
{
	if (Local_832[iParam0 /*9*/] == 3)
	{
		return 1;
	}
	if (Local_832[iParam0 /*9*/] == 4)
	{
		return 1;
	}
	return 0;
}

int func_72()
{
	if (!Local_626.f_162 && NETWORK::GET_NETWORK_TIME() > (Local_626.f_146 + 120000))
	{
		return 1;
	}
	if (Local_173.f_147 <= 1)
	{
		return 1;
	}
	return 0;
}

void func_73()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_626.f_161 + 15000)
	{
		return;
	}
	Local_626.f_161 = NETWORK::GET_NETWORK_TIME();
	if (func_76())
	{
		bVar3 = func_76();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 13);
		if ((iVar0 % 2) != 0)
		{
			iVar0++;
			if (iVar0 >= 13)
			{
				iVar0 = 0;
			}
		}
		iVar1 = func_75(bVar3, 8, 0);
		iVar2 = func_75(bVar3, 0, 1);
	}
	else
	{
		bVar4 = func_76();
		iVar0 = func_75(bVar4, 12, 0);
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
		if ((iVar1 % 2) != 0)
		{
			iVar1++;
			if (iVar1 >= 9)
			{
				iVar1 = 0;
			}
		}
		iVar2 = func_75(bVar4, 2, 3);
	}
	Local_626.f_148[0 /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
	Local_626.f_148[0 /*4*/].f_1 = func_74(iVar0, iVar1);
	Local_626.f_148[0 /*4*/].f_2 = iVar2;
	Local_626.f_148[0 /*4*/].f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
}

int func_74(int iParam0, int iParam1)
{
	return (iParam0 + iParam1 * 13);
}

int func_75(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_76()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_77(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	if (Local_626.f_162 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Local_626.f_62[iVar0 /*3*/].f_2 == -2147483647)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_626.f_62[iVar0 /*3*/].f_2 + 17500)
		{
		}
		else
		{
			Local_626.f_62[iVar0 /*3*/] = -1;
			Local_626.f_62[iVar0 /*3*/].f_1 = -1;
			Local_626.f_62[iVar0 /*3*/].f_2 = -2147483647;
		}
		iVar0++;
	}
	if (NETWORK::GET_NETWORK_TIME() < Local_626.f_84 + 20000 && !bParam0)
	{
		return;
	}
	Local_626.f_84 = NETWORK::GET_NETWORK_TIME();
	if (bParam1)
	{
		func_81();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_146) < 20000)
	{
		func_80();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_146) >= 20000 && (NETWORK::GET_NETWORK_TIME() - Local_626.f_146) < 60000)
	{
		func_79();
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_146) < 102500)
	{
		func_78();
	}
}

void func_78()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_626.f_62[0 /*3*/].f_1 = 6;
			Local_626.f_62[0 /*3*/] = 32;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 4;
			Local_626.f_62[1 /*3*/] = 56;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 4;
			Local_626.f_62[2 /*3*/] = 60;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 6;
			Local_626.f_62[3 /*3*/] = 84;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 0;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 1;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 1;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_626.f_62[0 /*3*/].f_1 = 5;
			Local_626.f_62[0 /*3*/] = 32;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 1;
			Local_626.f_62[1 /*3*/] = 56;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 1;
			Local_626.f_62[2 /*3*/] = 60;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 5;
			Local_626.f_62[3 /*3*/] = 84;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 5;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_626.f_62[0 /*3*/].f_1 = 3;
			Local_626.f_62[0 /*3*/] = 34;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 6;
			Local_626.f_62[1 /*3*/] = 30;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 6;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 3;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_626.f_62[0 /*3*/].f_1 = 0;
			Local_626.f_62[0 /*3*/] = 30;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 0;
			Local_626.f_62[1 /*3*/] = 34;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 0;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 0;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 7;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 7;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_626.f_62[0 /*3*/].f_1 = 6;
			Local_626.f_62[0 /*3*/] = 30;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 6;
			Local_626.f_62[1 /*3*/] = 34;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 6;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 6;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 0;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_79()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar1)
	{
		case 0:
			Local_626.f_62[0 /*3*/].f_1 = 3;
			Local_626.f_62[0 /*3*/] = 32;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 4;
			Local_626.f_62[1 /*3*/] = 56;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 4;
			Local_626.f_62[2 /*3*/] = 60;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 3;
			Local_626.f_62[3 /*3*/] = 84;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 1;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 1;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_626.f_62[0 /*3*/].f_1 = 5;
			Local_626.f_62[0 /*3*/] = 32;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 7;
			Local_626.f_62[1 /*3*/] = 56;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 7;
			Local_626.f_62[2 /*3*/] = 60;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 5;
			Local_626.f_62[3 /*3*/] = 84;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_626.f_62[0 /*3*/].f_1 = 3;
			Local_626.f_62[0 /*3*/] = 30;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 3;
			Local_626.f_62[1 /*3*/] = 34;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 3;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 3;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 6;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			Local_626.f_62[0 /*3*/].f_1 = 1;
			Local_626.f_62[0 /*3*/] = 30;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 1;
			Local_626.f_62[1 /*3*/] = 34;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 1;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 1;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 0;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 0;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 4:
			Local_626.f_62[0 /*3*/].f_1 = 0;
			Local_626.f_62[0 /*3*/] = 30;
			Local_626.f_62[0 /*3*/].f_2 = iVar0;
			Local_626.f_62[1 /*3*/].f_1 = 0;
			Local_626.f_62[1 /*3*/] = 34;
			Local_626.f_62[1 /*3*/].f_2 = iVar0;
			Local_626.f_62[2 /*3*/].f_1 = 0;
			Local_626.f_62[2 /*3*/] = 86;
			Local_626.f_62[2 /*3*/].f_2 = iVar0;
			Local_626.f_62[3 /*3*/].f_1 = 0;
			Local_626.f_62[3 /*3*/] = 82;
			Local_626.f_62[3 /*3*/].f_2 = iVar0;
			Local_626.f_62[4 /*3*/].f_1 = 6;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 6;
			Local_626.f_62[5 /*3*/] = 54;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 6;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
	}
}

void func_80()
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::GET_NETWORK_TIME();
	Local_626.f_62[0 /*3*/].f_1 = 3;
	Local_626.f_62[0 /*3*/] = 32;
	Local_626.f_62[0 /*3*/].f_2 = iVar0;
	Local_626.f_62[1 /*3*/].f_1 = 3;
	Local_626.f_62[1 /*3*/] = 56;
	Local_626.f_62[1 /*3*/].f_2 = iVar0;
	Local_626.f_62[2 /*3*/].f_1 = 3;
	Local_626.f_62[2 /*3*/] = 60;
	Local_626.f_62[2 /*3*/].f_2 = iVar0;
	Local_626.f_62[3 /*3*/].f_1 = 3;
	Local_626.f_62[3 /*3*/] = 84;
	Local_626.f_62[3 /*3*/].f_2 = iVar0;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	switch (iVar1)
	{
		case 0:
			Local_626.f_62[4 /*3*/].f_1 = 2;
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 1:
			Local_626.f_62[4 /*3*/].f_1 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
			Local_626.f_62[4 /*3*/] = 58;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			break;
		
		case 2:
			Local_626.f_62[4 /*3*/].f_1 = 1;
			Local_626.f_62[4 /*3*/] = 54;
			Local_626.f_62[4 /*3*/].f_2 = iVar0;
			Local_626.f_62[5 /*3*/].f_1 = 1;
			Local_626.f_62[5 /*3*/] = 58;
			Local_626.f_62[5 /*3*/].f_2 = iVar0;
			Local_626.f_62[6 /*3*/].f_1 = 1;
			Local_626.f_62[6 /*3*/] = 62;
			Local_626.f_62[6 /*3*/].f_2 = iVar0;
			break;
		
		case 3:
			break;
	}
}

void func_81()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_626.f_62[iVar0 /*3*/] = -1;
		Local_626.f_62[iVar0 /*3*/].f_1 = -1;
		Local_626.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar1 = NETWORK::GET_NETWORK_TIME();
	Local_626.f_62[0 /*3*/] = 54;
	Local_626.f_62[0 /*3*/].f_2 = iVar1;
	Local_626.f_62[1 /*3*/] = 56;
	Local_626.f_62[1 /*3*/].f_2 = iVar1;
	Local_626.f_62[2 /*3*/] = 58;
	Local_626.f_62[2 /*3*/].f_2 = iVar1;
	Local_626.f_62[3 /*3*/] = 60;
	Local_626.f_62[3 /*3*/].f_2 = iVar1;
	Local_626.f_62[4 /*3*/] = 62;
	Local_626.f_62[4 /*3*/].f_2 = iVar1;
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar2)
	{
		case 0:
			Local_626.f_62[0 /*3*/].f_1 = 3;
			Local_626.f_62[1 /*3*/].f_1 = 3;
			Local_626.f_62[3 /*3*/].f_1 = 3;
			Local_626.f_62[4 /*3*/].f_1 = 3;
			break;
		
		case 1:
			Local_626.f_62[0 /*3*/].f_1 = 4;
			Local_626.f_62[1 /*3*/].f_1 = 4;
			Local_626.f_62[3 /*3*/].f_1 = 4;
			Local_626.f_62[4 /*3*/].f_1 = 4;
			break;
		
		case 2:
			Local_626.f_62[0 /*3*/].f_1 = 5;
			Local_626.f_62[1 /*3*/].f_1 = 5;
			Local_626.f_62[3 /*3*/].f_1 = 5;
			Local_626.f_62[4 /*3*/].f_1 = 5;
			break;
		
		case 3:
			Local_626.f_62[0 /*3*/].f_1 = 7;
			Local_626.f_62[1 /*3*/].f_1 = 7;
			Local_626.f_62[3 /*3*/].f_1 = 7;
			Local_626.f_62[4 /*3*/].f_1 = 7;
			break;
		
		case 4:
			Local_626.f_62[0 /*3*/].f_1 = 6;
			Local_626.f_62[1 /*3*/].f_1 = 6;
			Local_626.f_62[3 /*3*/].f_1 = 6;
			Local_626.f_62[4 /*3*/].f_1 = 6;
			break;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (iVar2)
	{
		case 0:
			Local_626.f_62[2 /*3*/].f_1 = -1;
			Local_626.f_62[2 /*3*/] = -1;
			Local_626.f_62[2 /*3*/].f_2 = -2147483647;
			break;
		
		case 1:
			Local_626.f_62[2 /*3*/].f_1 = 2;
			break;
		
		case 2:
			Local_626.f_62[2 /*3*/].f_1 = 0;
			break;
		
		case 3:
			Local_626.f_62[2 /*3*/].f_1 = 1;
			break;
	}
}

void func_82()
{
	var uVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			iVar7 = func_83(iVar5, iVar6);
			if (Local_626[iVar5 /*5*/][iVar6] != iVar7)
			{
				Local_626[iVar5 /*5*/][iVar6] = iVar7;
			}
			if (iVar7 != -1)
			{
				uVar0[iVar7]++;
			}
			iVar6++;
		}
		iVar5++;
	}
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		if (iLocal_827[iVar5] != uVar0[iVar5])
		{
			iLocal_827[iVar5] = uVar0[iVar5];
		}
		iVar5++;
	}
}

int func_83(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_87(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && !Local_934[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar1 /*9*/].f_6 == -1)
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 - 13)))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1)))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 13) + 1))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), (iVar0 - 1)))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][0 /*5*/]), iVar0 + 1))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), (iVar0 + 13 - 1)))
		{
		}
		else if (!func_84(&(Local_626.f_85[Local_832[iVar1 /*9*/].f_6 /*11*/][1 /*5*/]), iVar0 + 13))
		{
		}
		else
		{
			return Local_832[iVar1 /*9*/].f_6;
		}
		iVar1++;
	}
	return -1;
}

bool func_84(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET((*uParam0)[func_86(iParam1)], func_85(iParam1));
}

int func_85(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_86(iParam0) * 31);
}

int func_86(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

int func_87(int iParam0, int iParam1)
{
	return func_74((1 + iParam0 * 2), (1 + iParam1 * 2));
}

void func_88()
{
	if (NETWORK::GET_NETWORK_TIME() < Local_626.f_146)
	{
		return;
	}
	Local_626.f_84 = Local_626.f_146;
	Local_626.f_161 = Local_626.f_146;
	func_77(1, 0);
	func_66(4);
}

void func_89()
{
	func_90();
	func_66(3);
}

void func_90()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	Local_626.f_162 = 0;
	Local_626.f_163 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_626[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		iLocal_827[iVar0] = 0;
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				Local_626.f_85[iVar0 /*11*/][iVar1 /*5*/][iVar2] = 0;
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_173.f_149[iVar0] == -1)
		{
		}
		else
		{
			func_91(iVar0, func_94(iVar0), func_93(iVar0), 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_626.f_62[iVar0 /*3*/] = -1;
		Local_626.f_62[iVar0 /*3*/].f_1 = -1;
		Local_626.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_626.f_148[iVar0 /*4*/] = -2147483647;
		Local_626.f_148[iVar0 /*4*/].f_1 = -1;
		Local_626.f_148[iVar0 /*4*/].f_2 = -1;
		Local_626.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	Local_626.f_146 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME() + 5000) / 1000f)) * 1000;
	func_82();
}

void func_91(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_87(iParam1, iParam2);
	if (!(iParam3 && iParam0 == 3))
	{
		func_92(&(Local_626.f_85[iParam0 /*11*/][1 /*5*/]), ((iVar0 - 13) - 1));
	}
	if (!(iParam3 && iParam0 == 2))
	{
		func_92(&(Local_626.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 - 13));
	}
	func_92(&(Local_626.f_85[iParam0 /*11*/][0 /*5*/]), ((iVar0 - 13) - 1));
	func_92(&(Local_626.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 13) + 1);
	func_92(&(Local_626.f_85[iParam0 /*11*/][0 /*5*/]), (iVar0 - 1));
	func_92(&(Local_626.f_85[iParam0 /*11*/][0 /*5*/]), iVar0 + 1);
	if (!(iParam3 && iParam0 == 1))
	{
		func_92(&(Local_626.f_85[iParam0 /*11*/][1 /*5*/]), (iVar0 + 13 - 1));
	}
	if (!(iParam3 && iParam0 == 0))
	{
		func_92(&(Local_626.f_85[iParam0 /*11*/][1 /*5*/]), iVar0 + 13);
	}
	Local_626[iParam1 /*5*/][iParam2] = iParam0;
}

void func_92(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[func_86(iParam1)], func_85(iParam1));
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 0;
		
		case 2:
			return 3;
		
		case 3:
			return 3;
		
		default:
	}
	return -1;
}

int func_94(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 5;
		
		case 2:
			return 0;
		
		case 3:
			return 5;
		
		default:
	}
	return -1;
}

void func_95()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	bVar2 = true;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_934[iVar0 /*37*/].f_25)
		{
		}
		else
		{
			if (Local_832[iVar0 /*9*/].f_6 == -1)
			{
				bVar2 = false;
			}
			else if (Local_832[iVar0 /*9*/] == 0)
			{
				bVar2 = false;
			}
			else
			{
				iVar1++;
				iVar0++;
			}
			if (!bVar2)
			{
				if (func_100(&(Local_173.f_314)))
				{
					func_99(&(Local_173.f_314));
				}
				return;
			}
			if (iVar1 <= 1)
			{
				if (func_100(&(Local_173.f_314)))
				{
					func_99(&(Local_173.f_314));
				}
				return;
			}
			if (!func_100(&(Local_173.f_314)))
			{
				func_98(&(Local_173.f_314), 0, 0);
				return;
			}
			else if (!func_96(&(Local_173.f_314), 1500, 0))
			{
				return;
			}
			Local_626.f_138 = iVar1 + 1;
			func_66(2);
		}

int func_96(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_97(uParam0, bParam2, 0);
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

void func_97(var uParam0, bool bParam1, bool bParam2)
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

void func_98(var uParam0, bool bParam1, bool bParam2)
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

void func_99(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_100(var uParam0)
{
	return uParam0->f_1;
}

void func_101()
{
	func_102();
	func_66(1);
}

void func_102()
{
	int iVar0;
	int iVar1;
	int iVar2[24];
	int iVar27;
	int iVar28;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar2[iVar0] = iVar0;
		iVar0++;
	}
	MISC::SET_RANDOM_SEED(NETWORK::GET_NETWORK_TIME());
	iVar0 = 0;
	while (iVar0 <= 23)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 24);
		iVar27 = iVar2[iVar0];
		iVar2[iVar0] = iVar2[iVar1];
		iVar2[iVar1] = iVar27;
		iVar0++;
	}
	iVar28 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_626.f_31[iVar0 /*5*/][iVar1] = iVar2[iVar28];
			iVar28++;
			iVar1++;
		}
		iVar0++;
	}
}

void func_103()
{
	switch (Local_173.f_140)
	{
		case 0:
			func_338();
			break;
		
		case 1:
			func_335();
			break;
		
		case 2:
			func_334();
			break;
		
		case 3:
			func_329();
			break;
		
		case 4:
			func_328();
			break;
		
		case 5:
			func_322();
			break;
		
		case 6:
			func_320();
			break;
		
		case 7:
			func_195();
			break;
		
		case 8:
			func_151();
			break;
		
		case 9:
			func_132();
			break;
		
		case 10:
			func_104();
			break;
		
		case 11:
			func_15();
			break;
		
		case 12:
			break;
	}
}

void func_104()
{
	func_128();
	func_105();
}

void func_105()
{
	var uVar0[4];
	float fVar5;
	int iVar6;
	int iVar7;
	
	func_127();
	func_126("MPArcadeCabinetGridHUD", "lbd", 0,5f, 0,5f, 0,6604167f, 0,9481481f, 0f, Local_173.f_107.f_17);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((0,5f + 0,001041667f)), (0,15f + 0,003703704f), 0);
	HUD::SET_TEXT_SCALE(1f, 1f);
	HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_LBD_T");
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), 0,15f, 0);
	fVar5 = 0,22f;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 9)
	{
		func_122(Local_626.f_165[iVar6 /*3*/], &uVar0);
		iVar7 = 255;
		if (Local_626.f_165[iVar6 /*3*/].f_2 == Local_173.f_178)
		{
			iVar7 = SYSTEM::ROUND(MISC::ABSF((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0,5f)) * 80f))) + 175;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125((0,37f + 0,001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_121(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), (fVar5 + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[uVar0[3] /*4*/], Local_173.f_107[uVar0[3] /*4*/].f_1, Local_173.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125(0,37f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_121(iVar6));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125((0,4135417f + 0,001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), (fVar5 + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[uVar0[3] /*4*/], Local_173.f_107[uVar0[3] /*4*/].f_1, Local_173.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125(0,4135417f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[0]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125((0,4411458f + 0,001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), (fVar5 + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[uVar0[3] /*4*/], Local_173.f_107[uVar0[3] /*4*/].f_1, Local_173.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125(0,4411458f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[1]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125((0,46875f + 0,001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), (fVar5 + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[uVar0[3] /*4*/], Local_173.f_107[uVar0[3] /*4*/].f_1, Local_173.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125(0,46875f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[2]));
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), fVar5, 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125((0,695f + 0,001041667f)));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_626.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), (fVar5 + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(1f, 1f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[uVar0[3] /*4*/], Local_173.f_107[uVar0[3] /*4*/].f_1, Local_173.f_107[uVar0[3] /*4*/].f_2, iVar7);
		HUD::SET_TEXT_RIGHT_JUSTIFY(true);
		HUD::SET_TEXT_WRAP(func_125(0f), func_125(0,695f));
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
		HUD::ADD_TEXT_COMPONENT_INTEGER(Local_626.f_165[iVar6 /*3*/].f_1);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), fVar5, 0);
		fVar5 = (fVar5 + 0,06f);
		iVar6++;
	}
	func_107();
	func_106();
}

void func_106()
{
	func_126("MPArcadeCabinetGridTiles", "facade", 0,5f, 0,5f, 1f, 1f, 0f, Local_173.f_107.f_17);
}

void func_107()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_108(iVar0);
		iVar0++;
	}
}

void func_108(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<4> Var6;
	float fVar10;
	
	if (!Local_1083[iParam0 /*17*/])
	{
		return;
	}
	Var0 = { func_119() };
	Var6.f_3 = 255;
	if (Local_1083[iParam0 /*17*/].f_3)
	{
		Var0.f_0 = -Var0.f_0;
	}
	Var2 = { func_118() };
	if (!Local_1083[iParam0 /*17*/].f_2)
	{
		if (Local_1083[iParam0 /*17*/].f_4 > 0)
		{
			Var2.f_1 = (Var2.f_1 - ((Var0.f_1 * (IntToFloat(Local_1083[iParam0 /*17*/].f_4) % (IntToFloat(Local_1083[iParam0 /*17*/].f_6) * 1f))) / (IntToFloat(Local_1083[iParam0 /*17*/].f_6) * 1f)));
			Var4 = { Var2 };
			Var4.f_1 = (Var4.f_1 + Var0.f_1);
		}
		else if (Local_1083[iParam0 /*17*/].f_7 > 0)
		{
			Local_1083[iParam0 /*17*/].f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_1083[iParam0 /*17*/].f_7);
			Local_1083[iParam0 /*17*/].f_2 = 1;
		}
	}
	else if (Local_1083[iParam0 /*17*/].f_4 > 0)
	{
	}
	else
	{
		Local_1083[iParam0 /*17*/].f_4 = Local_1083[iParam0 /*17*/].f_6;
		Local_1083[iParam0 /*17*/].f_2 = 0;
	}
	if (Local_1083[iParam0 /*17*/].f_1)
	{
		fVar10 = (SYSTEM::TO_FLOAT(Local_1083[iParam0 /*17*/].f_5) / SYSTEM::TO_FLOAT(Local_1083[iParam0 /*17*/].f_8));
		Var6.f_0 = func_117(Local_1083[iParam0 /*17*/].f_9, Local_1083[iParam0 /*17*/].f_13, fVar10);
		Var6.f_1 = func_117(Local_1083[iParam0 /*17*/].f_9.f_1, Local_1083[iParam0 /*17*/].f_13.f_1, fVar10);
		Var6.f_2 = func_117(Local_1083[iParam0 /*17*/].f_9.f_2, Local_1083[iParam0 /*17*/].f_13.f_2, fVar10);
		Var6.f_3 = func_117(Local_1083[iParam0 /*17*/].f_9.f_3, Local_1083[iParam0 /*17*/].f_13.f_3, fVar10);
	}
	else
	{
		Var6 = { Local_1083[iParam0 /*17*/].f_9 };
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_116(iParam0)))
	{
		func_113(Var2, Var0, Var6);
	}
	else
	{
		func_109(func_112(iParam0), func_116(iParam0), Var2, Var0, 0f, Var6);
	}
	if (!Local_1083[iParam0 /*17*/].f_2 && Local_1083[iParam0 /*17*/].f_4 > 0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(func_116(0)))
		{
			func_113(Var4, Var0, Var6);
		}
		else
		{
			func_109(func_112(iParam0), func_116(iParam0), Var4, Var0, 0f, Var6);
		}
	}
	Local_1083[iParam0 /*17*/].f_5 = (Local_1083[iParam0 /*17*/].f_5 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1083[iParam0 /*17*/].f_5 < 0)
	{
		Local_1083[iParam0 /*17*/].f_5 = (Local_1083[iParam0 /*17*/].f_5 + Local_1083[iParam0 /*17*/].f_8);
	}
	Local_1083[iParam0 /*17*/].f_4 = (Local_1083[iParam0 /*17*/].f_4 - SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	if (Local_1083[iParam0 /*17*/].f_4 < 0)
	{
		Local_1083[iParam0 /*17*/].f_4 = 0;
	}
}

void func_109(char* sParam0, char* sParam1, struct<2> Param2, struct<2> Param4, float fParam6, struct<4> Param7)
{
	Param2 = { func_110(Param2) };
	Param4 = { func_110(Param4) };
	func_126(sParam0, sParam1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, fParam6, Param7);
}

struct<2> func_110(struct<2> Param0)
{
	return func_111((Param0.f_0 * (1f / 1920f)), (Param0.f_1 * (1f / 1080f)));
}

struct<2> func_111(float fParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

char* func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MPArcadeGamesFX05";
			break;
		
		case 1:
			return "MPArcadeGamesFX05";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "MPArcadeGamesFX03";
			break;
		
		case 4:
			return "MPArcadeGamesFX04";
			break;
		
		case 5:
			return "MPArcadeGamesFX00";
			break;
		
		case 6:
			return "MPArcadeGamesFX02";
			break;
		
		case 7:
			return "MPArcadeGamesFX01";
			break;
	}
	return "";
}

void func_113(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_110(Param0) };
	Param2 = { func_110(Param2) };
	func_114(Param0, Param2, Param4);
}

void func_114(struct<2> Param0, struct<2> Param2, struct<4> Param4)
{
	Param0 = { func_115(Param0) };
	Param2.f_0 = (Param2.f_0 * fLocal_148);
	GRAPHICS::DRAW_RECT(Param0.f_0, Param0.f_1, Param2.f_0, Param2.f_1, Param4.f_0, Param4.f_1, Param4.f_2, Param4.f_3, false);
}

struct<2> func_115(struct<2> Param0)
{
	Param0.f_0 = func_125(Param0.f_0);
	return Param0;
}

char* func_116(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "TV_LINE_OVERLAY_DEGENATRON";
			break;
		
		case 1:
			return "SCREEN_GRAD_100_50";
			break;
		
		case 2:
			return "";
			break;
		
		case 3:
			return "Screen_Overlay_2";
			break;
		
		case 4:
			return "Screen_Overlay_4";
			break;
		
		case 5:
			return "Screen_Overlay_8";
			break;
		
		case 6:
			return "Grid_1";
			break;
		
		case 7:
			return "FlatScreen1";
			break;
	}
	return "";
}

int func_117(int iParam0, int iParam1, float fParam2)
{
	return SYSTEM::ROUND((((1f - fParam2) * IntToFloat(iParam0)) + (fParam2 * IntToFloat(iParam1))));
}

struct<2> func_118()
{
	return func_111((1920f / 2f), (1080f / 2f));
}

struct<2> func_119()
{
	return func_111(1920f, 1080f);
}

char* func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "A";
		
		case 1:
			return "B";
		
		case 2:
			return "C";
		
		case 3:
			return "D";
		
		case 4:
			return "E";
		
		case 5:
			return "F";
		
		case 6:
			return "G";
		
		case 7:
			return "H";
		
		case 8:
			return "I";
		
		case 9:
			return "J";
		
		case 10:
			return "K";
		
		case 11:
			return "L";
		
		case 12:
			return "M";
		
		case 13:
			return "N";
		
		case 14:
			return "O";
		
		case 15:
			return "P";
		
		case 16:
			return "Q";
		
		case 17:
			return "R";
		
		case 18:
			return "S";
		
		case 19:
			return "T";
		
		case 20:
			return "U";
		
		case 21:
			return "V";
		
		case 22:
			return "W";
		
		case 23:
			return "X";
		
		case 24:
			return "Y";
		
		case 25:
			return "Z";
		
		case 26:
			return "0";
		
		case 27:
			return "1";
		
		case 28:
			return "2";
		
		case 29:
			return "3";
		
		case 30:
			return "4";
		
		case 31:
			return "5";
		
		case 32:
			return "6";
		
		case 33:
			return "7";
		
		case 34:
			return "8";
		
		case 35:
			return "9";
		
		default:
	}
	return "";
}

char* func_121(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SCGW_1ST";
		
		case 1:
			return "SCGW_2ND";
		
		case 2:
			return "SCGW_3RD";
		
		case 3:
			return "SCGW_4TH";
		
		case 4:
			return "SCGW_5TH";
		
		case 5:
			return "SCGW_6TH";
		
		case 6:
			return "SCGW_7TH";
		
		case 7:
			return "SCGW_8TH";
		
		case 8:
			return "SCGW_9TH";
		
		case 9:
			return "SCGW_10TH";
		
		default:
	}
	return "SCGW_URD";
}

void func_122(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		(*uParam1)[iVar0] = func_123(iParam0, iVar0, 6);
		iVar0++;
	}
}

var func_123(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	
	uVar0 = func_124(iParam2, 0);
	return (SYSTEM::SHIFT_RIGHT(iParam0, (iParam1 * iParam2)) && uVar0);
}

var func_124(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= (iParam0 - 1))
	{
		MISC::SET_BIT(&uVar0, (iParam1 + iVar1));
		iVar1++;
	}
	return uVar0;
}

float func_125(float fParam0)
{
	fParam0 = (((fParam0 * 1920f) - ((1920f - 1080f) / 2f)) / 1080f);
	fParam0 = (0,5f - ((0,5f - fParam0) / fLocal_147));
	return fParam0;
}

void func_126(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, struct<4> Param7)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((fParam3 * IntToFloat(iLocal_150)));
	fParam3 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_150)));
	iVar0 = SYSTEM::ROUND(((fParam5 * IntToFloat(iLocal_150)) / 4f)) * 4;
	fParam5 = (SYSTEM::TO_FLOAT(iVar0) * (1f / IntToFloat(iLocal_150)));
	GRAPHICS::_0x2D3B147AFAD49DE0(sParam0, sParam1, func_125(fParam2), fParam3, (fParam4 * fLocal_148), fParam5, fParam6, Param7.f_0, Param7.f_1, Param7.f_2, Param7.f_3, 0);
}

void func_127()
{
	func_114(func_111(0,5f, 0,5f), func_111(1f, 1f), Local_173.f_107.f_25);
}

void func_128()
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_173.f_417), 0);
	StringCopy(&Var0, "SC_H_LBD_3", 16);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_131(&Var0))
	{
		return;
	}
	func_20();
	func_129(&Var0);
}

void func_129(char* sParam0)
{
	Local_173.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_130(sParam0);
}

void func_130(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
}

int func_131(char* sParam0)
{
	if (Local_173.f_442 == MISC::GET_HASH_KEY(sParam0))
	{
		return 1;
	}
	return 0;
}

void func_132()
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[0];
	int iVar10;
	
	if (!func_150())
	{
		func_15();
	}
	func_140();
	func_139();
	if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_VALID(Local_173.f_436))
	{
		if (SOCIALCLUB::SC_PROFANITY_GET_CHECK_IS_PENDING(Local_173.f_436))
		{
			return;
		}
		if (SOCIALCLUB::SC_PROFANITY_GET_STRING_PASSED(Local_173.f_436))
		{
			func_137();
			func_19(10);
			func_136("Frontend_Change_Screen");
			Local_173.f_436 = 0;
		}
		else
		{
			func_136("Frontend_Change_Letter");
			Local_173.f_432 = 0;
			func_122(0, &iVar0);
			iVar0[3] = Local_832[Local_173.f_178 /*9*/].f_6;
			Local_832[Local_173.f_178 /*9*/].f_7 = func_134(&iVar0);
			Local_173.f_436 = 0;
		}
		return;
	}
	iVar5 = 227;
	iVar6 = 226;
	iVar7 = 191;
	iVar8 = 194;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar7 = 237;
		iVar8 = 238;
		iVar5 = 188;
		iVar6 = 187;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar7))
	{
		Local_173.f_432++;
		if (Local_173.f_432 == 3)
		{
			func_122(Local_832[Local_173.f_178 /*9*/].f_7, &iVar0);
			StringCopy(&cVar9, func_120(iVar0[0]), 4);
			StringConCat(&cVar9, func_120(iVar0[1]), 4);
			StringConCat(&cVar9, func_120(iVar0[2]), 4);
			if (SOCIALCLUB::SC_PROFANITY_CHECK_STRING(&cVar9, &(Local_173.f_436)))
			{
				func_136("Frontend_Entered_Score");
			}
		}
		else if (func_133(Local_173.f_178) == 99)
		{
			func_136("Frontend_Change_Screen");
			func_19(10);
		}
		return;
	}
	if (func_133(Local_173.f_178) == 99)
	{
		return;
	}
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar8))
	{
		if (Local_173.f_432 > 0)
		{
			Local_173.f_432 = (Local_173.f_432 - 1);
		}
		return;
	}
	iVar10 = 0;
	if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar5))
	{
		iVar10 = 1;
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar6))
	{
		iVar10 = -1;
	}
	if (iVar10 == 0)
	{
		return;
	}
	func_136("Frontend_Change_Letter");
	func_122(Local_832[Local_173.f_178 /*9*/].f_7, &iVar0);
	iVar0[Local_173.f_432] = (iVar0[Local_173.f_432] + iVar10);
	if (iVar0[Local_173.f_432] >= 36)
	{
		iVar0[Local_173.f_432] = 0;
	}
	else if (iVar0[Local_173.f_432] < 0)
	{
		iVar0[Local_173.f_432] = 35;
	}
	Local_832[Local_173.f_178 /*9*/].f_7 = func_134(&iVar0);
}

int func_133(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Local_626.f_165[iVar0 /*3*/].f_2 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 99;
}

var func_134(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_135(&uVar1, iVar0, 6, (*iParam0)[iVar0]);
		iVar0++;
	}
	return uVar1;
}

void func_135(var uParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	
	uVar0 = func_124(iParam2, (iParam1 * iParam2));
	*uParam0 = (*uParam0 - (*uParam0 && uVar0));
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam3, (iParam1 * iParam2)));
}

void func_136(char* sParam0)
{
	AUDIO::PLAY_SOUND_FRONTEND(-1, sParam0, "dlc_vw_am_tw_frontend_sounds", false);
}

void func_137()
{
	struct<2> Var0;
	int iVar2;
	
	Var0.f_0 = -713331550;
	Var0.f_1 = PLAYER::PLAYER_ID();
	iVar2 = func_138(1);
	if (!iVar2 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 2, iVar2);
	}
}

var func_138(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_12(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_139()
{
	struct<2> Var0;
	
	MISC::SET_BIT(&(Local_173.f_417), 0);
	if (func_133(Local_173.f_178) == 99)
	{
		StringCopy(&Var0, "SC_H_LBD_2", 16);
	}
	else if (Local_173.f_432 == 2)
	{
		StringCopy(&Var0, "SC_H_LBD_1", 16);
	}
	else
	{
		StringCopy(&Var0, "SC_H_LBD_0", 16);
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "PC", 16);
	}
	if (func_131(&Var0))
	{
		return;
	}
	func_20();
	func_129(&Var0);
}

void func_140()
{
	var uVar0[4];
	int iVar5;
	struct<2> Var6;
	int iVar8;
	int iVar9;
	
	func_127();
	iVar5 = 0;
	while (iVar5 <= 3)
	{
		func_142(iVar5, 1);
		if (Local_173.f_149[iVar5] == -1)
		{
		}
		else
		{
			Var6 = { func_141(iVar5) };
			iVar8 = func_133(Local_173.f_149[iVar5]);
			HUD::SET_TEXT_SCALE(1,1f, 1,1f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_121(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var6.f_0 + 0,001041667f)), (0,205f + 0,003703704f), 0);
			HUD::SET_TEXT_SCALE(1,1f, 1,1f);
			HUD::SET_TEXT_COLOUR(Local_173.f_107[iVar5 /*4*/], Local_173.f_107[iVar5 /*4*/].f_1, Local_173.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(func_121(iVar8));
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(Var6.f_0), 0,205f, 0);
			iVar9 = Local_832[Local_173.f_149[iVar5] /*9*/].f_8;
			HUD::SET_TEXT_SCALE(0,75f, 0,75f);
			HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var6.f_0 + 0,001041667f)), (0,26f + 0,003703704f), 0);
			HUD::SET_TEXT_SCALE(0,75f, 0,75f);
			HUD::SET_TEXT_COLOUR(Local_173.f_107[iVar5 /*4*/], Local_173.f_107[iVar5 /*4*/].f_1, Local_173.f_107[iVar5 /*4*/].f_2, 255);
			HUD::SET_TEXT_CENTRE(true);
			HUD::SET_TEXT_FONT(7);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_PTS");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar9);
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(Var6.f_0), 0,26f, 0);
			if (Local_173.f_149[iVar5] != Local_173.f_178)
			{
			}
			else if (iVar8 >= 10)
			{
			}
			else
			{
				func_122(Local_832[Local_173.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(((Var6.f_0 - 0,025f) + 0,001041667f)), (0,875f + 0,003703704f), 0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				if (Local_173.f_432 == 0)
				{
					HUD::SET_TEXT_COLOUR(Local_173.f_107[iVar5 /*4*/], Local_173.f_107[iVar5 /*4*/].f_1, Local_173.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[0]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var6.f_0 - 0,025f)), 0,875f, 0);
				func_122(Local_832[Local_173.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var6.f_0 + 0,001041667f)), (0,875f + 0,003703704f), 0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				if (Local_173.f_432 == 1)
				{
					HUD::SET_TEXT_COLOUR(Local_173.f_107[iVar5 /*4*/], Local_173.f_107[iVar5 /*4*/].f_1, Local_173.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[1]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(Var6.f_0), 0,875f, 0);
				func_122(Local_832[Local_173.f_149[iVar5] /*9*/].f_7, &uVar0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(((Var6.f_0 + 0,025f) + 0,001041667f)), (0,875f + 0,003703704f), 0);
				HUD::SET_TEXT_SCALE(0,95f, 0,95f);
				if (Local_173.f_432 == 2)
				{
					HUD::SET_TEXT_COLOUR(Local_173.f_107[iVar5 /*4*/], Local_173.f_107[iVar5 /*4*/].f_1, Local_173.f_107[iVar5 /*4*/].f_2, 255);
				}
				else
				{
					HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
				}
				HUD::SET_TEXT_CENTRE(true);
				HUD::SET_TEXT_FONT(7);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_120(uVar0[2]));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var6.f_0 + 0,025f)), 0,875f, 0);
			}
		}
		iVar5++;
	}
	func_107();
	func_106();
}

struct<2> func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,2552083f, 0,4564815f);
		
		case 1:
			return func_111(0,4182292f, 0,4564815f);
		
		case 2:
			return func_111(0,5817708f, 0,4564815f);
		
		case 3:
			return func_111(0,7447917f, 0,4564815f);
		
		default:
	}
	return func_111(0,5f, 0,5f);
}

void func_142(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<4> Var4;
	struct<2> Var8;
	char cVar10[16];
	float fVar14;
	struct<4> Var15;
	
	Var0 = { func_141(iParam0) };
	Var2 = { func_149() };
	func_126(func_148(iParam0), func_147(iParam0), Var0.f_0, Var0.f_1, Var2.f_0, Var2.f_1, 0f, Local_173.f_107.f_17);
	if (Local_173.f_149[iParam0] == Local_173.f_178)
	{
		Var4 = { Local_173.f_107[iParam0 /*4*/] };
		if (Local_832[Local_173.f_178 /*9*/] != 1)
		{
			Var4.f_3 = SYSTEM::ROUND(MISC::TAN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0,25f))) * 255;
		}
		Var8 = { func_146(iParam0) };
		func_126("MPArcadeCabinetGridHUD", "gang_lobby_player_highlight", Var8.f_0, Var8.f_1, 0,1625f, 0,05185185f, 0f, Var4);
	}
	if (Local_173.f_149[iParam0] != -1)
	{
		HUD::SET_TEXT_SCALE(0,5f, 0,5f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[iParam0 /*4*/], Local_173.f_107[iParam0 /*4*/].f_1, Local_173.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(4);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		if (!func_145(iParam0))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Local_173.f_149[iParam0]))));
		}
		else
		{
			StringCopy(&cVar10, "Bot ", 16);
			switch (iParam0)
			{
				case 0:
					StringConCat(&cVar10, "Green", 16);
					break;
				
				case 1:
					StringConCat(&cVar10, "Purple", 16);
					break;
				
				case 2:
					StringConCat(&cVar10, "Yellow", 16);
					break;
				
				case 3:
					StringConCat(&cVar10, "Blue", 16);
					break;
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&cVar10);
		}
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(Var0.f_0), 0,845f, 0);
	}
	if (bParam1)
	{
		return;
	}
	if (Local_173.f_149[iParam0] != -1 && Local_832[Local_173.f_149[iParam0] /*9*/] == 1)
	{
		HUD::SET_TEXT_SCALE(0,95f, 0,95f);
		HUD::SET_TEXT_COLOUR(0, 0, 0, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((Var0.f_0 + 0,001041667f)), (0,23f + 0,003703704f), 0);
		HUD::SET_TEXT_SCALE(0,95f, 0,95f);
		HUD::SET_TEXT_COLOUR(Local_173.f_107[iParam0 /*4*/], Local_173.f_107[iParam0 /*4*/].f_1, Local_173.f_107[iParam0 /*4*/].f_2, 255);
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_R");
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(Var0.f_0), 0,23f, 0);
	}
	if (Local_173.f_154[iParam0] != -2147483647 && (NETWORK::GET_NETWORK_TIME() - Local_173.f_154[iParam0]) <= 1000)
	{
		fVar14 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_173.f_154[iParam0])) / 1000f);
		Var15 = { Local_173.f_107[iParam0 /*4*/] };
		Var15.f_3 = SYSTEM::ROUND(func_143(125f, 0f, fVar14, 1));
		Var2.f_1 = (Var2.f_1 - 0,05f);
		Var0.f_1 = (Var0.f_1 + (0,05f / 2f));
		func_114(Var0, Var2, Var15);
	}
}

float func_143(float fParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;
	
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(func_144((3,141593f * fParam2))) / 2f) + 0,5f);
			break;
		
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_143(fParam0, fParam1, fParam2, 0);
			break;
		
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_143(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

float func_144(float fParam0)
{
	return (fParam0 * 57,29578f);
}

int func_145(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_934[iVar0 /*37*/].f_25)
		{
			if (Local_934[iVar0 /*37*/].f_6 == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<2> func_146(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,2552083f, 0,1435185f);
		
		case 1:
			return func_111(0,4182292f, 0,1435185f);
		
		case 2:
			return func_111(0,5817708f, 0,1435185f);
		
		case 3:
			return func_111(0,7447917f, 0,1435185f);
		
		default:
	}
	return func_111(0,5f, 0,5f);
}

char* func_147(int iParam0)
{
	if (Local_173.f_149[iParam0] == -1)
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_Off";
			
			case 1:
				return "Gang_Lobby_Purple_Off";
			
			case 2:
				return "Gang_Lobby_Yellow_Off";
			
			case 3:
				return "Gang_Lobby_Blue_Off";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "Gang_Lobby_Green_On";
			
			case 1:
				return "Gang_Lobby_Purple_On";
			
			case 2:
				return "Gang_Lobby_Yellow_On";
			
			case 3:
				return "Gang_Lobby_Blue_On";
			}
		
		default:
	}
	return "INVALID GANG";
}

char* func_148(int iParam0)
{
	if (Local_173.f_149[iParam0] != -1)
	{
		switch (iParam0)
		{
			case 0:
				return "MPArcadeCabinetGridPlayerGreen";
			
			case 1:
				return "MPArcadeCabinetGridPlayerPurple";
			
			case 2:
				return "MPArcadeCabinetGridPlayerYellow";
			
			case 3:
				return "MPArcadeCabinetGridPlayerBlue";
			}
		
		default:
	}
	return "MPArcadeCabinetGridHUD";
}

struct<2> func_149()
{
	return func_111(0,1625f, 0,7777778f);
}

int func_150()
{
	if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_9() == 0)
	{
		return 0;
	}
	if (MISC::IS_PS3_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_USER_CONTENT_PRIVILEGES(1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -3, true))
		{
			return 1;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1))
		{
			if (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151()
{
	bool bVar0;
	
	bVar0 = func_67();
	if (bVar0)
	{
		func_193();
	}
	else
	{
		func_175();
	}
	func_172();
	if (Local_626.f_145 >= 6)
	{
		func_171(&(Local_173.f_428));
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
		{
			AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
		{
			AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
		}
		func_22(func_23(0));
		func_19(9);
		return;
	}
	if (Local_626.f_145 == 2 || Local_626.f_145 == 3)
	{
		func_171(&(Local_173.f_428));
		func_19(5);
		return;
	}
	func_170("Ambience", &(Local_173.f_428), func_111(-1f, -1f), 0);
	if (Global_1932182 != 4)
	{
		return;
	}
	if (bVar0)
	{
		if (Local_626.f_131[(Local_626.f_137 - 1)] != -1)
		{
			if (Local_626.f_131[(Local_626.f_137 - 1)] == Local_173.f_178)
			{
				func_169(7);
				func_165("Win", Local_173.f_178, &(Local_173.f_204[Local_173.f_178 /*19*/].f_6));
			}
			else
			{
				func_169(8);
				func_165("Lose_Game", Local_173.f_178, &(Local_173.f_204[Local_173.f_178 /*19*/].f_6));
			}
			func_164((16 + Local_832[Local_626.f_131[(Local_626.f_137 - 1)] /*9*/].f_6));
		}
	}
	else if (Local_626.f_130 != -1)
	{
		if (Local_626.f_130 == Local_173.f_178)
		{
			func_160();
			func_169(9);
			func_165("Win", Local_173.f_178, &(Local_173.f_204[Local_173.f_178 /*19*/].f_6));
		}
		else
		{
			func_169(10);
			func_165("Lose_Game", Local_173.f_178, &(Local_173.f_204[Local_173.f_178 /*19*/].f_6));
		}
		func_164((16 + Local_832[Local_626.f_130 /*9*/].f_6));
	}
	if ((!MISC::IS_BIT_SET(Local_173.f_141, 2) && Local_626.f_131[(Local_626.f_137 - 1)] != -1) && Local_626.f_131[(Local_626.f_137 - 1)] == Local_173.f_178)
	{
		if (!func_159(247, -1))
		{
			func_156(247, 1, -1, 1);
			func_154(12, "CLO_VWM_D_1_1", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
			func_153(27193, 1, -1);
			func_152("SCGW_CH_4", 7500, 1);
		}
	}
}

void func_152(char* sParam0, int iParam1, int iParam2)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_20();
	}
	Local_173.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam1);
	Local_173.f_419 = sParam0;
	Local_173.f_420 = -1;
	Local_173.f_421 = iParam2;
}

void func_153(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_37();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

void func_154(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = func_155(&Global_1652537);
	Global_1652537[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1652537[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1652537[iVar0 /*106*/].f_97 = iParam5;
	Global_1652537[iVar0 /*106*/].f_104 = iParam9;
	Global_1652537[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1652537[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_155(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

void func_156(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (func_158())
	{
		iVar0 = Global_2860375[iParam0 /*3*/][func_157(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_157(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_37();
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

int func_158()
{
	return 1;
	return 0;
}

int func_159(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860375[iParam0 /*3*/][func_157(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_160()
{
	int iVar0;
	
	switch (Local_832[Local_173.f_178 /*9*/].f_6)
	{
		case 0:
			iVar0 = func_163(8354, -1, 0) + 1;
			func_162(8354, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26906)
			{
				func_153(27189, 1, -1);
				func_154(12, "CLO_VWM_D_1_3", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_161("SCGW_CH_0", Global_262145.f_26906, 7500, 1);
			}
			break;
		
		case 1:
			iVar0 = func_163(8355, -1, 0) + 1;
			func_162(8355, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26906)
			{
				func_153(27190, 1, -1);
				func_154(12, "CLO_VWM_D_1_4", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_161("SCGW_CH_1", Global_262145.f_26906, 7500, 1);
			}
			break;
		
		case 2:
			iVar0 = func_163(8356, -1, 0) + 1;
			func_162(8356, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26906)
			{
				func_153(27191, 1, -1);
				func_154(12, "CLO_VWM_D_1_5", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_161("SCGW_CH_2", Global_262145.f_26906, 7500, 1);
			}
			break;
		
		case 3:
			iVar0 = func_163(8357, -1, 0) + 1;
			func_162(8357, iVar0, -1, 1, 0);
			if (iVar0 == Global_262145.f_26906)
			{
				func_153(27192, 1, -1);
				func_154(12, "CLO_VWM_D_1_2", "UNLOCK_NAME_SHIRT3", "FeedhitTshirt04", "MPTshirtAwards3", -1, 0, 0, 0, -1, 1);
				func_161("SCGW_CH_3", Global_262145.f_26906, 7500, 1);
			}
			break;
	}
}

void func_161(char* sParam0, var uParam1, int iParam2, int iParam3)
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		func_20();
	}
	Local_173.f_418 = (NETWORK::GET_NETWORK_TIME() + iParam2);
	Local_173.f_420 = uParam1;
	Local_173.f_419 = sParam0;
	Local_173.f_421 = iParam3;
}

void func_162(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_157(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_163(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_157(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

void func_164(int iParam0)
{
	Global_1932182.f_1 = iParam0;
}

void func_165(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_167(Local_173.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, func_166(Local_832[iParam1 /*9*/].f_6), false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

char* func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dlc_vw_am_tw_gang_Hoods_sounds";
		
		case 1:
			return "dlc_vw_am_tw_gang_Punks_sounds";
		
		case 2:
			return "dlc_vw_am_tw_gang_Yokels_sounds";
		
		case 3:
			return "dlc_vw_am_tw_gang_Bikers_sounds";
		
		default:
	}
	return "INVALID GANG";
}

float func_167(float fParam0, var uParam1)
{
	return func_168(((fParam0 - 0,15625f) / 0,658333f), 0f, 1f);
}

float func_168(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_169(int iParam0)
{
	Global_1932182 = iParam0;
}

void func_170(char* sParam0, var uParam1, struct<2> Param2, bool bParam4)
{
	float fVar0;
	
	fVar0 = func_167(Param2);
	if (bParam4)
	{
	}
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	}
	if (bParam4)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
	}
}

void func_171(var uParam0)
{
	if (!AUDIO::HAS_SOUND_FINISHED(*uParam0))
	{
		AUDIO::STOP_SOUND(*uParam0);
	}
	AUDIO::RELEASE_SOUND_ID(*uParam0);
	*uParam0 = -1;
}

void func_172()
{
	struct<2> Var0;
	
	if (Local_173.f_418 == -2147483647)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Local_173.f_419))
	{
		return;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_173.f_418)
	{
		func_20();
		return;
	}
	MISC::SET_BIT(&(Local_173.f_417), 0);
	StringCopy(&Var0, Local_173.f_419, 16);
	if (Local_173.f_420 == -1)
	{
		if (PAD::_IS_USING_KEYBOARD(2) && !Local_173.f_421)
		{
			StringConCat(&Var0, "_PC", 16);
		}
	}
	else
	{
		if (func_131(&Var0))
		{
			return;
		}
		func_173(&Var0, Local_173.f_420);
		return;
	}
	if (func_131(&Var0))
	{
		return;
	}
	func_129(&Var0);
}

void func_173(char* sParam0, int iParam1)
{
	Local_173.f_442 = MISC::GET_HASH_KEY(sParam0);
	func_174(sParam0, iParam1, -1);
}

void func_174(char* sParam0, int iParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

void func_175()
{
	func_127();
	func_189();
	func_183();
	func_181();
	func_176();
	func_107();
	func_106();
}

void func_176()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char cVar6[16];
	
	func_114(func_111(0,5f, (0,069444f + 0,0356482f)), func_111(0,658333f, 0,071296f), Local_173.f_107.f_21);
	func_114(func_111(0,5f, (0,069444f + 0,072685f)), func_111(0,658333f, 0,002778f), Local_173.f_107.f_25);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_178(iVar0, Local_173.f_149[iVar0]);
		iVar0++;
	}
	fVar1 = ((SYSTEM::TO_FLOAT((Local_626.f_138 - 1)) / 2f) * -0,01354133f);
	iVar0 = 0;
	while (iVar0 <= (Local_626.f_138 - 1))
	{
		func_126("MPArcadeCabinetGridHUD", "hud_rounds", ((fVar1 + 0,5f) + (0,01354133f * IntToFloat(iVar0))), (((0,069444f + -0,00162963f) + (0,02407426f / 2f)) + 0,00462963f), 0,01354133f, 0,02407426f, 0f, func_177(iVar0));
		iVar0++;
	}
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = 0;
	if (Local_626.f_145 == 4 && !Local_626.f_162)
	{
		iVar2 = ((Local_626.f_146 + 120000) - NETWORK::GET_NETWORK_TIME());
	}
	iVar3 = (iVar2 / 60000);
	iVar4 = ((iVar2 / 1000) % 60);
	HUD::SET_TEXT_SCALE(1f, 1f);
	if (iVar2 < 10000 && Local_626.f_145 == 4)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 5))
		{
			func_136("Frontend_Countdown_10s");
			MISC::SET_BIT(&(Local_173.f_429), 5);
		}
		iVar5 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * (0,5058f / 2f))) * 255f));
		if (iVar5 > 51)
		{
			iVar5 = 255;
		}
		else
		{
			iVar5 = 0;
		}
		HUD::SET_TEXT_COLOUR(255, 0, 0, iVar5);
	}
	else if (iVar2 < 30000 && Local_626.f_145 == 4)
	{
		HUD::SET_TEXT_COLOUR(255, 0, 0, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(255, 255, 255, 255);
	}
	HUD::SET_TEXT_DROP_SHADOW();
	HUD::SET_TEXT_CENTRE(true);
	HUD::SET_TEXT_FONT(7);
	StringCopy(&cVar6, "SCGW_ROUND_T", 16);
	if (iVar4 < 10)
	{
		StringConCat(&cVar6, "_S", 16);
	}
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar6);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0,5f, (0,083f + 0,00462963f), 0);
}

struct<4> func_177(int iParam0)
{
	if (Local_626.f_131[iParam0] == -1)
	{
		return Local_173.f_107.f_17;
	}
	return Local_173.f_107[Local_832[Local_626.f_131[iParam0] /*9*/].f_6 /*4*/];
}

void func_178(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	int iVar18;
	int iVar19;
	
	fVar1 = func_180(iParam0);
	if (iParam1 == -1)
	{
		func_126("MPArcadeCabinetGridHUD", "hud_insert_coin", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_173.f_107[iParam0 /*4*/]);
	}
	else if (func_71(iParam1))
	{
		func_126("MPArcadeCabinetGridHUD", "hud_wasted", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_173.f_107.f_29);
	}
	else
	{
		func_126("MPArcadeCabinetGridHUD", "hud_frame", (fVar1 + (0,127083f / 2f)), (0,069444f + 0,04166683f), 0,127083f, 0,059259f, 0f, Local_173.f_107[iParam0 /*4*/]);
	}
	StringCopy(&Var2, "hud_head_", 64);
	StringConCat(&Var2, Local_173.f_422[iParam0], 64);
	func_126("MPArcadeCabinetGridHUD", &Var2, (fVar1 + (0,033333f / 2f)), (0,069444f + 0,04166683f), 0,033333f, 0,059259f, 0f, Local_173.f_107.f_17);
	if (iParam1 == -1)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (NETWORK::NETWORK_IS_PLAYER_TALKING(iVar18))
		{
			func_126("MPArcadeCabinetGridHUD", "hud_mic", ((fVar1 + 0,026563f) + (0,008333f / 2f)), ((0,069444f + 0,04722233f) + (0,014815f / 2f)), 0,008333f, 0,014815f, 0f, Local_173.f_107[iParam0 /*4*/]);
		}
	}
	else if (Local_934[iParam1 /*37*/].f_25)
	{
	}
	if (Local_832[iParam1 /*9*/] == 2)
	{
		iVar19 = (Local_173.f_204[iParam1 /*19*/].f_9 - 1);
		iVar0 = 0;
		while (iVar0 <= iVar19)
		{
			if (iVar0 >= Local_832[iParam1 /*9*/].f_2 && Local_173.f_140 == 7)
			{
				func_126("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0,035417f) + (0,00625f * IntToFloat(iVar0))) + (0,00625f / 2f)), ((0,069444f + 0,01203733f) + (0,059259f / 2f)), 0,00625f, 0,059259f, 0f, Local_173.f_107.f_29);
			}
			else
			{
				func_126("MPArcadeCabinetGridHUD", "hud_health", (((fVar1 + 0,035417f) + (0,00625f * IntToFloat(iVar0))) + (0,00625f / 2f)), ((0,069444f + 0,01203733f) + (0,059259f / 2f)), 0,00625f, 0,059259f, 0f, func_179(Local_173.f_107[iParam0 /*4*/], (SYSTEM::TO_FLOAT(iVar0) / 7f)));
			}
			iVar0++;
		}
		HUD::SET_TEXT_SCALE(1f, 1f);
		if (((iLocal_827[iParam0] == 0 && Local_626.f_145 == 4) && iParam0 == Local_832[Local_173.f_178 /*9*/].f_6) && SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0,5058f)) > 0,5f)
		{
			HUD::SET_TEXT_COLOUR(Local_173.f_107.f_29, Local_173.f_107.f_29.f_1, Local_173.f_107.f_29.f_2, Local_173.f_107.f_29.f_3);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(Local_173.f_107[iParam0 /*4*/], Local_173.f_107[iParam0 /*4*/].f_1, Local_173.f_107[iParam0 /*4*/].f_2, Local_173.f_107[iParam0 /*4*/].f_3);
		}
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("SCGW_SCORE");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iLocal_827[iParam0]);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125((fVar1 + 0,105f)), 0,083f, 0);
	}
}

struct<4> func_179(struct<4> Param0, float fParam4)
{
	Param0.f_0 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_0)) * fParam4) + IntToFloat(Param0.f_0)));
	Param0.f_1 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_1)) * fParam4) + IntToFloat(Param0.f_1)));
	Param0.f_2 = SYSTEM::ROUND(((IntToFloat((255 - Param0.f_2)) * fParam4) + IntToFloat(Param0.f_2)));
	return Param0;
}

float func_180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0,195313f;
		
		case 1:
			return 0,325521f;
		
		case 2:
			return 0,547396f;
		
		case 3:
			return 0,677604f;
		
		default:
	}
	return 0f;
}

void func_181()
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	char cVar5[64];
	struct<4> Var21;
	struct<8> Var25;
	
	if (Local_626.f_130 == -1)
	{
		return;
	}
	func_182(Local_173.f_107[Local_832[Local_626.f_130 /*9*/].f_6 /*4*/], 102);
	bVar0 = false;
	bVar1 = true;
	Var2 = { func_111(0,5f, (0,5f + -0,005f)) };
	iVar4 = 255;
	StringCopy(&cVar5, "text_gang_", 64);
	StringConCat(&cVar5, Local_173.f_422[Local_832[Local_626.f_130 /*9*/].f_6], 64);
	StringConCat(&cVar5, "_", 64);
	if (Local_173.f_415 < 4)
	{
		Var2.f_1 = (Var2.f_1 + (-0,05f / IntToFloat(Local_173.f_415 + 1)));
		bVar1 = false;
		Local_173.f_415 = (Local_173.f_415 + Local_173.f_412);
	}
	else if (Local_173.f_415 < 12)
	{
		iVar4 = SYSTEM::FLOOR(((255f / 8f) * IntToFloat((8 - (Local_173.f_415 - 4)))));
		bVar0 = true;
		bVar1 = false;
		Local_173.f_415 = (Local_173.f_415 + Local_173.f_412);
	}
	else if (Local_173.f_415 < 22)
	{
		if (((Local_173.f_415 + 1 - 4) - 8) < 10)
		{
			StringConCat(&cVar5, "0", 64);
		}
		StringIntConCat(&cVar5, ((Local_173.f_415 + 1 - 4) - 8), 64);
		Local_173.f_415 = (Local_173.f_415 + Local_173.f_414);
	}
	else
	{
		StringIntConCat(&cVar5, 10, 64);
	}
	if (bVar0)
	{
		Var21 = { Local_173.f_107.f_17 };
		Var21.f_3 = iVar4;
		func_126("MPArcadeCabinetGridHUD", "text_bkgd_blur", Var2.f_0, Var2.f_1, 0,3125f, 0,1481481f, 0f, Var21);
	}
	func_126("MPArcadeCabinetGridHUD", "text_winner", Var2.f_0, Var2.f_1, 0,3125f, 0,1481481f, 0f, Local_173.f_107.f_17);
	if (bVar1)
	{
		StringCopy(&Var25, "MPArcadeCabinetGridPlayer", 64);
		StringConCat(&Var25, Local_173.f_422[Local_832[Local_626.f_130 /*9*/].f_6], 64);
		func_126(&Var25, &cVar5, Var2.f_0, (Var2.f_1 + 0,07407407f), 0,3125f, 0,1481481f, 0f, Local_173.f_107[Local_832[Local_626.f_130 /*9*/].f_6 /*4*/]);
	}
}

void func_182(struct<4> Param0, int iParam4)
{
	Param0.f_3 = iParam4;
	func_114(func_111(0,5f, 0,5f), func_111(1f, 1f), Param0);
}

void func_183()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar7;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	float fVar20;
	struct<2> Var21;
	struct<2> Var23;
	
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			iVar3 = func_74(iVar0, iVar1);
			if (iVar0 + 1 < 13)
			{
				iVar4 = func_74(iVar0 + 1, iVar1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_84(&(Local_626.f_85[iVar2 /*11*/][1 /*5*/]), iVar3))
					{
						Var5 = { func_186(func_187(func_188(iVar3), func_188(iVar4)), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var5.f_0, Var5.f_1, 0,05208333f, 0,02962963f, 0f, Local_173.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			if (iVar1 + 1 < 9)
			{
				iVar7 = func_74(iVar0, iVar1 + 1);
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_84(&(Local_626.f_85[iVar2 /*11*/][0 /*5*/]), iVar3))
					{
						Var8 = { func_186(func_187(func_188(iVar3), func_188(iVar7)), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var8.f_0, Var8.f_1, 0,05208333f, 0,02962963f, 90f, Local_173.f_107[iVar2 /*4*/]);
					}
					else
					{
						iVar2++;
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	Var14.f_3 = 255;
	iVar18 = 0;
	iVar18 = 0;
	while (iVar18 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar18)) && !Local_934[iVar18 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar18 /*9*/].f_6 == -1)
		{
		}
		else if (Local_869[iVar18 /*16*/] == Local_869[iVar18 /*16*/].f_1)
		{
		}
		else
		{
			func_185(Local_869[iVar18 /*16*/], &iVar10, &iVar11);
			func_185(Local_869[iVar18 /*16*/].f_1, &iVar12, &iVar13);
			iVar19 = -1;
			Var14 = { Local_173.f_107[Local_832[iVar18 /*9*/].f_6 /*4*/] };
			fVar20 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_869[iVar18 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_184(iVar18)));
			if (fVar20 > 1,2f)
			{
			}
			else
			{
				Var14.f_3 = SYSTEM::ROUND((255f * func_143(0f, 1f, fVar20, 6)));
				if (iVar12 != iVar10)
				{
					if (iVar12 > iVar10)
					{
						iVar19 = Local_869[iVar18 /*16*/];
					}
					else
					{
						iVar19 = func_74((iVar10 - 1), iVar11);
					}
					if (func_84(&(Local_626.f_85[Local_832[iVar18 /*9*/].f_6 /*11*/][1 /*5*/]), iVar19))
					{
					}
					else
					{
						Var21 = { func_186(func_187(func_188(Local_869[iVar18 /*16*/].f_1), func_188(Local_869[iVar18 /*16*/])), 2f) };
						func_126("MPArcadeCabinetGrid", "player_trail", Var21.f_0, Var21.f_1, 0,05208333f, 0,02962963f, 0f, Var14);
						Jump @804; //curOff = 660
						if (iVar13 != iVar11)
						{
							if (iVar13 > iVar11)
							{
								iVar19 = Local_869[iVar18 /*16*/];
							}
							else
							{
								iVar19 = func_74(iVar10, (iVar11 - 1));
							}
							if (func_84(&(Local_626.f_85[Local_832[iVar18 /*9*/].f_6 /*11*/][0 /*5*/]), iVar19))
							{
							}
							else
							{
								Var23 = { func_186(func_187(func_188(Local_869[iVar18 /*16*/].f_1), func_188(Local_869[iVar18 /*16*/])), 2f) };
								func_126("MPArcadeCabinetGrid", "player_trail", Var23.f_0, Var23.f_1, 0,05208333f, 0,02962963f, 90f, Var14);
							}
						}
					}
					iVar18++;
				}

int func_184(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_832[iParam0 /*9*/].f_1));
}

void func_185(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 13f));
	*iParam1 = (iParam0 - *iParam2 * 13);
}

struct<2> func_186(struct<2> Param0, float fParam2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 / fParam2);
	Var0.f_1 = (Param0.f_1 / fParam2);
	return Var0;
}

struct<2> func_187(struct<2> Param0, struct<2> Param2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 + Param2.f_0);
	Var0.f_1 = (Param0.f_1 + Param2.f_1);
	return Var0;
}

struct<2> func_188(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_185(iParam0, &iVar0, &iVar1);
	Var2.f_0 = (0,1380207f + (0,0520835f * IntToFloat(iVar0 + 1)));
	Var2.f_1 = (0,06851837f + (0,0925925f * IntToFloat(iVar1 + 1)));
	return Var2;
}

void func_189()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	struct<2> Var25;
	struct<2> Var27;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			StringCopy(&Var2, "top_down_tile_", 64);
			iVar18 = Local_626.f_31[iVar0 /*5*/][iVar1] + 1;
			StringIntConCat(&Var2, iVar18, 64);
			Var19 = { func_192(iVar0, iVar1) };
			func_126("MPArcadeCabinetGridTiles", &Var2, Var19.f_0, Var19.f_1, 0,104167f, 0,185185f, 0f, Local_173.f_107.f_17);
			func_190(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = -1;
	while (iVar0 <= 6)
	{
		Var21 = { func_192(iVar0, -1) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var21.f_0, Var21.f_1, 0,104167f, 0,185185f, 0f, Local_173.f_107.f_17);
		Var23 = { func_192(iVar0, 4) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var23.f_0, Var23.f_1, 0,104167f, 0,185185f, 0f, Local_173.f_107.f_17);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Var25 = { func_192(-1, iVar0) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var25.f_0, Var25.f_1, 0,104167f, 0,185185f, 0f, Local_173.f_107.f_17);
		Var27 = { func_192(6, iVar0) };
		func_126("MPArcadeCabinetGridTiles", "top_down_tile_1", Var27.f_0, Var27.f_1, 0,104167f, 0,185185f, 0f, Local_173.f_107.f_17);
		iVar0++;
	}
}

void func_190(int iParam0, int iParam1)
{
	struct<8> Var0;
	int iVar16;
	struct<2> Var17;
	float fVar19;
	struct<2> Var20;
	
	if (Local_173.f_318[iParam0 /*5*/][iParam1] != Local_626[iParam0 /*5*/][iParam1])
	{
		Local_173.f_349[iParam0 /*5*/][iParam1] = Local_173.f_318[iParam0 /*5*/][iParam1];
		Local_173.f_380[iParam0 /*5*/][iParam1] = NETWORK::GET_NETWORK_TIME();
		if (Local_173.f_140 == 7)
		{
			func_191("Steal_Area", func_192(iParam0, iParam1), Local_626[iParam0 /*5*/][iParam1]);
		}
	}
	if (Local_173.f_349[iParam0 /*5*/][iParam1] == -1)
	{
		iVar16 = Local_626[iParam0 /*5*/][iParam1];
		if ((NETWORK::GET_NETWORK_TIME() - Local_173.f_380[iParam0 /*5*/][iParam1]) < 600)
		{
			fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_173.f_380[iParam0 /*5*/][iParam1])) / 600f);
			if (fVar19 > 1f)
			{
				fVar19 = 1f;
			}
			Var17.f_0 = func_143(0f, 0,070833f, fVar19, 2);
			Var17.f_1 = func_143(0f, 0,125926f, fVar19, 2);
		}
		else
		{
			Var17 = { func_111(0,070833f, 0,125926f) };
		}
	}
	else if ((NETWORK::GET_NETWORK_TIME() - Local_173.f_380[iParam0 /*5*/][iParam1]) < 300)
	{
		iVar16 = Local_173.f_349[iParam0 /*5*/][iParam1];
		fVar19 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_173.f_380[iParam0 /*5*/][iParam1])) / 300f);
		if (fVar19 > 1f)
		{
			fVar19 = 1f;
		}
		Var17.f_0 = func_143(0,070833f, 0f, fVar19, 1);
		Var17.f_1 = func_143(0,125926f, 0f, fVar19, 1);
	}
	else
	{
		iVar16 = Local_626[iParam0 /*5*/][iParam1];
		Var17 = { func_111(0,070833f, 0,125926f) };
	}
	if (iVar16 > -1)
	{
		StringCopy(&Var0, "gang_logo_", 64);
		StringConCat(&Var0, Local_173.f_422[iVar16], 64);
		Var20 = { func_192(iParam0, iParam1) };
		func_126("MPArcadeCabinetGrid", &Var0, Var20.f_0, Var20.f_1, Var17.f_0, Var17.f_1, 0f, Local_173.f_107[iVar16 /*4*/]);
	}
	Local_173.f_318[iParam0 /*5*/][iParam1] = Local_626[iParam0 /*5*/][iParam1];
}

void func_191(char* sParam0, struct<2> Param1, int iParam3)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_167(Param1);
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, func_166(iParam3), false);
	AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

struct<2> func_192(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0.f_0 = (0,1380207f + (0,1041665f * IntToFloat(iParam0 + 1)));
	Var0.f_1 = (0,06851837f + (0,1851855f * IntToFloat(iParam1 + 1)));
	return Var0;
}

void func_193()
{
	func_127();
	func_189();
	func_183();
	func_194();
	func_176();
	func_107();
	func_106();
}

void func_194()
{
	struct<2> Var0;
	char cVar2[64];
	struct<8> Var18;
	
	if (Local_626.f_137 == 0)
	{
		return;
	}
	if (Local_626.f_131[(Local_626.f_137 - 1)] == -1)
	{
		return;
	}
	func_182(Local_173.f_107[Local_832[Local_626.f_131[(Local_626.f_137 - 1)] /*9*/].f_6 /*4*/], 102);
	Var0 = { func_111(0,5f, (0,5f + -0,016f)) };
	func_126("MPArcadeCabinetGridHUD", "text_round_winner", 0,5f, (0,5f + -0,016f), 0,3125f, 0,2407407f, 0f, Local_173.f_107.f_17);
	StringCopy(&cVar2, "text_gang_", 64);
	StringConCat(&cVar2, Local_173.f_422[Local_832[Local_626.f_131[(Local_626.f_137 - 1)] /*9*/].f_6], 64);
	StringConCat(&cVar2, "_", 64);
	if (Local_173.f_415 < 10)
	{
		if (Local_173.f_415 + 1 < 10)
		{
			StringConCat(&cVar2, "0", 64);
		}
		StringIntConCat(&cVar2, Local_173.f_415 + 1, 64);
		Local_173.f_415 = (Local_173.f_415 + Local_173.f_414);
	}
	else
	{
		StringIntConCat(&cVar2, 10, 64);
	}
	StringCopy(&Var18, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var18, Local_173.f_422[Local_832[Local_626.f_131[(Local_626.f_137 - 1)] /*9*/].f_6], 64);
	func_126(&Var18, &cVar2, Var0.f_0, ((Var0.f_1 + 0,07407407f) + ((0,2407407f - 0,1481481f) / 2f)), 0,3125f, 0,1481481f, 0f, Local_173.f_107[Local_832[Local_626.f_131[(Local_626.f_137 - 1)] /*9*/].f_6 /*4*/]);
}

void func_195()
{
	int iVar0;
	int iVar1;
	
	func_170("Ambience", &(Local_173.f_428), func_111(-1f, -1f), 0);
	func_310();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_173.f_178 && Local_934[iVar0 /*37*/].f_25)
		{
			func_286(iVar0);
		}
		iVar0++;
	}
	func_282();
	func_274();
	func_267();
	func_262();
	func_242();
	func_238();
	func_232();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_173.f_178 && Local_934[iVar0 /*37*/].f_25)
		{
			func_225(iVar0);
		}
		iVar0++;
	}
	func_197();
	func_172();
	func_196();
	if (Local_173.f_434 != Local_173.f_433)
	{
		if (Local_173.f_434 == Local_173.f_178)
		{
			func_136("Frontend_Player_Loses_Lead");
		}
		else if (Local_173.f_433 == Local_173.f_178)
		{
			func_136("Frontend_Player_Takes_Lead");
		}
	}
	if (Local_626.f_162 && !func_100(&(Local_173.f_316)))
	{
		func_22(func_23(3));
		func_98(&(Local_173.f_316), 0, 0);
	}
	if (Local_626.f_145 <= 4)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 <= 2)
	{
		if (Local_173.f_281[iVar1 /*7*/].f_5 != -1)
		{
			func_171(&(Local_173.f_281[iVar1 /*7*/].f_5));
		}
		iVar1++;
	}
	func_20();
	Local_151.f_20 = (Local_151.f_20 + iLocal_827[Local_832[Local_173.f_178 /*9*/].f_6]);
	Local_173.f_415 = 0;
	Local_832[Local_173.f_178 /*9*/].f_8 = (Local_832[Local_173.f_178 /*9*/].f_8 + iLocal_827[Local_832[Local_173.f_178 /*9*/].f_6]);
	func_19(8);
	func_22(func_23(2));
}

void func_196()
{
	bool bVar0;
	
	bVar0 = true;
	if (Local_626.f_145 != 4)
	{
		bVar0 = false;
	}
	if (func_71(Local_173.f_178))
	{
		bVar0 = false;
	}
	if (iLocal_827[Local_832[Local_173.f_178 /*9*/].f_6] > 0)
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (Local_173.f_430 == -1)
		{
			Local_173.f_430 = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(Local_173.f_430))
		{
			AUDIO::PLAY_SOUND_FRONTEND(Local_173.f_430, "Frontend_Player_No_Territory_Loop", "dlc_vw_am_tw_frontend_sounds", false);
		}
	}
	else if (Local_173.f_430 != -1 && !AUDIO::HAS_SOUND_FINISHED(Local_173.f_430))
	{
		AUDIO::STOP_SOUND(Local_173.f_430);
		AUDIO::RELEASE_SOUND_ID(Local_173.f_430);
		Local_173.f_430 = -1;
	}
}

void func_197()
{
	func_127();
	func_189();
	func_183();
	func_223();
	func_221();
	func_215();
	func_208();
	func_207();
	func_203();
	func_201();
	func_200();
	func_199();
	func_198();
	func_176();
	func_107();
	func_106();
}

void func_198()
{
	struct<2> Var0;
	
	if (!Local_626.f_162)
	{
		return;
	}
	if (!func_100(&(Local_173.f_316)))
	{
		return;
	}
	if (func_96(&(Local_173.f_316), 2250, 0))
	{
		return;
	}
	Var0 = { func_111(0,5f, (0,5f + -0,005f)) };
	func_126("MPArcadeCabinetGridHUD", "TEXT_SUDDEN", Var0.f_0, Var0.f_1, 0,2666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
	func_126("MPArcadeCabinetGridHUD", "TEXT_DEATH", Var0.f_0, (Var0.f_1 + 0,07407407f), 0,2666667f, 0,1148148f, 0f, Local_173.f_107.f_17);
}

void func_199()
{
	int iVar0;
	float fVar1;
	struct<8> Var2;
	
	if (Local_626.f_146 == -2147483647)
	{
		return;
	}
	iVar0 = (Local_626.f_146 - NETWORK::GET_NETWORK_TIME());
	if (iVar0 < -1500)
	{
		return;
	}
	if (iVar0 <= 0)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 4))
		{
			func_136("Frontend_GO");
			MISC::SET_BIT(&(Local_173.f_429), 4);
		}
		fVar1 = (SYSTEM::TO_FLOAT(iVar0) / (SYSTEM::TO_FLOAT(-1500) / 3,5f));
		func_182(Local_173.f_107.f_25, SYSTEM::ROUND(func_143(153f, 0f, fVar1, 1)));
		func_126("MPArcadeCabinetGridHUD", "text_fight", 0,5f, (0,5f + -0,005f), 0,2666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
		return;
	}
	func_182(Local_173.f_107.f_25, 153);
	if (iVar0 <= 1000)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 3))
		{
			func_136("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_173.f_429), 3);
		}
		func_126("MPArcadeCabinetGridHUD", "text_1", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
		return;
	}
	if (iVar0 <= 2000)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 2))
		{
			func_136("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_173.f_429), 2);
		}
		func_126("MPArcadeCabinetGridHUD", "text_2", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
		return;
	}
	if (iVar0 <= 3000)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 1))
		{
			func_136("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_173.f_429), 1);
		}
		func_126("MPArcadeCabinetGridHUD", "text_3", 0,5f, (0,5f + -0,005f), 0,06666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
		return;
	}
	if (iVar0 <= 4500)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 0))
		{
			func_136("Frontend_3_2_1");
			MISC::SET_BIT(&(Local_173.f_429), 0);
		}
		StringCopy(&Var2, "text_round_", 64);
		StringIntConCat(&Var2, Local_626.f_137 + 1, 64);
		func_126("MPArcadeCabinetGridHUD", &Var2, 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_173.f_107.f_17);
		return;
	}
}

void func_200()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	bVar0 = false;
	if (Local_832[Local_173.f_178 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		bVar0 = true;
	}
	if (func_71(Local_173.f_178))
	{
		iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_832[Local_173.f_178 /*9*/].f_3);
		if (iVar1 < 2500 || Local_832[Local_173.f_178 /*9*/] == 4)
		{
			bVar0 = true;
		}
	}
	if (!bVar0)
	{
		return;
	}
	fVar3 = (0,237037f / 2f);
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		func_126("MPArcadeCabinetGrid", "damage_v", 0,176f, fVar3, 0,03333333f, 0,237037f, 180f, Local_173.f_107.f_29);
		func_126("MPArcadeCabinetGrid", "damage_v", (1f - 0,173f), fVar3, 0,03333333f, 0,237037f, 0f, Local_173.f_107.f_29);
		fVar3 = (fVar3 + 0,237037f);
		iVar2++;
	}
	fVar4 = (0,1333333f / 2f);
	iVar2 = 0;
	while (iVar2 <= 6)
	{
		func_126("MPArcadeCabinetGrid", "damage_h", fVar4, 0,154f, 0,1333333f, 0,05925926f, 0f, Local_173.f_107.f_29);
		func_126("MPArcadeCabinetGrid", "damage_h", fVar4, (1f - 0,09f), 0,1333333f, 0,05925926f, 180f, Local_173.f_107.f_29);
		fVar4 = (fVar4 + 0,1333333f);
		iVar2++;
	}
}

void func_201()
{
	int iVar0;
	int iVar1;
	
	if (func_71(Local_173.f_178))
	{
		if (MISC::IS_BIT_SET(Local_173.f_429, 8))
		{
			MISC::CLEAR_BIT(&(Local_173.f_429), 8);
		}
		iVar0 = (NETWORK::GET_NETWORK_TIME() - Local_832[Local_173.f_178 /*9*/].f_3);
		if (iVar0 < 2500 || Local_832[Local_173.f_178 /*9*/] == 4)
		{
			func_202();
			if (!MISC::IS_BIT_SET(Local_173.f_429, 7))
			{
				MISC::SET_BIT(&(Local_173.f_429), 7);
				func_136("Frontend_Wasted");
			}
			return;
		}
		if (iVar0 < 3500)
		{
			if (!MISC::IS_BIT_SET(Local_173.f_429, 6))
			{
				MISC::SET_BIT(&(Local_173.f_429), 6);
				func_136("Frontend_Text_Appear_Generic");
			}
			func_182(Local_173.f_107.f_25, 153);
			func_126("MPArcadeCabinetGridHUD", "text_ready", 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_173.f_107.f_17);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(Local_173.f_429, 7))
		{
			MISC::CLEAR_BIT(&(Local_173.f_429), 7);
		}
		if (MISC::IS_BIT_SET(Local_173.f_429, 6))
		{
			MISC::CLEAR_BIT(&(Local_173.f_429), 6);
		}
	}
	if (Local_832[Local_173.f_178 /*9*/].f_4 == -2147483647)
	{
		return;
	}
	iVar1 = (NETWORK::GET_NETWORK_TIME() - Local_832[Local_173.f_178 /*9*/].f_4);
	if (iVar1 < 1000)
	{
		if (!MISC::IS_BIT_SET(Local_173.f_429, 8))
		{
			MISC::SET_BIT(&(Local_173.f_429), 8);
			func_136("Frontend_GO");
		}
		func_126("MPArcadeCabinetGridHUD", "text_fight", 0,5f, (0,5f + -0,005f), 0,2666667f, 0,1481481f, 0f, Local_173.f_107.f_17);
	}
}

void func_202()
{
	func_182(Local_173.f_107.f_29, 102);
	func_126("MPArcadeCabinetGridHUD", "text_wasted", 0,5f, (0,5f + -0,005f), 0,3125f, 0,1481481f, 0f, Local_173.f_107.f_29);
}

void func_203()
{
	struct<2> Var0;
	
	Var0 = { func_206(Local_173.f_438) };
	if (func_205(Local_173.f_439, Var0))
	{
		return;
	}
	func_126("MPArcadeCabinetGrid", func_204(Local_173.f_438), Local_173.f_439, Local_173.f_439.f_1, Var0.f_0, Var0.f_1, 0f, Local_173.f_107.f_17);
}

char* func_204(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BIRDS";
		
		case 1:
			return "AIRPLANE";
		
		case 2:
			return "HELICOPTER";
		
		default:
	}
	return "";
}

int func_205(struct<2> Param0, struct<2> Param2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = (Param0.f_0 - (Param2.f_0 / 2f));
	if (fVar0 > (1f - 0,15625f))
	{
		return 1;
	}
	fVar1 = (Param0.f_0 + (Param2.f_0 / 2f));
	if (fVar1 < 0,15625f)
	{
		return 1;
	}
	fVar2 = (Param0.f_1 - (Param2.f_1 / 2f));
	if (fVar2 > (1f - 0,06944444f))
	{
		return 1;
	}
	fVar3 = (Param0.f_1 + (Param2.f_1 / 2f));
	if (fVar3 < (0f + 0,06944444f))
	{
		return 1;
	}
	return 0;
}

struct<2> func_206(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_111(0,03333333f, 0,05925926f);
		
		case 1:
			return func_111(0,1145833f, 0,2037037f);
		
		case 2:
			return func_111(0,1145833f, 0,2037037f);
		
		default:
	}
	return func_111(0f, 0f);
}

void func_207()
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var17;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Local_173.f_159[iVar0 /*3*/] <= -1)
		{
		}
		else
		{
			StringCopy(&Var1, "fire_ball", 64);
			StringIntConCat(&Var1, Local_173.f_159[iVar0 /*3*/] + 1, 64);
			Var17 = { func_111((0,066667f / 2f), (0,118519f / 2f)) };
			func_126("MPArcadeCabinetGrid", &Var1, Local_173.f_159[iVar0 /*3*/].f_1, Local_173.f_159[iVar0 /*3*/].f_1.f_1, Var17.f_0, Var17.f_1, 0f, Local_173.f_107.f_17);
			Local_173.f_159[iVar0 /*3*/] = (Local_173.f_159[iVar0 /*3*/] + Local_173.f_412);
			if (Local_173.f_159[iVar0 /*3*/] >= 9)
			{
				Local_173.f_159[iVar0 /*3*/] = -1;
			}
		}
		iVar0++;
	}
}

void func_208()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (Local_626.f_148[iVar0 /*4*/].f_3 == -1)
		{
		}
		else if (NETWORK::GET_NETWORK_TIME() < Local_626.f_148[iVar0 /*4*/])
		{
			func_211(iVar0);
		}
		else
		{
			iVar1 = func_210(Local_626.f_148[iVar0 /*4*/].f_2);
			if (NETWORK::GET_NETWORK_TIME() > (Local_626.f_148[iVar0 /*4*/] + iVar1))
			{
			}
			else
			{
				if (NETWORK::GET_NETWORK_TIME() < (Local_626.f_148[iVar0 /*4*/] + (iVar1 / 2)) && func_205(func_111(Local_173.f_281[iVar0 /*7*/], Local_173.f_281[iVar0 /*7*/].f_1), func_111(Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1)))
				{
					func_211(iVar0);
				}
				fVar2 = func_209(Local_626.f_148[iVar0 /*4*/].f_2);
				Local_173.f_281[iVar0 /*7*/].f_4 = (Local_173.f_281[iVar0 /*7*/].f_4 + Local_173.f_414);
				if (Local_173.f_281[iVar0 /*7*/].f_4 >= Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/].f_1)
				{
					Local_173.f_281[iVar0 /*7*/].f_4 = 0;
				}
				StringCopy(&Var3, "", 64);
				StringConCat(&Var3, Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/], 64);
				if (Local_626.f_148[iVar0 /*4*/].f_3 < 5)
				{
					StringIntConCat(&Var3, Local_173.f_281[iVar0 /*7*/].f_4 + 1, 64);
				}
				func_126("MPArcadeCabinetGrid", &Var3, Local_173.f_281[iVar0 /*7*/], Local_173.f_281[iVar0 /*7*/].f_1, Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/].f_2, Local_173.f_22[Local_626.f_148[iVar0 /*4*/].f_3 /*4*/].f_2.f_1, fVar2, Local_173.f_107.f_17);
			}
		}
		iVar0++;
	}
}

float func_209(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 90f;
		
		case 1:
			return 270f;
		
		case 2:
			return 0f;
		
		case 3:
			return 180f;
		
		default:
	}
	return 0f;
}

var func_210(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
		case 1:
			iVar0 = 11;
			break;
		
		case 2:
		case 3:
			iVar0 = 15;
			break;
	}
	return iVar0 * 650;
}

void func_211(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	func_185(Local_626.f_148[iParam0 /*4*/].f_1, &iVar0, &iVar1);
	if (Local_626.f_148[iParam0 /*4*/].f_2 == 1)
	{
		Var2 = { func_188(func_74(iVar0, 0)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + -0,011f), 0,02083333f, 0,01851852f, 180f, func_213(Local_626.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_626.f_148[iParam0 /*4*/].f_2 == 0)
	{
		Var2 = { func_188(func_74(iVar0, 8)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", Var2.f_0, (Var2.f_1 + 0,023f), 0,02083333f, 0,01851852f, 0f, func_213(Local_626.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_626.f_148[iParam0 /*4*/].f_2 == 3)
	{
		Var2 = { func_188(func_74(0, iVar1)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_212(iVar1, 1)), Var2.f_1, 0,02083333f, 0,01851852f, 90f, func_213(Local_626.f_148[iParam0 /*4*/].f_3));
	}
	else if (Local_626.f_148[iParam0 /*4*/].f_2 == 2)
	{
		Var2 = { func_188(func_74(12, iVar1)) };
		func_126("MPArcadeCabinetGridHUD", "vehicle_alert", (Var2.f_0 + func_212(iVar1, 0)), Var2.f_1, 0,02083333f, 0,01851852f, -90f, func_213(Local_626.f_148[iParam0 /*4*/].f_3));
	}
}

float func_212(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return -0,011f;
			}
			return 0,00975f;
		
		case 2:
			if (bParam1)
			{
				return -0,02275f;
			}
			return 0,02275f;
		
		case 4:
			if (bParam1)
			{
				return -0,02375f;
			}
			return 0,02275f;
		
		case 6:
			if (bParam1)
			{
				return -0,01975f;
			}
			return 0,018f;
		
		case 8:
			if (bParam1)
			{
				return -0,006f;
			}
			return 0,004f;
		
		default:
	}
	return 0f;
}

struct<4> func_213(int iParam0)
{
	float fVar0;
	struct<4> Var1;
	
	fVar0 = SYSTEM::SIN((IntToFloat(MISC::GET_GAME_TIMER()) * 0,5f));
	Var1 = { Local_173.f_107.f_17 };
	switch (iParam0)
	{
		case 0:
		case 4:
			break;
		
		case 1:
		case 2:
		case 3:
			if (fVar0 > 0f)
			{
				func_214(&Var1, 255, 0, 0, 255);
			}
			else
			{
				func_214(&Var1, 0, 0, 255, 255);
			}
			break;
		
		case 5:
			Var1 = { Local_173.f_107[0 /*4*/] };
			break;
		
		case 6:
			Var1 = { Local_173.f_107[1 /*4*/] };
			break;
		
		case 7:
			Var1 = { Local_173.f_107[2 /*4*/] };
			break;
		
		case 8:
			Var1 = { Local_173.f_107[3 /*4*/] };
			break;
	}
	Var1.f_3 = (55 + SYSTEM::ROUND((MISC::ABSF(fVar0) * 200f)));
	return Var1;
}

void func_214(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	*uParam0 = iParam1;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
}

void func_215()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == Local_173.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_934[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_216(iVar0);
		}
		iVar0++;
	}
	func_216(Local_173.f_178);
}

void func_216(int iParam0)
{
	struct<8> Var0;
	char cVar16[64];
	struct<4> Var32;
	float fVar36;
	float fVar37;
	char cVar38[64];
	int iVar54;
	struct<2> Var55;
	struct<8> Var57;
	struct<2> Var73;
	
	StringCopy(&Var0, "MPArcadeCabinetGridPlayer", 64);
	StringConCat(&Var0, Local_173.f_422[Local_832[iParam0 /*9*/].f_6], 64);
	if (func_71(iParam0))
	{
		StringCopy(&cVar16, "dead_", 64);
		StringConCat(&cVar16, Local_173.f_422[Local_832[iParam0 /*9*/].f_6], 64);
		func_126(&Var0, &cVar16, Local_173.f_204[iParam0 /*19*/], Local_173.f_204[iParam0 /*19*/].f_1, 0,033333f, 0,059259f, 0f, Local_173.f_107.f_17);
		return;
	}
	Var32 = { Local_173.f_107.f_17 };
	if (Local_869[iParam0 /*16*/].f_2 + func_184(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (Local_173.f_204[iParam0 /*19*/].f_4 == 0)
		{
			func_165("Footsteps", iParam0, &(Local_173.f_204[iParam0 /*19*/].f_7));
		}
		Local_173.f_204[iParam0 /*19*/].f_4 = (Local_173.f_204[iParam0 /*19*/].f_4 + Local_173.f_412);
		if (Local_173.f_204[iParam0 /*19*/].f_4 >= 12)
		{
			Local_173.f_204[iParam0 /*19*/].f_4 = 0;
		}
	}
	if (Local_832[iParam0 /*9*/].f_3 + 1000 > NETWORK::GET_NETWORK_TIME())
	{
		fVar36 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT((Local_832[iParam0 /*9*/].f_3 + 1000 - NETWORK::GET_NETWORK_TIME())) * 0,35f)));
		Var32.f_3 = (255 - SYSTEM::ROUND(fVar36) * 150);
	}
	fVar37 = func_220(Local_869[iParam0 /*16*/].f_4);
	StringCopy(&cVar38, "walk_", 64);
	StringConCat(&cVar38, Local_173.f_422[Local_832[iParam0 /*9*/].f_6], 64);
	StringConCat(&cVar38, "_", 64);
	StringConCat(&cVar38, Local_173.f_59[Local_832[iParam0 /*9*/].f_5 /*5*/], 64);
	StringIntConCat(&cVar38, Local_173.f_204[iParam0 /*19*/].f_4 + 1, 64);
	if (Local_832[iParam0 /*9*/].f_1 < 1f && Local_173.f_204[iParam0 /*19*/].f_4 > 0)
	{
		iVar54 = Var32.f_3;
		Var32.f_3 = (iVar54 / 2);
		Var55 = { Local_173.f_204[iParam0 /*19*/] };
		if (func_76())
		{
			Var55 = { func_187(Var55, func_111((0,002604167f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0,00462963f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		else
		{
			Var55 = { func_187(Var55, func_111((0,002604167f * SYSTEM::COS(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))), (0,00462963f * SYSTEM::SIN(SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))))) };
		}
		func_126(&Var0, &cVar38, Var55.f_0, Var55.f_1, 0,033333f, 0,059259f, fVar37, Var32);
		Var32.f_3 = iVar54;
	}
	func_126(&Var0, &cVar38, Local_173.f_204[iParam0 /*19*/], Local_173.f_204[iParam0 /*19*/].f_1, 0,033333f, 0,059259f, fVar37, Var32);
	if (Local_173.f_204[iParam0 /*19*/].f_5 > -1)
	{
		StringCopy(&Var57, "muzzle_flare_", 64);
		StringIntConCat(&Var57, Local_173.f_204[iParam0 /*19*/].f_5 + 1, 64);
		Var73 = { func_217(iParam0, fVar37) };
		func_126("MPArcadeCabinetGrid", &Var57, Var73.f_0, Var73.f_1, 0,01666667f, 0,02962963f, fVar37, Var32);
		Local_173.f_204[iParam0 /*19*/].f_5 = (Local_173.f_204[iParam0 /*19*/].f_5 + Local_173.f_412);
		if (Local_173.f_204[iParam0 /*19*/].f_5 >= 3)
		{
			Local_173.f_204[iParam0 /*19*/].f_5 = -1;
		}
	}
}

struct<2> func_217(int iParam0, float fParam1)
{
	struct<2> Var0;
	
	Var0 = { func_219(Local_173.f_204[iParam0 /*19*/]) };
	switch (Local_832[iParam0 /*9*/].f_5)
	{
		case 1:
		case 2:
			Var0 = { func_187(Var0, func_111(7f, -36f)) };
			break;
		
		case 3:
		case 4:
		case 5:
			Var0 = { func_187(Var0, func_111(5f, -40f)) };
			break;
	}
	Var0 = { func_218(func_219(Local_173.f_204[iParam0 /*19*/]), Var0, fParam1) };
	Var0 = { func_110(Var0) };
	return Var0;
}

struct<2> func_218(struct<2> Param0, struct<2> Param2, float fParam4)
{
	struct<2> Var0;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar2 = SYSTEM::SIN(fParam4);
	fVar3 = SYSTEM::COS(fParam4);
	Var0.f_0 = (Param2.f_0 - Param0.f_0);
	Var0.f_1 = (Param2.f_1 - Param0.f_1);
	fVar4 = ((Var0.f_0 * fVar3) - (Var0.f_1 * fVar2));
	fVar5 = ((Var0.f_0 * fVar2) + (Var0.f_1 * fVar3));
	Var0.f_0 = (fVar4 + Param0.f_0);
	Var0.f_1 = (fVar5 + Param0.f_1);
	return Var0;
}

struct<2> func_219(struct<2> Param0)
{
	return func_111((Param0.f_0 * 1920f), (Param0.f_1 * 1080f));
}

float func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		
		case 1:
			return 180f;
		
		case 2:
			return 270f;
		
		case 3:
			return 90f;
		
		default:
	}
	return 0f;
}

void func_221()
{
	float fVar0;
	struct<2> Var1;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<2> Var6;
	struct<8> Var8;
	struct<4> Var24;
	
	fVar0 = MISC::ABSF(SYSTEM::SIN((SYSTEM::TO_FLOAT(NETWORK::GET_NETWORK_TIME()) * 0,2f)));
	bVar5 = false;
	iVar3 = 0;
	while (iVar3 <= 6)
	{
		if (Local_626.f_62[iVar3 /*3*/].f_1 == -1)
		{
		}
		else if (MISC::IS_BIT_SET(Local_173.f_309, iVar3))
		{
		}
		else
		{
			Var6 = { func_188(Local_626.f_62[iVar3 /*3*/]) };
			MISC::SET_BIT(&uVar4, iVar3);
			if (!MISC::IS_BIT_SET(Local_173.f_310, iVar3) && !bVar5)
			{
				func_222("Pickup_Spawn", Var6, 1);
				bVar5 = true;
			}
			StringCopy(&Var8, Local_173.f_90[Local_626.f_62[iVar3 /*3*/].f_1 /*2*/], 64);
			if (Local_173.f_90[Local_626.f_62[iVar3 /*3*/].f_1 /*2*/].f_1 > 0)
			{
				StringIntConCat(&Var8, (Local_173.f_311 % Local_173.f_90[Local_626.f_62[iVar3 /*3*/].f_1 /*2*/].f_1) + 1, 64);
			}
			Var1 = { func_111(0,033333f, 0,059259f) };
			if (!((Local_626.f_62[iVar3 /*3*/].f_1 == 0 || Local_626.f_62[iVar3 /*3*/].f_1 == 2) || Local_626.f_62[iVar3 /*3*/].f_1 == 1))
			{
				Var1.f_0 = (Var1.f_0 - ((Var1.f_0 * 0,15f) * fVar0));
				Var1.f_1 = (Var1.f_1 - ((Var1.f_1 * 0,15f) * fVar0));
			}
			Var24 = { Local_173.f_107.f_17 };
			if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_62[iVar3 /*3*/].f_2) < 1250)
			{
				Var24.f_3 = SYSTEM::ROUND((fVar0 * 255f));
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_62[iVar3 /*3*/].f_2) > 16500)
			{
				Var24.f_3 = SYSTEM::ROUND((func_143(1f, 0,1f, (SYSTEM::TO_FLOAT(((NETWORK::GET_NETWORK_TIME() - Local_626.f_62[iVar3 /*3*/].f_2) - 16500)) / 1000f), 4) * 255f));
			}
			func_126("MPArcadeCabinetGrid", &Var8, Var6.f_0, Var6.f_1, Var1.f_0, Var1.f_1, 0f, Var24);
		}
		iVar3++;
	}
	Local_173.f_310 = uVar4;
}

void func_222(char* sParam0, struct<2> Param1, bool bParam3)
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_167(Param1);
	if (bParam3)
	{
	}
	iVar1 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FRONTEND(iVar1, sParam0, "dlc_vw_am_tw_global_sounds", false);
	if (bParam3)
	{
		AUDIO::SET_VARIABLE_ON_SOUND(iVar1, "Screen_Position", fVar0);
	}
	AUDIO::RELEASE_SOUND_ID(iVar1);
}

void func_223()
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<8> Var3;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)) && !Local_934[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar0 /*9*/].f_6 == -1)
		{
		}
		else
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= 1)
			{
				if (Local_869[iVar0 /*16*/].f_5[iVar1 /*5*/] == -2147483647)
				{
				}
				else if (MISC::IS_BIT_SET(Local_173.f_303, func_224(iVar0, iVar1)))
				{
				}
				else
				{
					fVar2 = func_220(Local_869[iVar0 /*16*/].f_5[iVar1 /*5*/].f_3);
					if (Local_869[iVar0 /*16*/].f_5[iVar1 /*5*/].f_4 == 4)
					{
						StringCopy(&Var3, "rocket_trail_", 64);
						StringIntConCat(&Var3, Local_173.f_416 + 1, 64);
						func_126("MPArcadeCabinetGrid", &Var3, Local_173.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_173.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0,004166667f, 0,03333333f, fVar2, Local_173.f_107.f_17);
					}
					else
					{
						func_126("MPArcadeCabinetGrid", "bullet", Local_173.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/], Local_173.f_204[iVar0 /*19*/].f_10[iVar1 /*4*/].f_1, 0,004166667f, 0,01111111f, fVar2, Local_173.f_107.f_17);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

int func_224(int iParam0, int iParam1)
{
	return (iParam1 + (2 * iParam0));
}

void func_225(int iParam0)
{
	if (iLocal_827[Local_934[iParam0 /*37*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_626.f_146) > 3000)
	{
		if ((MISC::IS_BIT_SET(Local_173.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !MISC::IS_BIT_SET(Local_173.f_417, 3))
		{
		}
	}
	if (Local_934[iParam0 /*37*/] != 3)
	{
		return;
	}
	if (Local_626.f_162)
	{
		func_231(iParam0, 4);
	}
	if (func_230(iParam0))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_934[iParam0 /*37*/].f_3 + 2500 && !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 6))
		{
			MISC::SET_BIT(&(Local_173.f_142[iParam0]), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_934[iParam0 /*37*/].f_3 + 3500)
		{
			func_227(iParam0);
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_934[iParam0 /*37*/].f_3 + 1000 && !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 6))
	{
		func_231(iParam0, 4);
		func_226("Death_Dead");
	}
}

void func_226(char* sParam0)
{
	if (Local_173.f_178.f_4 == -1)
	{
		Local_173.f_178.f_4 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(Local_173.f_178.f_4, sParam0, "dlc_vw_am_tw_global_sounds", false);
}

void func_227(int iParam0)
{
	func_228(iParam0);
	func_231(iParam0, 2);
	func_226("Death_Resurrect");
	Local_934[iParam0 /*37*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_934[iParam0 /*37*/].f_2 = 8;
	Local_934[iParam0 /*37*/].f_5 = 0;
	Local_934[iParam0 /*37*/].f_1 = 1f;
	Local_173.f_178.f_2 = 0;
	if (MISC::IS_BIT_SET(Local_173.f_142[iParam0], 6))
	{
		MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 6);
	}
}

void func_228(int iParam0)
{
	Local_934[iParam0 /*37*/].f_9 = func_229(iParam0);
	Local_934[iParam0 /*37*/].f_9.f_1 = Local_934[iParam0 /*37*/].f_9;
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (iVar2 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_934[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(iVar2))
		{
		}
		else
		{
			func_185(Local_869[iVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&iVar4, iVar8);
			MISC::SET_BIT(&iVar5, iVar9);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (Local_626.f_148[iVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_185(Local_626.f_148[iVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_626.f_148[iVar2 /*4*/].f_2 == 0 || Local_626.f_148[iVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&iVar6, iVar8);
			}
			else if (Local_626.f_148[iVar2 /*4*/].f_2 == 2 || Local_626.f_148[iVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&iVar7, iVar9);
			}
		}
		iVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_74(iVar2, iVar3);
			if (!(func_84(&(Local_626.f_85[Local_934[iParam0 /*37*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_84(&(Local_626.f_85[Local_934[iParam0 /*37*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iVar6, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar7, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar4, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar5, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_230(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_173.f_142[iParam0], 6))
	{
		return 1;
	}
	if (Local_934[iParam0 /*37*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_827[Local_934[iParam0 /*37*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_231(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	Local_934[iParam0 /*37*/] = iParam1;
}

void func_232()
{
	if (iLocal_827[Local_832[Local_173.f_178 /*9*/].f_6] == 0 && (NETWORK::GET_NETWORK_TIME() - Local_626.f_146) > 3000)
	{
		if ((MISC::IS_BIT_SET(Local_173.f_417, 1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !MISC::IS_BIT_SET(Local_173.f_417, 3))
		{
			func_152("SCGW_H_RSPWN", 7500, 0);
			MISC::SET_BIT(&(Local_173.f_417), 3);
		}
	}
	if (Local_832[Local_173.f_178 /*9*/] != 3)
	{
		return;
	}
	func_20();
	if (Local_626.f_162)
	{
		func_237(4);
		func_169(6);
	}
	if (func_236(Local_173.f_178))
	{
		if (NETWORK::GET_NETWORK_TIME() >= Local_832[Local_173.f_178 /*9*/].f_3 + 2500 && !MISC::IS_BIT_SET(Local_173.f_141, 6))
		{
			MISC::SET_BIT(&(Local_173.f_141), 6);
		}
		if (NETWORK::GET_NETWORK_TIME() >= Local_832[Local_173.f_178 /*9*/].f_3 + 3500)
		{
			func_233();
		}
	}
	else if (NETWORK::GET_NETWORK_TIME() > Local_832[Local_173.f_178 /*9*/].f_3 + 1000 && !MISC::IS_BIT_SET(Local_173.f_141, 6))
	{
		func_237(4);
		func_226("Death_Dead");
		func_169(6);
	}
}

void func_233()
{
	func_234();
	func_237(2);
	func_226("Death_Resurrect");
	Local_832[Local_173.f_178 /*9*/].f_4 = NETWORK::GET_NETWORK_TIME();
	Local_832[Local_173.f_178 /*9*/].f_2 = 8;
	Local_832[Local_173.f_178 /*9*/].f_5 = 0;
	Local_832[Local_173.f_178 /*9*/].f_1 = 1f;
	Local_173.f_178.f_2 = 0;
	func_169(4);
	if (MISC::IS_BIT_SET(Local_173.f_141, 6))
	{
		MISC::CLEAR_BIT(&(Local_173.f_141), 6);
	}
}

void func_234()
{
	Local_869[Local_173.f_178 /*16*/] = func_235();
	Local_869[Local_173.f_178 /*16*/].f_1 = Local_869[Local_173.f_178 /*16*/];
}

int func_235()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (iVar2 == Local_173.f_178)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_934[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar2 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(iVar2))
		{
		}
		else
		{
			func_185(Local_869[iVar2 /*16*/], &iVar8, &iVar9);
			MISC::SET_BIT(&iVar4, iVar8);
			MISC::SET_BIT(&iVar5, iVar9);
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (Local_626.f_148[iVar2 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_185(Local_626.f_148[iVar2 /*4*/].f_1, &iVar8, &iVar9);
			if (Local_626.f_148[iVar2 /*4*/].f_2 == 0 || Local_626.f_148[iVar2 /*4*/].f_2 == 1)
			{
				MISC::SET_BIT(&iVar6, iVar8);
			}
			else if (Local_626.f_148[iVar2 /*4*/].f_2 == 2 || Local_626.f_148[iVar2 /*4*/].f_2 == 3)
			{
				MISC::SET_BIT(&iVar7, iVar9);
			}
		}
		iVar2++;
	}
	iVar10 = -1;
	iVar11 = 0;
	iVar2 = 0;
	while (iVar2 <= 12)
	{
		iVar3 = 0;
		while (iVar3 <= 8)
		{
			iVar11 = 100;
			iVar10 = func_74(iVar2, iVar3);
			if (!(func_84(&(Local_626.f_85[Local_832[Local_173.f_178 /*9*/].f_6 /*11*/][0 /*5*/]), iVar10) || func_84(&(Local_626.f_85[Local_832[Local_173.f_178 /*9*/].f_6 /*11*/][1 /*5*/]), iVar10)))
			{
			}
			else
			{
				if (MISC::IS_BIT_SET(iVar6, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar7, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar4, iVar2))
				{
					iVar11 = (iVar11 - 25);
				}
				if (MISC::IS_BIT_SET(iVar5, iVar3))
				{
					iVar11 = (iVar11 - 25);
				}
				if (iVar11 == 100)
				{
					return iVar10;
				}
				if (iVar11 > iVar1)
				{
					iVar1 = iVar11;
					iVar0 = iVar10;
				}
			}
			iVar3++;
		}
		iVar2++;
	}
	return iVar0;
}

int func_236(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_173.f_141, 6))
	{
		return 1;
	}
	if (Local_832[iParam0 /*9*/].f_6 == -1)
	{
		return 0;
	}
	if (iLocal_827[Local_832[iParam0 /*9*/].f_6] == 0)
	{
		return 0;
	}
	return 1;
}

void func_237(int iParam0)
{
	if (Local_173.f_178 == -1)
	{
		return;
	}
	Local_832[Local_173.f_178 /*9*/] = iParam0;
}

void func_238()
{
	int iVar0;
	
	if (Local_173.f_437 == -2147483647)
	{
		Local_173.f_437 = NETWORK::GET_NETWORK_TIME();
	}
	if ((NETWORK::GET_NETWORK_TIME() - Local_173.f_437) > 22500)
	{
		Local_173.f_437 = NETWORK::GET_NETWORK_TIME();
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		if (iVar0 == Local_173.f_438)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		Local_173.f_438 = iVar0;
		func_241();
	}
	Local_173.f_439 = (Local_173.f_439 + (func_240() * SYSTEM::TIMESTEP()));
	Local_173.f_439.f_1 = (Local_173.f_439.f_1 + (func_239() * SYSTEM::TIMESTEP()));
}

float func_239()
{
	switch (Local_173.f_438)
	{
		case 0:
			return -0,1111111f;
		
		case 1:
			return -0,1111111f;
		
		case 2:
			return -0,1388889f;
		
		default:
	}
	return 0f;
}

float func_240()
{
	switch (Local_173.f_438)
	{
		case 0:
			return -0,0625f;
		
		case 1:
			return -0,0625f;
		
		case 2:
			return 0,078125f;
		
		default:
	}
	return 0f;
}

void func_241()
{
	switch (Local_173.f_438)
	{
		case 0:
		case 1:
			Local_173.f_439 = { func_111((1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(-0,5f, 0f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0,5f))) };
			break;
		
		case 2:
			Local_173.f_439 = { func_111((0f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0,5f)), (1f + MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0,5f))) };
			break;
	}
}

void func_242()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_934[iVar1 /*37*/].f_25)
		{
		}
		else if (Local_934[iVar1 /*37*/].f_6 == -1)
		{
		}
		else
		{
			func_243(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_173.f_306 = iVar0;
}

void func_243(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		iVar11 = func_224(iParam0, iVar10);
		if (Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] == -2147483647)
		{
			if (MISC::IS_BIT_SET(Local_173.f_304, iVar11))
			{
				MISC::CLEAR_BIT(&(Local_173.f_304), iVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, iVar11);
			if (!MISC::IS_BIT_SET(Local_173.f_306, iVar11))
			{
				Local_173.f_204[iParam0 /*19*/].f_5 = 0;
				func_260(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
			switch (Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_111(0f, 0,01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_111(0f, -0,01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_111(0,008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_111(-0,008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_173.f_59[Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (MISC::IS_BIT_SET(Local_173.f_304, iVar11))
			{
				if (fVar15 > 1f)
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_111(-1f, -1f) };
					Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/] = -2147483647;
					Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 = -1f;
					Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1.f_1 = -1f;
					Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_3 = -1;
					Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 = -1;
				}
			}
			else
			{
				Var16 = { Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_259(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0,0001f), (-1f + 0,0001f)) && func_259(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0,0001f), (-1f + 0,0001f)))
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_257(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_187(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_832[iVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(iVar20))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar20 /*19*/] };
						Var2 = { Local_173.f_204[iVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_250(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_934[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_934[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_249(iVar22))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar22 /*19*/] };
						Var2 = { Local_173.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_246(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!MISC::IS_BIT_SET(Local_173.f_304, iVar11))
					{
						if (Local_934[iParam0 /*37*/].f_9.f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_244(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_173.f_304), iVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_244(struct<2> Param0)
{
	Local_173.f_159[Local_173.f_308 /*3*/] = 0;
	Local_173.f_159[Local_173.f_308 /*3*/].f_1 = { Param0 };
	if (func_245(Param0, Local_173.f_204[Local_173.f_178 /*19*/]) < SYSTEM::POW((0,185185f * 2f), 2f))
	{
		PAD::SET_PAD_SHAKE(0, 1000, 100);
	}
	func_222("Rocket_Explode", Param0, 1);
	Local_173.f_308++;
	if (Local_173.f_308 >= 6)
	{
		Local_173.f_308 = 0;
	}
}

float func_245(struct<2> Param0, struct<2> Param2)
{
	return (SYSTEM::POW((Param2.f_0 - Param0.f_0), 2f) + SYSTEM::POW((Param2.f_1 - Param0.f_1), 2f));
}

void func_246(int iParam0, int iParam1, int iParam2)
{
	Local_173.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_173.f_204[iParam1 /*19*/] };
	func_247(iParam1, -Local_173.f_59[Local_934[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_PAD_SHAKE(0, 250, 200);
	Local_934[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_934[iParam1 /*37*/] != 2)
	{
		func_164((6 + Local_934[iParam2 /*37*/].f_6));
	}
	if (Local_934[iParam1 /*37*/].f_2 <= 0)
	{
		func_164((2 + Local_934[iParam1 /*37*/].f_6));
		Local_151.f_18++;
	}
}

void func_247(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (Local_934[iParam0 /*37*/].f_2 + iParam1);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_934[iParam0 /*37*/] == 2)
		{
			func_231(iParam0, 3);
			func_226("Death_Bleeps");
		}
	}
	if (iVar0 != Local_934[iParam0 /*37*/].f_2)
	{
		Local_934[iParam0 /*37*/].f_2 = iVar0;
	}
	if (iParam1 < 0)
	{
		func_248(iParam0, Local_934[iParam0 /*37*/] != 2, iParam2);
	}
}

void func_248(int iParam0, bool bParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = -77904037;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = bParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_138(1);
	if (!iVar5 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, iVar5);
	}
}

int func_249(int iParam0)
{
	if (Local_934[iParam0 /*37*/] == 3)
	{
		return 1;
	}
	if (Local_934[iParam0 /*37*/] == 4)
	{
		return 1;
	}
	return 0;
}

void func_250(int iParam0, int iParam1, int iParam2)
{
	Local_173.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_173.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_173.f_178)
	{
		func_251(-Local_173.f_59[Local_934[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_PAD_SHAKE(0, 250, 200);
		Local_832[Local_173.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_832[Local_173.f_178 /*9*/] != 2)
		{
			func_164((6 + Local_934[iParam2 /*37*/].f_6));
		}
	}
	else if (iParam2 == Local_173.f_178 && (Local_832[iParam1 /*9*/].f_2 - Local_173.f_59[Local_934[iParam2 /*37*/].f_9.f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_164((2 + Local_832[iParam1 /*9*/].f_6));
		Local_151.f_18++;
	}
}

void func_251(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (Local_832[Local_173.f_178 /*9*/].f_2 + iParam0);
	if (iVar0 > 8)
	{
		iVar0 = 8;
	}
	else if (iVar0 <= 0)
	{
		iVar0 = 0;
		if (Local_832[Local_173.f_178 /*9*/] == 2)
		{
			func_237(3);
			MISC::SET_BIT(&(Local_173.f_141), 2);
			func_226("Death_Bleeps");
			Global_1932182 = 5;
		}
	}
	if (iVar0 != Local_832[Local_173.f_178 /*9*/].f_2)
	{
		Local_832[Local_173.f_178 /*9*/].f_2 = iVar0;
	}
	if (iParam0 < 0)
	{
		func_248(Local_173.f_178, Local_832[Local_173.f_178 /*9*/] != 2, iParam1);
	}
}

int func_252(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	var uVar8;
	
	Var0 = { Param0 };
	Var2 = { Param2 };
	Var4 = { Param4 };
	Var6 = { Param6 };
	func_256(&Param0, &Param2);
	func_256(&Param4, &Param6);
	func_256(&Var2, &Var0);
	func_256(&Var6, &Var4);
	if (((func_253(Param0, Param2, Var4, Var6, &uVar8) || func_253(Param0, Param2, Param4, Param6, &uVar8)) || func_253(Var0, Var2, Param4, Param6, &uVar8)) || func_253(Var0, Var2, Var4, Var6, &uVar8))
	{
		return 1;
	}
	return 0;
}

int func_253(struct<2> Param0, struct<2> Param2, struct<2> Param4, struct<2> Param6, var uParam8)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<2> Var9;
	
	fVar0 = (Param2.f_1 - Param0.f_1);
	fVar1 = (Param0.f_0 - Param2.f_0);
	fVar2 = ((fVar0 * Param0.f_0) + (fVar1 * Param0.f_1));
	fVar3 = (Param6.f_1 - Param4.f_1);
	fVar4 = (Param4.f_0 - Param6.f_0);
	fVar5 = ((fVar3 * Param4.f_0) + (fVar4 * Param4.f_1));
	fVar6 = ((fVar0 * fVar4) - (fVar3 * fVar1));
	if (!func_259(fVar6, (0f - 0,0001f), (0f + 0,0001f)))
	{
		fVar7 = (((fVar4 * fVar2) - (fVar1 * fVar5)) / fVar6);
		fVar8 = (((fVar0 * fVar5) - (fVar3 * fVar2)) / fVar6);
		Var9 = { func_111(fVar7, fVar8) };
		if (((((((func_255((Param0.f_0 - 0,001f), (Param2.f_0 - 0,001f)) <= Var9.f_0 && Var9.f_0 <= func_254((Param0.f_0 + 0,001f), (Param2.f_0 + 0,001f))) && func_255((Param0.f_1 - 0,001f), (Param2.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_254((Param0.f_1 + 0,001f), (Param2.f_1 + 0,001f))) && func_255((Param4.f_0 - 0,001f), (Param6.f_0 - 0,001f)) <= Var9.f_0) && Var9.f_0 <= func_254((Param4.f_0 + 0,001f), (Param6.f_0 + 0,001f))) && func_255((Param4.f_1 - 0,001f), (Param6.f_1 - 0,001f)) <= Var9.f_1) && Var9.f_1 <= func_254((Param4.f_1 + 0,001f), (Param6.f_1 + 0,001f)))
		{
			*uParam8 = { Var9 };
			return 1;
		}
	}
	*uParam8 = { func_111(3,402823E+38f, 3,402823E+38f) };
	return 0;
}

float func_254(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_255(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_256(var uParam0, var uParam1)
{
	if (func_259(*uParam0, (*uParam1 - 0,0001f), (*uParam1 + 0,0001f)))
	{
		*uParam0 = (*uParam0 + 0,008333333f);
		*uParam1 = (*uParam1 - 0,008333333f);
	}
	if (func_259(uParam0->f_1, (uParam1->f_1 - 0,0001f), (uParam1->f_1 + 0,0001f)))
	{
		uParam0->f_1 = (uParam0->f_1 + 0,01481481f);
		uParam1->f_1 = (uParam1->f_1 - 0,01481481f);
	}
}

struct<2> func_257(struct<2> Param0, struct<2> Param2, float fParam4)
{
	return func_187(func_258(Param0, (1f - fParam4)), func_258(Param2, fParam4));
}

struct<2> func_258(struct<2> Param0, float fParam2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 * fParam2);
	Var0.f_1 = (Param0.f_1 * fParam2);
	return Var0;
}

bool func_259(float fParam0, float fParam1, float fParam2)
{
	return (fParam0 >= fParam1 && fParam0 < fParam2);
}

void func_260(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_934[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_934[iParam0 /*37*/].f_9.f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_165(sVar0, iParam0, &(Local_173.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_261(sVar0, iParam0, &(Local_173.f_204[iParam0 /*19*/].f_8));
	}
}

void func_261(char* sParam0, int iParam1, var uParam2)
{
	float fVar0;
	
	fVar0 = func_167(Local_173.f_204[iParam1 /*19*/]);
	if (*uParam2 == -1)
	{
		*uParam2 = AUDIO::GET_SOUND_ID();
	}
	AUDIO::PLAY_SOUND_FRONTEND(*uParam2, sParam0, "dlc_vw_am_tw_global_sounds", false);
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam2, "Screen_Position", fVar0);
}

void func_262()
{
	int* iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
		}
		else if (Local_832[iVar1 /*9*/].f_6 == -1)
		{
		}
		else
		{
			func_263(iVar1, &iVar0);
		}
		iVar1++;
	}
	Local_173.f_305 = iVar0;
}

void func_263(int iParam0, int* iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	float fVar15;
	struct<2> Var16;
	struct<2> Var18;
	int iVar20;
	int iVar21;
	int iVar22;
	
	iVar10 = 0;
	iVar10 = 0;
	while (iVar10 <= 1)
	{
		iVar11 = func_224(iParam0, iVar10);
		if (Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/] == -2147483647)
		{
			if (MISC::IS_BIT_SET(Local_173.f_303, iVar11))
			{
				MISC::CLEAR_BIT(&(Local_173.f_303), iVar11);
			}
		}
		else
		{
			MISC::SET_BIT(iParam1, iVar11);
			if (!MISC::IS_BIT_SET(Local_173.f_305, iVar11))
			{
				Local_173.f_204[iParam0 /*19*/].f_5 = 0;
				func_266(iParam0, iVar10);
			}
			fVar12 = 0f;
			Var13 = { Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
			switch (Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_3)
			{
				case 0:
					fVar12 = -(IntToFloat(Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_111(0f, 0,01481481f) };
					break;
				
				case 1:
					fVar12 = (IntToFloat(Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,185185f);
					Var13.f_1 = (Var13.f_1 + fVar12);
					Var8 = { func_111(0f, -0,01481481f) };
					break;
				
				case 2:
					fVar12 = -(IntToFloat(Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_111(0,008333333f, 0f) };
					break;
				
				case 3:
					fVar12 = (IntToFloat(Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2) * 0,104167f);
					Var13.f_0 = (Var13.f_0 + fVar12);
					Var8 = { func_111(-0,008333333f, 0f) };
					break;
			}
			fVar15 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/])) / SYSTEM::TO_FLOAT((Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_2 * Local_173.f_59[Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 /*5*/].f_1)));
			if (MISC::IS_BIT_SET(Local_173.f_303, iVar11))
			{
				if (fVar15 > 1f)
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { func_111(-1f, -1f) };
					if (iParam0 == Local_173.f_178)
					{
						Local_869[Local_173.f_178 /*16*/].f_5[iVar10 /*5*/] = -2147483647;
						Local_869[Local_173.f_178 /*16*/].f_5[iVar10 /*5*/].f_1 = -1f;
						Local_869[Local_173.f_178 /*16*/].f_5[iVar10 /*5*/].f_1.f_1 = -1f;
						Local_869[Local_173.f_178 /*16*/].f_5[iVar10 /*5*/].f_3 = -1;
						Local_869[Local_173.f_178 /*16*/].f_5[iVar10 /*5*/].f_4 = -1;
					}
				}
			}
			else
			{
				Var16 = { Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_1 };
				Var18 = { Var13 };
				if (func_259(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, (-1f - 0,0001f), (-1f + 0,0001f)) && func_259(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2.f_1, (-1f - 0,0001f), (-1f + 0,0001f)))
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Var16 };
				}
				else
				{
					Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2 = { Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				}
				Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] = { func_257(Var16, Var18, fVar15) };
				iVar20 = 0;
				iVar21 = 0;
				Var4 = { Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/] };
				Var6 = { func_187(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/].f_2, Var8) };
				iVar20 = 0;
				while (iVar20 <= 3)
				{
					if (iVar20 == iParam0)
					{
					}
					else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar20)))
					{
					}
					else if (Local_832[iVar20 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(iVar20))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar20 /*19*/] };
						Var2 = { Local_173.f_204[iVar20 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_265(iVar10, iVar20, iParam0);
							iVar21 = 1;
						}
					}
					iVar20++;
				}
				iVar22 = 0;
				iVar22 = 0;
				while (iVar22 <= 3)
				{
					if (iVar22 == iParam0)
					{
					}
					else if (!Local_934[iVar22 /*37*/].f_25)
					{
					}
					else if (Local_934[iVar22 /*37*/].f_6 == -1)
					{
					}
					else if (func_249(iVar22))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar22 /*19*/] };
						Var2 = { Local_173.f_204[iVar22 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_264(iVar10, iVar22, iParam0);
							iVar21 = 1;
						}
					}
					iVar22++;
				}
				if (fVar15 >= 1f || iVar21)
				{
					if (!MISC::IS_BIT_SET(Local_173.f_303, iVar11))
					{
						if (Local_869[iParam0 /*16*/].f_5[iVar10 /*5*/].f_4 == 4)
						{
							func_244(Local_173.f_204[iParam0 /*19*/].f_10[iVar10 /*4*/]);
						}
						MISC::SET_BIT(&(Local_173.f_303), iVar11);
					}
				}
			}
		}
		iVar10++;
	}
}

void func_264(int iParam0, int iParam1, int iParam2)
{
	Local_173.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_173.f_204[iParam1 /*19*/] };
	func_247(iParam1, -Local_173.f_59[Local_869[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
	PAD::SET_PAD_SHAKE(0, 250, 200);
	Local_934[iParam1 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	if (Local_934[iParam1 /*37*/] != 2)
	{
		func_164((6 + Local_832[iParam2 /*9*/].f_6));
	}
	if (Local_934[iParam1 /*37*/].f_2 <= 0)
	{
		func_164((2 + Local_934[iParam1 /*37*/].f_6));
		Local_151.f_18++;
	}
}

void func_265(int iParam0, int iParam1, int iParam2)
{
	Local_173.f_204[iParam2 /*19*/].f_10[iParam0 /*4*/] = { Local_173.f_204[iParam1 /*19*/] };
	if (iParam1 == Local_173.f_178)
	{
		func_251(-Local_173.f_59[Local_869[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4, 0);
		PAD::SET_PAD_SHAKE(0, 250, 200);
		Local_832[Local_173.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		if (Local_832[Local_173.f_178 /*9*/] != 2)
		{
			func_164((6 + Local_832[iParam2 /*9*/].f_6));
		}
	}
	else if (iParam2 == Local_173.f_178 && (Local_832[iParam1 /*9*/].f_2 - Local_173.f_59[Local_869[iParam2 /*16*/].f_5[iParam0 /*5*/].f_4 /*5*/].f_4) <= 0)
	{
		func_164((2 + Local_832[iParam1 /*9*/].f_6));
		Local_151.f_18++;
	}
}

void func_266(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (Local_869[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4)
	{
		case 1:
			sVar0 = "Pistol_Fire";
			break;
		
		case 3:
			sVar0 = "Assault_Rifle_Fire";
			break;
		
		case 2:
			sVar0 = "Machine_Pistol_Fire";
			break;
		
		case 5:
			sVar0 = "Shotgun_Fire";
			break;
		
		case 4:
			sVar0 = "Rocket_Fire";
			break;
	}
	if (Local_869[iParam0 /*16*/].f_5[iParam1 /*5*/].f_4 == 1)
	{
		func_165(sVar0, iParam0, &(Local_173.f_204[iParam0 /*19*/].f_8));
	}
	else
	{
		func_261(sVar0, iParam0, &(Local_173.f_204[iParam0 /*19*/].f_8));
	}
}

void func_267()
{
	struct<2> Var0;
	struct<2> Var2;
	struct<2> Var4;
	struct<2> Var6;
	struct<2> Var8;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	struct<2> Var19;
	struct<2> Var21;
	struct<2> Var23;
	int iVar25;
	int iVar26;
	int iVar27;
	
	bVar10 = false;
	iVar11 = 0;
	while (iVar11 <= 2)
	{
		iVar16 = NETWORK::GET_NETWORK_TIME();
		if (Local_626.f_148[iVar11 /*4*/].f_3 != -1 && iVar16 > Local_626.f_148[iVar11 /*4*/])
		{
			iVar17 = func_75((Local_626.f_148[iVar11 /*4*/].f_2 == 1 || Local_626.f_148[iVar11 /*4*/].f_2 == 0), 11, 15) * 650;
			if (iVar16 > (Local_626.f_148[iVar11 /*4*/] + iVar17))
			{
			}
			else
			{
				bVar10 = true;
				fVar18 = (SYSTEM::TO_FLOAT((iVar16 - Local_626.f_148[iVar11 /*4*/])) / SYSTEM::TO_FLOAT(iVar17));
				func_185(Local_626.f_148[iVar11 /*4*/].f_1, &iVar12, &iVar13);
				switch (Local_626.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						iVar14 = iVar12;
						iVar15 = 0;
						Var8 = { func_111(0f, -(Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 1:
						iVar14 = iVar12;
						iVar15 = 8;
						Var8 = { func_111(0f, (Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2.f_1 / 2f)) };
						break;
					
					case 2:
						iVar14 = 0;
						iVar15 = iVar13;
						Var8 = { func_111(-(Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
					
					case 3:
						iVar14 = 12;
						iVar15 = iVar13;
						Var8 = { func_111((Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2 / 2f), 0f) };
						break;
				}
				Var19 = { func_188(Local_626.f_148[iVar11 /*4*/].f_1) };
				Var21 = { func_188(func_74(iVar14, iVar15)) };
				switch (Local_626.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Var19.f_1 = (Var19.f_1 + 0,1851855f);
						Var21.f_1 = (Var21.f_1 + -0,1851855f);
						break;
					
					case 1:
						Var19.f_1 = (Var19.f_1 + -0,1851855f);
						Var21.f_1 = (Var21.f_1 + 0,1851855f);
						break;
					
					case 2:
						Var19.f_0 = (Var19.f_0 + 0,1041665f);
						Var21.f_0 = (Var21.f_0 + -0,1041665f);
						break;
					
					case 3:
						Var19.f_0 = (Var19.f_0 + -0,1041665f);
						Var21.f_0 = (Var21.f_0 + 0,1041665f);
						break;
				}
				Local_173.f_281[iVar11 /*7*/].f_2 = { Local_173.f_281[iVar11 /*7*/] };
				Local_173.f_281[iVar11 /*7*/] = { func_257(Var19, Var21, fVar18) };
				if (!func_205(Local_173.f_281[iVar11 /*7*/], Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
				{
					if (func_205(Local_173.f_281[iVar11 /*7*/].f_2, Local_173.f_22[Local_626.f_148[iVar11 /*4*/].f_3 /*4*/].f_2))
					{
						if (Local_626.f_148[iVar11 /*4*/].f_3 != 0)
						{
							func_222(func_273(Local_626.f_148[iVar11 /*4*/].f_3), Local_173.f_281[iVar11 /*7*/], 1);
						}
					}
					else
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
						{
							AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
						{
							AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
						}
						if (iVar11 != 2)
						{
							Var23 = { Local_173.f_281[iVar11 /*7*/] };
							if (iVar11 == 1 && Local_626.f_148[iVar11 /*4*/].f_2 != Local_626.f_148[2 /*4*/].f_2)
							{
								Var23 = { func_111(0,5f, 0,5f) };
							}
							if (Local_626.f_148[iVar11 /*4*/].f_3 >= 5)
							{
								iVar25 = (Local_626.f_148[iVar11 /*4*/].f_3 - 5);
								func_271(func_272(Local_626.f_148[iVar11 /*4*/].f_3), &(Local_173.f_281[iVar11 /*7*/].f_5), Var23, iVar25);
							}
							else
							{
								func_170(func_272(Local_626.f_148[iVar11 /*4*/].f_3), &(Local_173.f_281[iVar11 /*7*/].f_5), Var23, 1);
							}
						}
					}
				}
				else if (Local_173.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_171(&(Local_173.f_281[iVar11 /*7*/].f_5));
				}
				Var4 = { func_187(Local_173.f_281[iVar11 /*7*/], Var8) };
				Var6 = { func_270(Local_173.f_281[iVar11 /*7*/].f_2, Var8) };
				iVar26 = 0;
				iVar26 = 0;
				while (iVar26 <= 3)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar26)))
					{
					}
					else if (Local_832[iVar26 /*9*/].f_6 == -1)
					{
					}
					else if (func_71(iVar26))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar26 /*19*/] };
						Var2 = { Local_173.f_204[iVar26 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_269(iVar26);
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				iVar27 = 0;
				while (iVar27 <= 3)
				{
					if (!Local_934[iVar27 /*37*/].f_25)
					{
					}
					else if (Local_934[iVar27 /*37*/].f_6 == -1)
					{
					}
					else if (func_249(iVar27))
					{
					}
					else
					{
						Var0 = { Local_173.f_204[iVar27 /*19*/] };
						Var2 = { Local_173.f_204[iVar27 /*19*/].f_2 };
						if (MISC::ABSF((Var0.f_0 - Var4.f_0)) > 0,104167f || MISC::ABSF((Var0.f_1 - Var4.f_1)) > 0,185185f)
						{
						}
						else if (func_252(Var4, Var6, Var0, Var2))
						{
							func_268(iVar27);
						}
					}
					iVar27++;
				}
				Jump @1613; //curOff = 1374
				if (Local_173.f_281[iVar11 /*7*/].f_5 != -1)
				{
					func_171(&(Local_173.f_281[iVar11 /*7*/].f_5));
				}
				Local_173.f_281[iVar11 /*7*/] = { func_188(Local_626.f_148[iVar11 /*4*/].f_1) };
				switch (Local_626.f_148[iVar11 /*4*/].f_2)
				{
					case 0:
						Local_173.f_281[iVar11 /*7*/].f_1 = (Local_173.f_281[iVar11 /*7*/].f_1 + 0,1851855f);
						break;
					
					case 1:
						Local_173.f_281[iVar11 /*7*/].f_1 = (Local_173.f_281[iVar11 /*7*/].f_1 + -0,1851855f);
						break;
					
					case 2:
						Local_173.f_281[iVar11 /*7*/] = (Local_173.f_281[iVar11 /*7*/] + 0,1041665f);
						break;
					
					case 3:
						Local_173.f_281[iVar11 /*7*/] = (Local_173.f_281[iVar11 /*7*/] + -0,1041665f);
						break;
				}
				Local_173.f_281[iVar11 /*7*/].f_2 = { Local_173.f_281[iVar11 /*7*/] };
			}
			iVar11++;
			if (!bVar10)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
				{
					AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
				{
					AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
				}
			}
		}

void func_268(int iParam0)
{
	func_247(iParam0, -8, 1);
	Local_934[iParam0 /*37*/].f_3 = NETWORK::GET_NETWORK_TIME();
	func_164(10);
}

void func_269(int iParam0)
{
	if (iParam0 == Local_173.f_178)
	{
		func_251(-8, 1);
		PAD::SET_PAD_SHAKE(0, 1000, 200);
		Local_832[Local_173.f_178 /*9*/].f_3 = NETWORK::GET_NETWORK_TIME();
		func_164(10);
	}
}

struct<2> func_270(struct<2> Param0, struct<2> Param2)
{
	struct<2> Var0;
	
	Var0.f_0 = (Param0.f_0 - Param2.f_0);
	Var0.f_1 = (Param0.f_1 - Param2.f_1);
	return Var0;
}

void func_271(char* sParam0, var uParam1, struct<2> Param2, int iParam4)
{
	float fVar0;
	
	fVar0 = func_167(Param2);
	if (*uParam1 == -1)
	{
		*uParam1 = AUDIO::GET_SOUND_ID();
	}
	if (AUDIO::HAS_SOUND_FINISHED(*uParam1))
	{
		AUDIO::PLAY_SOUND_FRONTEND(*uParam1, sParam0, func_166(iParam4), false);
	}
	AUDIO::SET_VARIABLE_ON_SOUND(*uParam1, "Screen_Position", fVar0);
}

char* func_272(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "Ice_Cream_Van_Loop";
		
		case 1:
		case 2:
		case 3:
			return "Emergency_Siren_Loop";
		
		case 4:
			return "Tank_Loop";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Loop";
		
		default:
	}
	return "INVALID VEHICLE";
}

char* func_273(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "Ambulance_Warning";
		
		case 2:
			return "Police_Car_Warning";
		
		case 3:
			return "Fire_Truck_Warning";
		
		case 4:
			return "Tank_Warning";
		
		case 5:
		case 6:
		case 7:
		case 8:
			return "Gang_Van_Warning";
		
		default:
	}
	return "INVALID VEHICLE";
}

void func_274()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!Local_934[iVar0 /*37*/].f_25)
		{
		}
		else if (Local_934[iVar0 /*37*/].f_6 == -1)
		{
		}
		else if (func_71(iVar0))
		{
			Local_173.f_204[iVar0 /*19*/].f_2 = { func_111(-1f, -1f) };
		}
		else
		{
			func_275(iVar0);
		}
		iVar0++;
	}
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	Var4 = { func_188(Local_934[iParam0 /*37*/].f_9) };
	Var6 = { func_188(Local_934[iParam0 /*37*/].f_9.f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_934[iParam0 /*37*/].f_9.f_2)) / SYSTEM::TO_FLOAT(func_281(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if ((fVar8 >= 0,65f && !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 0)) || (fVar8 >= 0,8f && !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 1)))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_280(Local_934[iParam0 /*37*/].f_9, 1, Local_934[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar9 = func_74((iVar0 - 1), iVar1);
				func_280(uVar9, 1, Local_934[iParam0 /*37*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_280(Local_934[iParam0 /*37*/].f_9, 0, Local_934[iParam0 /*37*/].f_6);
			}
			else
			{
				uVar10 = func_74(iVar0, (iVar1 - 1));
				func_280(uVar10, 0, Local_934[iParam0 /*37*/].f_6);
			}
		}
		if (!MISC::IS_BIT_SET(Local_173.f_142[iParam0], 0))
		{
			MISC::SET_BIT(&(Local_173.f_142[iParam0]), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 4);
			MISC::SET_BIT(&(Local_173.f_142[iParam0]), 1);
		}
	}
	if (fVar8 > 0,85f || fVar8 < 0,15f)
	{
		if (fVar8 > 0,85f)
		{
			iVar11 = Local_934[iParam0 /*37*/].f_9;
		}
		else
		{
			iVar11 = Local_934[iParam0 /*37*/].f_9.f_1;
		}
		iVar12 = 0;
		while (iVar12 <= 6)
		{
			if (Local_626.f_62[iVar12 /*3*/].f_1 == -1)
			{
				if (MISC::IS_BIT_SET(Local_173.f_309, iVar12))
				{
					MISC::CLEAR_BIT(&(Local_173.f_309), iVar12);
				}
			}
			else if (!func_279(iVar12, iParam0))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_62[iVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (MISC::IS_BIT_SET(Local_173.f_309, iVar12))
			{
			}
			else if (iVar11 == Local_626.f_62[iVar12 /*3*/])
			{
				MISC::SET_BIT(&(Local_173.f_309), iVar12);
				func_277(iVar12, iParam0);
				func_276(iVar12);
				func_164(11);
			}
			iVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_173.f_204[iParam0 /*19*/].f_2 < 0f && Local_173.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_173.f_204[iParam0 /*19*/].f_2 = { func_257(Var6, Var4, fVar8) };
		}
		else
		{
			Local_173.f_204[iParam0 /*19*/].f_2 = { Local_173.f_204[iParam0 /*19*/] };
		}
		Local_173.f_204[iParam0 /*19*/] = { func_257(Var6, Var4, fVar8) };
		return;
	}
	if (Local_173.f_204[iParam0 /*19*/].f_2 < 0f && Local_173.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_173.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_173.f_204[iParam0 /*19*/].f_2 = { Local_173.f_204[iParam0 /*19*/] };
	}
	Local_173.f_204[iParam0 /*19*/] = { Var4 };
	Local_173.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_276(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1889605535;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar3 = func_138(1);
	if (!iVar3 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

void func_277(int iParam0, int iParam1)
{
	Local_151.f_17++;
	switch (Local_626.f_62[iParam0 /*3*/].f_1)
	{
		case 0:
			func_247(iParam1, 4, 0);
			break;
		
		case 1:
			Local_173.f_178.f_2 += 10;
			break;
		
		case 2:
			func_278(Local_934[iParam1 /*37*/].f_9, Local_934[iParam1 /*37*/].f_6);
			break;
		
		case 3:
			Local_934[iParam1 /*37*/].f_5 = 1;
			break;
		
		case 4:
			Local_934[iParam1 /*37*/].f_5 = 2;
			break;
		
		case 5:
			Local_934[iParam1 /*37*/].f_5 = 3;
			break;
		
		case 6:
			Local_934[iParam1 /*37*/].f_5 = 4;
			break;
		
		case 7:
			Local_934[iParam1 /*37*/].f_5 = 5;
			break;
	}
	if (!MISC::IS_BIT_SET(Local_173.f_417, 2) && Local_934[iParam1 /*37*/].f_5 != 0)
	{
	}
}

void func_278(var uParam0, var uParam1)
{
	struct<4> Var0;
	int iVar4;
	
	Var0.f_0 = -1100083080;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = uParam1;
	iVar4 = func_138(1);
	if (!iVar4 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iVar4);
	}
}

int func_279(int iParam0, int iParam1)
{
	switch (Local_626.f_62[iParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_934[iParam1 /*37*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_934[iParam1 /*37*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_934[iParam1 /*37*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_934[iParam1 /*37*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_934[iParam1 /*37*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_934[iParam1 /*37*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_280(var uParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	
	Var0.f_0 = 1551971435;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = uParam2;
	iVar5 = func_138(1);
	if (!iVar5 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, iVar5);
	}
}

int func_281(int iParam0)
{
	return SYSTEM::ROUND((700f * Local_934[iParam0 /*37*/].f_1));
}

void func_282()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else if (Local_832[iVar0 /*9*/].f_6 == -1)
		{
		}
		else if (func_71(iVar0))
		{
			Local_173.f_204[iVar0 /*19*/].f_2 = { func_111(-1f, -1f) };
		}
		else
		{
			func_283(iVar0);
		}
		iVar0++;
	}
}

void func_283(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	struct<2> Var6;
	float fVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	int iVar12;
	
	func_185(Local_869[iParam0 /*16*/], &iVar0, &iVar1);
	func_185(Local_869[iParam0 /*16*/].f_1, &iVar2, &iVar3);
	Var4 = { func_188(Local_869[iParam0 /*16*/]) };
	Var6 = { func_188(Local_869[iParam0 /*16*/].f_1) };
	fVar8 = (SYSTEM::TO_FLOAT((NETWORK::GET_NETWORK_TIME() - Local_869[iParam0 /*16*/].f_2)) / SYSTEM::TO_FLOAT(func_184(iParam0)));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	if (iParam0 == Local_173.f_178 && ((fVar8 >= 0,65f && !MISC::IS_BIT_SET(Local_173.f_141, 0)) || (fVar8 >= 0,8f && !MISC::IS_BIT_SET(Local_173.f_141, 1))))
	{
		if (iVar2 != iVar0)
		{
			if (iVar2 > iVar0)
			{
				func_280(Local_869[iParam0 /*16*/], 1, Local_832[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar9 = func_74((iVar0 - 1), iVar1);
				func_280(uVar9, 1, Local_832[iParam0 /*9*/].f_6);
			}
		}
		else if (iVar3 != iVar1)
		{
			if (iVar3 > iVar1)
			{
				func_280(Local_869[iParam0 /*16*/], 0, Local_832[iParam0 /*9*/].f_6);
			}
			else
			{
				uVar10 = func_74(iVar0, (iVar1 - 1));
				func_280(uVar10, 0, Local_832[iParam0 /*9*/].f_6);
			}
		}
		if (!MISC::IS_BIT_SET(Local_173.f_141, 0))
		{
			MISC::SET_BIT(&(Local_173.f_141), 0);
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_173.f_141), 4);
			MISC::SET_BIT(&(Local_173.f_141), 1);
		}
	}
	if (fVar8 > 0,85f || fVar8 < 0,15f)
	{
		if (fVar8 > 0,85f)
		{
			iVar11 = Local_869[iParam0 /*16*/];
		}
		else
		{
			iVar11 = Local_869[iParam0 /*16*/].f_1;
		}
		iVar12 = 0;
		while (iVar12 <= 6)
		{
			if (Local_626.f_62[iVar12 /*3*/].f_1 == -1)
			{
				if (MISC::IS_BIT_SET(Local_173.f_309, iVar12))
				{
					MISC::CLEAR_BIT(&(Local_173.f_309), iVar12);
				}
			}
			else if (!func_285(iVar12))
			{
			}
			else if ((NETWORK::GET_NETWORK_TIME() - Local_626.f_62[iVar12 /*3*/].f_2) < 1250)
			{
			}
			else if (MISC::IS_BIT_SET(Local_173.f_309, iVar12))
			{
			}
			else if (iVar11 == Local_626.f_62[iVar12 /*3*/])
			{
				if (iParam0 == Local_173.f_178)
				{
					MISC::SET_BIT(&(Local_173.f_309), iVar12);
					func_284(iVar12);
					PAD::SET_PAD_SHAKE(0, 100, 50);
					func_276(iVar12);
					func_164(11);
				}
			}
			iVar12++;
		}
	}
	if (fVar8 < 1f)
	{
		if (Local_173.f_204[iParam0 /*19*/].f_2 < 0f && Local_173.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
		{
			Local_173.f_204[iParam0 /*19*/].f_2 = { func_257(Var6, Var4, fVar8) };
		}
		else
		{
			Local_173.f_204[iParam0 /*19*/].f_2 = { Local_173.f_204[iParam0 /*19*/] };
		}
		Local_173.f_204[iParam0 /*19*/] = { func_257(Var6, Var4, fVar8) };
		return;
	}
	if (Local_173.f_204[iParam0 /*19*/].f_2 < 0f && Local_173.f_204[iParam0 /*19*/].f_2.f_1 < 0f)
	{
		Local_173.f_204[iParam0 /*19*/].f_2 = { Var4 };
	}
	else
	{
		Local_173.f_204[iParam0 /*19*/].f_2 = { Local_173.f_204[iParam0 /*19*/] };
	}
	Local_173.f_204[iParam0 /*19*/] = { Var4 };
	Local_173.f_204[iParam0 /*19*/].f_4 = 0;
}

void func_284(int iParam0)
{
	struct<2> Var0;
	
	Var0 = { func_188(Local_626.f_62[iParam0 /*3*/]) };
	Local_151.f_17++;
	switch (Local_626.f_62[iParam0 /*3*/].f_1)
	{
		case 0:
			func_222("Pickup_Health", Var0, 1);
			func_251(4, 0);
			break;
		
		case 1:
			func_222("Pickup_Speed", Var0, 1);
			Local_173.f_178.f_2 += 10;
			break;
		
		case 2:
			func_222("Pickup_Collect_Transport", Var0, 1);
			func_278(Local_869[Local_173.f_178 /*16*/], Local_832[Local_173.f_178 /*9*/].f_6);
			break;
		
		case 3:
			func_222("Pickup_Collect_Weapon", Var0, 1);
			Local_832[Local_173.f_178 /*9*/].f_5 = 1;
			break;
		
		case 4:
			func_222("Pickup_Collect_Weapon", Var0, 1);
			Local_832[Local_173.f_178 /*9*/].f_5 = 2;
			break;
		
		case 5:
			func_222("Pickup_Collect_Weapon", Var0, 1);
			Local_832[Local_173.f_178 /*9*/].f_5 = 3;
			break;
		
		case 6:
			func_222("Pickup_Collect_Weapon", Var0, 1);
			Local_832[Local_173.f_178 /*9*/].f_5 = 4;
			break;
		
		case 7:
			func_222("Pickup_Collect_Weapon", Var0, 1);
			Local_832[Local_173.f_178 /*9*/].f_5 = 5;
			break;
	}
	if (!MISC::IS_BIT_SET(Local_173.f_417, 2) && Local_832[Local_173.f_178 /*9*/].f_5 != 0)
	{
		MISC::SET_BIT(&(Local_173.f_417), 2);
		func_152("SCGW_H_SHOOT", 7500, 0);
	}
}

int func_285(int iParam0)
{
	switch (Local_626.f_62[iParam0 /*3*/].f_1)
	{
		case 0:
			if (Local_832[Local_173.f_178 /*9*/].f_2 == 8)
			{
				return 0;
			}
			break;
		
		case 1:
		case 2:
			return 1;
		
		case 3:
			if (Local_832[Local_173.f_178 /*9*/].f_5 == 1)
			{
				return 0;
			}
			break;
		
		case 4:
			if (Local_832[Local_173.f_178 /*9*/].f_5 == 2)
			{
				return 0;
			}
			break;
		
		case 5:
			if (Local_832[Local_173.f_178 /*9*/].f_5 == 3)
			{
				return 0;
			}
			break;
		
		case 6:
			if (Local_832[Local_173.f_178 /*9*/].f_5 == 4)
			{
				return 0;
			}
			break;
		
		case 7:
			if (Local_832[Local_173.f_178 /*9*/].f_5 == 5)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_286(int iParam0)
{
	func_298(iParam0);
	func_294(iParam0);
	func_291(iParam0);
	func_287(iParam0);
}

void func_287(int iParam0)
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_934[iParam0 /*37*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_289(iParam0);
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_288(iParam0, Local_934[iParam0 /*37*/].f_9.f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_173.f_183[iParam0 /*5*/].f_3 + Local_173.f_59[Local_934[iParam0 /*37*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_934[iParam0 /*37*/].f_9.f_4;
		Local_934[iParam0 /*37*/].f_9.f_5[Local_173.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_934[iParam0 /*37*/].f_9.f_5[Local_173.f_307 /*5*/].f_3 = uVar1;
		Local_934[iParam0 /*37*/].f_9.f_5[Local_173.f_307 /*5*/].f_4 = Local_934[iParam0 /*37*/].f_5;
		Local_934[iParam0 /*37*/].f_9.f_5[Local_173.f_307 /*5*/].f_1 = { Local_173.f_204[iParam0 /*19*/] };
		Local_934[iParam0 /*37*/].f_9.f_4 = uVar1;
		Local_173.f_183[iParam0 /*5*/].f_3 = NETWORK::GET_NETWORK_TIME();
		Local_173.f_307++;
		if (Local_173.f_307 >= 2)
		{
			Local_173.f_307 = 0;
		}
		PAD::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_288(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_188(func_74(12, 8)) };
	Var2 = { func_188(func_74(0, 0)) };
	switch (iParam1)
	{
		case 0:
			if (func_259(Local_173.f_204[iParam0 /*19*/].f_1, (Var2.f_1 - 0,0001f), (Var2.f_1 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_259(Local_173.f_204[iParam0 /*19*/].f_1, (Var0.f_1 - 0,0001f), (Var0.f_1 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_259(Local_173.f_204[iParam0 /*19*/], (Var2.f_0 - 0,0001f), (Var2.f_0 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_259(Local_173.f_204[iParam0 /*19*/], (Var0.f_0 - 0,0001f), (Var0.f_0 + 0,0001f)))
			{
				return 0;
			}
			break;
	}
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar4, &iVar5);
	func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar6, &iVar7);
	if (Local_934[iParam0 /*37*/].f_9.f_2 + func_184(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam1 == 2 || iParam1 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam1 == 0 || iParam1 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_289(int iParam0)
{
	if (func_290(iParam0))
	{
		return -1;
	}
	if (Local_934[iParam0 /*37*/].f_26)
	{
		return 8;
	}
	return -1;
}

int func_290(int iParam0)
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_934[iParam0 /*37*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_291(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_293(iParam0);
	bVar1 = func_292(iParam0, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_934[iParam0 /*37*/].f_9.f_4 = 0;
				break;
			
			case 5:
				Local_934[iParam0 /*37*/].f_9.f_4 = 1;
				break;
			
			case 6:
				Local_934[iParam0 /*37*/].f_9.f_4 = 2;
				break;
			
			case 7:
				Local_934[iParam0 /*37*/].f_9.f_4 = 3;
				break;
			}
	}
}

int func_292(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_934[iParam0 /*37*/].f_9.f_2 + func_184(Local_173.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_293(int iParam0)
{
	if (func_290(iParam0))
	{
		return -1;
	}
	return Local_934[iParam0 /*37*/].f_28;
}

void func_294(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_295(iParam0);
	bVar1 = false;
	if (((!((Local_934[iParam0 /*37*/].f_9.f_2 + func_184(Local_173.f_178)) < NETWORK::GET_NETWORK_TIME() && MISC::IS_BIT_SET(Local_173.f_142[iParam0], 1)) && NETWORK::GET_NETWORK_TIME() < Local_934[iParam0 /*37*/].f_9.f_2 + 100) && Local_934[iParam0 /*37*/].f_9.f_3 != iVar0) && !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar2, &iVar3);
		func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	else
	{
		func_185(Local_934[iParam0 /*37*/].f_9, &iVar2, &iVar3);
		func_185(Local_934[iParam0 /*37*/].f_9.f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_934[iParam0 /*37*/].f_9.f_2 + func_184(iParam0)) < NETWORK::GET_NETWORK_TIME() && MISC::IS_BIT_SET(Local_173.f_142[iParam0], 1)) || bVar1)
		{
			if (bVar1 || !MISC::IS_BIT_SET(Local_173.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_173.f_142[iParam0]), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_934[iParam0 /*37*/].f_9 = func_74(iVar2, iVar3);
			Local_934[iParam0 /*37*/].f_9.f_1 = func_74(iVar4, iVar5);
			if (Local_173.f_178.f_2 > 0)
			{
				Local_934[iParam0 /*37*/].f_1 = 0,75f;
				Local_173.f_178.f_2 = (Local_173.f_178.f_2 - 1);
			}
			else if (!func_259(Local_934[iParam0 /*37*/].f_1, (1f - 0,0001f), (1f + 0,0001f)))
			{
				Local_934[iParam0 /*37*/].f_1 = 1f;
			}
			Local_934[iParam0 /*37*/].f_9.f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_934[iParam0 /*37*/].f_9.f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_934[iParam0 /*37*/].f_9.f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_934[iParam0 /*37*/].f_9.f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_934[iParam0 /*37*/].f_9.f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 1);
			MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 0);
			Local_934[iParam0 /*37*/].f_9.f_3 = iVar0;
			if (!MISC::IS_BIT_SET(Local_173.f_142[iParam0], 5))
			{
				MISC::SET_BIT(&(Local_173.f_142[iParam0]), 5);
			}
		}
	}
}

int func_295(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	if (func_290(iParam0))
	{
		return -1;
	}
	if (!MISC::IS_BIT_SET(Local_173.f_142[iParam0], 5))
	{
		return func_297(Local_934[iParam0 /*37*/].f_6);
	}
	iVar0 = Local_934[iParam0 /*37*/].f_33;
	iVar1 = Local_934[iParam0 /*37*/].f_34;
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar2, &iVar3);
	uVar4 = func_296(iVar2, iVar3, iVar0, iVar1);
	return uVar4;
	return -1;
}

int func_296(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (iParam2 - iParam0);
	iVar1 = (iParam3 - iParam1);
	if ((((iParam2 < 0 || iParam2 > 13) || iParam3 < 0) || iParam3 > 9) || (iVar0 == 0 && iVar1 == 0))
	{
		return -1;
	}
	if (iVar1 < 0)
	{
		iVar3 = 0;
	}
	else
	{
		iVar3 = 1;
	}
	if (iVar0 < 0)
	{
		iVar2 = 2;
	}
	else
	{
		iVar2 = 3;
	}
	if (MISC::ABSI(iVar0) < MISC::ABSI(iVar1))
	{
		if ((iParam0 % 2) == 0)
		{
			return iVar3;
		}
		else
		{
			return iVar2;
		}
	}
	else if ((iParam1 % 2) == 0)
	{
		return iVar2;
	}
	else
	{
		return iVar3;
	}
	return -1;
}

int func_297(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 3:
			return 2;
		
		default:
	}
	return -1;
}

void func_298(int iParam0)
{
	Local_934[iParam0 /*37*/].f_26 = func_309(iParam0);
	Local_934[iParam0 /*37*/].f_28 = func_308(iParam0);
	if (Local_934[iParam0 /*37*/].f_27)
	{
		if (Local_934[iParam0 /*37*/].f_36 != 3 && func_307(iParam0))
		{
			Local_934[iParam0 /*37*/].f_36 = 3;
		}
		else if (Local_934[iParam0 /*37*/].f_36 != 1 && func_306(iParam0))
		{
			Local_934[iParam0 /*37*/].f_36 = 1;
		}
		else if (Local_934[iParam0 /*37*/].f_36 != 2 && func_305(iParam0))
		{
			Local_934[iParam0 /*37*/].f_36 = 2;
		}
		else if (Local_934[iParam0 /*37*/].f_36 != 0 && Local_934[iParam0 /*37*/].f_27)
		{
			Local_934[iParam0 /*37*/].f_36 = 0;
		}
		switch (Local_934[iParam0 /*37*/].f_36)
		{
			case 0:
				func_302(iParam0);
				break;
			
			case 1:
				func_301(iParam0);
				break;
			
			case 2:
				func_300(iParam0);
				break;
			
			case 3:
				func_299(iParam0);
				break;
		}
		if (Local_934[iParam0 /*37*/].f_33 == -1)
		{
			Local_934[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		}
		if (Local_934[iParam0 /*37*/].f_34 == -1)
		{
			Local_934[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
		}
		Local_934[iParam0 /*37*/].f_27 = 0;
	}
	else if ((Local_934[iParam0 /*37*/].f_9.f_2 + func_184(iParam0)) < NETWORK::GET_NETWORK_TIME() && MISC::IS_BIT_SET(Local_173.f_142[iParam0], 1))
	{
		if (Local_934[iParam0 /*37*/].f_9 == func_74(Local_934[iParam0 /*37*/].f_33, Local_934[iParam0 /*37*/].f_34) || (Local_934[iParam0 /*37*/].f_33 == -1 && Local_934[iParam0 /*37*/].f_34 == -1))
		{
			Local_934[iParam0 /*37*/].f_27 = 1;
		}
	}
}

void func_299(int iParam0)
{
	if (Local_934[iParam0 /*37*/].f_35 == -1)
	{
		Local_934[iParam0 /*37*/].f_35 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	if (Local_934[iParam0 /*37*/].f_35 == iParam0)
	{
		Local_934[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Local_934[iParam0 /*37*/].f_35)) && !Local_934[Local_934[iParam0 /*37*/].f_35 /*37*/].f_25)
	{
		Local_934[iParam0 /*37*/].f_35 = -1;
		return;
	}
	if (Local_832[Local_934[iParam0 /*37*/].f_35 /*9*/].f_2 == 0)
	{
		Local_934[iParam0 /*37*/].f_35 = -1;
		return;
	}
	func_185(Local_869[Local_934[iParam0 /*37*/].f_35 /*16*/], &(Local_934[iParam0 /*37*/].f_33), &(Local_934[iParam0 /*37*/].f_34));
}

void func_300(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar5 = -1;
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 6)
	{
		if ((Local_626.f_62[iVar6 /*3*/].f_1 != -1 && Local_626.f_62[iVar6 /*3*/] != -1) && Local_626.f_62[iVar6 /*3*/].f_2 != -2147483647)
		{
			if (Local_626.f_62[iVar6 /*3*/].f_1 == 0)
			{
				func_185(Local_626.f_62[iVar6 /*3*/], &iVar2, &iVar3);
				if ((iVar4 == -1 && iVar5 == -1) || (MISC::ABSI((iVar2 - iVar0)) + MISC::ABSI((iVar3 - iVar1))) < (MISC::ABSI((iVar4 - iVar0)) + MISC::ABSI((iVar5 - iVar1))))
				{
					iVar4 = iVar2;
					iVar5 = iVar3;
				}
			}
		}
		iVar6++;
	}
	if (iVar4 == -1)
	{
		Local_934[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
	}
	if (iVar5 == -1)
	{
		Local_934[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_301(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = NETWORK::GET_NETWORK_TIME();
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar9 = 0;
	while (iVar9 <= 2)
	{
		iVar10 = func_75((Local_626.f_148[iVar9 /*4*/].f_2 == 1 || Local_626.f_148[iVar9 /*4*/].f_2 == 0), 11, 15) * 650;
		if (Local_626.f_148[iVar9 /*4*/].f_3 == -1 || (iVar2 < Local_626.f_148[iVar9 /*4*/] && iVar2 > (Local_626.f_148[iVar9 /*4*/] + iVar10)))
		{
		}
		else
		{
			func_185(Local_626.f_148[iVar9 /*4*/].f_1, &iVar7, &iVar8);
			bVar3 = (bVar3 || iVar7 == iVar0);
			bVar4 = (bVar4 || iVar8 == iVar1);
			bVar5 = (bVar5 || (Local_626.f_148[iVar9 /*4*/].f_2 == 1 && iVar8 == iVar1));
			bVar6 = (bVar6 || (Local_626.f_148[iVar9 /*4*/].f_2 == 2 && iVar7 == iVar0));
		}
		iVar9++;
	}
	if (bVar3)
	{
		if (bVar5)
		{
			if (iVar1 + 2 > 8)
			{
				Local_934[iParam0 /*37*/].f_34 = (iVar1 - 2);
			}
			else
			{
				Local_934[iParam0 /*37*/].f_34 = iVar1 + 2;
			}
		}
		else if ((iVar1 - 2) < 0)
		{
			Local_934[iParam0 /*37*/].f_34 = iVar1 + 2;
		}
		else
		{
			Local_934[iParam0 /*37*/].f_34 = (iVar1 - 2);
		}
	}
	if (bVar4)
	{
		if (bVar6)
		{
			if (iVar0 + 2 > 12)
			{
				Local_934[iParam0 /*37*/].f_33 = (iVar0 - 2);
			}
			else
			{
				Local_934[iParam0 /*37*/].f_33 = iVar0 + 2;
			}
		}
		else if ((iVar0 - 2) < 0)
		{
			Local_934[iParam0 /*37*/].f_33 = iVar0 + 2;
		}
		else
		{
			Local_934[iParam0 /*37*/].f_33 = (iVar0 - 2);
		}
	}
	if (!bVar3 && !bVar4)
	{
		Local_934[iParam0 /*37*/].f_33 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6) * 2;
		Local_934[iParam0 /*37*/].f_34 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4) * 2;
	}
}

void func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	char cVar2[64];
	
	if (Local_934[iParam0 /*37*/].f_29 == -1 && Local_934[iParam0 /*37*/].f_30 == -1)
	{
		func_304(iParam0);
	}
	StringCopy(&cVar2, "", 64);
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		StringCopy(&cVar2, "", 64);
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			StringIntConCat(&cVar2, Local_626[iVar0 /*5*/][iVar1], 64);
			StringConCat(&cVar2, " ", 64);
			iVar0++;
		}
		iVar1++;
	}
	if ((Local_934[iParam0 /*37*/].f_29 != -1 && Local_934[iParam0 /*37*/].f_30 != -1) && Local_626[(Local_934[iParam0 /*37*/].f_29 % 6) /*5*/][(Local_934[iParam0 /*37*/].f_30 % 4)] == Local_934[iParam0 /*37*/].f_6)
	{
		Local_934[iParam0 /*37*/].f_31 = 4;
	}
	if (Local_934[iParam0 /*37*/].f_29 != -1 && Local_934[iParam0 /*37*/].f_30 != -1)
	{
		func_303(iParam0);
	}
}

void func_303(int iParam0)
{
	Local_934[iParam0 /*37*/].f_31++;
	Local_934[iParam0 /*37*/].f_31 = (Local_934[iParam0 /*37*/].f_31 % 6);
	if (Local_934[iParam0 /*37*/].f_31 == 0)
	{
		Local_934[iParam0 /*37*/].f_32 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	}
	else if (Local_934[iParam0 /*37*/].f_31 == 5)
	{
		Local_934[iParam0 /*37*/].f_29 = -1;
		Local_934[iParam0 /*37*/].f_30 = -1;
		Local_934[iParam0 /*37*/].f_33 = Local_934[iParam0 /*37*/].f_29;
		Local_934[iParam0 /*37*/].f_34 = Local_934[iParam0 /*37*/].f_30;
		return;
	}
	switch (((Local_934[iParam0 /*37*/].f_31 + Local_934[iParam0 /*37*/].f_32) % 6))
	{
		case 0:
		case 4:
			Local_934[iParam0 /*37*/].f_33 = (Local_934[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_934[iParam0 /*37*/].f_34 = (Local_934[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 1:
			Local_934[iParam0 /*37*/].f_33 = Local_934[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_934[iParam0 /*37*/].f_34 = (Local_934[iParam0 /*37*/].f_30 * 2 + 1 - 1);
			break;
		
		case 2:
			Local_934[iParam0 /*37*/].f_33 = Local_934[iParam0 /*37*/].f_29 * 2 + 1 + 1;
			Local_934[iParam0 /*37*/].f_34 = Local_934[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 3:
			Local_934[iParam0 /*37*/].f_33 = (Local_934[iParam0 /*37*/].f_29 * 2 + 1 - 1);
			Local_934[iParam0 /*37*/].f_34 = Local_934[iParam0 /*37*/].f_30 * 2 + 1 + 1;
			break;
		
		case 5:
			break;
	}
}

void func_304(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
	{
		case 5:
			iVar2 = -1;
			iVar3 = -1;
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			iVar5 = 0;
			while (iVar5 <= 3)
			{
				if ((iVar0 % 2) == 1 && (iVar1 % 2) == 0)
				{
					iVar2 = iVar0;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar3 = (iVar1 - 1);
					}
					else
					{
						iVar3 = iVar1 + 1;
					}
				}
				else if ((iVar1 % 2) == 1 && (iVar0 % 2) == 0)
				{
					iVar3 = iVar1;
					if (((iVar5 + iVar4) % 2) == 0)
					{
						iVar2 = (iVar0 - 1);
					}
					else
					{
						iVar2 = iVar0 + 1;
					}
				}
				else if (((iVar5 + iVar4) % 4) == 0)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 1)
				{
					iVar2 = iVar0 + 1;
					iVar3 = (iVar1 - 1);
				}
				else if (((iVar5 + iVar4) % 4) == 2)
				{
					iVar2 = (iVar0 - 1);
					iVar3 = iVar1 + 1;
				}
				else
				{
					iVar2 = iVar0 + 1;
					iVar3 = iVar1 + 1;
				}
				if (iVar2 != -1 && iVar3 != -1)
				{
					if (Local_626[((iVar2 / 2) % 6) /*5*/][((iVar3 / 2) % 4)] != Local_934[iParam0 /*37*/].f_6)
					{
						Local_934[iParam0 /*37*/].f_29 = ((iVar2 / 2) % 6);
						Local_934[iParam0 /*37*/].f_30 = ((iVar3 / 2) % 4);
						return;
					}
				}
				iVar5++;
			}
			break;
		
		case 0:
			iVar7 = 0;
			while (iVar7 <= 3)
			{
				iVar6 = 0;
				while (iVar6 <= 5)
				{
					if (Local_626[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_934[iParam0 /*37*/].f_6)
					{
						Local_934[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_934[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 1:
			iVar6 = 0;
			while (iVar6 <= 5)
			{
				iVar7 = 0;
				while (iVar7 <= 3)
				{
					if (Local_626[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_934[iParam0 /*37*/].f_6)
					{
						Local_934[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_934[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 2:
			iVar6 = 5;
			while (iVar6 <= 0)
			{
				iVar7 = 3;
				while (iVar7 <= 0)
				{
					if (Local_626[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_934[iParam0 /*37*/].f_6)
					{
						Local_934[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_934[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar7++;
				}
				iVar6++;
			}
			break;
		
		case 3:
			iVar7 = 3;
			while (iVar7 <= 0)
			{
				iVar6 = 5;
				while (iVar6 <= 0)
				{
					if (Local_626[((iVar6 + (iVar0 / 2)) % 6) /*5*/][((iVar7 + (iVar1 / 2)) % 4)] != Local_934[iParam0 /*37*/].f_6)
					{
						Local_934[iParam0 /*37*/].f_29 = ((iVar6 + (iVar0 / 2)) % 6);
						Local_934[iParam0 /*37*/].f_30 = ((iVar7 + (iVar1 / 2)) % 4);
						return;
					}
					iVar6++;
				}
				iVar7++;
			}
			break;
		
		case 4:
			Local_934[iParam0 /*37*/].f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
			Local_934[iParam0 /*37*/].f_30 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
			break;
	}
}

bool func_305(int iParam0)
{
	return Local_934[iParam0 /*37*/].f_2 <= 4;
}

int func_306(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 2)
	{
		if (Local_626.f_148[iVar4 /*4*/].f_3 == -1)
		{
		}
		else
		{
			func_185(Local_626.f_148[iVar4 /*4*/].f_1, &iVar2, &iVar3);
			if (iVar2 == iVar0 || iVar3 == iVar1)
			{
				return 1;
			}
		}
		iVar4++;
	}
	return 0;
}

var func_307(int iParam0)
{
	return Local_626.f_162;
}

int func_308(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if (iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_934[iVar4 /*37*/].f_25))
		{
			func_185(Local_869[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				if (iVar3 <= iVar1)
				{
					return 4;
				}
				else if (iVar3 >= iVar1)
				{
					return 5;
				}
			}
			else if (iVar3 == iVar1)
			{
				if (iVar2 <= iVar0)
				{
					return 6;
				}
				else if (iVar2 >= iVar0)
				{
					return 7;
				}
			}
		}
		iVar4++;
	}
	return -1;
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_185(Local_934[iParam0 /*37*/].f_9, &iVar0, &iVar1);
	iVar4 = 0;
	while (iVar4 <= 3)
	{
		if ((iVar4 != iParam0 && (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar4)) || Local_934[iVar4 /*37*/].f_25)) && (Local_832[iVar4 /*9*/].f_2 > 0 || Local_934[iVar4 /*37*/].f_2 > 0))
		{
			func_185(Local_869[iVar4 /*16*/], &iVar2, &iVar3);
			if (iVar2 == iVar0)
			{
				return ((iVar3 <= iVar1 && Local_934[iParam0 /*37*/].f_9.f_4 == 0) || (iVar3 >= iVar1 && Local_934[iParam0 /*37*/].f_9.f_4 == 1));
			}
			else if (iVar3 == iVar1)
			{
				return ((iVar2 <= iVar0 && Local_934[iParam0 /*37*/].f_9.f_4 == 2) || (iVar2 >= iVar0 && Local_934[iParam0 /*37*/].f_9.f_4 == 3));
			}
		}
		iVar4++;
	}
	return 0;
}

void func_310()
{
	func_318();
	func_315();
	func_311();
}

void func_311()
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	if (Local_832[Local_173.f_178 /*9*/].f_5 == 0)
	{
		return;
	}
	iVar0 = func_313();
	bVar2 = false;
	if (iVar0 != -1)
	{
		bVar2 = func_312(Local_869[Local_173.f_178 /*16*/].f_4);
	}
	if (bVar2)
	{
		if (NETWORK::GET_NETWORK_TIME() < (Local_173.f_178.f_3 + Local_173.f_59[Local_832[Local_173.f_178 /*9*/].f_5 /*5*/].f_3))
		{
			return;
		}
		uVar1 = Local_869[Local_173.f_178 /*16*/].f_4;
		Local_869[Local_173.f_178 /*16*/].f_5[Local_173.f_307 /*5*/] = NETWORK::GET_NETWORK_TIME();
		Local_869[Local_173.f_178 /*16*/].f_5[Local_173.f_307 /*5*/].f_3 = uVar1;
		Local_869[Local_173.f_178 /*16*/].f_5[Local_173.f_307 /*5*/].f_4 = Local_832[Local_173.f_178 /*9*/].f_5;
		Local_869[Local_173.f_178 /*16*/].f_5[Local_173.f_307 /*5*/].f_1 = { Local_173.f_204[Local_173.f_178 /*19*/] };
		Local_869[Local_173.f_178 /*16*/].f_4 = uVar1;
		Local_173.f_178.f_3 = NETWORK::GET_NETWORK_TIME();
		Local_173.f_307++;
		if (Local_173.f_307 >= 2)
		{
			Local_173.f_307 = 0;
		}
		PAD::SET_PAD_SHAKE(0, 50, 100);
	}
}

int func_312(int iParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	Var0 = { func_188(func_74(12, 8)) };
	Var2 = { func_188(func_74(0, 0)) };
	switch (iParam0)
	{
		case 0:
			if (func_259(Local_173.f_204[Local_173.f_178 /*19*/].f_1, (Var2.f_1 - 0,0001f), (Var2.f_1 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_259(Local_173.f_204[Local_173.f_178 /*19*/].f_1, (Var0.f_1 - 0,0001f), (Var0.f_1 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_259(Local_173.f_204[Local_173.f_178 /*19*/], (Var2.f_0 - 0,0001f), (Var2.f_0 + 0,0001f)))
			{
				return 0;
			}
			break;
		
		case 3:
			if (func_259(Local_173.f_204[Local_173.f_178 /*19*/], (Var0.f_0 - 0,0001f), (Var0.f_0 + 0,0001f)))
			{
				return 0;
			}
			break;
	}
	func_185(Local_869[Local_173.f_178 /*16*/], &iVar4, &iVar5);
	func_185(Local_869[Local_173.f_178 /*16*/].f_1, &iVar6, &iVar7);
	if (Local_869[Local_173.f_178 /*16*/].f_2 + func_184(Local_173.f_178)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar5 != iVar7)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 0;
			}
		}
		else if (iVar4 != iVar6)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_313()
{
	int iVar0;
	
	if (func_314())
	{
		return -1;
	}
	iVar0 = 229;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 203;
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		return 8;
	}
	return -1;
}

int func_314()
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (Local_832[Local_173.f_178 /*9*/] != 2)
	{
		return 1;
	}
	return 0;
}

void func_315()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_317();
	bVar1 = func_316(Local_173.f_178, iVar0);
	if (bVar1)
	{
		switch (iVar0)
		{
			case 4:
				Local_869[Local_173.f_178 /*16*/].f_4 = 0;
				break;
			
			case 5:
				Local_869[Local_173.f_178 /*16*/].f_4 = 1;
				break;
			
			case 6:
				Local_869[Local_173.f_178 /*16*/].f_4 = 2;
				break;
			
			case 7:
				Local_869[Local_173.f_178 /*16*/].f_4 = 3;
				break;
			}
	}
}

int func_316(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_185(Local_869[Local_173.f_178 /*16*/], &iVar0, &iVar1);
	func_185(Local_869[Local_173.f_178 /*16*/].f_1, &iVar2, &iVar3);
	switch (iParam1)
	{
		case 4:
		case 5:
			if ((iVar0 % 2) != 0)
			{
				return 0;
			}
			break;
		
		case 6:
		case 7:
			if ((iVar1 % 2) != 0)
			{
				return 0;
			}
			break;
	}
	if (Local_869[Local_173.f_178 /*16*/].f_2 + func_184(iParam0)) > NETWORK::GET_NETWORK_TIME()
	{
		if (iVar1 != iVar3)
		{
			if (iParam1 == 6 || iParam1 == 7)
			{
				return 0;
			}
		}
		else if (iVar0 != iVar2)
		{
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_317()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_314())
	{
		return -1;
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 188;
		iVar1 = 187;
		iVar2 = 189;
		iVar3 = 190;
	}
	fVar4 = 0f;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 221);
	}
	if (fVar4 < -0,65f || (iVar0 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 4;
	}
	if (fVar4 > 0,65f || (iVar1 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 5;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 220);
	if (fVar5 < -0,65f || (iVar2 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 6;
	}
	if (fVar5 > 0,65f || (iVar3 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 7;
	}
	return -1;
}

void func_318()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_319();
	bVar1 = false;
	if (((!((Local_869[Local_173.f_178 /*16*/].f_2 + func_184(Local_173.f_178)) < NETWORK::GET_NETWORK_TIME() && MISC::IS_BIT_SET(Local_173.f_141, 1)) && NETWORK::GET_NETWORK_TIME() < Local_869[Local_173.f_178 /*16*/].f_2 + 100) && Local_869[Local_173.f_178 /*16*/].f_3 != iVar0) && !MISC::IS_BIT_SET(Local_173.f_141, 4))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_185(Local_869[Local_173.f_178 /*16*/].f_1, &iVar2, &iVar3);
		func_185(Local_869[Local_173.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	else
	{
		func_185(Local_869[Local_173.f_178 /*16*/], &iVar2, &iVar3);
		func_185(Local_869[Local_173.f_178 /*16*/].f_1, &iVar4, &iVar5);
	}
	bVar6 = false;
	iVar7 = 0;
	iVar8 = 0;
	switch (iVar0)
	{
		case 0:
			bVar6 = (iVar3 > 0 && (iVar2 % 2) == 0);
			iVar7 = -1;
			break;
		
		case 1:
			bVar6 = (iVar3 < 8 && (iVar2 % 2) == 0);
			iVar7 = 1;
			break;
		
		case 2:
			bVar6 = (iVar2 > 0 && (iVar3 % 2) == 0);
			iVar8 = -1;
			break;
		
		case 3:
			bVar6 = (iVar2 < 12 && (iVar3 % 2) == 0);
			iVar8 = 1;
			break;
	}
	if (bVar6)
	{
		if (((Local_869[Local_173.f_178 /*16*/].f_2 + func_184(Local_173.f_178)) < NETWORK::GET_NETWORK_TIME() && MISC::IS_BIT_SET(Local_173.f_141, 1)) || bVar1)
		{
			if (bVar1 || !MISC::IS_BIT_SET(Local_173.f_141, 5))
			{
				MISC::SET_BIT(&(Local_173.f_141), 4);
			}
			if (iVar4 != iVar2)
			{
				iVar4 = iVar2;
			}
			if (iVar5 != iVar3)
			{
				iVar5 = iVar3;
			}
			if (iVar8 != 0)
			{
				iVar2 = (iVar2 + iVar8);
			}
			if (iVar7 != 0)
			{
				iVar3 = (iVar3 + iVar7);
			}
			Local_869[Local_173.f_178 /*16*/] = func_74(iVar2, iVar3);
			Local_869[Local_173.f_178 /*16*/].f_1 = func_74(iVar4, iVar5);
			if (Local_173.f_178.f_2 > 0)
			{
				Local_832[Local_173.f_178 /*9*/].f_1 = 0,75f;
				Local_173.f_178.f_2 = (Local_173.f_178.f_2 - 1);
			}
			else if (!func_259(Local_832[Local_173.f_178 /*9*/].f_1, (1f - 0,0001f), (1f + 0,0001f)))
			{
				Local_832[Local_173.f_178 /*9*/].f_1 = 1f;
			}
			Local_869[Local_173.f_178 /*16*/].f_2 = NETWORK::GET_NETWORK_TIME();
			if (iVar8 > 0)
			{
				Local_869[Local_173.f_178 /*16*/].f_4 = 3;
			}
			else if (iVar8 < 0)
			{
				Local_869[Local_173.f_178 /*16*/].f_4 = 2;
			}
			else if (iVar7 < 0)
			{
				Local_869[Local_173.f_178 /*16*/].f_4 = 0;
			}
			else if (iVar7 > 0)
			{
				Local_869[Local_173.f_178 /*16*/].f_4 = 1;
			}
			MISC::CLEAR_BIT(&(Local_173.f_141), 1);
			MISC::CLEAR_BIT(&(Local_173.f_141), 0);
			Local_869[Local_173.f_178 /*16*/].f_3 = iVar0;
			if (!MISC::IS_BIT_SET(Local_173.f_141, 5))
			{
				MISC::SET_BIT(&(Local_173.f_141), 5);
			}
		}
	}
}

int func_319()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	if (func_314())
	{
		return -1;
	}
	if (!MISC::IS_BIT_SET(Local_173.f_141, 5))
	{
		return func_297(Local_832[Local_173.f_178 /*9*/].f_6);
	}
	iVar0 = 361;
	iVar1 = 361;
	iVar2 = 361;
	iVar3 = 361;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 361;
		iVar1 = 361;
		iVar2 = 361;
		iVar3 = 361;
	}
	fVar4 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 219);
	if (fVar4 < -0,65f || (iVar0 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0)))
	{
		return 0;
	}
	if (fVar4 > 0,65f || (iVar1 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar1)))
	{
		return 1;
	}
	fVar5 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 218);
	if (fVar5 < -0,65f || (iVar2 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar2)))
	{
		return 2;
	}
	if (fVar5 > 0,65f || (iVar3 != 361 && PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar3)))
	{
		return 3;
	}
	return -1;
}

void func_320()
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_170("Ambience", &(Local_173.f_428), func_111(-1f, -1f), 0);
	func_282();
	func_274();
	func_172();
	func_321();
	if (NETWORK::GET_NETWORK_TIME() < Local_626.f_146)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_173.f_417, 1))
	{
		MISC::SET_BIT(&(Local_173.f_417), 1);
		func_152("SCGW_H_MOVE", 7500, 0);
	}
	func_169(4);
	func_22(func_23(1));
	func_19(7);
}

void func_321()
{
	func_127();
	func_189();
	func_183();
	if ((Local_626.f_146 - NETWORK::GET_NETWORK_TIME()) <= 4500)
	{
		func_215();
	}
	func_199();
	func_176();
	func_107();
	func_106();
}

void func_322()
{
	int iVar0;
	
	func_327();
	func_172();
	if (Local_626.f_145 <= 2)
	{
		return;
	}
	func_325();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 != Local_173.f_178 && Local_934[iVar0 /*37*/].f_25)
		{
			func_323(iVar0);
		}
		iVar0++;
	}
	func_169(3);
	func_19(6);
}

void func_323(int iParam0)
{
	int iVar0;
	int iVar1;
	
	func_324(iParam0);
	Local_934[iParam0 /*37*/].f_2 = 8;
	func_231(iParam0, 2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_934[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/] = -2147483647;
		Local_934[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1 = -1f;
		Local_934[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_934[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_3 = -1;
		Local_934[iParam0 /*37*/].f_9.f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_173.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_111(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_173.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_173.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_173.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_173.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_173.f_437 = -2147483647;
	Local_173.f_439 = { func_111(0f, 0f) };
	MISC::SET_BIT(&(Local_173.f_142[iParam0]), 1);
	MISC::SET_BIT(&(Local_173.f_142[iParam0]), 0);
	MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 2);
	MISC::CLEAR_BIT(&(Local_173.f_142[iParam0]), 5);
	func_99(&(Local_173.f_316));
	Local_934[iParam0 /*37*/].f_4 = -2147483647;
	Local_934[iParam0 /*37*/].f_1 = 1f;
	Local_173.f_178.f_2 = 0;
	Local_173.f_308 = 0;
	Local_173.f_307 = 0;
	Local_173.f_429 = 0;
	Local_934[iParam0 /*37*/].f_5 = 0;
}

void func_324(int iParam0)
{
	Local_934[iParam0 /*37*/].f_9 = func_74(Local_173.f_9[Local_934[iParam0 /*37*/].f_6 /*3*/][0], Local_173.f_9[Local_934[iParam0 /*37*/].f_6 /*3*/][1]);
	Local_934[iParam0 /*37*/].f_9.f_1 = Local_934[iParam0 /*37*/].f_9;
	if (Local_173.f_9[Local_934[iParam0 /*37*/].f_6 /*3*/][1] == 0)
	{
		Local_934[iParam0 /*37*/].f_9.f_4 = 1;
	}
	else
	{
		Local_934[iParam0 /*37*/].f_9.f_4 = 0;
	}
}

void func_325()
{
	int iVar0;
	int iVar1;
	var uVar2[4];
	
	func_326();
	Local_832[Local_173.f_178 /*9*/].f_2 = 8;
	func_237(2);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_869[Local_173.f_178 /*16*/].f_5[iVar0 /*5*/] = -2147483647;
		Local_869[Local_173.f_178 /*16*/].f_5[iVar0 /*5*/].f_1 = -1f;
		Local_869[Local_173.f_178 /*16*/].f_5[iVar0 /*5*/].f_1.f_1 = -1f;
		Local_869[Local_173.f_178 /*16*/].f_5[iVar0 /*5*/].f_3 = -1;
		Local_869[Local_173.f_178 /*16*/].f_5[iVar0 /*5*/].f_4 = -1;
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_173.f_204[iVar1 /*19*/].f_10[iVar0 /*4*/].f_2 = { func_111(-1f, -1f) };
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_173.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_173.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_173.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_173.f_204[iVar0 /*19*/].f_9 = 8;
		iVar0++;
	}
	Local_173.f_437 = -2147483647;
	Local_173.f_439 = { func_111(0f, 0f) };
	MISC::SET_BIT(&(Local_173.f_141), 1);
	MISC::SET_BIT(&(Local_173.f_141), 0);
	MISC::CLEAR_BIT(&(Local_173.f_141), 2);
	MISC::CLEAR_BIT(&(Local_173.f_141), 5);
	func_99(&(Local_173.f_316));
	Local_832[Local_173.f_178 /*9*/].f_4 = -2147483647;
	Local_832[Local_173.f_178 /*9*/].f_1 = 1f;
	func_122(Local_832[Local_173.f_178 /*9*/].f_7, &uVar2);
	uVar2[3] = Local_832[Local_173.f_178 /*9*/].f_6;
	Local_832[Local_173.f_178 /*9*/].f_7 = func_134(&uVar2);
	Local_173.f_178.f_2 = 0;
	Local_173.f_308 = 0;
	Local_173.f_307 = 0;
	Local_173.f_429 = 0;
	Local_832[Local_173.f_178 /*9*/].f_5 = 0;
}

void func_326()
{
	Local_869[Local_173.f_178 /*16*/] = func_74(Local_173.f_9[Local_832[Local_173.f_178 /*9*/].f_6 /*3*/][0], Local_173.f_9[Local_832[Local_173.f_178 /*9*/].f_6 /*3*/][1]);
	Local_869[Local_173.f_178 /*16*/].f_1 = Local_869[Local_173.f_178 /*16*/];
	if (Local_173.f_9[Local_832[Local_173.f_178 /*9*/].f_6 /*3*/][1] == 0)
	{
		Local_869[Local_173.f_178 /*16*/].f_4 = 1;
	}
	else
	{
		Local_869[Local_173.f_178 /*16*/].f_4 = 0;
	}
}

void func_327()
{
	func_127();
	func_189();
	func_182(Local_173.f_107.f_25, 153);
	func_176();
	func_107();
	func_106();
}

void func_328()
{
	func_327();
	func_172();
	if (Local_626.f_145 <= 1)
	{
		return;
	}
	Local_151.f_16 = Local_173.f_148;
	func_19(5);
}

void func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	func_333();
	iVar0 = 199;
	iVar1 = 225;
	iVar2 = 193;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 201;
		iVar1 = 214;
	}
	if (NETWORK::GET_NETWORK_TIME() > Local_173.f_441 + 500)
	{
		if (Local_832[Local_173.f_178 /*9*/] != 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar0))
			{
				func_20();
				func_164(1);
				func_237(1);
				func_136("Frontend_Ready");
				Local_173.f_441 = NETWORK::GET_NETWORK_TIME();
			}
			if (Local_173.f_452)
			{
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar2))
				{
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)) && !Local_934[iVar3 /*37*/].f_25)
						{
							Local_934[iVar3 /*37*/].f_6 = func_332();
							Local_934[iVar3 /*37*/].f_25 = 1;
							Local_934[iVar3 /*37*/] = 1;
						}
						else
						{
							iVar3++;
						}
					}
				}
			}
		}
		if (Local_832[Local_173.f_178 /*9*/] == 1)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iVar1))
			{
				func_20();
				func_237(0);
				func_136("Frontend_Unready");
				Local_173.f_441 = NETWORK::GET_NETWORK_TIME();
			}
		}
	}
	func_331();
	if (Local_626.f_145 >= 2)
	{
		func_19(4);
		func_136("Frontend_Start_Game");
		func_330(1);
	}
}

void func_330(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Local_151, "Street Crime: Gang Wars Edition.", 64);
	}
	else
	{
		StringCopy(&Local_151, "Invade and Persuade II.", 64);
	}
	Local_151.f_16 = 0;
	Local_151.f_17 = 0;
	Local_151.f_18 = 0;
	Local_151.f_19 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_151.f_20 = 0;
	Local_151.f_21 = 0;
}

void func_331()
{
	struct<3> Var0;
	
	MISC::SET_BIT(&(Local_173.f_417), 0);
	if (Local_832[Local_173.f_178 /*9*/] == 1)
	{
		StringCopy(&Var0, "SCGW_H_RDY1", 24);
	}
	else
	{
		StringCopy(&Var0, "SCGW_H_RDY0", 24);
		if (Local_173.f_178.f_1 && Local_173.f_452)
		{
			StringConCat(&Var0, "_H", 24);
		}
		if (MISC::IS_ORBIS_VERSION())
		{
			StringConCat(&Var0, "_PS4", 24);
		}
	}
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		StringConCat(&Var0, "_PC", 24);
	}
	if (func_131(&Var0))
	{
		return;
	}
	func_20();
	func_129(&Var0);
}

int func_332()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		bVar2 = true;
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (Local_832[iVar0 /*9*/].f_6 == iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				bVar2 = false;
			}
			if (Local_934[iVar0 /*37*/].f_6 == iVar1)
			{
				bVar2 = false;
			}
			iVar0++;
		}
		if (bVar2)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_333()
{
	int iVar0;
	int iVar1;
	char cVar2[16];
	int iVar6;
	
	func_127();
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_142(iVar0, 0);
		if (Local_173.f_149[iVar0] != -1 && Local_832[Local_173.f_149[iVar0] /*9*/] == 1)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 != Local_173.f_148)
	{
		if (Local_832[Local_173.f_178 /*9*/] == 1)
		{
			StringCopy(&cVar2, "SCGW_WFP", 16);
		}
		else
		{
			StringCopy(&cVar2, "SCGW_PS", 16);
		}
		iVar6 = SYSTEM::ROUND((SYSTEM::SIN((SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) * 0,5058f)) * 255f));
		if (iVar6 > 51)
		{
			iVar6 = 255;
		}
		else
		{
			iVar6 = 0;
		}
		HUD::SET_TEXT_SCALE(0,65f, 0,65f);
		HUD::SET_TEXT_COLOUR(255, 255, 255, iVar6);
		HUD::SET_TEXT_DROP_SHADOW();
		HUD::SET_TEXT_CENTRE(true);
		HUD::SET_TEXT_FONT(7);
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar2);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_125(0,5f), 0,885f, 0);
	}
	func_107();
	func_106();
}

void func_334()
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_menus_scene"))
	{
		AUDIO::START_AUDIO_SCENE("dlc_vw_am_tw_in_menus_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_in_gameplay_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_in_gameplay_scene");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("dlc_vw_am_tw_vehicle_drivethrough_scene"))
	{
		AUDIO::STOP_AUDIO_SCENE("dlc_vw_am_tw_vehicle_drivethrough_scene");
	}
	func_127();
	GRAPHICS::_DRAW_BINK_MOVIE(Local_173.f_427, 0,5f, 0,5f, (1f * fLocal_148), 1f, 0f, 255, 255, 255, 255);
	if (GRAPHICS::_GET_BINK_MOVIE_TIME(Local_173.f_427) >= 30f && !MISC::IS_BIT_SET(Local_173.f_141, 3))
	{
		MISC::SET_BIT(&(Local_173.f_141), 3);
		func_22(func_23(0));
	}
	if (GRAPHICS::_GET_BINK_MOVIE_TIME(Local_173.f_427) >= 99f)
	{
		GRAPHICS::_STOP_BINK_MOVIE(Local_173.f_427);
		GRAPHICS::_RELEASE_BINK_MOVIE(Local_173.f_427);
		func_19(3);
		Local_173.f_154[Local_832[Local_173.f_178 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
		func_169(2);
	}
	func_107();
	func_106();
}

void func_335()
{
	if (!func_336())
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGrid", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGrid"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerYellow", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerYellow"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerPurple", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerPurple"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerGreen", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerGreen"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridPlayerBlue", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridPlayerBlue"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridTiles", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridTiles"))
	{
		return;
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPArcadeCabinetGridHUD", false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPArcadeCabinetGridHUD"))
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("SCGW", 3);
	if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SCGW", 3))
	{
		return;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_VINEWOOD/DLC_VW_AM_TW", false, -1))
	{
		return;
	}
	func_19(2);
	GRAPHICS::_PLAY_BINK_MOVIE(Local_173.f_427);
	GRAPHICS::_SET_BINK_SHOULD_SKIP(Local_173.f_427, true);
	func_136("Frontend_Degenatron_Screen");
}

bool func_336()
{
	return ((((((func_337(0) && func_337(6)) && func_337(1)) && func_337(3)) && func_337(4)) && func_337(5)) && func_337(7));
}

int func_337(int iParam0)
{
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(func_112(iParam0), false);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(func_112(iParam0)))
	{
		return 0;
	}
	return 1;
}

void func_338()
{
	int iVar0;
	int iVar1;
	
	if (Local_626.f_145 > 1)
	{
		if (func_356(PLAYER::PLAYER_ID()))
		{
			Local_173.f_443.f_4 = 0;
			Local_173.f_443.f_3 = 0;
			func_355(&(Local_173.f_443), 11);
		}
		func_19(11);
		return;
	}
	func_346();
	func_345(0);
	func_344();
	func_343();
	func_342();
	func_341();
	func_340();
	func_339();
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_173.f_380[iVar0 /*5*/][iVar1] = -2147483647;
			Local_173.f_349[iVar0 /*5*/][iVar1] = -1;
			Local_173.f_318[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_173.f_154[iVar0] = -2147483647;
		iVar0++;
	}
	Local_173.f_427 = GRAPHICS::_SET_BINK_MOVIE("DegenSting_StreetCrime_1920x1080_auto");
	func_19(1);
}

void func_339()
{
	Local_173.f_59[0 /*5*/] = "";
	Local_173.f_59[0 /*5*/].f_2 = 0;
	Local_173.f_59[0 /*5*/].f_4 = 0;
	Local_173.f_59[0 /*5*/].f_3 = 0;
	Local_173.f_59[0 /*5*/].f_1 = 0;
	Local_173.f_59[1 /*5*/] = "gun_";
	Local_173.f_59[1 /*5*/].f_2 = 2;
	Local_173.f_59[1 /*5*/].f_4 = 2;
	Local_173.f_59[1 /*5*/].f_3 = 700;
	Local_173.f_59[1 /*5*/].f_1 = 300;
	Local_173.f_59[2 /*5*/] = "uzi_";
	Local_173.f_59[2 /*5*/].f_2 = 1;
	Local_173.f_59[2 /*5*/].f_4 = 1;
	Local_173.f_59[2 /*5*/].f_3 = 325;
	Local_173.f_59[2 /*5*/].f_1 = 300;
	Local_173.f_59[3 /*5*/] = "rifle_";
	Local_173.f_59[3 /*5*/].f_2 = 3;
	Local_173.f_59[3 /*5*/].f_4 = 2;
	Local_173.f_59[3 /*5*/].f_3 = 650;
	Local_173.f_59[3 /*5*/].f_1 = 200;
	Local_173.f_59[4 /*5*/] = "rocket_";
	Local_173.f_59[4 /*5*/].f_2 = 5;
	Local_173.f_59[4 /*5*/].f_4 = 8;
	Local_173.f_59[4 /*5*/].f_3 = 2000;
	Local_173.f_59[4 /*5*/].f_1 = 525;
	Local_173.f_59[5 /*5*/] = "shotgun_";
	Local_173.f_59[5 /*5*/].f_2 = 2;
	Local_173.f_59[5 /*5*/].f_4 = 4;
	Local_173.f_59[5 /*5*/].f_3 = 1000;
	Local_173.f_59[5 /*5*/].f_1 = 300;
}

void func_340()
{
	Local_173.f_90[0 /*2*/] = "heart_anim_";
	Local_173.f_90[0 /*2*/].f_1 = 10;
	Local_173.f_90[1 /*2*/] = "speed_anim_";
	Local_173.f_90[1 /*2*/].f_1 = 10;
	Local_173.f_90[2 /*2*/] = "phone_anim_";
	Local_173.f_90[2 /*2*/].f_1 = 10;
	Local_173.f_90[3 /*2*/] = "icon_pistol";
	Local_173.f_90[3 /*2*/].f_1 = 0;
	Local_173.f_90[4 /*2*/] = "icon_uzi";
	Local_173.f_90[4 /*2*/].f_1 = 0;
	Local_173.f_90[5 /*2*/] = "icon_rifle";
	Local_173.f_90[5 /*2*/].f_1 = 0;
	Local_173.f_90[6 /*2*/] = "icon_rocket_launcher";
	Local_173.f_90[6 /*2*/].f_1 = 0;
	Local_173.f_90[7 /*2*/] = "icon_shotgun";
	Local_173.f_90[7 /*2*/].f_1 = 0;
}

void func_341()
{
	Local_173.f_22[0 /*4*/] = "ice_cream_van_";
	Local_173.f_22[0 /*4*/].f_1 = 1;
	Local_173.f_22[0 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[0 /*4*/].f_2.f_1 = 0,02963f;
	Local_173.f_22[1 /*4*/] = "ambulance_";
	Local_173.f_22[1 /*4*/].f_1 = 2;
	Local_173.f_22[1 /*4*/].f_2 = 0,035417f;
	Local_173.f_22[1 /*4*/].f_2.f_1 = 0,02963f;
	Local_173.f_22[2 /*4*/] = "police_";
	Local_173.f_22[2 /*4*/].f_1 = 2;
	Local_173.f_22[2 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[2 /*4*/].f_2.f_1 = 0,025926f;
	Local_173.f_22[3 /*4*/] = "fire_truck_";
	Local_173.f_22[3 /*4*/].f_1 = 2;
	Local_173.f_22[3 /*4*/].f_2 = 0,045833f;
	Local_173.f_22[3 /*4*/].f_2.f_1 = 0,02963f;
	Local_173.f_22[4 /*4*/] = "tank_";
	Local_173.f_22[4 /*4*/].f_1 = 1;
	Local_173.f_22[4 /*4*/].f_2 = 0,041667f;
	Local_173.f_22[4 /*4*/].f_2.f_1 = 0,025926f;
	Local_173.f_22[5 /*4*/] = "gang_car_green";
	Local_173.f_22[5 /*4*/].f_1 = 1;
	Local_173.f_22[5 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[5 /*4*/].f_2.f_1 = 0,059259f;
	Local_173.f_22[6 /*4*/] = "gang_car_purple";
	Local_173.f_22[6 /*4*/].f_1 = 1;
	Local_173.f_22[6 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[6 /*4*/].f_2.f_1 = 0,059259f;
	Local_173.f_22[7 /*4*/] = "gang_car_yellow";
	Local_173.f_22[7 /*4*/].f_1 = 1;
	Local_173.f_22[7 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[7 /*4*/].f_2.f_1 = 0,059259f;
	Local_173.f_22[8 /*4*/] = "gang_car_blue";
	Local_173.f_22[8 /*4*/].f_1 = 1;
	Local_173.f_22[8 /*4*/].f_2 = 0,033333f;
	Local_173.f_22[8 /*4*/].f_2.f_1 = 0,059259f;
}

void func_342()
{
	Local_173.f_422[0] = "green";
	Local_173.f_422[1] = "purple";
	Local_173.f_422[2] = "yellow";
	Local_173.f_422[3] = "blue";
}

void func_343()
{
	func_214(&(Local_173.f_107[0 /*4*/]), 78, 187, 30, 255);
	func_214(&(Local_173.f_107[1 /*4*/]), 171, 0, 255, 255);
	func_214(&(Local_173.f_107[2 /*4*/]), 255, 228, 0, 255);
	func_214(&(Local_173.f_107[3 /*4*/]), 35, 92, 255, 255);
	func_214(&(Local_173.f_107.f_29), 221, 21, 10, 255);
	func_214(&(Local_173.f_107.f_17), 255, 255, 255, 255);
	func_214(&(Local_173.f_107.f_21), 55, 55, 55, 255);
	func_214(&(Local_173.f_107.f_25), 0, 0, 0, 255);
}

void func_344()
{
	Local_173[0 /*2*/] = { func_111(0,170833f, (0,909259f - 0,019444f)) };
	Local_173[1 /*2*/] = { func_111(0,170833f, (0,109259f + 0,019444f)) };
	Local_173[2 /*2*/] = { func_111(0,829167f, (0,109259f + 0,019444f)) };
	Local_173[3 /*2*/] = { func_111(0,829167f, (0,909259f - 0,019444f)) };
	Local_173.f_9[0 /*3*/][0] = 1;
	Local_173.f_9[0 /*3*/][1] = 2;
	Local_173.f_9[1 /*3*/][0] = 11;
	Local_173.f_9[1 /*3*/][1] = 2;
	Local_173.f_9[2 /*3*/][0] = 1;
	Local_173.f_9[2 /*3*/][1] = 6;
	Local_173.f_9[3 /*3*/][0] = 11;
	Local_173.f_9[3 /*3*/][1] = 6;
}

void func_345(int iParam0)
{
	Local_1083.f_137 = iParam0;
	func_214(&(Local_1083[0 /*17*/].f_9), 255, 255, 255, 255);
	Local_1083[1 /*17*/].f_6 = 1000;
	Local_1083[1 /*17*/].f_7 = 10000;
	Local_1083[2 /*17*/].f_1 = 1;
	Local_1083[2 /*17*/].f_8 = 40;
	func_214(&(Local_1083[2 /*17*/].f_9), 0, 0, 0, 0);
	func_214(&(Local_1083[3 /*17*/].f_9), 255, 255, 255, 127);
	func_214(&(Local_1083[4 /*17*/].f_9), 255, 255, 255, 127);
	func_214(&(Local_1083[5 /*17*/].f_9), 255, 255, 255, 127);
	func_214(&(Local_1083[7 /*17*/].f_9), 255, 255, 255, 255);
	switch (Local_1083.f_137)
	{
		case 2:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 30);
			func_214(&(Local_1083[4 /*17*/].f_9), 255, 255, 255, 127);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[3 /*17*/] = 1;
			break;
		
		case 3:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 30);
			func_214(&(Local_1083[4 /*17*/].f_9), 255, 255, 255, 255);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[4 /*17*/] = 1;
			break;
		
		case 4:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 30);
			func_214(&(Local_1083[5 /*17*/].f_9), 255, 255, 255, 184);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[5 /*17*/] = 1;
			break;
		
		case 1:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[3 /*17*/] = 1;
			break;
		
		case 0:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 10);
			func_214(&(Local_1083[5 /*17*/].f_9), 255, 255, 255, 255);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[5 /*17*/] = 1;
			break;
		
		case 6:
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 10);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 8);
			func_214(&(Local_1083[7 /*17*/].f_9), 255, 255, 255, 100);
			Local_1083[0 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[7 /*17*/] = 1;
			break;
		
		case 7:
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 8);
			Local_1083[2 /*17*/] = 1;
			Local_1083[0 /*17*/] = 1;
			func_214(&(Local_1083[3 /*17*/].f_9), 255, 255, 255, 180);
			Local_1083[3 /*17*/] = 1;
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			Local_1083[6 /*17*/] = 1;
			break;
		
		case 5:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 30);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 20);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 10);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 1;
			Local_1083[3 /*17*/] = 1;
			break;
		
		case 8:
			Local_1083[1 /*17*/] = 0;
			Local_1083[2 /*17*/] = 0;
			Local_1083[0 /*17*/] = 1;
			func_214(&(Local_1083[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1083[6 /*17*/] = 1;
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1083[7 /*17*/] = 1;
			func_214(&(Local_1083[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 9:
			Local_1083[1 /*17*/] = 0;
			Local_1083[2 /*17*/] = 0;
			Local_1083[0 /*17*/] = 1;
			func_214(&(Local_1083[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1083[6 /*17*/] = 1;
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1083[7 /*17*/] = 1;
			func_214(&(Local_1083[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 10:
			Local_1083[1 /*17*/] = 0;
			Local_1083[2 /*17*/] = 0;
			Local_1083[0 /*17*/] = 1;
			func_214(&(Local_1083[0 /*17*/].f_9), 0, 0, 255, 90);
			Local_1083[6 /*17*/] = 1;
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 0, 0, 15);
			Local_1083[7 /*17*/] = 1;
			func_214(&(Local_1083[7 /*17*/].f_9), 255, 255, 255, 115);
			break;
		
		case 11:
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 15);
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 10);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 5);
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			Local_1083[1 /*17*/] = 1;
			Local_1083[3 /*17*/] = 1;
			break;
		
		case 12:
			func_214(&(Local_1083[1 /*17*/].f_9), 255, 255, 255, 3);
			func_214(&(Local_1083[2 /*17*/].f_13), 0, 0, 0, 15);
			func_214(&(Local_1083[0 /*17*/].f_9), 0, 0, 255, 90);
			func_214(&(Local_1083[6 /*17*/].f_9), 255, 255, 255, 15);
			Local_1083[1 /*17*/] = 1;
			Local_1083[2 /*17*/] = 0;
			Local_1083[0 /*17*/] = 1;
			Local_1083[6 /*17*/] = 1;
			break;
	}
}

void func_346()
{
	MISC::SET_BIT(&(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887), 16);
	Global_4718592.f_132413 = 1;
	Global_1637065 = 1;
	func_348();
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_26(PLAYER::PLAYER_ID(), 0, 0, 0);
		func_347();
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	}
	func_42(1, 0, 1, 0);
	func_25(0, 1, -1);
	func_25(1, 1, -1);
	func_25(2, 1, -1);
	func_25(3, 1, -1);
	func_25(4, 1, -1);
	func_25(6, 1, -1);
	func_25(7, 1, -1);
	func_25(8, 1, -1);
	func_25(9, 1, -1);
	func_25(10, 1, -1);
	func_25(11, 1, -1);
	func_25(12, 1, -1);
	func_25(13, 1, -1);
	func_25(14, 1, -1);
	func_25(15, 1, -1);
	func_25(16, 1, -1);
}

void func_347()
{
	if (!Global_2703656.f_847.f_10)
	{
		Global_2703656.f_847.f_10 = 1;
	}
}

void func_348()
{
	if (func_354() || func_353())
	{
		func_352();
		func_349();
	}
}

void func_349()
{
	if ((!func_351() && !func_350()) && Global_2715541)
	{
		Global_4718592.f_86750 = 0;
	}
}

bool func_350()
{
	return Global_2714627.f_691;
}

bool func_351()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

void func_352()
{
	Global_2714627.f_756 = 1;
}

var func_353()
{
	return Global_2714627.f_735;
}

bool func_354()
{
	return MISC::IS_BIT_SET(Global_2714627.f_2, 11);
}

void func_355(var uParam0, int iParam1)
{
	struct<8> Var0;
	bool bVar8;
	bool bVar9;
	int iVar10;
	
	Var0.f_5 = 1073741824;
	Var0.f_6 = -1073741824;
	Var0.f_0 = 988620539;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	Var0.f_3 = uParam0->f_3;
	Var0.f_4 = uParam0->f_4;
	Var0.f_5 = uParam0->f_6;
	Var0.f_6 = uParam0->f_7;
	Var0.f_7 = uParam0->f_8;
	bVar8 = false;
	if (iParam1 == 11)
	{
		if (MISC::IS_BIT_SET(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_429, 1))
		{
			MISC::CLEAR_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_429), 1);
			bVar8 = true;
		}
	}
	uParam0->f_5 = 0;
	if (!func_100(&(uParam0->f_1)))
	{
		func_97(&(uParam0->f_1), 0, 0);
	}
	bVar9 = true;
	if (*uParam0 == iParam1 && !bVar8)
	{
		if (func_100(&(uParam0->f_1)) && !func_96(&(uParam0->f_1), 1000, 0))
		{
			bVar9 = false;
		}
		else
		{
			func_99(&(uParam0->f_1));
		}
	}
	else
	{
		*uParam0 = iParam1;
		func_99(&(uParam0->f_1));
	}
	if (bVar9)
	{
		iVar10 = func_59(PLAYER::PLAYER_ID());
		if (iVar10 != -1)
		{
			SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, iVar10);
			uParam0->f_5 = 1;
		}
	}
}

int func_356(int iParam0)
{
	if (iParam0 != func_18())
	{
		if (func_12(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_49(Global_2689156[iParam0 /*453*/].f_319.f_6) == 17;
			}
		}
	}
	return 0;
}

void func_357()
{
	bool bVar0;
	int iVar1;
	
	if (Global_1932182.f_1 != 0)
	{
		func_164(0);
	}
	Local_173.f_411 = (Local_173.f_411 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_173.f_412 = SYSTEM::FLOOR((IntToFloat(Local_173.f_411) / 66f));
	Local_173.f_411 = (Local_173.f_411 - SYSTEM::ROUND((66f * IntToFloat(Local_173.f_412))));
	Local_173.f_413 = (Local_173.f_413 + SYSTEM::ROUND((MISC::GET_FRAME_TIME() * 1000f)));
	Local_173.f_414 = SYSTEM::FLOOR((IntToFloat(Local_173.f_413) / (66f * 3f)));
	Local_173.f_413 = (Local_173.f_413 - SYSTEM::ROUND(((66f * 3f) * IntToFloat(Local_173.f_414))));
	Local_173.f_311 = (Local_173.f_311 + Local_173.f_412);
	Local_173.f_416 = (Local_173.f_416 + Local_173.f_414);
	if (Local_173.f_416 >= 3)
	{
		Local_173.f_416 = 0;
	}
	func_399();
	func_398();
	func_397();
	if (Local_173.f_140 >= 11)
	{
		return;
	}
	if (!func_39())
	{
		func_19(11);
		return;
	}
	if (func_384())
	{
		if (func_356(PLAYER::PLAYER_ID()))
		{
			Local_173.f_443.f_4 = 0;
			Local_173.f_443.f_3 = 0;
			func_355(&(Local_173.f_443), 11);
		}
		func_19(11);
		return;
	}
	if ((Local_173.f_178.f_1 && !Local_626.f_164) && (Local_173.f_435 == -2147483647 || (NETWORK::GET_NETWORK_TIME() - Local_173.f_435) > 5000))
	{
		func_383(func_60(PLAYER::PLAYER_ID()), 0);
		Local_173.f_435 = NETWORK::GET_NETWORK_TIME();
	}
	func_374();
	MISC::CLEAR_BIT(&(Local_173.f_417), 0);
	bVar0 = Local_173.f_140 >= 2;
	func_358(bVar0);
	Local_173.f_452 = 1;
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (Local_173.f_178 != iVar1 && NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			Local_173.f_452 = 0;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 3)
	{
		if (!Local_173.f_452)
		{
			Local_934[iVar1 /*37*/].f_25 = 0;
			func_16(0);
		}
		if (Local_934[iVar1 /*37*/].f_25)
		{
			func_16(1);
		}
		iVar1++;
	}
}

void func_358(bool bParam0)
{
	func_371();
	PAD::_0x7F4724035FDCA1DD(0);
	PAD::_0x7F4724035FDCA1DD(2);
	if (MISC::IS_PC_VERSION())
	{
		PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, true);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
	func_370(1);
	func_369(4, -1);
	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(19);
	func_368();
	func_367();
	HUD::THEFEED_HIDE_THIS_FRAME();
	if (bParam0)
	{
		func_360(0);
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
		}
	}
	func_359();
	RECORDING::_STOP_RECORDING_THIS_FRAME();
}

void func_359()
{
	Global_22691.f_134 = 1;
}

void func_360(int iParam0)
{
	if (func_366())
	{
		return;
	}
	if (!Global_19954.f_1 == 1)
	{
		if (func_365(0))
		{
			func_361(iParam0);
		}
		MISC::SET_BIT(&Global_7825, 2);
	}
}

void func_361(int iParam0)
{
	if (func_366())
	{
		return;
	}
	if (Global_20144)
	{
		if (func_364())
		{
			func_363(1, 1);
		}
		else
		{
			func_363(0, 0);
		}
	}
	if (Global_19954.f_1 == 10 || Global_19954.f_1 == 9)
	{
		MISC::SET_BIT(&Global_7825, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21285 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7824, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7824, 30);
	}
	if (!func_362())
	{
		Global_19954.f_1 = 3;
	}
}

int func_362()
{
	if (Global_19954.f_1 == 1 || Global_19954.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_363(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_365(0))
		{
			Global_20144 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_19891);
			}
			Global_19882 = { Global_19900[Global_19899 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
	else if (Global_20144 == 1)
	{
		Global_20144 = 0;
		Global_19882 = { Global_19907[Global_19899 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19891);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_19882);
		}
	}
}

bool func_364()
{
	return MISC::IS_BIT_SET(Global_1958920, 5);
}

int func_365(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19954.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7824, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19954.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return MISC::IS_BIT_SET(Global_1958920, 19);
}

void func_367()
{
	Global_22691.f_6 = 1;
}

void func_368()
{
	Global_1574737 = 1;
	StringCopy(&(Global_1574737.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574737.f_9 = MISC::GET_HASH_KEY(&(Global_1574737.f_1));
}

void func_369(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1644209.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1644209.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_370(int iParam0)
{
	Global_1645739.f_1121 = iParam0;
}

void func_371()
{
	fLocal_147 = func_373();
	fLocal_148 = func_372();
}

float func_372()
{
	return (1,778f / fLocal_147);
}

float func_373()
{
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uLocal_149, &iLocal_150);
	fLocal_147 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (MISC::IS_PC_VERSION())
	{
		if (fLocal_147 >= 4f)
		{
			fLocal_147 = (fLocal_147 / 3f);
		}
	}
	return fLocal_147;
}

void func_374()
{
	int iVar0;
	struct<3> Var1;
	struct<5> Var4;
	struct<4> Var9;
	struct<5> Var13;
	struct<15> Var18;
	struct<2> Var43;
	
	Var18.f_3 = 10;
	Var18.f_14 = 10;
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar0) != 174)
		{
		}
		else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var1, 3))
		{
			if (Var1.f_0 == 1889605535)
			{
				func_382(Var1.f_2);
			}
			else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 5))
			{
				if (Var4.f_0 == 1551971435)
				{
					func_380(Var4.f_2, Var4.f_3, Var4.f_4);
				}
				else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var9, 4))
				{
					if (Var9.f_0 == -1100083080)
					{
						func_379(Var9.f_3, Var9.f_2);
					}
					else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var13, 5))
					{
						if (Var9.f_0 == -77904037)
						{
							func_378(Var13.f_2, Var13.f_3, Var13.f_4);
						}
						else if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var18, 25))
						{
							if (Var18.f_0 == 549044096)
							{
								if (Local_626.f_164)
								{
								}
								else if (Var18.f_2 != 0)
								{
								}
								else
								{
									func_376(&(Var18.f_3), &(Var18.f_14));
									Jump @301; //curOff = 264
									if (SCRIPT::GET_EVENT_DATA(1, iVar0, &Var43, 2))
									{
										if (Var43.f_0 == -713331550)
										{
											func_375(Var43.f_1);
										}
									}
								}
								iVar0++;
							}

void func_375(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	iVar1 = func_133(iVar0);
	if (iVar1 < 0 || iVar1 >= 10)
	{
		return;
	}
	Local_626.f_165[iVar1 /*3*/] = Local_832[iVar0 /*9*/].f_7;
	func_58(func_60(PLAYER::PLAYER_ID()), 0, iVar1, Local_626.f_165[iVar1 /*3*/], Local_626.f_165[iVar1 /*3*/].f_1, 0);
}

void func_376(var uParam0, var uParam1)
{
	int iVar0;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((*uParam1)[iVar0] <= 0)
		{
			Local_626.f_165[iVar0 /*3*/].f_1 = (50 - iVar0 * 2);
			Local_626.f_165[iVar0 /*3*/] = func_377(iVar0);
			func_58(func_60(PLAYER::PLAYER_ID()), 0, iVar0, Local_626.f_165[iVar0 /*3*/], Local_626.f_165[iVar0 /*3*/].f_1, 0);
		}
		else
		{
			Local_626.f_165[iVar0 /*3*/].f_1 = (*uParam1)[iVar0];
			Local_626.f_165[iVar0 /*3*/] = (*uParam0)[iVar0];
		}
		iVar0++;
	}
	Local_626.f_164 = 1;
}

int func_377(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 69644;
		
		case 1:
			return 356361;
		
		case 2:
			return 533761;
		
		case 3:
			return 861443;
		
		case 4:
			return 21638;
		
		case 5:
			return 336649;
		
		case 6:
			return 586639;
		
		case 7:
			return 795403;
		
		case 8:
			return 38023;
		
		case 9:
			return 341123;
		
		default:
	}
	return 0;
}

void func_378(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (bParam2)
		{
			func_165("Hit_By_Car", iParam0, &(Local_173.f_204[iParam0 /*19*/].f_6));
		}
		else
		{
			func_165("Death", iParam0, &(Local_173.f_204[iParam0 /*19*/].f_6));
		}
	}
	else
	{
		func_165("Pain", iParam0, &(Local_173.f_204[iParam0 /*19*/].f_6));
	}
}

void func_379(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[2];
	var uVar6[2];
	int iVar9;
	bool bVar10;
	bool bVar11;
	int iVar12;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	iVar9 = 1;
	func_185(iParam1, &iVar1, &iVar2);
	if (func_76())
	{
		if ((iVar1 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar10 = func_76();
			iVar3[iVar0] = func_75(bVar10, 0, 1);
			uVar6[iVar0] = func_74((iVar1 + iVar9), func_75(bVar10, 8, 0));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	else
	{
		if ((iVar2 % 2) == 0)
		{
			iVar9 = 2;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			bVar11 = func_76();
			iVar3[iVar0] = func_75(bVar11, 2, 3);
			uVar6[iVar0] = func_74(func_75(bVar11, 12, 0), (iVar2 + iVar9));
			iVar9 = (iVar9 * -1);
			iVar0++;
		}
	}
	iVar12 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		Local_626.f_148[(iVar0 + iVar12) /*4*/].f_1 = uVar6[iVar0];
		Local_626.f_148[(iVar0 + iVar12) /*4*/] = NETWORK::GET_NETWORK_TIME() + 1000;
		Local_626.f_148[(iVar0 + iVar12) /*4*/].f_2 = iVar3[iVar0];
		Local_626.f_148[(iVar0 + iVar12) /*4*/].f_3 = (5 + iParam0);
		iVar0++;
	}
	Local_626.f_161 = NETWORK::GET_NETWORK_TIME();
}

void func_380(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (iVar0 == iParam2)
		{
			if (!func_84(&(Local_626.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
			{
				func_92(&(Local_626.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
			}
		}
		else if (func_84(&(Local_626.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0))
		{
			func_381(&(Local_626.f_85[iVar0 /*11*/][iParam1 /*5*/]), iParam0);
		}
		iVar0++;
	}
}

void func_381(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(uParam0[func_86(iParam1)], func_85(iParam1));
}

void func_382(int iParam0)
{
	if (!Local_173.f_178.f_1)
	{
		return;
	}
	Local_626.f_62[iParam0 /*3*/].f_1 = -1;
	Local_626.f_62[iParam0 /*3*/] = -1;
	Local_626.f_62[iParam0 /*3*/].f_2 = -2147483647;
}

void func_383(int iParam0, int iParam1)
{
	struct<3> Var0;
	int iVar3;
	
	Var0.f_0 = 1000228518;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	iVar3 = func_59(iParam0);
	if (!iVar3 == 0 && func_12(iParam0, 0, 1))
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar3);
	}
}

int func_384()
{
	int iVar0;
	
	if (Global_1932184)
	{
		return 1;
	}
	if (func_396())
	{
		return 1;
	}
	if (func_395(PLAYER::GET_PLAYER_INDEX()))
	{
		return 1;
	}
	if (!func_394())
	{
		return 1;
	}
	if (func_388())
	{
		return 1;
	}
	if (Local_626.f_145 == 4 && Local_832[Local_173.f_178 /*9*/] != 4)
	{
		return 0;
	}
	if (Local_173.f_140 < 2)
	{
		return 0;
	}
	iVar0 = 202;
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		iVar0 = 214;
	}
	if (PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		func_385((1000 - MISC::ABSI((NETWORK::GET_NETWORK_TIME() - Local_173.f_431))), 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	else
	{
		func_385(0, 1000, "DEG_GAME_QUIT", 1, -1, 2, -1082130432, -1082130432, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1);
	}
	if (PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
	{
		if (Local_173.f_431 == -2147483647)
		{
			Local_173.f_431 = NETWORK::GET_NETWORK_TIME() + 1000;
		}
		if (NETWORK::GET_NETWORK_TIME() > Local_173.f_431)
		{
			return 1;
		}
	}
	else if (Local_173.f_431 != -2147483647)
	{
		Local_173.f_431 = -2147483647;
	}
	if (func_356(PLAYER::PLAYER_ID()))
	{
		if (func_388())
		{
			return 1;
		}
	}
	return 0;
}

void func_385(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_387(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1645739.f_1 = 1;
		func_386(0, iVar0);
		Global_1645739.f_1135[iVar0] = iParam0;
		Global_1645739.f_1135.f_11[iVar0] = iParam1;
		StringCopy(&(Global_1645739.f_1135.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1645739.f_1135.f_194[iVar0] = iParam3;
		Global_1645739.f_1135.f_183[iVar0] = iParam4;
		Global_1645739.f_1135.f_216[iVar0] = iParam5;
		Global_1645739.f_1135.f_227[iVar0 /*3*/] = iParam6;
		Global_1645739.f_1135.f_227[iVar0 /*3*/].f_1 = iParam7;
		Global_1645739.f_1135.f_258[iVar0] = iParam8;
		Global_1645739.f_1135.f_269[iVar0] = iParam9;
		Global_1645739.f_1135.f_312[iVar0] = iParam10;
		Global_1645739.f_1135.f_323[iVar0] = iParam11;
		Global_1645739.f_1135.f_334[iVar0] = iParam12;
		Global_1645739.f_1135.f_345[iVar0] = iParam13;
		Global_1645739.f_1130 = 1;
		Global_1645739.f_1135.f_356[iVar0] = iParam14;
		Global_1645739.f_1135.f_367[iVar0] = iParam15;
		Global_1645739.f_1135.f_378[iVar0] = iParam16;
		Global_1645739.f_1135.f_389[iVar0] = iParam17;
		Global_1645739.f_1135.f_400[iVar0] = iParam18;
		Global_1645739.f_1135.f_411[iVar0] = iParam19;
		Global_1645739.f_1135.f_422[iVar0] = iParam20;
		Global_1645739.f_1135.f_433[iVar0] = iParam21;
		Global_1645739.f_1135.f_444[iVar0] = iParam22;
		Global_1645739.f_1135.f_455[iVar0] = iParam23;
		Global_1645739.f_1135.f_466[iVar0] = iParam24;
		Global_1645739.f_1135.f_205[iVar0] = iParam25;
		Global_1645739.f_1135.f_477[iVar0] = iParam26;
		Global_1645739.f_1135.f_488[iVar0] = iParam27;
		Global_1645739.f_1135.f_499[iVar0] = iParam28;
		Global_1645739.f_1135.f_510[iVar0] = iParam29;
		Global_1645739.f_1135.f_521[iVar0] = iParam30;
		Global_1645739.f_1135.f_532[iVar0] = iParam31;
		Global_1645739.f_1135.f_543[iVar0] = iParam32;
		Global_1645739.f_1135.f_554[iVar0] = iParam33;
		Global_1645739.f_1135.f_565[iVar0] = iParam34;
		Global_1645739.f_1135.f_576[iVar0] = iParam35;
		Global_1645739.f_1135.f_587[iVar0] = iParam36;
	}
}

void func_386(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1645739.f_6736[iParam0]), iParam1);
}

bool func_387(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1645739.f_6736[iParam0], iParam1);
}

int func_388()
{
	if (func_356(PLAYER::PLAYER_ID()))
	{
		if (func_393(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_392(PLAYER::PLAYER_ID(), 0) && func_390(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	if (func_389())
	{
		return 1;
	}
	if (Global_1578985.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_389()
{
	return MISC::IS_BIT_SET(Global_1973263, 14);
}

bool func_390(int iParam0)
{
	return func_391(iParam0, 20);
}

bool func_391(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

int func_392(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_393(int iParam0)
{
	if (func_35(iParam0, 0))
	{
		return 1;
	}
	if (func_34())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

int func_394()
{
	switch (func_48())
	{
		case 15:
		case 17:
			return 1;
			break;
	}
	return 0;
}

int func_395(int iParam0)
{
	if (iParam0 != func_18())
	{
		return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_514, 3);
	}
	return 0;
}

bool func_396()
{
	return Global_1946934.f_4703.f_1 != -1;
}

void func_397()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	Local_173.f_147 = 0;
	Local_173.f_148 = 0;
	Local_173.f_434 = Local_173.f_433;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		Local_173.f_149[iVar2] = -1;
		if (iLocal_827[iVar2] > iVar0)
		{
			iVar0 = iLocal_827[iVar2];
			iVar1 = iVar2;
		}
		else if (iLocal_827[iVar2] == iVar0)
		{
			iVar1 = -1;
		}
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2)) && !Local_934[iVar2 /*37*/].f_25)
		{
		}
		else if (Local_832[iVar2 /*9*/].f_6 == -1)
		{
		}
		else
		{
			Local_173.f_149[Local_832[iVar2 /*9*/].f_6] = iVar2;
			if (Local_832[iVar2 /*9*/].f_6 == iVar1)
			{
				iVar1 = iVar2;
			}
			if (Local_173.f_154[Local_832[iVar2 /*9*/].f_6] == -2147483647 && Global_1932182.f_1 == 0)
			{
				func_164((12 + Local_832[iVar2 /*9*/].f_6));
				Local_173.f_154[Local_832[iVar2 /*9*/].f_6] = NETWORK::GET_NETWORK_TIME();
			}
			Local_173.f_148++;
			if (Local_173.f_204[iVar2 /*19*/].f_9 != Local_832[iVar2 /*9*/].f_2)
			{
				iVar3 = (Local_832[iVar2 /*9*/].f_2 - Local_173.f_204[iVar2 /*19*/].f_9);
				if (iVar3 > 0)
				{
					Local_173.f_204[iVar2 /*19*/].f_9 = (Local_173.f_204[iVar2 /*19*/].f_9 + Local_173.f_412);
					if (Local_173.f_204[iVar2 /*19*/].f_9 > Local_832[iVar2 /*9*/].f_2)
					{
						Local_173.f_204[iVar2 /*19*/].f_9 = Local_832[iVar2 /*9*/].f_2;
					}
				}
				else
				{
					Local_173.f_204[iVar2 /*19*/].f_9 = (Local_173.f_204[iVar2 /*19*/].f_9 - Local_173.f_414);
					if (Local_173.f_204[iVar2 /*19*/].f_9 < Local_832[iVar2 /*9*/].f_2)
					{
						Local_173.f_204[iVar2 /*19*/].f_9 = Local_832[iVar2 /*9*/].f_2;
					}
				}
			}
			if (Local_832[iVar2 /*9*/] == 4)
			{
			}
			else
			{
				Local_173.f_147++;
			}
		}
		iVar2++;
	}
	Local_173.f_433 = iVar1;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (Local_173.f_149[iVar2] == -1 && Local_173.f_154[iVar2] != -2147483647)
		{
			Local_173.f_154[iVar2] = -2147483647;
		}
		iVar2++;
	}
}

void func_398()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Local_173.f_178 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar0 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
		Local_173.f_178.f_1 = bVar0;
	}
}

void func_399()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Local_934[iVar0 /*37*/].f_25)
		{
			Local_832[iVar0 /*9*/] = { Local_934[iVar0 /*37*/] };
		}
		iVar0++;
	}
}

void func_400()
{
	SYSTEM::WAIT(0);
}

void func_401(struct<21> Param0)
{
	func_407(4, Param0);
	func_405(0, -1, 0);
	func_404();
	func_403();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_626, 201, 0);
	unk_0x2B297170E982E21E(&iLocal_827, 5, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_832, 37, 0);
	unk_0x55B917F38CA35331(&Local_869, 65, 0);
	if (!func_402())
	{
		func_13();
	}
	Local_832[NETWORK::PARTICIPANT_ID_TO_INT() /*9*/].f_6 = Param0.f_19;
}

int func_402()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_8())
		{
			return 0;
		}
		if (func_6(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

void func_403()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		iVar1 = 0;
		while (iVar1 <= 3)
		{
			Local_626[iVar0 /*5*/][iVar1] = -1;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		Local_626.f_62[iVar0 /*3*/] = -1;
		Local_626.f_62[iVar0 /*3*/].f_1 = -1;
		Local_626.f_62[iVar0 /*3*/].f_2 = -2147483647;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Local_626.f_148[iVar0 /*4*/] = -2147483647;
		Local_626.f_148[iVar0 /*4*/].f_1 = -1;
		Local_626.f_148[iVar0 /*4*/].f_2 = -1;
		Local_626.f_148[iVar0 /*4*/].f_3 = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Local_626.f_131[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_626.f_196[iVar0] = 99;
		iVar0++;
	}
}

void func_404()
{
}

int func_405(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_14();
			}
			else
			{
				return 0;
			}
		}
		if (!func_406())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
				if (func_8())
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
				if (func_6(157))
				{
					if (!bParam2)
					{
						func_14();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_14();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574663 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_14();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_14();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_406()
{
	return Global_1575022;
}

void func_407(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_14();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

