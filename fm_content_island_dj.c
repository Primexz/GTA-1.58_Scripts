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
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
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
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
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
	float fLocal_95 = 0f;
	int iLocal_96[5] = { 0, 0, 0, 0, 0 };
	float fLocal_102 = 0f;
	float fLocal_103 = 0f;
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
	var uLocal_114 = 8;
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
	var uLocal_133 = 8;
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
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	float fLocal_167 = 0f;
	float fLocal_168 = 0f;
	float fLocal_169 = 0f;
	float fLocal_170 = 0f;
	var uLocal_171 = 0;
	int iLocal_172[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = -1;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	struct<988> Local_227 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 12, 1065353216, 0, 4, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, -1, 0, 12, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 1, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, -1, -1, -1, 0, 2, -1, 1114636288, 1114636288, 1114636288, -1082130432, 2, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1443296302, 6, -1, -1, -1, -1, -1, -1, 0, -1, 1, 1, 0, 0, 0, 5, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, 2, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 12, 1065353216, 0, -1, 0, 7, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 1, 0, -1, 1132068864, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 0, 0, 0, -1082130432, 1, 0, 0, -1, 12, 1065353216, 0, 1, 0, 1, 0, 0, 5, 1, -1, 12, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 1, 0, -1, -1, 0, 0, 0, -1082130432, -1082130432, -1, -1, 12, 1065353216, 0, 0, 1, -1, 1, -1, 0, 0, 0, 0, 0, 0, 2000, 1, 1, 0, 0, 5, 1, -1, 1, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = -1;
	var uLocal_1220 = -1;
	var uLocal_1221 = 1;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = -1;
	var uLocal_1228 = -1;
	var uLocal_1229 = 1;
	var uLocal_1230 = 0;
	struct<598> Local_1231 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	struct<20> Local_1831 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<20> Local_1851[8];
	struct<21> Local_2012[10];
	struct<233> Local_2223 = { 12, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4 } ;
	var uLocal_2456 = 0;
	var uLocal_2457 = 6;
	var uLocal_2458 = -1;
	var uLocal_2459 = 3;
	var uLocal_2460 = -1;
	var uLocal_2461 = 0;
	var uLocal_2462 = -1;
	var uLocal_2463 = 0;
	var uLocal_2464 = -1;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = -1;
	var uLocal_2472 = 3;
	var uLocal_2473 = -1;
	var uLocal_2474 = 0;
	var uLocal_2475 = -1;
	var uLocal_2476 = 0;
	var uLocal_2477 = -1;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = -1;
	var uLocal_2485 = 3;
	var uLocal_2486 = -1;
	var uLocal_2487 = 0;
	var uLocal_2488 = -1;
	var uLocal_2489 = 0;
	var uLocal_2490 = -1;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = -1;
	var uLocal_2498 = 3;
	var uLocal_2499 = -1;
	var uLocal_2500 = 0;
	var uLocal_2501 = -1;
	var uLocal_2502 = 0;
	var uLocal_2503 = -1;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = -1;
	var uLocal_2511 = 3;
	var uLocal_2512 = -1;
	var uLocal_2513 = 0;
	var uLocal_2514 = -1;
	var uLocal_2515 = 0;
	var uLocal_2516 = -1;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = -1;
	var uLocal_2524 = 3;
	var uLocal_2525 = -1;
	var uLocal_2526 = 0;
	var uLocal_2527 = -1;
	var uLocal_2528 = 0;
	var uLocal_2529 = -1;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 6;
	var uLocal_2538 = -1;
	var uLocal_2539 = 3;
	var uLocal_2540 = -1;
	var uLocal_2541 = 0;
	var uLocal_2542 = -1;
	var uLocal_2543 = 0;
	var uLocal_2544 = -1;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = -1;
	var uLocal_2552 = 3;
	var uLocal_2553 = -1;
	var uLocal_2554 = 0;
	var uLocal_2555 = -1;
	var uLocal_2556 = 0;
	var uLocal_2557 = -1;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = -1;
	var uLocal_2565 = 3;
	var uLocal_2566 = -1;
	var uLocal_2567 = 0;
	var uLocal_2568 = -1;
	var uLocal_2569 = 0;
	var uLocal_2570 = -1;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = -1;
	var uLocal_2578 = 3;
	var uLocal_2579 = -1;
	var uLocal_2580 = 0;
	var uLocal_2581 = -1;
	var uLocal_2582 = 0;
	var uLocal_2583 = -1;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = -1;
	var uLocal_2591 = 3;
	var uLocal_2592 = -1;
	var uLocal_2593 = 0;
	var uLocal_2594 = -1;
	var uLocal_2595 = 0;
	var uLocal_2596 = -1;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = -1;
	var uLocal_2604 = 3;
	var uLocal_2605 = -1;
	var uLocal_2606 = 0;
	var uLocal_2607 = -1;
	var uLocal_2608 = 0;
	var uLocal_2609 = -1;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 6;
	var uLocal_2618 = -1;
	var uLocal_2619 = 3;
	var uLocal_2620 = -1;
	var uLocal_2621 = 0;
	var uLocal_2622 = -1;
	var uLocal_2623 = 0;
	var uLocal_2624 = -1;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = -1;
	var uLocal_2632 = 3;
	var uLocal_2633 = -1;
	var uLocal_2634 = 0;
	var uLocal_2635 = -1;
	var uLocal_2636 = 0;
	var uLocal_2637 = -1;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = -1;
	var uLocal_2645 = 3;
	var uLocal_2646 = -1;
	var uLocal_2647 = 0;
	var uLocal_2648 = -1;
	var uLocal_2649 = 0;
	var uLocal_2650 = -1;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = -1;
	var uLocal_2658 = 3;
	var uLocal_2659 = -1;
	var uLocal_2660 = 0;
	var uLocal_2661 = -1;
	var uLocal_2662 = 0;
	var uLocal_2663 = -1;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = -1;
	var uLocal_2671 = 3;
	var uLocal_2672 = -1;
	var uLocal_2673 = 0;
	var uLocal_2674 = -1;
	var uLocal_2675 = 0;
	var uLocal_2676 = -1;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = -1;
	var uLocal_2684 = 3;
	var uLocal_2685 = -1;
	var uLocal_2686 = 0;
	var uLocal_2687 = -1;
	var uLocal_2688 = 0;
	var uLocal_2689 = -1;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 6;
	var uLocal_2698 = -1;
	var uLocal_2699 = 3;
	var uLocal_2700 = -1;
	var uLocal_2701 = 0;
	var uLocal_2702 = -1;
	var uLocal_2703 = 0;
	var uLocal_2704 = -1;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = -1;
	var uLocal_2712 = 3;
	var uLocal_2713 = -1;
	var uLocal_2714 = 0;
	var uLocal_2715 = -1;
	var uLocal_2716 = 0;
	var uLocal_2717 = -1;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = -1;
	var uLocal_2725 = 3;
	var uLocal_2726 = -1;
	var uLocal_2727 = 0;
	var uLocal_2728 = -1;
	var uLocal_2729 = 0;
	var uLocal_2730 = -1;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = -1;
	var uLocal_2738 = 3;
	var uLocal_2739 = -1;
	var uLocal_2740 = 0;
	var uLocal_2741 = -1;
	var uLocal_2742 = 0;
	var uLocal_2743 = -1;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = -1;
	var uLocal_2751 = 3;
	var uLocal_2752 = -1;
	var uLocal_2753 = 0;
	var uLocal_2754 = -1;
	var uLocal_2755 = 0;
	var uLocal_2756 = -1;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = -1;
	var uLocal_2764 = 3;
	var uLocal_2765 = -1;
	var uLocal_2766 = 0;
	var uLocal_2767 = -1;
	var uLocal_2768 = 0;
	var uLocal_2769 = -1;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776[5] = { 0, 0, 0, 0, 0 };
	struct<7> Local_2782 = { 4, 0, 1203982208, 1203982208, 1203982208, 0, 0 } ;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 1203982208;
	var uLocal_2792 = 1203982208;
	var uLocal_2793 = 1203982208;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 1203982208;
	var uLocal_2799 = 1203982208;
	var uLocal_2800 = 1203982208;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 1203982208;
	var uLocal_2806 = 1203982208;
	var uLocal_2807 = 1203982208;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = -1;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<2> Local_2826[2];
	struct<3> Local_2831 = { 0, 0, 0 } ;
	var uLocal_2834 = 0;
	struct<6> Local_2835 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2841 = 0;
	int iLocal_2842 = 0;
	struct<8> Local_2843 = { 0, -1, -1, 0, 0, 0, 0, 0 } ;
	int iLocal_2851 = 0;
	struct<2> Local_2852 = { -1, -1 } ;
	var uLocal_2854[5] = { 0, 0, 0, 0, 0 };
	struct<12> Local_2860 = { 0, 1, 0, 0, 0, 0, 0, 0, -1, 0, -1082130432, 0 } ;
	int iLocal_2872[4] = { -1, -1, -1, -1 };
	struct<3> Local_2877 = { -1, -1082130432, 2 } ;
	var uLocal_2880 = -1082130432;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = -1082130432;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 1;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	struct<171> Local_2890 = { 1, 0, -1, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3061 = 1;
	var uLocal_3062 = 0;
	var uLocal_3063[6] = { -1, -1, -1, -1, -1, -1 };
	struct<2> Local_3070[12];
	struct<4> Local_3095[1];
	struct<3> Local_3100 = { 1, 0, 1 } ;
	var uLocal_3103 = 0;
	int iLocal_3104 = -1;
	struct<8> Local_3105 = { -1, -1, -1, 0, 2, 0, 0, 1 } ;
	var uLocal_3113 = 0;
	bool bLocal_3114 = 0;
	bool bLocal_3115 = 0;
	bool bLocal_3116 = 0;
	bool bLocal_3117 = 0;
	int iLocal_3118 = 0;
	int iLocal_3119 = 0;
	int iLocal_3120 = 0;
	int iLocal_3121 = 0;
	struct<3> Local_3122 = { 0, 0, 0 } ;
	int iLocal_3125 = 0;
	int iLocal_3126 = 0;
	bool bLocal_3127 = 0;
	bool bLocal_3128 = 0;
	struct<2> Local_3129 = { -1, -1 } ;
	int iLocal_3131 = 0;
	int iLocal_3132 = 0;
	var uLocal_3133 = 3;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	int iLocal_3137 = 0;
	int iLocal_3138 = 0;
	var uLocal_3139 = 0;
	int iLocal_3140 = 0;
	int iLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 1;
	var uLocal_3145 = 0;
	int iLocal_3146[2] = { 0, 0 };
	int iLocal_3149 = 0;
	float fLocal_3150 = 0f;
	float fLocal_3151 = 0f;
	float fLocal_3152 = 0f;
	float fLocal_3153 = 0f;
	float fLocal_3154 = 0f;
	int iLocal_3155 = 0;
	int iLocal_3156[4] = { 0, 0, 0, 0 };
	var uLocal_3161[4] = { 0, 0, 0, 0 };
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	int iLocal_3170 = 0;
	struct<16> Local_3171 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = -1;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 1000;
	var uLocal_3197 = 1000;
	var uLocal_3198 = 0;
	struct<563> Local_3199 = { 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 7, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 0, 1, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, 1, 0, 2, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 1, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 7, -1, -1, -1082130432, 0, 0, 5, 0, 0, 0, 0, 0, -1, -1, -1000, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0 } ;
	var uLocal_3762 = 4;
	var uLocal_3763 = 0;
	var uLocal_3764 = -1;
	var uLocal_3765 = -1;
	var uLocal_3766 = -1;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = -1;
	var uLocal_3770 = -1;
	var uLocal_3771 = -1;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = -1;
	var uLocal_3775 = -1;
	var uLocal_3776 = -1;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = -1;
	var uLocal_3780 = -1;
	var uLocal_3781 = -1;
	var uLocal_3782 = 0;
	struct<115> Local_3783[8];
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	int iLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
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
	sLocal_18 = "NULL";
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
	fLocal_95 = 0f;
	fLocal_102 = 0f;
	fLocal_103 = 0f;
	fLocal_104 = 0f;
	fLocal_167 = 0,62f;
	fLocal_168 = 0,51f;
	fLocal_169 = 0,55f;
	fLocal_170 = 25f;
	iLocal_3137 = -1;
	iLocal_3138 = -1;
	iLocal_3141 = -1;
	fLocal_3150 = -1f;
	fLocal_3151 = 99999f;
	fLocal_3152 = 99999f;
	fLocal_3153 = 99999f;
	fLocal_3154 = 999999f;
	StringCopy(&Local_3171, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	Local_3171 = { Local_3171 };
	Local_1831 = { Local_1831 };
	func_3875(0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bLocal_3114)
		{
			if (!func_3824(ScriptParam_0))
			{
				func_3754(0, 1);
				func_3648();
			}
		}
		else
		{
			func_3648();
		}
	}
	else
	{
		func_3754(0, 1);
		func_3648();
	}
	func_3647(&(Local_3199.f_537));
	func_3540();
	while (true)
	{
		func_3539();
		if (func_3532())
		{
			func_3754(0, 1);
			func_3648();
		}
		if (func_3526())
		{
			func_3754(0, 1);
			func_3648();
		}
		if (Local_1231.f_97.f_4 != 0)
		{
			Call_Loc(Local_1231.f_97.f_4);
			if (StackVal)
			{
				func_3754(0, 1);
				func_3648();
			}
		}
		func_3875(1);
		switch (func_3525())
		{
			case 0:
				switch (func_3524())
				{
					case 1:
						if (func_3258())
						{
							func_3257(1);
						}
						break;
					
					case 2:
					case 3:
						func_3257(3);
						break;
				}
				break;
			
			case 1:
				func_3210();
				func_2362();
				func_2361();
				if (func_3524() != 1)
				{
					func_2358();
					if (Local_1231.f_97.f_5 != 0)
					{
						Call_Loc(Local_1231.f_97.f_5);
					}
					func_3257(func_3524());
				}
				break;
			
			case 2:
				func_3210();
				func_1615();
				func_2361();
				func_1205();
				if (func_3524() > 2)
				{
					func_3754(func_1204(11), 0);
					func_3257(3);
				}
				break;
			
			case 3:
				func_3648();
				break;
		}
		if (bLocal_3116)
		{
			switch (func_3524())
			{
				case 0:
					if (func_504())
					{
						func_503(1);
					}
					break;
				
				case 1:
					if (func_502() == 0)
					{
						func_6();
					}
					else
					{
						func_503(2);
					}
					break;
				
				case 2:
					if (func_2())
					{
						func_503(3);
					}
					break;
				
				case 3:
					func_3648();
					break;
				}
		}
		func_1();
	}
}

void func_1()
{
	Local_2223.f_231++;
	if (Local_2223.f_231 >= Local_227.f_77)
	{
		Local_2223.f_231 = 0;
	}
}

int func_2()
{
	if (Local_1231.f_3.f_2 != 0)
	{
		Call_Loc(Local_1231.f_3.f_2);
	}
	if (!func_5())
	{
		return 0;
	}
	if (!func_3(0))
	{
		return 0;
	}
	return 1;
}

bool func_3(int iParam0)
{
	return func_4(&(Local_3199.f_489), iParam0);
}

bool func_4(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2);
}

bool func_5()
{
	return func_3(21);
}

void func_6()
{
	func_501();
	if (Local_1231.f_3 != 0)
	{
		Call_Loc(Local_1231.f_3);
	}
	func_450();
	func_440();
	func_172();
	func_148();
	func_42();
	func_31();
	func_24();
	func_23();
	func_20();
	func_12();
	func_7();
}

void func_7()
{
	if (!func_11())
	{
		return;
	}
	if (!func_9(func_10(), 0, 1) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(func_10()))
	{
		func_8(2);
	}
}

void func_8(int iParam0)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_483 = iParam0;
}

int func_9(int iParam0, bool bParam1, bool bParam2)
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

int func_10()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_35;
}

int func_11()
{
	return 1;
}

void func_12()
{
	if (func_19() == -1)
	{
		return;
	}
	if (Local_1231.f_77 == 0)
	{
		return;
	}
	Call_Loc(Local_1231.f_77);
	if (!StackVal)
	{
		return;
	}
	if (!func_3(5) && Local_1231.f_77.f_1 != 0)
	{
		Call_Loc(Local_1231.f_77.f_1);
		if (StackVal)
		{
			func_18(&(Local_3199.f_507), 0, 0);
			func_16(5);
		}
	}
	if (!func_15(&(Local_3199.f_507)))
	{
		func_14(&(Local_3199.f_507), 0, 0);
	}
	else if (func_15(&(Local_3199.f_507)))
	{
		if (func_13(&(Local_3199.f_507), func_19(), 0))
		{
			if (Local_1231.f_77.f_3 != 0)
			{
				Call_Loc(Local_1231.f_77.f_3);
			}
			func_8(1);
		}
	}
}

int func_13(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_14(uParam0, bParam2, 0);
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

void func_14(var uParam0, bool bParam1, bool bParam2)
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

bool func_15(var uParam0)
{
	return uParam0->f_1;
}

void func_16(int iParam0)
{
	if (func_17(&(Local_3199.f_489), iParam0))
	{
	}
}

int func_17(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (!MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		MISC::SET_BIT(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

void func_18(var uParam0, bool bParam1, bool bParam2)
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

int func_19()
{
	if (Local_227.f_599 != -1)
	{
		return Local_227.f_599 * 60 * 1000;
	}
	return Local_227.f_599;
}

void func_20()
{
	int iVar0;
	
	if (func_22() == -1)
	{
		func_21(0);
		Call_Loc(Local_1851[func_22() /*20*/].f_17);
		return;
	}
	while ((func_22() < iLocal_3131 && iVar0 < Local_1851[func_22() /*20*/].f_19) && Local_1851[func_22() /*20*/].f_1[iVar0 /*3*/] != -1)
	{
		Call_Loc(Local_1851[func_22() /*20*/].f_1[iVar0 /*3*/].f_1);
		if (StackVal)
		{
			if (func_22() != Local_1851[func_22() /*20*/].f_1[iVar0 /*3*/])
			{
				Call_Loc(Local_1851[func_22() /*20*/].f_18);
				Local_3199.f_487 = func_22();
				func_21(Local_1851[func_22() /*20*/].f_1[iVar0 /*3*/]);
				MISC::SET_BIT(&(Local_3199.f_488), func_22());
				Call_Loc(Local_1851[func_22() /*20*/].f_17);
			}
			return;
		}
		iVar0++;
	}
}

void func_21(int iParam0)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_486 = iParam0;
}

int func_22()
{
	return Local_3199.f_486;
}

void func_23()
{
}

void func_24()
{
	if (!func_30())
	{
		return;
	}
	if (!func_3(2))
	{
		if (func_25(&(Local_3199.f_419), &(Local_3199.f_419.f_3)))
		{
			func_16(2);
		}
	}
}

int func_25(var uParam0, int* iParam1)
{
	int iVar0[4];
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar6 = 0;
	while (iVar6 < 4)
	{
		if (func_29(iVar6))
		{
			iVar0[iVar5] = iVar6;
			iVar5++;
		}
		iVar6++;
	}
	if (iVar5 < func_28())
	{
		return 0;
	}
	iVar6 = 0;
	while (iVar6 < func_28())
	{
		if (func_27())
		{
			if (iVar6 > 0)
			{
				(*uParam0)[iVar6] = (*uParam0)[(iVar6 - 1)];
			}
			else
			{
				iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
				(*uParam0)[iVar6] = iVar0[iVar7];
				if (iVar0[iVar7] < 32)
				{
					MISC::SET_BIT(iParam1, iVar0[iVar7]);
				}
				if (iVar6 < (func_28() - 1))
				{
					func_26(&(iVar0[iVar7]), &(iVar0[(iVar5 - 1)]));
					iVar5 = (iVar5 - 1);
				}
			}
			iVar6++;
			return 1;
		}

void func_26(var uParam0, var uParam1)
{
	var uVar0;
	
	uVar0 = *uParam0;
	*uParam0 = *uParam1;
	*uParam1 = uVar0;
}

int func_27()
{
	return 0;
}

int func_28()
{
	return Local_227.f_19;
}

int func_29(int iParam0)
{
	return 0;
}

int func_30()
{
	return 0;
}

void func_31()
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	
	Stack.Push(Local_1231.f_562.f_23 != 0);
	Call_Loc(Local_1231.f_562.f_23);
	if (StackVal && !StackVal)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_534)
	{
		if (!func_41(iVar0, 0))
		{
			Stack.Push(iVar0);
			Call_Loc(Local_1231.f_562.f_24);
			if (StackVal)
			{
				if (func_36(iVar0))
				{
					fVar1 = func_35(iVar0);
					ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_3199.f_466[iVar0 /*3*/]), fVar1);
					Var2 = { func_34(iVar0) };
					if (!func_33(Var2))
					{
						ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_3199.f_466[iVar0 /*3*/]), Var2, 0, true);
					}
					func_32(iVar0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0, int iParam1)
{
	if (!func_41(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Local_3199.f_466[iParam0 /*3*/].f_1), iParam1);
	}
}

int func_33(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_34(int iParam0)
{
	if (Local_1231.f_562.f_27 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_562.f_27);
		return StackVal, StackVal, StackVal;
	}
	return Local_227.f_534.f_1[iParam0 /*12*/].f_5;
}

var func_35(int iParam0)
{
	if (Local_1231.f_562.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_562.f_26);
		return StackVal;
	}
	return Local_227.f_534.f_1[iParam0 /*12*/].f_4;
}

bool func_36(int iParam0)
{
	if (func_40(Local_227.f_534.f_1[iParam0 /*12*/]))
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_466[iParam0 /*3*/]))
		{
			func_37(iParam0);
			return 0;
		}
	}
	return NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_466[iParam0 /*3*/]);
}

int func_37(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { func_39(iParam0) };
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_466[iParam0 /*3*/]))
	{
		STREAMING::REQUEST_MODEL(Local_227.f_534.f_1[iParam0 /*12*/]);
		if (STREAMING::HAS_MODEL_LOADED(Local_227.f_534.f_1[iParam0 /*12*/]))
		{
			if (NETWORK::_CAN_REGISTER_MISSION_PICKUPS(1))
			{
				Local_3199.f_466[iParam0 /*3*/] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(joaat("pickup_portable_crate_fixed_incar"), Var0, false, Local_227.f_534.f_1[iParam0 /*12*/]));
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_3199.f_466[iParam0 /*3*/], true);
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_3199.f_466[iParam0 /*3*/]), true);
				ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_3199.f_466[iParam0 /*3*/]), true);
				if (func_38(iParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_3199.f_466[iParam0 /*3*/]), false);
				}
				if (Local_227.f_534.f_1[iParam0 /*12*/].f_11)
				{
					OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_3199.f_466[iParam0 /*3*/]), true);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(Local_3199.f_466[iParam0 /*3*/]), false);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_3199.f_466[iParam0 /*3*/]));
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_3199.f_466[iParam0 /*3*/]), true, 1);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_3199.f_466[iParam0 /*3*/]), true);
				}
				if (Local_227.f_534.f_1[iParam0 /*12*/].f_10)
				{
					OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_3199.f_466[iParam0 /*3*/]));
				}
				if (Local_1231.f_562.f_28 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(NETWORK::NET_TO_ENT(Local_3199.f_466[iParam0 /*3*/]));
					Call_Loc(Local_1231.f_562.f_28);
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_466[iParam0 /*3*/]))
	{
		return 1;
	}
	return 0;
}

int func_38(int iParam0)
{
	int iVar0;
	
	iVar0 = Local_227.f_534.f_1[iParam0 /*12*/];
	if (iVar0 == joaat("h4_prop_h4_powdercleaner_01a"))
	{
		return 0;
	}
	return 1;
}

Vector3 func_39(int iParam0)
{
	int iVar0;
	
	if (Local_1231.f_562.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_562.f_25);
		return StackVal, StackVal, StackVal;
	}
	iVar0 = Local_227.f_534.f_1[iParam0 /*12*/].f_8;
	if (iVar0 != -1)
	{
		switch (Local_227.f_534.f_1[iParam0 /*12*/].f_9)
		{
			case 1:
				return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_3199.f_52[iVar0 /*24*/]), true);
			
			case 2:
				return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_3199.f_341[iVar0 /*8*/]), true);
			
			case 3:
				return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_3199.f_382[iVar0 /*5*/]), true);
			}
		
		default:
	}
	return Local_227.f_534.f_1[iParam0 /*12*/].f_1;
}

bool func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_41(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_3199.f_466[iParam0 /*3*/].f_1, iParam1);
}

void func_42()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = 0;
	while (iVar5 < Local_227.f_77)
	{
		func_146(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
		if (bVar2)
		{
			if (Local_1231.f_149.f_176 != 0)
			{
				Stack.Push(iVar5);
				Stack.Push(iVar0);
				Stack.Push(bVar3);
				Call_Loc(Local_1231.f_149.f_176);
			}
		}
		if (iVar4 > 2)
		{
			if (iVar4 != 6 && iVar4 != 4)
			{
				if (!bVar2)
				{
					func_145(iVar5, 6);
				}
				else if (bVar3)
				{
					func_145(iVar5, 6);
				}
				else if (func_144(iVar5, iVar0))
				{
					func_145(iVar5, 6);
				}
			}
		}
		switch (iVar4)
		{
			case 0:
				if (func_143(iVar5))
				{
					func_145(iVar5, 2);
				}
				break;
			
			case 1:
				if (!bVar2)
				{
					if (func_142(iVar5))
					{
						func_141(iVar5);
						func_145(iVar5, 2);
					}
				}
				else
				{
					func_140(&(Local_3199.f_52[iVar5 /*24*/]));
				}
				break;
			
			case 2:
				if (!bVar1)
				{
					if (func_137(iVar5))
					{
						if (func_91(iVar5))
						{
							func_145(iVar5, 3);
							func_90(iVar5);
							bVar1 = true;
						}
					}
				}
				break;
			
			case 3:
				if (bVar2)
				{
					if (func_89(iVar5, iVar0))
					{
						func_145(iVar5, 6);
						break;
					}
					if (!bVar3)
					{
						func_67(iVar5);
						func_62(iVar5, iVar0, 1);
						func_47(iVar5);
						if (func_46(iVar5))
						{
							func_145(iVar5, 4);
						}
					}
				}
				break;
			
			case 6:
				func_45(iVar5, 8);
				if (bVar2)
				{
					if (func_89(iVar5, iVar0))
					{
						break;
					}
					if (func_46(iVar5))
					{
						func_145(iVar5, 4);
					}
				}
				if (func_44(iVar5))
				{
					func_140(&(Local_3199.f_52[iVar5 /*24*/]));
					func_145(iVar5, 1);
				}
				if (func_502() == 0)
				{
					if (func_43(iVar5, 0))
					{
						func_8(9);
					}
				}
				break;
			
			case 4:
				if (!func_43(iVar5, 14) && !ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(iVar0))
				{
					func_45(iVar5, 26);
					func_145(iVar5, 5);
				}
				break;
			
			case 5:
				break;
		}
		iVar5++;
	}
	iVar5 = Local_2223.f_231;
	func_146(iVar5, &bVar2, &bVar3, &iVar0, &iVar4);
	switch (iVar4)
	{
		case 3:
			if (bVar2)
			{
				if (!bVar3)
				{
					func_62(iVar5, iVar0, 0);
				}
			}
			break;
	}
}

bool func_43(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_77.f_1[iParam0 /*21*/]), iParam1);
}

int func_44(int iParam0)
{
	if (func_502() != 0)
	{
		return 0;
	}
	if (func_43(iParam0, 10))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_163);
		return StackVal;
	}
	return 0;
}

void func_45(int iParam0, int iParam1)
{
	if (func_17(&(Local_3199.f_52[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

int func_46(int iParam0)
{
	if (Local_1231.f_149.f_162 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_162);
		return StackVal;
	}
	return 0;
}

void func_47(int iParam0)
{
	int iVar0;
	
	if (!func_61(iParam0))
	{
		return;
	}
	iVar0 = func_60(iParam0);
	switch (func_59(iParam0))
	{
		case 0:
			if (iVar0 != 6)
			{
				func_58(iParam0, 1);
			}
			break;
		
		case 1:
			if (func_57(iParam0, iVar0))
			{
				func_55(&(Local_3199.f_52[iParam0 /*24*/].f_18), NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), func_56(iVar0)));
				func_58(iParam0, 2);
			}
			break;
		
		case 2:
			if (func_54(&(Local_3199.f_52[iParam0 /*24*/].f_18), 0, 0) > 0)
			{
				func_53(&(Local_3199.f_52[iParam0 /*24*/].f_18));
				if (func_52(iVar0))
				{
					func_49(iParam0, iVar0);
				}
				func_48(iParam0, 6);
				func_58(iParam0, 0);
			}
			break;
	}
}

void func_48(int iParam0, int iParam1)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_52[iParam0 /*24*/].f_17 = iParam1;
}

void func_49(int iParam0, int iParam1)
{
	func_50(2, iParam0, iParam1);
}

void func_50(int iParam0, int iParam1, int iParam2)
{
	struct<6> Var0;
	int iVar6;
	
	Var0.f_0 = 1845703163;
	Var0.f_1 = iLocal_3118;
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	Var0.f_4 = iParam2;
	Var0.f_5 = MISC::GET_FRAME_COUNT();
	iVar6 = func_51(1);
	if (iVar6 != 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 6, iVar6);
	}
}

var func_51(int iParam0)
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
			if (func_9(iVar2, 0, 0))
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

int func_52(int iParam0)
{
	if (Local_1231.f_149.f_157.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_157.f_3);
		return StackVal;
	}
	return 0;
}

void func_53(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_54(var uParam0, bool bParam1, bool bParam2)
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

void func_55(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
	uParam0->f_1 = 1;
}

int func_56(int iParam0)
{
	if (Local_1231.f_149.f_157.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_157.f_1);
		return StackVal;
	}
	return 0;
}

bool func_57(int iParam0, int iParam1)
{
	return func_4(&(Local_3070[iParam0 /*2*/]), iParam1);
}

void func_58(int iParam0, int iParam1)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_52[iParam0 /*24*/].f_16 = iParam1;
}

int func_59(int iParam0)
{
	return Local_3199.f_52[iParam0 /*24*/].f_16;
}

int func_60(int iParam0)
{
	return Local_3199.f_52[iParam0 /*24*/].f_17;
}

bool func_61(int iParam0)
{
	return Local_227.f_77.f_1[iParam0 /*21*/].f_13 != -1;
}

void func_62(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_66(iParam0);
	if (func_65(iParam0) == -1)
	{
		func_64(iParam0, 0);
		if (Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_8 != 0)
		{
			Stack.Push(iParam0);
			Stack.Push(iParam1);
			Call_Loc(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_8);
		}
		return;
	}
	if (func_63(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/]) != iParam2)
	{
		return;
	}
	if (Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_11 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_11);
	}
	while ((func_65(iParam0) < Local_2223.f_232[iVar0 /*80*/] && iVar1 < Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_12) && Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_1[iVar1 /*2*/] != -1)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_1[iVar1 /*2*/].f_1);
		if (StackVal)
		{
			if (Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_9 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_9);
			}
			func_64(iParam0, Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_1[iVar1 /*2*/]);
			if (Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_8 != 0)
			{
				Stack.Push(iParam0);
				Stack.Push(iParam1);
				Call_Loc(Local_2223.f_232[iVar0 /*80*/].f_1[func_65(iParam0) /*13*/].f_8);
			}
			return;
		}
		iVar1++;
	}
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 12:
		case 26:
			return 1;
		
		default:
	}
	return 0;
}

void func_64(int iParam0, int iParam1)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_52[iParam0 /*24*/].f_2 = iParam1;
}

int func_65(int iParam0)
{
	return Local_3199.f_52[iParam0 /*24*/].f_2;
}

int func_66(int iParam0)
{
	if (Local_1231.f_149.f_1 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_1);
		return StackVal;
	}
	return 0;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_85(iParam0))
	{
		return;
	}
	iVar0 = Local_227.f_77.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < Local_2223[iParam0 /*19*/].f_16)
	{
		if (Local_2223[iParam0 /*19*/].f_10[iVar1] != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_2223[iParam0 /*19*/].f_10[iVar1]);
			if (StackVal)
			{
				MISC::SET_BIT(&(Local_3199.f_418), iVar0);
				if (Local_1231.f_149.f_168 != 0)
				{
					Stack.Push(iParam0);
					Stack.Push(iVar0);
					Stack.Push(iVar1);
					Call_Loc(Local_1231.f_149.f_168);
				}
				func_68(iParam0);
			}
		}
		iVar1++;
	}
}

void func_68(int iParam0)
{
	if (func_84(28))
	{
		return;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[iParam0 /*24*/]))
	{
		if (func_83(NETWORK::NET_TO_PED(Local_3199.f_52[iParam0 /*24*/])))
		{
			func_69(func_81(), 1, 0);
		}
	}
}

void func_69(int iParam0, int iParam1, int iParam2)
{
	if (func_79(1))
	{
		func_71(Local_3129.f_0, func_72(1), iParam0, iParam1, iParam2);
	}
	else
	{
		func_71(Local_3129.f_0, func_70(iLocal_3118), iParam0, iParam1, iParam2);
	}
}

int func_70(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

void func_71(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	struct<7> Var0;
	
	Var0.f_0 = -466522239;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = uParam2;
	Var0.f_4 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_6 = uParam3;
	Var0.f_5 = uParam4;
	if (!iParam1 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 7, iParam1);
	}
}

int func_72(bool bParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_79(1))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_9(iVar3, 0, 0))
			{
				if (func_77())
				{
					if (func_75(iVar3, PLAYER::PLAYER_ID(), bParam0))
					{
						MISC::SET_BIT(&uVar0, iVar3);
					}
				}
				else
				{
					iVar2 = func_74();
					if (iVar2 != func_73())
					{
						if (func_75(iVar3, iVar2, bParam0))
						{
							MISC::SET_BIT(&uVar0, iVar3);
						}
					}
				}
			}
			iVar1++;
		}
	}
	return uVar0;
}

int func_73()
{
	return -1;
}

int func_74()
{
	return Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
}

int func_75(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_73())
	{
		if (!bParam2)
		{
			if (func_76(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1893548[iParam0 /*600*/].f_11 != func_73())
		{
			return iParam1 == Global_1893548[iParam0 /*600*/].f_11;
		}
	}
	return 0;
}

int func_76(int iParam0, int iParam1)
{
	if (iParam1 != func_73())
	{
		if (iParam0 != func_73())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 != func_73())
			{
				if (Global_1893548[iParam0 /*600*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

bool func_77()
{
	return func_78(PLAYER::PLAYER_ID());
}

int func_78(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_73())
		{
			return Global_1893548[iParam0 /*600*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_79(bool bParam0)
{
	return func_80(PLAYER::PLAYER_ID(), bParam0);
}

bool func_80(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_78(iParam0))
		{
			return 0;
		}
	}
	return Global_1893548[iParam0 /*600*/].f_11 != func_73();
}

int func_81()
{
	int iVar0;
	
	iVar0 = func_82();
	if (iVar0 == 0)
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_82()
{
	Call_Loc(Local_1231.f_60);
	return StackVal;
}

int func_83(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if ((PED::GET_PED_TYPE(iParam0) == 6 || PED::GET_PED_TYPE(iParam0) == 29) || PED::GET_PED_TYPE(iParam0) == 27)
		{
			return 1;
		}
	}
	return 0;
}

bool func_84(int iParam0)
{
	return func_4(&(Local_227.f_16), iParam0);
}

int func_85(int iParam0)
{
	if (func_88(Local_227.f_77.f_1[iParam0 /*21*/].f_14))
	{
		if (func_13(&(Local_3199.f_52[iParam0 /*24*/].f_13), Local_3199.f_52[iParam0 /*24*/].f_15, 0) || func_86(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_86(int iParam0)
{
	if (((((func_87(iParam0, 1) || func_87(iParam0, 0)) || func_87(iParam0, 14)) || func_87(iParam0, 12)) || func_87(iParam0, 11)) || func_87(iParam0, 13))
	{
		return 1;
	}
	return 0;
}

bool func_87(int iParam0, int iParam1)
{
	return func_4(&(Local_3199.f_52[iParam0 /*24*/].f_3), iParam1);
}

bool func_88(int iParam0)
{
	return MISC::IS_BIT_SET(Local_3199.f_418, iParam0);
}

int func_89(int iParam0, int iParam1)
{
	Stack.Push(Local_1231.f_149.f_186 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_1231.f_149.f_186);
	if (StackVal && StackVal)
	{
		if (Local_1231.f_149.f_185 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1231.f_149.f_185);
		}
		func_140(&(Local_3199.f_52[iParam0 /*24*/]));
		return 1;
	}
	return 0;
}

void func_90(int iParam0)
{
}

int func_91(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	func_136(0, iParam0);
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_170);
	iVar0 = StackVal;
	if (func_40(iVar0))
	{
		iVar1 = Local_227.f_77.f_1[iParam0 /*21*/].f_8;
		if (iVar1 != -1)
		{
			if (func_135(Local_3199.f_341[iVar1 /*8*/]))
			{
				if (func_134(&(Local_3199.f_52[iParam0 /*24*/]), Local_3199.f_341[iVar1 /*8*/], 26, iVar0, Local_227.f_77.f_1[iParam0 /*21*/].f_9, 1, 1, 1))
				{
					func_110(iParam0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
					func_109();
					return 1;
				}
			}
		}
		else
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1231.f_149.f_171);
			Var2 = { StackVal, StackVal, StackVal };
			if (!func_33(Var2))
			{
				if (!func_108(iParam0) || func_93(Var2, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					Stack.Push(&(Local_3199.f_52[iParam0 /*24*/]));
					Stack.Push(26);
					Stack.Push(iVar0);
					Stack.Push(Var2);
					Stack.Push(iParam0);
					Call_Loc(Local_1231.f_149.f_172);
					if (func_92(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, 1, 1, 1))
					{
						func_110(iParam0);
						func_109();
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
						return 1;
					}
				}
				else
				{
					func_109();
					return 0;
				}
			}
		}
	}
	return 0;
}

int func_92(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_93(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2667222.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2,5f) > 0)
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (fParam14 > 0f)
	{
		if (func_102(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2667222.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_94(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2667222.f_2++;
	return 1;
}

int func_94(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_9(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_99(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_9(iVar1, 1, 1))
		{
			if (!func_96(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_95(iVar1) || !bParam10) && !Global_2689156[iVar1 /*453*/].f_268)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_99(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_99(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_95(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2689156[iParam0 /*453*/].f_254)
	{
		return 1;
	}
	return 0;
}

bool func_96(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_97(-1, 0) == 8;
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

int func_97(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_98();
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

int func_98()
{
	return Global_1574907;
}

Vector3 func_99(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_101() && Global_1853128[iVar0 /*888*/].f_858) && !func_33(Global_1853128[iVar0 /*888*/].f_859))
	{
		return Global_1853128[iVar0 /*888*/].f_859;
	}
	return func_100(iParam0);
}

Vector3 func_100(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

bool func_101()
{
	return Global_2714627.f_19;
}

int func_102(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_9(iVar1, bParam4, bParam5))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_95(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_103(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_100(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_103(int iParam0)
{
	if (func_107(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2783300 = { func_106(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2783300))
	{
		return 1;
	}
	if (func_104(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_105(iParam0);
	if (!iVar0 == func_73())
	{
		if (iVar0 == func_105(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_105(int iParam0)
{
	if (iParam0 != func_73())
	{
		return Global_1893548[iParam0 /*600*/].f_11;
	}
	return func_73();
}

struct<13> func_106(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_107(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2783300 = { func_106(iParam0) };
		Global_2783313 = { func_106(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783300))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2783313))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783230, 35, &Global_2783300);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2783265, 35, &Global_2783313);
				if (Global_2783230 == Global_2783265)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0)
{
	if ((func_43(iParam0, 10) && func_87(iParam0, 8)) && !func_43(iParam0, 19))
	{
		return 1;
	}
	return 0;
}

void func_109()
{
	if (Local_3199.f_500 != -1)
	{
		Local_3199.f_513 = { 0f, 0f, 0f };
		Local_3199.f_522 = 0f;
		iLocal_3140 = 0;
		Local_3199.f_485 = -1;
		Local_3199.f_500 = -1;
	}
}

void func_110(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = NETWORK::NET_TO_PED(Local_3199.f_52[iParam0 /*24*/]);
	bVar1 = func_87(iParam0, 19);
	func_128(iParam0, iVar0);
	if (bVar1)
	{
		func_126(iParam0, iVar0);
	}
	else
	{
		func_116(iParam0, iVar0);
	}
	if (Local_1231.f_149.f_174 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iVar0);
		Stack.Push(bVar1);
		Call_Loc(Local_1231.f_149.f_174);
	}
	if (func_43(iParam0, 5))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		}
		ENTITY::SET_ENTITY_HEALTH(iVar0, 101, 0);
		func_111(iVar0, iParam0, 1, 0, 1, 1);
	}
}

void func_111(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (Local_227.f_77.f_1[iParam1 /*21*/].f_8 != -1)
		{
			if (bParam5)
			{
				Var0 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, -5f, 0f) };
				Var3 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0, Var3, 25, true, joaat("weapon_heavysniper"), 0, true, true, -1f);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var3, Var0, 25, true, joaat("weapon_assaultshotgun"), 0, true, true, -1f);
			}
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		else
		{
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
			func_114(Var6, &Var9, &Var12, 0);
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var9, Var12, 300, true, joaat("weapon_heavysniper"), 0, false, false, 80f);
			if (bParam3)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 227, bParam2);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0, 115, bParam3);
		}
		if (bParam4)
		{
			func_112(iParam0, -1, 0);
		}
	}
}

void func_112(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 11);
	if (iParam1 != -1)
	{
		iVar0 = iParam1;
	}
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			func_113(iVar1, iParam0);
			iVar1++;
		}
	}
	else
	{
		func_113(iVar0, iParam0);
	}
}

void func_113(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,625f, "ShotgunLargeMonolithic");
			break;
		
		case 1:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,518f, "ShotgunLargeMonolithic");
			break;
		
		case 2:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,727f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 3:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 0, 0,806f, 0,399f, "ShotgunLargeMonolithic");
			break;
		
		case 4:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0,379f, 0,324f, "ShotgunLargeMonolithic");
			break;
		
		case 5:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 1, 0,379f, 0,534f, "ShotgunLargeMonolithic");
			break;
		
		case 6:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0,628f, 0,277f, "ShotgunLargeMonolithic");
			break;
		
		case 7:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 2, 0,609f, 0,344f, "ShotgunLargeMonolithic");
			break;
		
		case 8:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,719f, 0,802f, "ShotgunLargeMonolithic");
			break;
		
		case 9:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,775f, 0,68f, "ShotgunLargeMonolithic");
			break;
		
		case 10:
			PED::APPLY_PED_BLOOD_BY_ZONE(iParam1, 4, 0,775f, 0,561f, "ShotgunLargeMonolithic");
			break;
		
		case 11:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,49f, 0,5f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,48f, 0,55f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,5f, 0,56f, 0f, 0,025f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,789f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,724f, 0,799f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,737f, 0,723f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,753f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,726f, 0,76f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,736f, 0,802f, 0f, 0,019f, 0, 140f, "BulletSmall");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,715f, 0,806f, 0f, 0,019f, 0, 140f, "BulletSmall");
			break;
		
		case 12:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,401f, 0,1f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,514f, 0,13f, 0f, 1f, 0, 0f, "BulletLarge");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,62f, 0,13f, 0f, 1f, 0, 0f, "BulletLarge");
			break;
		
		case 13:
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 2, 0,41f, 0,229f, 0f, 1f, 13, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 4, 0,21f, 0,305f, 0f, 1f, 14, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 3, 0,495f, 0,124f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 0, 0,37f, 1f, 27f, 1f, 25, 0f, "ShotgunLargeMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,667f, 0,571f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			PED::APPLY_PED_BLOOD_SPECIFIC(iParam1, 1, 0,343f, 0,79f, 27f, 1f, 22, 0f, "ShotgunSmallMonolithic");
			break;
	}
}

void func_114(struct<3> Param0, var uParam3, var uParam4, bool bParam5)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	
	fVar0 = 0,1f;
	iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
	fVar2 = 0,5f;
	fVar3 = 0,1f;
	fVar4 = 0,4f;
	if (bParam5)
	{
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
		fVar2 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_115())
		{
			fVar2 = (fVar2 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		fVar3 = (SYSTEM::TO_FLOAT(iVar5) / 15f);
		if (func_115())
		{
			fVar3 = (fVar3 * -1f);
		}
		iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
		fVar4 = (SYSTEM::TO_FLOAT(iVar5) / 10f);
		if (func_115())
		{
			fVar4 = (fVar4 * -1f);
		}
	}
	switch (iVar1)
	{
		case 0:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 1:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 2:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 3:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 4:
			*uParam3 = { (Param0.f_0 - fVar0), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 + fVar2), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			break;
		
		case 5:
			*uParam3 = { (Param0.f_0 + fVar0), (Param0.f_1 + fVar3), (Param0.f_2 + fVar4) };
			*uParam4 = { (Param0.f_0 - fVar2), (Param0.f_1 - fVar3), (Param0.f_2 + fVar4) };
			break;
	}
}

int func_115()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

void func_116(int iParam0, int iParam1)
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam1, false);
	if (func_43(iParam0, 6))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, false);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, true);
	}
	else
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 146, true);
		TASK::SET_PED_PATH_CAN_USE_LADDERS(iParam1, false);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 43, true);
	PED::SET_PED_COMBAT_MOVEMENT(iParam1, Local_227.f_77.f_1[iParam0 /*21*/].f_15);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_125());
	PED::SET_PED_ACCURACY(iParam1, func_124(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_123());
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 24, false);
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_122());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_122(), 0);
	PED::SET_PED_DIES_WHEN_INJURED(iParam1, true);
	if (func_121(iParam0))
	{
		AUDIO::_0xAB6781A5F3101470(iParam1, 1);
	}
	func_117(iParam0, iParam1);
}

void func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<9> Var3;
	
	if (func_87(iParam0, 19))
	{
		return;
	}
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_20 >= 0,75f)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam1, ENTITY::GET_ENTITY_COORDS(iParam1, false), Local_227.f_77.f_1[iParam0 /*21*/].f_20, false, false);
		return;
	}
	else if (Local_227.f_77.f_1[iParam0 /*21*/].f_20 < 0,75f && Local_227.f_77.f_1[iParam0 /*21*/].f_20 > -1f)
	{
	}
	iVar0 = Local_227.f_77.f_1[iParam0 /*21*/].f_14;
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar2 = Local_227.f_77.f_254[iVar0 /*10*/].f_1[iVar1];
		if (iVar2 != -1)
		{
			if (func_119(iVar2, 4))
			{
				Var3 = { func_118(iVar2) };
				PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam1, Var3.f_2, Var3.f_5, Var3.f_8, false, false);
			}
		}
		iVar1++;
	}
}

struct<9> func_118(int iParam0)
{
	struct<9> Var0;
	
	Var0 = 1;
	if (Local_1231.f_476.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_476.f_2);
		Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	}
	else
	{
		Var0 = { Local_227.f_703.f_1[iParam0 /*9*/] };
		Var0.f_2 = { Local_227.f_703.f_1[iParam0 /*9*/].f_2 };
		Var0.f_5 = { Local_227.f_703.f_1[iParam0 /*9*/].f_5 };
		Var0.f_8 = Local_227.f_703.f_1[iParam0 /*9*/].f_8;
	}
	return Var0;
}

bool func_119(int iParam0, int iParam1)
{
	struct<9> Var0;
	
	Var0 = { func_120(iParam0) };
	return func_4(&Var0, iParam1);
}

struct<9> func_120(int iParam0)
{
	return Local_227.f_703.f_1[iParam0 /*9*/];
}

int func_121(int iParam0)
{
	if (func_84(35))
	{
		if (func_61(iParam0))
		{
			return 0;
		}
		return (iParam0 % 2) == 0;
	}
	return 0;
}

int func_122()
{
	switch (Local_3199.f_484)
	{
		case 2:
			return 200;
		
		case 3:
			return 300;
		
		case 4:
			return 300;
		
		default:
	}
	return 200;
}

int func_123()
{
	switch (Local_3199.f_484)
	{
		case 2:
			return 60;
		
		case 3:
			return 80;
		
		case 4:
			return 100;
		
		default:
	}
	return 60;
}

int func_124(int iParam0)
{
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_173);
	Stack.Push(StackVal == joaat("weapon_rpg"));
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_173);
	if (StackVal || StackVal == joaat("weapon_railgun"))
	{
		return 2;
	}
	switch (Local_3199.f_484)
	{
		case 2:
			return 10;
		
		case 3:
			return 25;
		
		case 4:
			return 40;
		
		default:
	}
	return 10;
}

int func_125()
{
	switch (Local_3199.f_484)
	{
		case 2:
			return 1;
		
		case 3:
			return 2;
		
		case 4:
			return 2;
		
		default:
	}
	return 1;
}

void func_126(int iParam0, int iParam1)
{
	PED::SET_DRIVER_AGGRESSIVENESS(iParam1, 1f);
	PED::SET_DRIVER_RACING_MODIFIER(iParam1, 1f);
	PED::SET_COMBAT_FLOAT(iParam1, 17, 5f);
	PED::SET_PED_KEEP_TASK(iParam1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 272, true);
	PED::SET_PED_DIES_INSTANTLY_IN_WATER(iParam1, true);
	PED::SET_PED_CONFIG_FLAG(iParam1, 42, true);
	PED::SET_DRIVER_ABILITY(iParam1, 1f);
	PED::SET_PED_ACCURACY(iParam1, func_124(iParam0));
	PED::SET_PED_SHOOT_RATE(iParam1, func_123());
	ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, func_122());
	ENTITY::SET_ENTITY_HEALTH(iParam1, func_122(), 0);
	PED::SET_PED_COMBAT_ABILITY(iParam1, func_125());
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iParam1, 3);
	if (func_127(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 52, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 53, true);
	}
}

int func_127(int iParam0)
{
	if (func_43(iParam0, 9))
	{
		return 1;
	}
	return 0;
}

void func_128(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_133(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_3199.f_52[iParam0 /*24*/]), true);
	}
	if (!func_83(iParam1))
	{
		PED::SET_PED_CONFIG_FLAG(iParam1, 324, true);
	}
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_2 == joaat("mp_g_m_pros_01"))
	{
		switch (PED::GET_PED_DRAWABLE_VARIATION(iParam1, 0))
		{
			case 0:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_black_pvg"));
				break;
			
			case 1:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_white_pvg"));
				break;
			
			case 2:
				AUDIO::_SET_PED_VOICE_GROUP(iParam1, joaat("mp_blackops_latino_pvg"));
				break;
			}
	}
	if (func_61(iParam0))
	{
		iVar0 = func_132(iParam0);
		if (iVar0 != 0)
		{
			AUDIO::_SET_PED_VOICE_GROUP(iParam1, iVar0);
		}
		if (!func_131(Local_227.f_77.f_1[iParam0 /*21*/].f_13, 0))
		{
			AUDIO::_0xAB6781A5F3101470(iParam1, 1);
		}
	}
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_12 != -1)
	{
		func_45(iParam0, 2);
		PHYSICS::ACTIVATE_PHYSICS(iParam1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iParam1, true);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam1, true, 1);
	}
	if (func_43(iParam0, 11))
	{
		NETWORK::NETWORK_FADE_IN_ENTITY(iParam1, true, 1);
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_173);
	iVar1 = StackVal;
	if (iVar1 != 0)
	{
		if (iVar1 == joaat("weapon_unarmed"))
		{
			WEAPON::REMOVE_ALL_PED_WEAPONS(iParam1, true);
		}
		else
		{
			WEAPON::GIVE_WEAPON_TO_PED(iParam1, iVar1, 9999999, func_130(iParam0), true);
		}
	}
	PED::SET_PED_HIGHLY_PERCEPTIVE(iParam1, true);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iParam1, 1);
	PED::SET_PED_SEEING_RANGE(iParam1, Local_227.f_77.f_1[iParam0 /*21*/].f_17);
	PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam1, Local_227.f_77.f_1[iParam0 /*21*/].f_18);
	PED::SET_PED_HEARING_RANGE(iParam1, Local_227.f_77.f_1[iParam0 /*21*/].f_19);
	PED::SET_PED_CONFIG_FLAG(iParam1, 392, true);
	iVar2 = func_129(iParam0);
	if (iVar2 != joaat("COP"))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, iVar2);
	}
}

var func_129(int iParam0)
{
	return Local_227.f_77.f_254[Local_227.f_77.f_1[iParam0 /*21*/].f_14 /*10*/];
}

int func_130(int iParam0)
{
	if (Local_1231.f_149.f_187 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_187);
		return StackVal;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_2);
	Stack.Push(!MISC::IS_STRING_NULL_OR_EMPTY(StackVal));
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_2);
	if (StackVal && MISC::ARE_STRINGS_EQUAL(StackVal, "CODE_HUMAN_PATROL_2H"))
	{
		return 1;
	}
	if (func_87(iParam0, 21))
	{
		return 1;
	}
	return 0;
}

bool func_131(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_77.f_275[iParam0 /*3*/]), iParam1);
}

var func_132(int iParam0)
{
	if (Local_1231.f_149.f_157.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_157.f_4);
		return StackVal;
	}
	return Local_227.f_77.f_275[Local_227.f_77.f_1[iParam0 /*21*/].f_13 /*3*/].f_2;
}

int func_133(int iParam0)
{
	if (func_84(22))
	{
		return 1;
	}
	return 0;
}

int func_134(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), false))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, bParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

void func_136(int iParam0, var uParam1)
{
	if (Local_3199.f_500 == -1)
	{
		Local_3199.f_485 = iParam0;
		Local_3199.f_500 = uParam1;
	}
}

int func_137(int iParam0)
{
	if (!func_139(0, iParam0))
	{
		return 0;
	}
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (func_138(Local_227.f_77.f_1[iParam0 /*21*/].f_8) != 4)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_3118))
	{
		return 0;
	}
	Stack.Push(Local_1231.f_149.f_188 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_149.f_188);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_138(int iParam0)
{
	return Local_3199.f_341[iParam0 /*8*/].f_1;
}

int func_139(int iParam0, int iParam1)
{
	if (Local_3199.f_485 == -1)
	{
		return 1;
	}
	if (Local_3199.f_485 == iParam0)
	{
		if (Local_3199.f_500 == iParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_140(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

void func_141(int iParam0)
{
	func_64(iParam0, 0);
	if (Local_1231.f_149.f_163.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_163.f_3);
	}
}

int func_142(int iParam0)
{
	int iVar0;
	
	if (Local_1231.f_149.f_163.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_163.f_4);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_3199.f_52[iParam0 /*24*/].f_22), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_53(&(Local_3199.f_52[iParam0 /*24*/].f_22));
			}
		}
	}
	return 1;
}

int func_143(int iParam0)
{
	if (Local_1231.f_149.f_169 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_149.f_169);
		return StackVal;
	}
	return 1;
}

int func_144(int iParam0, int iParam1)
{
	return 0;
}

void func_145(int iParam0, int iParam1)
{
	if (!bLocal_3116)
	{
		return;
	}
	Local_3199.f_52[iParam0 /*24*/].f_1 = iParam1;
}

void func_146(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	*iParam4 = func_147(iParam0);
	*bParam1 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[iParam0 /*24*/]);
	if (*bParam1)
	{
		*iParam3 = NETWORK::NET_TO_PED(Local_3199.f_52[iParam0 /*24*/]);
		*bParam2 = PED::IS_PED_INJURED(*iParam3);
	}
}

int func_147(int iParam0)
{
	return Local_3199.f_52[iParam0 /*24*/].f_1;
}

void func_148()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < Local_227.f_429)
	{
		bVar3 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_382[iVar4 /*5*/]);
		if (bVar3)
		{
			iVar0 = NETWORK::NET_TO_ENT(Local_3199.f_382[iVar4 /*5*/]);
			bVar2 = ENTITY::IS_ENTITY_DEAD(iVar0, false);
			if (Local_1231.f_393.f_35 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar0);
				Stack.Push(bVar2);
				Call_Loc(Local_1231.f_393.f_35);
			}
		}
		if (func_171(iVar4) > 1 && func_171(iVar4) != 3)
		{
			if (bVar3)
			{
				if (bVar2)
				{
					func_170(iVar4, 3);
				}
				else if (func_169(iVar4))
				{
					func_170(iVar4, 3);
				}
			}
			else
			{
				func_170(iVar4, 3);
			}
		}
		func_164(iVar4, iVar0);
		switch (func_171(iVar4))
		{
			case 0:
				if (func_163(iVar4))
				{
					func_170(iVar4, 1);
				}
				break;
			
			case 1:
				if ((!bVar1 && func_162(iVar4)) && func_149(iVar4))
				{
					func_170(iVar4, 2);
					bVar1 = true;
				}
				break;
			
			case 2:
				break;
			
			case 3:
				break;
		}
		iVar4++;
	}
}

int func_149(int iParam0)
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_382[iParam0 /*5*/]))
	{
		Var1 = { func_161(iParam0) };
		Var4 = { func_160(iParam0) };
		if (func_33(Var1))
		{
			return 0;
		}
		iVar7 = Local_227.f_429.f_1[iParam0 /*12*/].f_3;
		if (!func_40(iVar7))
		{
			return 0;
		}
		if (func_158(&(Local_3199.f_382[iParam0 /*5*/]), iVar7, Var1, 1, 1, 1, func_159(iParam0, 22), 1, 0, 0))
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]);
			ENTITY::SET_ENTITY_ROTATION(iVar0, Var4, 2, true);
			func_154(iParam0, iVar0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_382[iParam0 /*5*/]))
	{
		iVar8 = func_153(iParam0);
		if (iVar8 != -1 && Local_227.f_429.f_86[iVar8 /*6*/].f_2 != -1)
		{
			iVar0 = NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]);
			return func_150(iParam0, iVar0, iVar8);
		}
		return 1;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = func_152(iParam2);
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
	{
		if (func_151(iParam1))
		{
			if (func_135(iVar0))
			{
				iVar1 = NETWORK::NET_TO_ENT(iVar0);
				if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam1, iVar1))
				{
					Var2 = { func_160(iParam0) };
					Stack.Push(iParam1);
					Stack.Push(iVar1);
					Stack.Push(ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar1, "chassis_dummy"));
					Stack.Push(Local_227.f_429.f_86[iParam2 /*6*/].f_3);
					Stack.Push(Var2);
					Stack.Push(iParam2);
					Call_Loc(Local_1231.f_393.f_25);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, false, false, false, 2, true);
				}
				else
				{
					return 1;
				}
			}
		}
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar0))
		{
		}
	}
	return 0;
}

int func_151(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0);
		}
	}
	return 0;
}

int func_152(int iParam0)
{
	switch (Local_227.f_429.f_86[iParam0 /*6*/].f_1)
	{
		case 2:
			return Local_3199.f_341[Local_227.f_429.f_86[iParam0 /*6*/].f_2 /*8*/];
		
		case 3:
			return Local_3199.f_382[Local_227.f_429.f_86[iParam0 /*6*/].f_2 /*5*/];
		
		case 1:
			return Local_3199.f_52[Local_227.f_429.f_86[iParam0 /*6*/].f_2 /*24*/];
		
		default:
	}
	return -1;
}

int func_153(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Local_227.f_429.f_86[iVar0 /*6*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_154(int iParam0, int iParam1)
{
	var uVar0;
	var uVar16;
	
	NETWORK::_NETWORK_SET_OBJECT_INTEREST_RANGE(NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]), 4,203895E-43f);
	ENTITY::SET_ENTITY_PROOFS(iParam1, func_159(iParam0, 17), func_159(iParam0, 18), func_159(iParam0, 19), func_159(iParam0, 20), func_159(iParam0, 21), false, false, false);
	func_156(iParam0, 0);
	if (func_159(iParam0, 32))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (!func_159(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]));
	}
	if (func_159(iParam0, 2))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_3199.f_382[iParam0 /*5*/], true, true);
		NETWORK::_0x76B3F29D3F967692(Local_3199.f_382[iParam0 /*5*/], 1);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_159(iParam0, 3))
	{
		ENTITY::SET_ENTITY_COLLISION(iParam1, false, false);
	}
	if (func_159(iParam0, 4))
	{
		ENTITY::SET_ENTITY_LIGHTS(iParam1, true);
	}
	if (func_159(iParam0, 5))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iParam1, false);
	}
	if (func_159(iParam0, 6))
	{
		ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
	}
	if (func_159(iParam0, 7))
	{
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam1, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0, false, false, false, false, true);
	}
	if (func_159(iParam0, 15))
	{
		ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]), 1200);
	}
	if (func_159(iParam0, 8))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_159(iParam0, 9))
	{
		ENTITY::_0x352E2B5CF420BF3B(NETWORK::NET_TO_OBJ(Local_3199.f_382[iParam0 /*5*/]), 1);
	}
	if (func_159(iParam0, 16))
	{
		ENTITY::SET_ENTITY_COORDS(iParam1, func_161(iParam0), true, false, false, true);
	}
	if (func_159(iParam0, 33))
	{
		ENTITY::SET_ENTITY_ROTATION(iParam1, func_160(iParam0), 2, true);
	}
	if (func_159(iParam0, 10))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(iParam1, true);
	}
	if (func_159(iParam0, 11))
	{
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
	if (func_155(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, true);
	}
	if (func_159(iParam0, 13))
	{
		ENTITY::SET_ENTITY_VISIBLE(iParam1, false, false);
	}
	if (func_159(iParam0, 14))
	{
		Stack.Push(Local_1231.f_393.f_24 != 0);
		Stack.Push(iParam0);
		Stack.Push(&uVar0);
		Stack.Push(&uVar16);
		Call_Loc(Local_1231.f_393.f_24);
		if (StackVal && StackVal)
		{
			AUDIO::_LINK_STATIC_EMITTER_TO_ENTITY(&uVar0, iParam1);
			AUDIO::SET_STATIC_EMITTER_ENABLED(&uVar0, true);
			AUDIO::SET_EMITTER_RADIO_STATION(&uVar0, &uVar16);
		}
	}
	if (Local_1231.f_393.f_32 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1231.f_393.f_32);
	}
}

int func_155(int iParam0)
{
	if (func_159(iParam0, 12))
	{
		return 1;
	}
	if (func_84(22))
	{
		return 1;
	}
	return 0;
}

void func_156(int iParam0, int iParam1)
{
	if (func_157(&(Local_3199.f_382[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

int func_157(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = uParam1;
	iVar1 = (iVar0 / 32);
	iVar2 = (iVar0 % 32);
	if (MISC::IS_BIT_SET((*uParam0)[iVar1], iVar2))
	{
		MISC::CLEAR_BIT(uParam0[iVar1], iVar2);
		return 1;
	}
	return 0;
}

int func_158(var uParam0, int iParam1, struct<3> Param2, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		return 0;
	}
	if (bParam9)
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT_NO_OFFSET(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	else
	{
		*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, Param2, bParam6, bParam5, bParam7));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_OBJ(*uParam0), bParam8);
		if (bParam10)
		{
			NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_OBJ(*uParam0), true);
		}
		if (bParam11)
		{
			ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(*uParam0), false, false);
		}
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_OBJ(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

bool func_159(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_429.f_1[iParam0 /*12*/]), iParam1);
}

Vector3 func_160(int iParam0)
{
	struct<3> Var0;
	
	if (Local_1231.f_393.f_37 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_393.f_37);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_33(Var0))
	{
		Var0 = { Local_227.f_429.f_1[iParam0 /*12*/].f_8 };
	}
	return Var0;
}

Vector3 func_161(int iParam0)
{
	struct<3> Var0;
	
	if (Local_1231.f_393.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_393.f_36);
		Var0 = { StackVal, StackVal, StackVal };
	}
	if (func_33(Var0))
	{
		Var0 = { Local_227.f_429.f_1[iParam0 /*12*/].f_4 };
	}
	return Var0;
}

int func_162(int iParam0)
{
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_3118))
	{
		return 0;
	}
	return 1;
}

int func_163(int iParam0)
{
	if (Local_1231.f_393.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_393.f_23);
		return StackVal;
	}
	return 1;
}

void func_164(int iParam0, int iParam1)
{
	if (Local_227.f_429.f_1[iParam0 /*12*/].f_11 == -1)
	{
		return;
	}
	if (func_171(iParam0) > 1 && func_171(iParam0) < 3)
	{
		if (func_166(iParam0, iParam1))
		{
			func_165(iParam0, 8);
		}
		else
		{
			func_156(iParam0, 8);
		}
	}
}

void func_165(int iParam0, int iParam1)
{
	if (func_17(&(Local_3199.f_382[iParam0 /*5*/].f_2), iParam1))
	{
	}
}

bool func_166(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = func_153(iParam0);
		if (iVar0 != -1 && Local_227.f_429.f_86[iVar0 /*6*/].f_2 != -1)
		{
			switch (Local_227.f_429.f_86[iVar0 /*6*/].f_1)
			{
				case 2:
					return func_168(Local_227.f_429.f_86[iVar0 /*6*/].f_2, 2);
				
				case 1:
					return func_87(Local_227.f_429.f_86[iVar0 /*6*/].f_2, 2);
				}
			}
		
		default:
	}
	return func_167(iParam0, 8);
}

bool func_167(int iParam0, int iParam1)
{
	return func_4(&(Local_3199.f_382[iParam0 /*5*/].f_2), iParam1);
}

bool func_168(int iParam0, int iParam1)
{
	return func_4(&(Local_3199.f_341[iParam0 /*8*/].f_2), iParam1);
}

int func_169(int iParam0)
{
	if (Local_1231.f_393.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_393.f_26);
		return StackVal;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)
{
	Local_3199.f_382[iParam0 /*5*/].f_1 = iParam1;
}

int func_171(int iParam0)
{
	return Local_3199.f_382[iParam0 /*5*/].f_1;
}

void func_172()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Local_227.f_356)
	{
		bVar5 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[iVar0 /*8*/]);
		if (bVar5)
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_3199.f_341[iVar0 /*8*/]);
			bVar4 = func_438(Local_3199.f_341[iVar0 /*8*/]);
			bVar6 = func_436(iVar2, 1, 1, 0, 0, 0, 1, 0, 0);
			if (bVar4)
			{
				iVar1 = func_433(iVar0, 2);
			}
		}
		if (func_138(iVar0) > 2)
		{
			if (func_138(iVar0) != 5 && func_138(iVar0) != 3)
			{
				if (!bVar5)
				{
					func_432(iVar0, 5);
				}
				else if (!bVar4)
				{
					func_432(iVar0, 5);
				}
				else if (func_431(iVar0, iVar2))
				{
					func_432(iVar0, 5);
				}
			}
		}
		if (Local_1231.f_338.f_46 != 0)
		{
			Stack.Push(iVar0);
			Stack.Push(iVar2);
			Stack.Push(bVar4);
			Stack.Push(iVar1);
			Call_Loc(Local_1231.f_338.f_46);
		}
		func_427(iVar0, iVar2);
		switch (func_138(iVar0))
		{
			case 0:
				if (func_426(iVar0))
				{
					func_432(iVar0, 2);
				}
				break;
			
			case 1:
				if (!bVar5)
				{
					if (func_425(iVar0))
					{
						func_432(iVar0, 2);
					}
				}
				else
				{
					func_140(&(Local_3199.f_341[iVar0 /*8*/]));
				}
				break;
			
			case 2:
				if (!bVar3)
				{
					if (func_424(iVar0))
					{
						if (func_180(iVar0))
						{
							func_432(iVar0, 4);
							bVar3 = true;
						}
					}
				}
				break;
			
			case 4:
				if (bVar5)
				{
					if (func_179(iVar0, iVar2))
					{
						func_432(iVar0, 5);
					}
					else
					{
						if (bVar4)
						{
							func_178(iVar0, iVar2);
						}
						break;
					
					case 5:
						if (func_177(iVar0, 0))
						{
							func_8(10);
						}
						if (bVar5)
						{
							if (func_179(iVar0, iVar2))
							{
							}
							else
							{
								if (func_177(iVar0, 23))
								{
									if (bVar5)
									{
										func_140(&(Local_3199.f_341[iVar0 /*8*/]));
									}
								}
								if (func_176(iVar0))
								{
									func_140(&(Local_3199.f_341[iVar0 /*8*/]));
									func_432(iVar0, 1);
								}
								break;
							
							case 3:
								break;
							
							case 6:
								if (bVar5 && func_175(iVar0, iVar2))
								{
									func_140(&(Local_3199.f_341[iVar0 /*8*/]));
								}
								break;
							
							case 7:
								break;
						}
						if (bVar6)
						{
							func_174(iVar0, 13);
						}
						else
						{
							func_173(iVar0, 13);
						}
					}
					iVar0++;
				}

void func_173(int iParam0, int iParam1)
{
	if (func_157(&(Local_3199.f_341[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

void func_174(int iParam0, int iParam1)
{
	if (func_17(&(Local_3199.f_341[iParam0 /*8*/].f_2), iParam1))
	{
	}
}

int func_175(int iParam0, int iParam1)
{
	if (func_177(iParam0, 23) || func_168(iParam0, 15))
	{
		return 1;
	}
	Stack.Push(Local_1231.f_338.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_1231.f_338.f_52);
	if (StackVal && StackVal)
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)
{
	if (func_502() != 0)
	{
		return 0;
	}
	if (func_177(iParam0, 13))
	{
		if (Local_1231.f_338.f_33 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1231.f_338.f_33);
			return StackVal;
		}
		return 1;
	}
	return 0;
}

bool func_177(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_356.f_1[iParam0 /*14*/]), iParam1);
}

void func_178(int iParam0, int iParam1)
{
	struct<3> Var0;
	float fVar3;
	
	if (iParam0 != Local_227.f_356.f_72)
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	fVar3 = 500f;
	if (func_33(Local_3199.f_519))
	{
		Local_3199.f_519 = { 5000f, 8500f, 0f };
	}
	if (SYSTEM::VDIST2(Var0, Local_3199.f_519) > (550f * 550f))
	{
		if (Local_3199.f_504 != -1)
		{
			MISC::REMOVE_POP_MULTIPLIER_SPHERE(Local_3199.f_504, false);
		}
		Local_3199.f_519 = { Var0 };
		Local_3199.f_504 = MISC::ADD_POP_MULTIPLIER_SPHERE(Local_3199.f_519, fVar3, 1f, 0,02f, false, true);
	}
}

int func_179(int iParam0, int iParam1)
{
	Stack.Push(Local_1231.f_338.f_52 != 0);
	Stack.Push(iParam0);
	Stack.Push(iParam1);
	Call_Loc(Local_1231.f_338.f_52);
	if (StackVal && StackVal)
	{
		func_140(&(Local_3199.f_341[iParam0 /*8*/]));
		return 1;
	}
	return 0;
}

int func_180(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	func_136(1, iParam0);
	iVar0 = Local_227.f_356.f_1[iParam0 /*14*/].f_3;
	if (!func_40(iVar0))
	{
		return 0;
	}
	bVar1 = true;
	if (func_33(Local_3199.f_513))
	{
		if (func_168(iParam0, 15))
		{
		}
		else if (func_177(iParam0, 17))
		{
			if (!func_298(iParam0, &(Local_3199.f_513), &(Local_3199.f_522)))
			{
				bVar1 = false;
			}
		}
		else if (func_177(iParam0, 25))
		{
			Stack.Push(iParam0);
			Stack.Push(&(Local_3199.f_513));
			Stack.Push(&(Local_3199.f_522));
			Call_Loc(Local_1231.f_338.f_37);
			if (!StackVal)
			{
				bVar1 = false;
			}
		}
		else if (func_177(iParam0, 18))
		{
			if (!func_294(iParam0))
			{
				bVar1 = false;
			}
		}
		else if (func_177(iParam0, 19))
		{
			if (!func_288(iParam0))
			{
				bVar1 = false;
			}
		}
		else
		{
			Local_3199.f_513 = { Local_227.f_356.f_1[iParam0 /*14*/].f_4 };
			Local_3199.f_522 = Local_227.f_356.f_1[iParam0 /*14*/].f_7;
		}
	}
	if (bVar1)
	{
		if (!func_177(iParam0, 30))
		{
			func_267(Local_3199.f_513, 30f, 0);
			MISC::CLEAR_AREA(Local_3199.f_513, 30f, false, false, false, true);
		}
		if (func_264(&(Local_3199.f_341[iParam0 /*8*/]), iVar0, Local_3199.f_513, Local_3199.f_522, 1, 1, 1, 0, 1, 1, 0, 0, Local_3199.f_513.f_2 <= -100f, 0))
		{
			iVar2 = NETWORK::NET_TO_VEH(Local_3199.f_341[iParam0 /*8*/]);
			func_181(iParam0, iVar2);
			func_109();
			return 1;
		}
	}
	else
	{
		func_109();
	}
	return 0;
}

void func_181(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!func_196(iParam0, iParam1))
	{
		func_195(iParam0, iParam1);
	}
	if (func_194(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(iParam1, func_177(iParam0, 10));
	VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iParam1, func_177(iParam0, 3));
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iParam1, func_177(iParam0, 3));
	VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(iParam1, func_177(iParam0, 5));
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(iVar0))
	{
		VEHICLE::_0x2310A8F9421EBF43(iParam1);
	}
	if (func_177(iParam0, 4))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam1, 7);
	}
	if (func_177(iParam0, 25))
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam1, Local_3199.f_513, false, false, true);
	}
	if (func_177(iParam0, 8))
	{
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 2, 2);
		VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(iParam1, 3, 2);
		VEHICLE::_0x1B212B26DD3C04DF(iParam1, false);
	}
	if (func_177(iParam0, 28))
	{
		NETWORK::SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(Local_3199.f_341[iParam0 /*8*/], true, true);
		NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam1, true, true);
	}
	if (func_168(iParam0, 14))
	{
		ENTITY::SET_ENTITY_HEALTH(iParam1, 1000, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
		VEHICLE::SET_VEHICLE_STRONG(iParam1, true);
		VEHICLE::_0xBB2333BB87DDD87F(iParam1, 0);
		if (func_193(iParam0, iVar0))
		{
			VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam1, false);
			VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam1, func_192(iParam0, iVar0));
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam1, false);
			VEHICLE::SET_PLANE_TURBULENCE_MULTIPLIER(iParam1, 0f);
		}
		func_190(iParam1, iVar0);
		func_189(iParam1, 1);
		VEHICLE::SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(iParam1, false);
		VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam1, func_177(iParam0, 7), false);
		func_188(iParam0, iParam1);
		iVar1 = func_187(iParam0);
		if (iVar1 != -1 && func_186(iVar1) != -1)
		{
			func_185(NETWORK::NET_TO_ENT(Local_3199.f_341[iParam0 /*8*/]), Local_3199.f_562.f_1[func_186(iVar1) /*5*/].f_1);
		}
	}
	if (func_177(iParam0, 11))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iParam1, true);
	}
	if (func_177(iParam0, 32))
	{
		VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
		VEHICLE::SET_VEHICLE_FULLBEAM(iParam1, true);
	}
	if (func_177(iParam0, 33))
	{
		VEHICLE::SET_VEHICLE_SIREN(iParam1, true);
	}
	if (func_168(iParam0, 15))
	{
	}
	else
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
		{
			VEHICLE::CONTROL_LANDING_GEAR(iParam1, 2);
		}
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0))
		{
			VEHICLE::SET_BOAT_ANCHOR(iParam1, true);
		}
	}
	if (func_168(iParam0, 15) || func_177(iParam0, 19))
	{
		if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iParam1, true, true, false);
			PHYSICS::ACTIVATE_PHYSICS(iParam1);
			ENTITY::SET_ENTITY_DYNAMIC(iParam1, true);
		}
	}
	VEHICLE::_0xDBC631F109350B8C(iParam1, true);
	VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(iParam1, true);
	if (!func_184())
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(iParam1, true);
	}
	ENTITY::SET_ENTITY_LOD_DIST(iParam1, 1200);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
	NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(iParam1, true);
	func_182(iParam1);
	NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_3199.f_341[iParam0 /*8*/], true);
	if (Local_1231.f_338.f_43 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(iParam1);
		Call_Loc(Local_1231.f_338.f_43);
	}
}

void func_182(int iParam0)
{
	int iVar0;
	
	func_183(iParam0);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		MISC::SET_BIT(&iVar0, 10);
		MISC::SET_BIT(&iVar0, 11);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_183(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
	{
		if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Not_Allow_As_Saved_Veh"))
		{
			DECORATOR::DECOR_SET_INT(iParam0, "Not_Allow_As_Saved_Veh", 1);
		}
	}
}

int func_184()
{
	return 0;
}

void func_185(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "FMDeliverableID", iParam1);
	}
}

int func_186(int iParam0)
{
	return Local_3199.f_2.f_37[iParam0];
}

int func_187(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (Local_3199.f_2.f_27[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_188(int iParam0, int iParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMCVehicle", 2))
	{
		DECORATOR::DECOR_SET_BOOL(iParam1, "FMCVehicle", true);
	}
}

void func_189(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
		}
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, 13);
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, 13);
		}
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_190(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("phantom2"):
		case joaat("dune5"):
			VEHICLE::_SET_VEHICLE_RECEIVES_RAMP_DAMAGE(iParam0, false);
			break;
	}
	func_191(iParam0);
}

void func_191(int iParam0)
{
	if (!Global_262145.f_4683)
	{
		VEHICLE::_0x80E3357FDEF45C21(iParam0, 0);
	}
}

float func_192(int iParam0, int iParam1)
{
	if (Local_1231.f_338.f_36 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_36);
		return StackVal;
	}
	switch (iParam1)
	{
		case joaat("insurgent3"):
			return 1f;
		
		default:
	}
	return 0,2f;
}

bool func_193(int iParam0, int iParam1)
{
	return func_192(iParam0, iParam1) != 1f;
}

int func_194(int iParam0)
{
	if (func_84(22))
	{
		return 1;
	}
	return 0;
}

void func_195(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, Local_227.f_356.f_1[iParam0 /*14*/].f_8, Local_227.f_356.f_1[iParam0 /*14*/].f_8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, Local_227.f_356.f_1[iParam0 /*14*/].f_8, Local_227.f_356.f_1[iParam0 /*14*/].f_8);
	}
}

int func_196(var uParam0, int iParam1)
{
	struct<101> Var0;
	
	if (Local_1231.f_338.f_44 != 0)
	{
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		Var0.f_78 = -1;
		Var0.f_79 = -1;
		Var0.f_96 = -1;
		Var0.f_97 = 1;
		Var0.f_99 = 132;
		Var0.f_100 = -1;
		Stack.Push(uParam0);
		Stack.Push(&Var0);
		Call_Loc(Local_1231.f_338.f_44);
		if (StackVal)
		{
			func_197(iParam1, &Var0, 0, 1, 1);
			return 1;
		}
	}
	return 0;
}

void func_197(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::PLAYER_ID() != func_73())
			{
				uParam1->f_100 = PLAYER::PLAYER_ID();
			}
			if (uParam1->f_70 == 0)
			{
				uParam1->f_70 = 1;
			}
			func_251(iParam0, uParam1, bParam2, bParam3);
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, true);
					VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, true);
				}
			}
			if (func_250(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (uParam1->f_9[44] == 2)
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, false, true);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(iParam0, true, true);
				}
			}
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
			{
				AUDIO::OVERRIDE_VEH_HORN(iParam0, true, uParam1->f_78);
			}
			if (!uParam1->f_79 == -1)
			{
				AUDIO::_SET_VEHICLE_HORN_VARIATION(iParam0, uParam1->f_79);
			}
			if (func_249(uParam1->f_66, &fVar0) && uParam1->f_80 != fVar0)
			{
				uParam1->f_80 = fVar0;
			}
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(iParam0, uParam1->f_80);
			VEHICLE::_SET_VEHICLE_INTERIOR_COLOR(iParam0, uParam1->f_97);
			if (uParam1->f_99 >= 0)
			{
				VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, uParam1->f_99);
			}
			if (func_248(iParam0))
			{
				func_242(iParam0, func_245(uParam1->f_74, uParam1->f_75, uParam1->f_76));
			}
			if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam0) > 1 && uParam1->f_98 >= 0)
			{
				VEHICLE::_SET_VEHICLE_ROOF_LIVERY(iParam0, uParam1->f_98);
			}
			if (MISC::IS_BIT_SET(uParam1->f_95, 0))
			{
				func_213(iParam0, &(uParam1->f_81));
			}
			if ((!func_204(4) && !bParam4) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			{
				func_201(iParam0);
			}
			if (func_200(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						break;
					
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 0, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						break;
					
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 1, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 3, false);
						}
						break;
					
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
						if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
						}
						else
						{
							VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
						}
						break;
					
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 16);
							if ((VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab")) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab2"))) || VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("scarab3")))
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 2, false);
							}
							else
							{
								VEHICLE::SET_VEHICLE_MOD(iParam0, 16, 4, false);
							}
						}
						break;
					}
			}
			if (func_199(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(iParam0, true);
						if (uParam1->f_9[16] == 5)
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, (Global_262145.f_21538 + 0,05f));
						}
						else
						{
							VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, Global_262145.f_21538);
						}
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
						break;
					
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, false);
						VEHICLE::_SET_VEHICLE_DAMAGE_MODIFIER(iParam0, 1f);
						VEHICLE::_0xD565F438137F0E10(iParam0, 1);
						break;
					}
			}
			switch (uParam1->f_94)
			{
				case 0:
					break;
				
				case 1:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (MISC::IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", 3))
					{
						DECORATOR::DECOR_SET_INT(iParam0, "Player_Vehicle", -1);
					}
					break;
				
				case 2:
					if (MISC::IS_BIT_SET(uParam1->f_95, 1) && MISC::IS_BIT_SET(uParam1->f_95, 2))
					{
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", 3))
					{
						if (func_198(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						}
						else
						{
							DECORATOR::DECOR_SET_INT(iParam0, "Veh_Modded_By_Player", -1);
						}
					}
					break;
				
				case 3:
					break;
				
				case 4:
					break;
				}
		}
	}
}

bool func_198(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

bool func_199(int iParam0)
{
	return func_250(iParam0);
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case joaat("pounder2"):
		case joaat("mule4"):
		case joaat("speedo4"):
		case joaat("imperator"):
		case joaat("deathbike"):
		case joaat("cerberus"):
		case joaat("bruiser"):
		case joaat("dominator4"):
		case joaat("zr380"):
		case joaat("issi4"):
		case joaat("imperator2"):
		case joaat("deathbike2"):
		case joaat("cerberus2"):
		case joaat("bruiser2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("issi5"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("cerberus3"):
		case joaat("bruiser3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("issi6"):
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("brutus"):
		case joaat("brutus2"):
		case joaat("brutus3"):
			return 1;
			break;
	}
	return 0;
}

void func_201(int iParam0)
{
	struct<3> Var0;
	
	if (Global_262145.f_19950)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
			{
				Var0.f_0 = ENTITY::GET_ENTITY_MODEL(iParam0);
				Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
				{
					if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
					{
						Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
					}
					else
					{
						Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
					}
				}
				func_202(Var0);
			}
		}
	}
}

void func_202(struct<3> Param0)
{
	struct<3> Var0;
	
	Var0.f_0 = -242781845;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Param0.f_0;
	Var0.f_2.f_1 = Param0.f_1;
	Var0.f_2.f_2 = Param0.f_2;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, func_203(1, 1));
}

int func_203(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_9(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_96(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_204(int iParam0)
{
	int iVar0;
	
	if (func_212())
	{
		iVar0 = 0;
		while (iVar0 < 58)
		{
			if (func_211(iVar0) == iParam0)
			{
				if (func_205(iVar0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_205(int iParam0)
{
	return func_206(iParam0, 6, 1);
}

int func_206(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_100026.f_1392[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_210() == 0)
		{
			return MISC::IS_BIT_SET(func_207(func_209(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_112915.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_207(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 12597)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2821895[iParam0 /*3*/][func_208(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_98();
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

int func_209(int iParam0)
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
		
		case 56:
			return 9915;
			break;
		
		case 57:
			return 9917;
			break;
		
		default:
			break;
	}
	return 12597;
}

int func_210()
{
	return Global_31505;
}

int func_211(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
	}
	return 6;
}

bool func_212()
{
	return Global_100026.f_376 > 0;
}

int func_213(int iParam0, var* uParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_223(iParam0, uParam1))
	{
		return 1;
	}
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 0)
	{
		if (!func_221(iParam0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
			if (func_216(&iParam0, iVar1))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iVar0 >= 3)
	{
		return 1;
	}
	else if (func_214(iParam0))
	{
	}
	return 0;
}

int func_214(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577899));
			iVar3 = 20000;
			if (Global_1836580)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_215(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_215(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!MISC::IS_BIT_SET(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

int func_216(int iParam0, int iParam1)
{
	func_220();
	if (Global_1574629.f_18 != 0 || VEHICLE::_0x8533CAFDE1F0F336(*iParam0))
	{
		Global_1946820.f_11 = VEHICLE::_GET_VEHICLE_SUSPENSION_HEIGHT(*iParam0);
		if (Global_1946820.f_11 < 0f)
		{
			Global_1946820.f_11 = 0f;
		}
	}
	func_218(*iParam0, &Global_1946820, &(Global_1946820.f_1), &(Global_1946820.f_4), &(Global_1946820.f_7), &(Global_1946820.f_10));
	Global_1946820.f_1.f_2 = (Global_1946820.f_1.f_2 - Global_1946820.f_11);
	if (Global_1946820.f_4.f_2 < 0f)
	{
		Global_1946820.f_12 = 1;
	}
	Global_1946820.f_13 = 200;
	if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("windsor") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("comet4"))
	{
		Global_1946820.f_13 = 255;
	}
	if (Global_1946820.f_12)
	{
		if (func_217(iParam0, iParam1, Global_1946820, Global_1946820.f_1, Global_1946820.f_4, Global_1946820.f_7, Global_1946820.f_10, 0, Global_1946820.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577899 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577899 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	else
	{
		Global_1946820.f_14 = { Global_1946820.f_1 };
		Global_1946820.f_14 = (Global_1946820.f_14 * -1f);
		Global_1946820.f_17 = { Global_1946820.f_4 };
		Global_1946820.f_17 = (Global_1946820.f_17 * -1f);
		Global_1946820.f_20 = { Global_1946820.f_7 };
		Global_1946820.f_20.f_1 = (Global_1946820.f_20.f_1 * -1f);
		Global_1946820.f_20.f_2 = (Global_1946820.f_20.f_2 * -1f);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 0))
		{
			Global_1946820.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 0);
		}
		else
		{
			Global_1946820.f_23 = 3;
		}
		Global_1946820.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*iParam0, 1))
		{
			Global_1946820.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*iParam0, 1);
		}
		else
		{
			Global_1946820.f_24 = 3;
		}
		if (((Global_1946820.f_23 == 0 && func_217(iParam0, iParam1, Global_1946820, Global_1946820.f_1, Global_1946820.f_4, Global_1946820.f_7, Global_1946820.f_10, 0, Global_1946820.f_13)) || Global_1946820.f_23 != 0) && ((Global_1946820.f_24 == 0 && func_217(iParam0, iParam1, Global_1946820, Global_1946820.f_14, Global_1946820.f_17, Global_1946820.f_20, Global_1946820.f_10, 1, Global_1946820.f_13)) || Global_1946820.f_24 != 0))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				Global_1577899 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				Global_1577899 = MISC::GET_GAME_TIMER();
			}
			return 1;
		}
	}
	return 0;
}

bool func_217(var uParam0, int iParam1, int iParam2, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12, int iParam13, int iParam14)
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(iParam1), iParam2, Param3, Param6, Param9, fParam12, iParam13, iParam14);
}

int func_218(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
	if (((!func_219(Global_1946846, 0f, 0f, 0f, 0) && !func_219(Global_1946849, 0f, 0f, 0f, 0)) && !func_219(Global_1946852, 0f, 0f, 0f, 0)) && !Global_1946855 == 0f)
	{
		*uParam2 = { Global_1946846 };
		*uParam3 = { Global_1946849 };
		*uParam4 = { Global_1946852 };
		*uParam5 = Global_1946855;
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("dominator"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("feltzer2"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("adder"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("akuma"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("asea"):
			*uParam2 = { 0f, 1,5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("asterope"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bagger"):
			*uParam2 = { -1f, 0,16f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("baller"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller2"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("banshee"):
			*uParam2 = { 0f, 0,94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("bati"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bati2"):
			*uParam2 = { 0f, 0,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("bfinjection"):
			*uParam2 = { -1f, 0,08f, 0,19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bison"):
			*uParam2 = { 0f, 1,99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bjxl"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("blista"):
			*uParam2 = { 0f, 1,49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("bobcatxl"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,65f;
			break;
		
		case joaat("bodhi2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("buffalo"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buffalo2"):
			*uParam2 = { 0f, 2,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("bullet"):
			*uParam2 = { -1,57f, 0,07f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("carbonrs"):
			*uParam2 = { 0f, 0,09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("carbonizzare"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, -0,11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cavalcade"):
			*uParam2 = { 0f, 1,51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("cavalcade2"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cheetah"):
			*uParam2 = { -1,61f, 0,26f, 0,17f };
			*uParam3 = { 0,9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cogcabrio"):
			*uParam2 = { 0f, 1,42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("comet2"):
			*uParam2 = { 0f, 1,35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette"):
			*uParam2 = { 0f, 0,96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("daemon"):
			*uParam2 = { 0f, 0,06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("dilettante"):
			*uParam2 = { 0f, 1,59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dloader"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("double"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("dubsta"):
			*uParam2 = { -1,71f, 0,31f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,75f;
			break;
		
		case joaat("elegy2"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emperor"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("emperor2"):
			*uParam2 = { 0f, 1,31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("entityxf"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("exemplar"):
			*uParam2 = { 0f, 1,32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("f620"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("faggio2"):
			*uParam2 = { -1f, -0,48f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("felon"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("felon2"):
			*uParam2 = { 0f, 1,24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fq2"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fugitive"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("fusilade"):
			*uParam2 = { 0f, 0,98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("futo"):
			*uParam2 = { 0f, 1,28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("gauntlet"):
			*uParam2 = { 0f, 1,735f, 1,05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("granger"):
			*uParam2 = { 0f, 2,07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("gresley"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("habanero"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("hexer"):
			*uParam2 = { 0f, -0,46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,14f;
			break;
		
		case joaat("hotknife"):
			*uParam2 = { -1,43f, -0,14f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("infernus"):
			*uParam2 = { -1f, 0,33f, 0,08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ingot"):
			*uParam2 = { 0f, 1,58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("intruder"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("issi2"):
			*uParam2 = { 0f, 1,21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jackal"):
			*uParam2 = { 0f, 1,36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jb700"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("khamelion"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,475f;
			break;
		
		case joaat("landstalker"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("manana"):
			*uParam2 = { 0f, 0,86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("mesa"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("mesa3"):
			*uParam2 = { 0f, 1,47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("minivan"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("monroe"):
			*uParam2 = { 0f, 1,23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("nemesis"):
			*uParam2 = { 0f, 0,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("ninef"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ninef2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("oracle2"):
			*uParam2 = { 0f, 1,7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("patriot"):
			*uParam2 = { 0f, 1,75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pcj"):
			*uParam2 = { 0f, 0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("penumbra"):
			*uParam2 = { 0f, 1,46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("peyote"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("phoenix"):
			*uParam2 = { 0f, 1,833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,44f;
			break;
		
		case joaat("picador"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,515f;
			break;
		
		case joaat("prairie"):
			*uParam2 = { 0f, 1,41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("premier"):
			*uParam2 = { 0f, 1,6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("radi"):
			*uParam2 = { 0f, 1,74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rancherxl"):
			*uParam2 = { 0f, 1,54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rapidgt2"):
			*uParam2 = { 0f, 1,263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ratloader"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("rebel"):
			*uParam2 = { -1,22f, 0,6f, 0,44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rebel2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("regina"):
			*uParam2 = { 0f, 1,473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("rocoto"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("romero"):
			*uParam2 = { 0f, 1,83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("ruffian"):
			*uParam2 = { 0f, -0,02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("ruiner"):
			*uParam2 = { 0f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sadler"):
			*uParam2 = { 0f, 2,26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking"):
			*uParam2 = { 0f, 2,496f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sandking2"):
			*uParam2 = { 0f, 2,286f, 1,55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("schafter2"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schwarzer"):
			*uParam2 = { 0f, 1,43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("seminole"):
			*uParam2 = { 0f, 1,45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sentinel2"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("serrano"):
			*uParam2 = { 0f, 1,68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,49f;
			break;
		
		case joaat("stanier"):
			*uParam2 = { 0f, 1,55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stinger"):
			*uParam2 = { 0f, 1,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("stingergt"):
			*uParam2 = { -1f, -0,17f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("stratum"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sultan"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("superd"):
			*uParam2 = { 0f, 1,62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surano"):
			*uParam2 = { 0f, 1,38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("surfer"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surfer2"):
			*uParam2 = { 0f, 2,48f, 0,26f };
			*uParam3 = { 0f, -1f, -0,212f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,32f;
			break;
		
		case joaat("surge"):
			*uParam2 = { 0f, 1,69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tailgater"):
			*uParam2 = { 0f, 1,783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado"):
			*uParam2 = { -1,23f, 0,11f, -0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tornado2"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tornado3"):
			*uParam2 = { 0f, 1,44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("vacca"):
			*uParam2 = { 0f, 1,76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vader"):
			*uParam2 = { 0f, 0,08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigero"):
			*uParam2 = { -1f, 0,11f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("voltic"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("voodoo2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("washington"):
			*uParam2 = { 0f, 1,61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("youga"):
			*uParam2 = { 0f, 2,352f, 1,003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("zion"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zion2"):
			*uParam2 = { 0f, 1,48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ztype"):
			*uParam2 = { -0,96f, -0,69f, 0,35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		default:
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*uParam5 = 0,5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("kalahari"):
			*uParam2 = { -1f, 0,18f, 0,1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("paradise"):
			*uParam2 = { 0f, 2,23f, 1f };
			*uParam3 = { 0f, -0,22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("alpha"):
			*uParam2 = { -1f, 0,18f, -0,05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("huntley"):
			*uParam2 = { 0f, 1,52f, 0,99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zentorno"):
			*uParam2 = { -1,24f, 0,42f, -0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,035f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester"):
			*uParam2 = { -1f, 0,17f, 0,22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,05f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("massacro"):
			*uParam2 = { 0f, 1,37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("turismor"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("thrust"):
			*uParam2 = { -1f, 0,405f, 0,4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("btype"):
			*uParam2 = { 0f, 1,143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,7125f;
			break;
		
		case joaat("rhapsody"):
			*uParam2 = { -1f, -0,47f, -0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2625f;
			break;
		
		case joaat("glendale"):
			*uParam2 = { 0f, 1,683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("warrener"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("blade"):
			*uParam2 = { -1f, 0,445f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,325f;
			break;
		
		case joaat("panto"):
			*uParam2 = { -1f, 0f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dubsta3"):
			*uParam2 = { -1f, 0,34f, 0,2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("pigalle"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("coquette2"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("innovation"):
			*uParam2 = { 0f, 0,15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("hakuchou"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,16f;
			break;
		
		case joaat("furoregt"):
			*uParam2 = { -1f, 0f, 0,2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("ratloader2"):
			*uParam2 = { -1,78f, 0,52f, 0,52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("slamvan"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("dukes2"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("dukes"):
			*uParam2 = { -1f, 0f, 0,0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3875f;
			break;
		
		case joaat("stalion"):
			*uParam2 = { -1f, 0f, 0,0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4375f;
			break;
		
		case joaat("blista2"):
			*uParam2 = { -1f, 0,5325f, 0,245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2875f;
			break;
		
		case joaat("casco"):
			*uParam2 = { 0f, 0,94f, 1,03f };
			*uParam3 = { 0f, -0,03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("enduro"):
			*uParam2 = { 0f, -0,17f, 1f };
			*uParam3 = { 0f, 0,34f, -0,786f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("gburrito2"):
			*uParam2 = { 0f, 2,32f, 0,94f };
			*uParam3 = { 0f, -0,182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("guardian"):
			*uParam2 = { -1,94f, 1,07f, 0,38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kuruma"):
		case joaat("kuruma2"):
			*uParam2 = { -1f, 0,2475f, -0,175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,435f;
			break;
		
		case joaat("lectro"):
			*uParam2 = { 0f, 0,3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("feltzer3"):
			*uParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam0, "chassis_dummy");
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("osiris"):
			*uParam2 = { -1f, 0,27f, -0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("virgo"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("windsor"):
			*uParam2 = { -1,2f, -0,39f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("brawler"):
			*uParam2 = { -1f, -0,21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("chino"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("coquette3"):
			*uParam2 = { -1f, -0,1775f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("t20"):
			*uParam2 = { -1f, 0,4f, -0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("vindicator"):
			*uParam2 = { -1f, 0,21f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("faction"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction2"):
			*uParam2 = { -1f, 0f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("buccaneer2"):
			*uParam2 = { 0f, 2,01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("chino2"):
			*uParam2 = { -1,05f, 0f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("moonbeam"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("moonbeam2"):
			*uParam2 = { 0f, 1,713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("primo2"):
			*uParam2 = { -1f, 0,42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("voodoo"):
			*uParam2 = { -1,12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("faction3"):
			*uParam2 = { -1f, 0f, 0,5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("sabregt2"):
			*uParam2 = { -1f, 0f, 0,14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,015f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("tornado5"):
			*uParam2 = { -1f, 0,15f, -0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("virgo2"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("virgo3"):
			*uParam2 = { -1f, 0f, 0,1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("minivan2"):
			*uParam2 = { 0f, 1,95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan3"):
			*uParam2 = { -1f, 0,275f, 0,195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("btype2"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("lurcher"):
			*uParam2 = { -1f, 0f, 0,3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("baller3"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller4"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller5"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("baller6"):
			*uParam2 = { 0f, 1,4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cog55"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cog552"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cognoscenti2"):
			*uParam2 = { -1f, 0,37f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("mamba"):
			*uParam2 = { -1f, -0,18f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshade"):
			*uParam2 = { -1f, -0,2f, 0,17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schafter3"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter4"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter5"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("schafter6"):
			*uParam2 = { 0f, 1,56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,28f;
			break;
		
		case joaat("verlierer2"):
			*uParam2 = { -1f, -0,21f, 0,03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tampa"):
			*uParam2 = { -1f, 0f, 0,12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("banshee2"):
			*uParam2 = { -1f, -0,4f, 0,075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultanrs"):
			*uParam2 = { 0f, 1,77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("btype3"):
			*uParam2 = { -1f, -0,1f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("bestiagts"):
			*uParam2 = { -1f, -0,06f, 0,4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("seven70"):
			*uParam2 = { -1f, -0,21f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fmj"):
			*uParam2 = { -1f, -0,06f, 0,21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("pfister811"):
			*uParam2 = { -1f, 0,06f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("prototipo"):
			*uParam2 = { -1f, 0,3f, 0,27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("reaper"):
			*uParam2 = { -1f, 0,48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rumpo3"):
			*uParam2 = { 0f, 2,103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("windsor2"):
			*uParam2 = { -1,2f, 0,03f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,55f;
			break;
		
		case joaat("xls"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("xls2"):
			*uParam2 = { -1f, 0,36f, -0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("brioso"):
			*uParam2 = { -1f, -0,06f, 0,565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("contender"):
			*uParam2 = { 0f, 2,33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("le7b"):
			*uParam2 = { -1f, -0,12f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("omnis"):
			*uParam2 = { -1f, 0,03f, 0,18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("tropos"):
			*uParam2 = { -1f, 0f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("avarus"):
			*uParam2 = { -1f, 0,27f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("daemon2"):
			*uParam2 = { -1f, 0,27f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("defiler"):
			*uParam2 = { -1f, 0f, 0,34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("esskey"):
			*uParam2 = { -1f, 0,335f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,09f;
			break;
		
		case joaat("hakuchou2"):
			*uParam2 = { 0f, 0,27f, 0,845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("nightblade"):
			*uParam2 = { 0f, -0,133f, 0,61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,125f;
			break;
		
		case joaat("ratbike"):
			*uParam2 = { -1f, 0,31f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("shotaro"):
			*uParam2 = { -1f, 0,06f, 0,325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombiea"):
			*uParam2 = { -1f, 0,3f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("zombieb"):
			*uParam2 = { -1f, 0,2f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("vortex"):
			*uParam2 = { -1f, 0,18f, 0,37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,095f;
			break;
		
		case joaat("tornado6"):
			*uParam2 = { -1f, -0,03f, -0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("youga2"):
			*uParam2 = { 0f, 2,352f, 0,253f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("wolfsbane"):
			*uParam2 = { -1f, 0,33f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("faggio3"):
			*uParam2 = { -1f, -0,54f, -0,11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("faggio"):
			*uParam2 = { -0,9875f, -0,0175f, -0,01f };
			*uParam3 = { 0,8975f, -0,26f, -0,0725f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1625f;
			break;
		
		case joaat("comet3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("diablous"):
			*uParam2 = { -1f, 0,006f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("diablous2"):
			*uParam2 = { -1f, 0,225f, 0,541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("elegy"):
			*uParam2 = { 0f, 1,14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("fcr"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("fcr2"):
			*uParam2 = { -1f, 0,234f, 0,376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("italigtb"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("italigtb2"):
			*uParam2 = { -1f, -0,024f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("nero2"):
			*uParam2 = { -1f, 0,237f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penetrator"):
			*uParam2 = { -1f, 0,153f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("ruiner2"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ruiner3"):
			*uParam2 = { 0,363f, 1,34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("specter"):
			*uParam2 = { -1f, -0,273f, -0,02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("specter2"):
			*uParam2 = { -1f, -0,273f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("technical2"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tempesta"):
			*uParam2 = { -1f, 0f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("voltic2"):
			*uParam2 = { 0f, 1,763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,29f;
			break;
		
		case joaat("infernus2"):
			*uParam2 = { -1f, 0,33f, 0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0,06f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("ruston"):
			*uParam2 = { -1f, -0,273f, 0,084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("turismo2"):
			*uParam2 = { -1f, 0,159f, -0,193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("ardent"):
			*uParam2 = { -1f, 0,309f, 0,276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("cheetah2"):
			*uParam2 = { -1f, 0,159f, -0,127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("halftrack"):
			*uParam2 = { -1f, 0,501f, 0,531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("nightshark"):
			*uParam2 = { -1,5f, 0,42f, 0,584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("oppressor"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("tampa3"):
			*uParam2 = { 0f, 1,515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("technical3"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,43f;
			break;
		
		case joaat("torero"):
			*uParam2 = { -1f, 0,201f, 0,114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("vagner"):
			*uParam2 = { -1,5f, 0,906f, 0,071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("xa21"):
			*uParam2 = { -1f, 0,441f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("phantom3"):
			*uParam2 = { -1,3f, 2,045f, 0,802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("hauler2"):
			*uParam2 = { -1,627f, 2,456f, 0,745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("cyclone"):
			*uParam2 = { -1f, 0,186f, 0,382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("visione"):
			*uParam2 = { -1f, 0,432f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("vigilante"):
			*uParam2 = { -1f, 0,232f, 0,24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("retinue"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("rapidgt3"):
			*uParam2 = { 0f, 1,972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,18f;
			break;
		
		case joaat("avenger"):
			*uParam2 = { -2,02f, 6,45f, -0,716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deluxo"):
			*uParam2 = { -1f, -0,291f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("stromberg"):
			*uParam2 = { -1f, 0,23f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("riot2"):
			*uParam2 = { -1,891f, 2,144f, 0,657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("chernobog"):
			*uParam2 = { -2,127f, 5,413f, 1,132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,34f;
			break;
		
		case joaat("khanjali"):
			*uParam2 = { -0,897f, 1,391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("barrage"):
			*uParam2 = { -1,51f, 0,71f, 0,451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("comet4"):
			*uParam2 = { -1f, 0,298f, 0,257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,36f;
			break;
		
		case joaat("neon"):
			*uParam2 = { -1f, 0,181f, -0,066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("streiter"):
			*uParam2 = { -1f, 0,301f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sentinel3"):
			*uParam2 = { 0f, 1,52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("yosemite"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sc1"):
			*uParam2 = { -1f, 0,616f, -0,131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("autarch"):
			*uParam2 = { -1f, 0f, 0,116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("gt500"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hustler"):
			*uParam2 = { -1f, -0,228f, 0,321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("revolter"):
			*uParam2 = { -1f, 0,203f, 0,126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("pariah"):
			*uParam2 = { -1f, -0,126f, 0,208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("raiden"):
			*uParam2 = { -1f, 0,252f, -0,095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("savestra"):
			*uParam2 = { -1f, 0f, 0,25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("riata"):
			*uParam2 = { -1,3f, 0,18f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("hermes"):
			*uParam2 = { -1f, -0,134f, 0,158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("comet5"):
			*uParam2 = { -1f, 0,002f, 0,031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("z190"):
			*uParam2 = { -1f, -0,175f, 0,242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("viseris"):
			*uParam2 = { -1f, 0f, 0,244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,275f;
			break;
		
		case joaat("kamacho"):
			*uParam2 = { 0f, 1,623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("gb200"):
			*uParam2 = { -1f, 0f, 0,407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,225f;
			break;
		
		case joaat("fagaloa"):
			*uParam2 = { -1f, 0f, 0,225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("ellie"):
			*uParam2 = { -1f, 0,441f, -0,128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi3"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("michelli"):
			*uParam2 = { -1f, 0f, 0,0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("flashgt"):
			*uParam2 = { 0f, 1,592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("hotring"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("tezeract"):
			*uParam2 = { -1f, 0,679f, 0,514f };
			*uParam3 = { 1f, 0f, -0,75f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,175f;
			break;
		
		case joaat("tyrant"):
			*uParam2 = { -1,588f, 0,315f, 0,337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("dominator3"):
			*uParam2 = { -1f, 0f, 0,221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("taipan"):
			*uParam2 = { -1f, 0f, 0,219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("entity2"):
			*uParam2 = { -1,52f, 0,41f, 0,15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester3"):
			*uParam2 = { -1f, 0f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cheburek"):
			*uParam2 = { -1f, 0,393f, 0,162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("caracara"):
			*uParam2 = { -1f, 1,266f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("speedo4"):
			*uParam2 = { -1,5f, 0,833f, 0,391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("mule4"):
			*uParam2 = { -1,125f, 2,691f, 0,318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("pounder2"):
			*uParam2 = { -1,5f, 1,853f, 0,779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,38f;
			break;
		
		case joaat("swinger"):
			*uParam2 = { -1f, 0,195f, 0,105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("menacer"):
			*uParam2 = { -1,73f, 0,159f, 0,61f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("scramjet"):
			*uParam2 = { -1f, -0,188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("patriot2"):
			*uParam2 = { -1,213f, 1,546f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("stafford"):
			*uParam2 = { -1f, 0,036f, 0,096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("freecrawler"):
			*uParam2 = { -1f, 0,249f, 0,511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("oppressor2"):
			*uParam2 = { -1f, 0,306f, 0,355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,08f;
			break;
		
		case joaat("terbyte"):
			*uParam2 = { -1,73f, 3,397f, 0,724f };
			*uParam3 = { 1f, 0,12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("bruiser"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser2"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("bruiser3"):
			*uParam2 = { 0f, 2,12f, 1,241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0,084f };
			*uParam5 = 0,775f;
			break;
		
		case joaat("brutus"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus2"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("brutus3"):
			*uParam2 = { -1f, 0,446f, 0,247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("cerberus"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus2"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("cerberus3"):
			*uParam2 = { -1,432f, 1,443f, 1,292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("clique"):
			*uParam2 = { -1f, 0,167f, 0,159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("deveste"):
			*uParam2 = { -1,5f, 1,066f, 0,13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("deviant"):
			*uParam2 = { -1f, 0,111f, 0,123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("dominator4"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator5"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dominator6"):
			*uParam2 = { -1f, 0f, 0,417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("impaler"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler2"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler3"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("impaler4"):
			*uParam2 = { -1f, 0f, 0,137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("imperator"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator2"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("imperator3"):
			*uParam2 = { -1f, 0f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi4"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi5"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("issi6"):
			*uParam2 = { -1f, 0,195f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("italigto"):
			*uParam2 = { -1f, -0,091f, 0,207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("monster3"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster4"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("monster5"):
			*uParam2 = { -1,78f, 0,445f, 0,81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("schlagen"):
			*uParam2 = { -1f, -0,105f, 0,262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("slamvan4"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan5"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("slamvan6"):
			*uParam2 = { -1f, 0,152f, 0,537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("toros"):
			*uParam2 = { -1f, 0,415f, 0,394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("tulip"):
			*uParam2 = { -1f, 0,171f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vamos"):
			*uParam2 = { -1f, 0f, 0,163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("zr380"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3802"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zr3803"):
			*uParam2 = { -1f, 0f, 0,286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("caracara2"):
			*uParam2 = { -1f, 0,687f, 0,4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("drafter"):
			*uParam2 = { -1,045f, 0,15f, 0,09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("dynasty"):
			*uParam2 = { -1f, 0,12f, 0,334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("emerus"):
			*uParam2 = { -1f, 0,372f, 0,439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("gauntlet3"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("gauntlet4"):
			*uParam2 = { -1f, 0f, 0,222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,33f;
			break;
		
		case joaat("hellion"):
			*uParam2 = { -1f, 0,27f, 0,246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("issi7"):
			*uParam2 = { -1f, 0,195f, -0,063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("jugular"):
			*uParam2 = { -1f, 0,213f, 0,213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("krieger"):
			*uParam2 = { -1f, 0,576f, -0,123f };
			*uParam3 = { 0,997f, -0,105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("locust"):
			*uParam2 = { -1f, -0,207f, 0,042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("nebula"):
			*uParam2 = { -1f, 0,012f, 0,147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("neo"):
			*uParam2 = { -1f, 0,216f, 0,216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("novak"):
			*uParam2 = { -1f, 0,24f, 0,255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("paragon"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("paragon2"):
			*uParam2 = { -1f, 0f, 0,156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("peyote2"):
			*uParam2 = { -1f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("s80"):
			*uParam2 = { -1f, 0,357f, 0,256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,2f;
			break;
		
		case joaat("thrax"):
			*uParam2 = { -1f, 0,426f, 0,339f };
			*uParam3 = { 1f, 0,06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zion3"):
			*uParam2 = { -1f, 0,108f, 0,234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("zorrusso"):
			*uParam2 = { -1f, 0,273f, -0,06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("slamvan2"):
			*uParam2 = { -1f, 0,35f, 0,456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("rebla"):
			*uParam2 = { 0f, 1,9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("asbo"):
			*uParam2 = { -1f, 0,104f, 0,339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("sugoi"):
			*uParam2 = { -1f, 0,104f, 0,223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("komoda"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("vstr"):
			*uParam2 = { -1f, 0,104f, 0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("sultan2"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("kanjo"):
			*uParam2 = { -1f, 0,313f, 0,16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("jb7002"):
			*uParam2 = { 0f, 1,2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,37f;
			break;
		
		case joaat("yosemite2"):
			*uParam2 = { -1f, 0,252f, 0,201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("retinue2"):
			*uParam2 = { -1f, -0,018f, 0,253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("furia"):
			*uParam2 = { -1f, 0,0965f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("everon"):
			*uParam2 = { 0f, 2,019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,5f;
			break;
		
		case joaat("imorgon"):
			*uParam2 = { -1,5f, 0,42f, -0,2f };
			*uParam3 = { 1f, -0,0997f, 0,0415f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,45f;
			break;
		
		case joaat("zhaba"):
			*uParam2 = { -1,202f, 0,034f, 0,6635f };
			*uParam3 = { 1f, -0,002f, 0f };
			*uParam4 = { 0f, -0,7398f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("gauntlet5"):
			*uParam2 = { -1,5f, 0,379f, 0,297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,24f;
			break;
		
		case joaat("dukes3"):
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,375f;
			break;
		
		case joaat("manana2"):
			*uParam2 = { -1,76f, 0,105f, 0,009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("club"):
			*uParam2 = { 0f, 1,252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,31f;
			break;
		
		case joaat("glendale2"):
			*uParam2 = { 0f, 2,135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,205f;
			break;
		
		case joaat("youga3"):
			*uParam2 = { 0f, 2,352f, 0,3f };
			*uParam3 = { 0f, -1f, -0,256f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,135f;
			break;
		
		case joaat("yosemite3"):
			*uParam2 = { -1f, 0,252f, 0,203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,21f;
			break;
		
		case joaat("seminole2"):
			*uParam2 = { 0f, 1,654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("penumbra2"):
			*uParam2 = { -1,08f, 0,28f, -0,093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("landstalker2"):
			*uParam2 = { -1,64f, 0,7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("coquette4"):
			*uParam2 = { -1f, -0,021f, 0,273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,25f;
			break;
		
		case joaat("tigon"):
			*uParam2 = { -1f, 0,156f, 0,099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("peyote3"):
			*uParam2 = { -1,5f, -0,36f, 0,2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("brioso2"):
			*uParam2 = { -1f, 0,275f, 0,215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("slamtruck"):
			*uParam2 = { -1f, 1,454f, 0,485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("italirsx"):
			*uParam2 = { -1f, 0,109f, 0,129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("toreador"):
			*uParam2 = { -1f, 0,194f, 0,342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,15f;
			break;
		
		case joaat("weevil"):
			*uParam2 = { -1f, 0,111f, 0,168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("zr350"):
			*uParam2 = { 0f, 1,632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,19f;
			break;
		
		case joaat("calico"):
			*uParam2 = { -1f, 0,497f, 0,212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("jester4"):
			*uParam2 = { -1f, 0f, 0,181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("comet6"):
			*uParam2 = { -1f, 0,205f, 0,074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("warrener2"):
			*uParam2 = { -1f, 0,408f, 0,295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("remus"):
			*uParam2 = { -1f, 0,204f, 0,357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("vectre"):
			*uParam2 = { -1f, 0,249f, 0,164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator7"):
			*uParam2 = { -1f, 0,253f, 0,142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("cypher"):
			*uParam2 = { -1f, 0,223f, 0,185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("rt3000"):
			*uParam2 = { -1f, 0f, 0,189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("sultan3"):
			*uParam2 = { -1f, 0,42f, 0,309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("tailgater2"):
			*uParam2 = { -1f, 0,337f, 0,283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("previon"):
			*uParam2 = { -1f, 0,14f, -0,155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("dominator8"):
			*uParam2 = { -1f, 0,153f, -0,006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("futo2"):
			*uParam2 = { -1f, 0,318f, -0,013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("euros"):
			*uParam2 = { -1f, 0,101f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("growler"):
			*uParam2 = { -1f, 0,151f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("cinquemila"):
			*uParam2 = { -1f, 0,533f, 0,197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("champion"):
			*uParam2 = { -1f, 0,076f, 0,122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,4f;
			break;
		
		case joaat("granger2"):
			*uParam2 = { -1f, 0,461f, 0,264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("deity"):
			*uParam2 = { -1f, 0,279f, 0,235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("buffalo4"):
			*uParam2 = { -1f, 0,251f, 0,149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("baller7"):
			*uParam2 = { -1,194f, 0,182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("zeno"):
			*uParam2 = { -1,194f, 0,409f, 0,199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,22f;
			break;
		
		case joaat("comet7"):
			*uParam2 = { -1f, 0,05f, 0,187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("astron"):
			*uParam2 = { -1f, 0,249f, 0,39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,35f;
			break;
		
		case joaat("patriot3"):
			*uParam2 = { -1,2f, 0,474f, 0,335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,23f;
			break;
		
		case joaat("jubilee"):
			*uParam2 = { -1,037f, 0,438f, 0,31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
		
		case joaat("shinobi"):
			*uParam2 = { 0f, 0,306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*uParam5 = 0,045f;
			break;
		
		case joaat("reever"):
			*uParam2 = { -1f, 0,292f, 0,29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,1f;
			break;
		
		case joaat("iwagen"):
			*uParam2 = { -1f, 0,387f, 0,209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*uParam5 = 0,3f;
			break;
	}
	return 1;
}

bool func_219(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_220()
{
	Global_1946820 = 0;
	Global_1946820.f_1 = { 0f, 0f, 0f };
	Global_1946820.f_4 = { 0f, 0f, 0f };
	Global_1946820.f_7 = { 0f, 0f, 0f };
	Global_1946820.f_10 = 0f;
	Global_1946820.f_11 = 0f;
	Global_1946820.f_12 = 0;
	Global_1946820.f_13 = 0;
	Global_1946820.f_14 = { 0f, 0f, 0f };
	Global_1946820.f_17 = { 0f, 0f, 0f };
	Global_1946820.f_20 = { 0f, 0f, 0f };
	Global_1946820.f_23 = 0;
	Global_1946820.f_24 = 0;
}

int func_221(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_222(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return MISC::IS_BIT_SET(iVar0, 16);
			}
		}
	}
	return 0;
}

int func_223(int iParam0, var* uParam1)
{
	int iVar0;
	bool bVar1;
	
	if (NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
	}
	else
	{
		iVar0 = func_73();
	}
	bVar1 = false;
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		if (func_234(15, 0))
		{
			bVar1 = true;
		}
		else if (func_230(1))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar1 = true;
	}
	if (((((((!(ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true)) || !((NETWORK::NETWORK_IS_HANDLE_VALID(uParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID()) && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam1))) || iVar0 == func_73()) || !func_9(iVar0, 0, 0)) || !bVar1) || func_224(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_224(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 1;
	}
	if (func_226(PLAYER::PLAYER_ID()) == 3)
	{
		if (func_225(iParam0) != -1)
		{
			return 1;
		}
	}
	if (Global_1946845)
	{
		return 1;
	}
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("blazer"):
		case joaat("blazer3"):
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("bifta"):
		case joaat("sovereign"):
		case joaat("hexer"):
		case joaat("dune"):
		case joaat("dune2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("blista3"):
		case joaat("stalion2"):
		case joaat("gauntlet2"):
		case joaat("dominator2"):
		case joaat("buffalo3"):
		case joaat("massacro2"):
		case joaat("jester2"):
		case joaat("omnis"):
		case joaat("bf400"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
		case joaat("le7b"):
		case joaat("tyrus"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("chimera"):
		case joaat("sanctus"):
		case joaat("blazer4"):
		case joaat("manchez"):
		case joaat("raptor"):
		case joaat("blazer5"):
		case joaat("stryder"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("outlaw"):
		case joaat("vagrant"):
		case joaat("openwheel1"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("squaddie"):
		case joaat("winky"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("verus"):
			return 1;
			break;
		
		case joaat("youga"):
		case joaat("youga2"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 7) != -1)
			{
				return 1;
			}
			break;
		
		case joaat("surano"):
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) == 1)
			{
				return 1;
			}
			break;
		
		case joaat("gp1"):
			return 1;
			break;
		
		case joaat("apc"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("thruster"):
			return 1;
			break;
		
		case joaat("terbyte"):
			return 1;
			break;
		
		case joaat("rcbandito"):
		case joaat("scarab"):
		case joaat("scarab2"):
		case joaat("scarab3"):
		case joaat("rrocket"):
		case joaat("blazer2"):
		case joaat("burrito2"):
		case joaat("ignus"):
			return 1;
			break;
		
		case joaat("club"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 1) || VEHICLE::GET_VEHICLE_MOD(iParam0, 7) == 7)
			{
				return 1;
			}
			break;
		
		case joaat("yosemite3"):
			if ((VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 5) || VEHICLE::GET_VEHICLE_MOD(iParam0, 45) == 6)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_225(int iParam0)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "FMDeliverableID"))
		{
			return DECORATOR::DECOR_GET_INT(iParam0, "FMDeliverableID");
		}
	}
	return -1;
}

int func_226(int iParam0)
{
	if (func_229(iParam0) == 233)
	{
		return func_227(iParam0);
	}
	return -1;
}

int func_227(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_182;
	}
	return -1;
}

int func_228(int iParam0, int iParam1)
{
	if (Global_1893548[iParam0 /*600*/].f_11.f_33 != -1 || (iParam1 && Global_1893548[iParam0 /*600*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_229(int iParam0)
{
	if (func_228(iParam0, 0))
	{
		return Global_1893548[iParam0 /*600*/].f_11.f_33;
	}
	return -1;
}

bool func_230(bool bParam0)
{
	return func_231(PLAYER::PLAYER_ID(), bParam0);
}

int func_231(int iParam0, bool bParam1)
{
	return func_232(iParam0, bParam1, 1);
}

int func_232(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_73())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_233(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1893548[iParam0 /*600*/].f_11;
	if (iVar0 != func_73() && Global_1893548[iVar0 /*600*/].f_11.f_428 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_233(int iParam0, int iParam1)
{
	if (iParam0 != func_73())
	{
		if (Global_1893548[iParam0 /*600*/].f_11 != func_73())
		{
			if (Global_1893548[iParam0 /*600*/].f_11 == iParam0 && Global_1893548[iParam0 /*600*/].f_11.f_428 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_234(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		if (iParam0 == 15)
		{
			return 1;
		}
	}
	if (func_239(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return 1;
				break;
			}
	}
	iVar0 = func_236(iParam0);
	iVar1 = iParam0;
	return MISC::IS_BIT_SET(iVar0, func_235(iVar1));
}

int func_235(int iParam0)
{
	return (iParam0 % 32);
}

int func_236(int iParam0)
{
	int iVar0;
	
	iVar0 = func_207(func_237(iParam0), -1, 0);
	return iVar0;
}

int func_237(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_238(iVar0);
	switch (iVar1)
	{
		case 0:
			return 1291;
			break;
	}
	return 1291;
}

int func_238(int iParam0)
{
	return (iParam0 / 32);
}

int func_239(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_240(iParam0) && Global_2689156[iParam0 /*453*/].f_319.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

int func_240(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 22;
			}
		}
	}
	return 0;
}

int func_241(int iParam0)
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

void func_242(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_244(iParam1);
	func_243(iVar1, &iVar0);
	VEHICLE::_SET_VEHICLE_DASHBOARD_COLOR(iParam0, iVar0);
}

bool func_243(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
		
		case 1:
			*uParam1 = 5;
			break;
		
		case 2:
			*uParam1 = 6;
			break;
		
		case 3:
			*uParam1 = 7;
			break;
		
		case 4:
			*uParam1 = 111;
			break;
		
		case 5:
			*uParam1 = 112;
			break;
		
		case 6:
			*uParam1 = 107;
			break;
		
		case 7:
			*uParam1 = 104;
			break;
		
		case 8:
			*uParam1 = 98;
			break;
		
		case 9:
			*uParam1 = 100;
			break;
		
		case 10:
			*uParam1 = 102;
			break;
		
		case 11:
			*uParam1 = 99;
			break;
		
		case 12:
			*uParam1 = 105;
			break;
		
		case 13:
			*uParam1 = 106;
			break;
		
		case 14:
			*uParam1 = 37;
			break;
		
		case 15:
			*uParam1 = 90;
			break;
		
		case 16:
			*uParam1 = 88;
			break;
		
		case 17:
			*uParam1 = 89;
			break;
		
		case 18:
			*uParam1 = 91;
			break;
		
		case 19:
			*uParam1 = 38;
			break;
		
		case 20:
			*uParam1 = 138;
			break;
		
		case 21:
			*uParam1 = 36;
			break;
		
		case 22:
			*uParam1 = 27;
			break;
		
		case 23:
			*uParam1 = 28;
			break;
		
		case 24:
			*uParam1 = 29;
			break;
		
		case 25:
			*uParam1 = 150;
			break;
		
		case 26:
			*uParam1 = 30;
			break;
		
		case 27:
			*uParam1 = 31;
			break;
		
		case 28:
			*uParam1 = 32;
			break;
		
		case 29:
			*uParam1 = 35;
			break;
		
		case 30:
			*uParam1 = 135;
			break;
		
		case 31:
			*uParam1 = 137;
			break;
		
		case 32:
			*uParam1 = 136;
			break;
		
		case 33:
			*uParam1 = 71;
			break;
		
		case 34:
			*uParam1 = 145;
			break;
		
		case 35:
			*uParam1 = 63;
			break;
		
		case 36:
			*uParam1 = 64;
			break;
		
		case 37:
			*uParam1 = 65;
			break;
		
		case 38:
			*uParam1 = 66;
			break;
		
		case 39:
			*uParam1 = 67;
			break;
		
		case 40:
			*uParam1 = 68;
			break;
		
		case 41:
			*uParam1 = 69;
			break;
		
		case 42:
			*uParam1 = 73;
			break;
		
		case 43:
			*uParam1 = 70;
			break;
		
		case 44:
			*uParam1 = 74;
			break;
		
		case 45:
			*uParam1 = 51;
			break;
		
		case 46:
			*uParam1 = 53;
			break;
		
		case 47:
			*uParam1 = 54;
			break;
		
		case 48:
			*uParam1 = 92;
			break;
	}
	return *uParam1 != -1;
}

int func_244(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_245(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_246()) && Global_1576202)
	{
		if ((iParam0 == Global_1576203 && iParam1 == Global_1576204) && iParam2 == Global_1576205)
		{
			return 13;
		}
	}
	return 0;
}

int func_246()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_247() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_247()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_248(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("deathbike2"):
			return 1;
			break;
	}
	return 0;
}

bool func_249(int iParam0, var uParam1)
{
	*uParam1 = -1f;
	switch (iParam0)
	{
		case joaat("dune5"):
			*uParam1 = 1f;
			break;
		
		case joaat("boxville5"):
			*uParam1 = 1f;
			break;
		
		case joaat("wastelander"):
			*uParam1 = 1f;
			break;
		
		case joaat("alphaz1"):
			*uParam1 = 0,2f;
			break;
		
		case joaat("bombushka"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("howard"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("hunter"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("microlight"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("mogul"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("molotok"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("nokota"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("pyro"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("rogue"):
			*uParam1 = 0,4f;
			break;
		
		case joaat("seabreeze"):
			*uParam1 = 0,3f;
			break;
		
		case joaat("starling"):
			*uParam1 = 0,5f;
			break;
		
		case joaat("tula"):
			*uParam1 = 0,15f;
			break;
		
		case joaat("khanjali"):
			*uParam1 = 0,6f;
			break;
		
		case joaat("bruiser"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser2"):
			*uParam1 = 1f;
			break;
		
		case joaat("bruiser3"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("brutus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus2"):
			*uParam1 = 1f;
			break;
		
		case joaat("cerberus3"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike2"):
			*uParam1 = 1f;
			break;
		
		case joaat("deathbike3"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator4"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator5"):
			*uParam1 = 1f;
			break;
		
		case joaat("dominator6"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler2"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler3"):
			*uParam1 = 1f;
			break;
		
		case joaat("impaler4"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator2"):
			*uParam1 = 1f;
			break;
		
		case joaat("imperator3"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi4"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi5"):
			*uParam1 = 1f;
			break;
		
		case joaat("issi6"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster3"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster4"):
			*uParam1 = 1f;
			break;
		
		case joaat("monster5"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab2"):
			*uParam1 = 1f;
			break;
		
		case joaat("scarab3"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan4"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan5"):
			*uParam1 = 1f;
			break;
		
		case joaat("slamvan6"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr380"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3802"):
			*uParam1 = 1f;
			break;
		
		case joaat("zr3803"):
			*uParam1 = 1f;
			break;
	}
	return *uParam1 != -1f;
}

int func_250(int iParam0)
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
			return 1;
			break;
	}
	return 0;
}

void func_251(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (uParam1->f_66 != 0)
		{
		}
		if (!func_262(iParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
			}
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
			{
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
			}
		}
		if (uParam1->f_66 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco"))
		{
			iVar0 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar0 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_261(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2"))
		{
			iVar1 = 1;
			if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar1 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_261(iVar1 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("formula") || uParam1->f_66 == joaat("formula2"))
		{
			iVar2 = 1;
			while (iVar2 <= 9)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar2)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_261(iVar2));
				}
				iVar2++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel1"))
		{
			iVar3 = 1;
			while (iVar3 <= 6)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar3)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_261(iVar3));
				}
				iVar3++;
			}
		}
		else if (uParam1->f_66 == joaat("openwheel2"))
		{
			iVar4 = 1;
			while (iVar4 <= 11)
			{
				if (iVar4 != 9 && iVar4 != 10)
				{
					if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar4)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_261(iVar4));
					}
				}
				iVar4++;
			}
		}
		else if (uParam1->f_66 == joaat("dinghy5"))
		{
			if (MISC::IS_BIT_SET(uParam1->f_77, func_261(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_261(4));
			}
		}
		else if (uParam1->f_66 == joaat("coquette4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 10) != 0)
			{
				MISC::SET_BIT(&(uParam1->f_77), 0);
			}
		}
		else if (uParam1->f_66 == joaat("yosemite2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_261(1));
		}
		if (uParam1->f_66 == joaat("nightshark"))
		{
			VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, false);
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 5) != -1)
			{
				VEHICLE::_SET_DISABLE_VEHICLE_WINDOW_COLLISIONS(iParam0, true);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		}
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_77, 15) || func_260(iParam0)) || (((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0) && uParam1->f_9[20] > 0)) && func_259())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if ((uParam1->f_62 == 0 && uParam1->f_63 == 0) && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && !func_258(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_65);
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, false);
			VEHICLE::_SET_DRIFT_TYRES_ENABLED(iParam0, false);
		}
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_70);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_77, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_67 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_69 == 6)
					{
						func_257(iParam0, uParam1->f_69);
					}
				}
				else
				{
					func_257(iParam0, uParam1->f_69);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			if ((uParam1->f_68 == 0 || uParam1->f_68 == 3) || uParam1->f_68 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, true);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, true);
			}
		}
		if (bParam3)
		{
			func_252(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			iVar5 = 0;
			while (iVar5 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, func_261(iVar5 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar5 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar5 + 1, true);
				}
				iVar5++;
			}
		}
		if ((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("sheava") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("omnis")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("le7b"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(iParam0, 0) == -1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iParam0, 1, false);
			}
		}
		if (((VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::_DOES_VEHICLE_HAVE_LANDING_GEAR(iParam0)) && !VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("avenger"))) && !((((Global_4718592.f_77711 == 6 || Global_4718592.f_77711 == 7) || Global_4718592.f_77711 == 18) || Global_4718592.f_77711 == 19) && Global_4718592.f_2 == 20))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_77, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_77, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_77, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", true);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", false);
		}
	}
}

int func_252(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (iVar1 == 22)
		{
			if ((*uParam1)[iVar0] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, true);
				if ((*uParam1)[iVar0] == 1)
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, 255);
				}
				else
				{
					VEHICLE::_SET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0, ((*uParam1)[iVar0] - 2));
				}
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_256(ENTITY::GET_ENTITY_MODEL(*iParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*iParam0, 24) != func_255(*iParam0, ((*uParam1)[38] - 1)))
	{
		VEHICLE::SET_VEHICLE_MOD(*iParam0, 24, func_255(*iParam0, ((*uParam1)[38] - 1)), false);
	}
	func_254(iParam0);
	if (func_253(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}

int func_253(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[32];
	
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 32);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_254(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("starling"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
			{
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			}
			break;
		
		case joaat("slamtruck"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
		
		default:
			break;
	}
}

int func_255(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(iParam0))
		{
			case joaat("tornado5"):
				switch (iParam1)
				{
					case 0:
						return 0;
						break;
					
					case 1:
						return 1;
						break;
					
					case 2:
						return 2;
						break;
					
					case 3:
						return 3;
						break;
					
					case 4:
						return 4;
						break;
					
					case 5:
						return 4;
						break;
				}
				break;
			
			case joaat("faction3"):
				return 3;
				break;
		}
		iVar0 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 38);
		iVar1 = VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, 24);
		fVar2 = (SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(iVar0));
		iVar3 = (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar1) * fVar2)) - 1);
		if (iVar3 < 0)
		{
			iVar3 = 0;
		}
		if (iVar3 >= iVar0)
		{
			iVar3 = (iVar0 - 1);
		}
		return iVar3;
	}
	return 0;
}

int func_256(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14483)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14484)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14482)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14485)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14487)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14486)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18935)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18937)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18941)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18938)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18945)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18943)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18948)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20893)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20894)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	
	if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = VEHICLE::GET_VEHICLE_MOD(iParam0, 24);
		bVar1 = VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, iParam1);
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tornado6") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("peyote2"))
		{
			return;
		}
		if (iVar0 == -1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 24);
		}
		else
		{
			VEHICLE::SET_VEHICLE_MOD(iParam0, 24, iVar0, bVar1 == 1);
		}
	}
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

bool func_259()
{
	return DLC::IS_DLC_PRESENT(joaat("mpindependence"));
}

int func_260(int iParam0)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(iVar0, 4);
			}
		}
	}
	return 0;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_262(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!func_263(PLAYER::PLAYER_ID(), -1))
		{
			iParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	if (func_226(PLAYER::PLAYER_ID()) == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_225(iParam0) != -1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_263(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_9(iParam0, 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iParam0), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iParam1, false))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_264(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1,5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2810287.f_6635 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_265(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_265(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_266(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2667222.f_2919[1 /*6*/].f_5 == iParam5 && Global_2667222.f_2919[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2667222.f_2919[1 /*6*/], Param0) < 0,5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2667222.f_2919[iVar0 /*6*/] = { Global_2667222.f_2919[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2667222.f_2919[1 /*6*/] = { Param0 };
		Global_2667222.f_2919[1 /*6*/].f_3 = fParam3;
		Global_2667222.f_2919[1 /*6*/].f_4 = iParam4;
		Global_2667222.f_2919[1 /*6*/].f_5 = iParam5;
	}
}

int func_266(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0,5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

void func_267(struct<3> Param0, float fParam3, bool bParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_284(&(Global_76670.f_555[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_76670.f_555[0 /*21*/], bParam4) <= fParam3)
			{
				func_268(iVar0);
			}
		}
		iVar0++;
	}
}

void func_268(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_284(&(Global_76670.f_555[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_76670.f_139[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_76670.f_139[iParam0], false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_76670.f_139[iParam0], false))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_76670.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&(Global_76670.f_139[iParam0]));
			}
		}
		Global_76670[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_76670.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_283(iParam0, 0)) && Global_77579.f_66 == 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] != 0) && Global_112915.f_32749.f_1958[Global_76670.f_555[0 /*21*/].f_14] > 3) && (!func_272(0, Global_76670.f_555[0 /*21*/].f_12) || !func_272(1, Global_76670.f_555[0 /*21*/].f_12)))
			{
				func_271(&(Global_112915.f_32749.f_69[Global_76670.f_555[0 /*21*/].f_14 /*78*/]), &Global_77579);
				Global_77657 = Global_112915.f_32749.f_5591;
			}
			func_269(iParam0, 0);
		}
	}
}

void func_269(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_283(iParam0, 0))
		{
			func_270(iParam0, 1, 0);
			func_270(iParam0, 2, 0);
			func_270(iParam0, 3, 0);
			func_270(iParam0, 4, 0);
			func_270(iParam0, 0, 1);
			Global_76670[iParam0] = 1;
		}
	}
	else
	{
		func_270(iParam0, 0, 0);
	}
}

void func_270(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_112915.f_32749[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_112915.f_32749[iParam0]), iParam1);
	}
}

void func_271(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

int func_272(int iParam0, int iParam1)
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_282(&(Global_112915.f_32749.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_273(Global_112915.f_32749.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_273(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_281())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_280() && !func_279()) && !func_278()) && !func_277()) && !func_281())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_278())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_276(iParam0))
		{
			return 0;
		}
	}
	if (!func_274(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_274(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_275())
	{
		return 1;
	}
	NETSHOPPING::_NET_GAMESERVER_GET_TRANSACTION_MANAGER_DATA(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_275()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_276(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2783340)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6856 && !Global_262145.f_13186) && iVar1 < Global_262145.f_13187)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14486 && iVar1 < Global_262145.f_14498)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14482 && iVar1 < Global_262145.f_14494)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14483 && iVar1 < Global_262145.f_14495)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14484 && iVar1 < Global_262145.f_14496)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14485 && iVar1 < Global_262145.f_14497)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14487 && iVar1 < Global_262145.f_14499)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14488 && iVar1 < Global_262145.f_14491)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14489 && iVar1 < Global_262145.f_14492)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14490 && iVar1 < Global_262145.f_14493)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17119 && iVar1 < Global_262145.f_17084)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17114 && iVar1 < Global_262145.f_17079)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17118 && iVar1 < Global_262145.f_17083)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17117 && iVar1 < Global_262145.f_17082)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17111 && iVar1 < Global_262145.f_17076)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17112 && iVar1 < Global_262145.f_17077)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17115 && iVar1 < Global_262145.f_17080)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17116 && iVar1 < Global_262145.f_17081)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17113 && iVar1 < Global_262145.f_17078)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17121 && iVar1 < Global_262145.f_17086)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17122 && iVar1 < Global_262145.f_17087)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17110 && iVar1 < Global_262145.f_17075)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17109 && iVar1 < Global_262145.f_17074)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17108 && iVar1 < Global_262145.f_17073)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17120 && iVar1 < Global_262145.f_17085)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17123 && iVar1 < Global_262145.f_17088)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17124 && iVar1 < Global_262145.f_17089)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17125 && iVar1 < Global_262145.f_17090)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17126 && iVar1 < Global_262145.f_17091)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17273 && iVar1 < Global_262145.f_17295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17274 && iVar1 < Global_262145.f_17296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17275 && iVar1 < Global_262145.f_17297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17276 && iVar1 < Global_262145.f_17298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17277 && iVar1 < Global_262145.f_17299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17278 && iVar1 < Global_262145.f_17300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17280 && iVar1 < Global_262145.f_17301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17281 && iVar1 < Global_262145.f_17302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17282 && iVar1 < Global_262145.f_17303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17283 && iVar1 < Global_262145.f_17304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17284 && iVar1 < Global_262145.f_17305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17285 && iVar1 < Global_262145.f_17306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17286 && iVar1 < Global_262145.f_17307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17292 && iVar1 < Global_262145.f_17314)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17289 && iVar1 < Global_262145.f_17310)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17290 && iVar1 < Global_262145.f_17311)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17291 && iVar1 < Global_262145.f_17312)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17279 && iVar1 < Global_262145.f_17313)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17293 && iVar1 < Global_262145.f_17315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17287 && iVar1 < Global_262145.f_17308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17288 && iVar1 < Global_262145.f_17309)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17294 && iVar1 < Global_262145.f_17316)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18925 && iVar1 < Global_262145.f_19022)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18926 && iVar1 < Global_262145.f_19023)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18927 && iVar1 < Global_262145.f_19024)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18928 && iVar1 < Global_262145.f_19025)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18929 && iVar1 < Global_262145.f_19026)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18930 && iVar1 < Global_262145.f_19027)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18931 && iVar1 < Global_262145.f_19028)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18932 && iVar1 < Global_262145.f_19029)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18933 && iVar1 < Global_262145.f_19030)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18934 && iVar1 < Global_262145.f_19031)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18935 && iVar1 < Global_262145.f_19032)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18936 && iVar1 < Global_262145.f_19033)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18937 && iVar1 < Global_262145.f_19034)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18938 && iVar1 < Global_262145.f_19035)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18939 && iVar1 < Global_262145.f_19036)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18940 && iVar1 < Global_262145.f_19037)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18941 && iVar1 < Global_262145.f_19038)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18942 && iVar1 < Global_262145.f_19039)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18943 && iVar1 < Global_262145.f_19040)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18944 && iVar1 < Global_262145.f_19041)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18945 && iVar1 < Global_262145.f_19042)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18946 && iVar1 < Global_262145.f_19043)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18947 && iVar1 < Global_262145.f_19044)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18948 && iVar1 < Global_262145.f_19045)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18949 && iVar1 < Global_262145.f_19046)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20006 && iVar1 < Global_262145.f_20002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20007 && iVar1 < Global_262145.f_20003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20008 && iVar1 < Global_262145.f_20004)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20009 && iVar1 < Global_262145.f_20005)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20887 && iVar1 < Global_262145.f_20895)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20888 && iVar1 < Global_262145.f_20896)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20889 && iVar1 < Global_262145.f_20897)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20890 && iVar1 < Global_262145.f_20898)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20891 && iVar1 < Global_262145.f_20899)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20892 && iVar1 < Global_262145.f_20900)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21668 && iVar1 < Global_262145.f_21688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21680 && iVar1 < Global_262145.f_21700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21671 && iVar1 < Global_262145.f_21691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21681 && iVar1 < Global_262145.f_21701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21669 && iVar1 < Global_262145.f_21689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21685 && iVar1 < Global_262145.f_21705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21683 && iVar1 < Global_262145.f_21703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21684 && iVar1 < Global_262145.f_21704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21679 && iVar1 < Global_262145.f_21699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21686 && iVar1 < Global_262145.f_21706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21682 && iVar1 < Global_262145.f_21702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21678 && iVar1 < Global_262145.f_21698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21670 && iVar1 < Global_262145.f_21690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21672 && iVar1 < Global_262145.f_21692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21673 && iVar1 < Global_262145.f_21693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21674 && iVar1 < Global_262145.f_21694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21675 && iVar1 < Global_262145.f_21695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21676 && iVar1 < Global_262145.f_21696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21677 && iVar1 < Global_262145.f_21697)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22629 && iVar1 < Global_262145.f_22657)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_22630 && iVar1 < Global_262145.f_22658)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22631 && iVar1 < Global_262145.f_22659)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22632 && iVar1 < Global_262145.f_22660)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22633 && iVar1 < Global_262145.f_22661)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22634 && iVar1 < Global_262145.f_22662)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22635 && iVar1 < Global_262145.f_22663)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22636 && iVar1 < Global_262145.f_22664)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22637 && iVar1 < Global_262145.f_22665)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22638 && iVar1 < Global_262145.f_22666)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22639 && iVar1 < Global_262145.f_22667)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22640 && iVar1 < Global_262145.f_22668)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22641 && iVar1 < Global_262145.f_22669)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22642 && iVar1 < Global_262145.f_22670)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22643 && iVar1 < Global_262145.f_22671)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22644 && iVar1 < Global_262145.f_22672)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22645 && iVar1 < Global_262145.f_22673)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22646 && iVar1 < Global_262145.f_22674)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22647 && iVar1 < Global_262145.f_22675)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22648 && iVar1 < Global_262145.f_22676)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22649 && iVar1 < Global_262145.f_22677)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22650 && iVar1 < Global_262145.f_22678)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22651 && iVar1 < Global_262145.f_22679)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22652 && iVar1 < Global_262145.f_22680)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22653 && iVar1 < Global_262145.f_22681)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22654 && iVar1 < Global_262145.f_22682)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22655 && iVar1 < Global_262145.f_22683)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22656 && iVar1 < Global_262145.f_22684)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23849 && iVar1 < Global_262145.f_23865)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23850 && iVar1 < Global_262145.f_23866)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23854 && iVar1 < Global_262145.f_23870)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23857 && iVar1 < Global_262145.f_23873)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23862 && iVar1 < Global_262145.f_23878)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23856 && iVar1 < Global_262145.f_23872)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23848 && iVar1 < Global_262145.f_23864)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23855 && iVar1 < Global_262145.f_23871)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23861 && iVar1 < Global_262145.f_23877)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23860 && iVar1 < Global_262145.f_23876)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23851 && iVar1 < Global_262145.f_23867)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23853 && iVar1 < Global_262145.f_23869)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23863 && iVar1 < Global_262145.f_23879)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23859 && iVar1 < Global_262145.f_23875)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23852 && iVar1 < Global_262145.f_23868)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23858 && iVar1 < Global_262145.f_23874)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_23939 && iVar1 < Global_262145.f_23926)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23940 && iVar1 < Global_262145.f_23927)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23945 && iVar1 < Global_262145.f_23932)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23944 && iVar1 < Global_262145.f_23931)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23942 && iVar1 < Global_262145.f_23929)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23948 && iVar1 < Global_262145.f_23935)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23950 && iVar1 < Global_262145.f_23937)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23951 && iVar1 < Global_262145.f_23938)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23949 && iVar1 < Global_262145.f_23936)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23941 && iVar1 < Global_262145.f_23928)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23943 && iVar1 < Global_262145.f_23930)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23947 && iVar1 < Global_262145.f_23934)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23946 && iVar1 < Global_262145.f_23933)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_26416 && iVar1 < Global_262145.f_26418)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_25429 && iVar1 < Global_262145.f_25422)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_25430 && iVar1 < Global_262145.f_25423)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_25431 && iVar1 < Global_262145.f_25424)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_25432 && iVar1 < Global_262145.f_25425)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_26417 && iVar1 < Global_262145.f_26419)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_25433 && iVar1 < Global_262145.f_25426)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_25434 && iVar1 < Global_262145.f_25427)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_25435 && iVar1 < Global_262145.f_25428)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_25440 && iVar1 < Global_262145.f_25461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_25441 && iVar1 < Global_262145.f_25462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_25442 && iVar1 < Global_262145.f_25463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_25443 && iVar1 < Global_262145.f_25464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_25444 && iVar1 < Global_262145.f_25465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_25445 && iVar1 < Global_262145.f_25466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_25446 && iVar1 < Global_262145.f_25467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_25447 && iVar1 < Global_262145.f_25468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_25448 && iVar1 < Global_262145.f_25469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_25449 && iVar1 < Global_262145.f_25470)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_25450 && iVar1 < Global_262145.f_25471)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_25451 && iVar1 < Global_262145.f_25472)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_25452 && iVar1 < Global_262145.f_25473)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_25453 && iVar1 < Global_262145.f_25474)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_25454 && iVar1 < Global_262145.f_25475)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_25455 && iVar1 < Global_262145.f_25476)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_25456 && iVar1 < Global_262145.f_25477)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_25457 && iVar1 < Global_262145.f_25478)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_25458 && iVar1 < Global_262145.f_25479)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_25459 && iVar1 < Global_262145.f_25480)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_25460 && iVar1 < Global_262145.f_25481)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28261 && iVar1 < Global_262145.f_28282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28262 && iVar1 < Global_262145.f_28283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28263 && iVar1 < Global_262145.f_28284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28264 && iVar1 < Global_262145.f_28285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28265 && iVar1 < Global_262145.f_28286)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28266 && iVar1 < Global_262145.f_28287)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28267 && iVar1 < Global_262145.f_28288)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28268 && iVar1 < Global_262145.f_28289)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28269 && iVar1 < Global_262145.f_28290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28270 && iVar1 < Global_262145.f_28291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28271 && iVar1 < Global_262145.f_28292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28272 && iVar1 < Global_262145.f_28293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28273 && iVar1 < Global_262145.f_28294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28274 && iVar1 < Global_262145.f_28295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28275 && iVar1 < Global_262145.f_28296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28276 && iVar1 < Global_262145.f_28297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28277 && iVar1 < Global_262145.f_28298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28278 && iVar1 < Global_262145.f_28299)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28279 && iVar1 < Global_262145.f_28300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28280 && iVar1 < Global_262145.f_28301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28281 && iVar1 < Global_262145.f_28302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28304 && iVar1 < Global_262145.f_28305) && !Global_262145.f_28259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28307 && iVar1 < Global_262145.f_28308) && !Global_262145.f_28260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28312 && iVar1 < Global_262145.f_28315)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28313 && iVar1 < Global_262145.f_28316)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28314 && iVar1 < Global_262145.f_28317)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29330 && iVar1 < Global_262145.f_28995)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_28981 && iVar1 < Global_262145.f_29002)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_28982 && iVar1 < Global_262145.f_28988)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29328 && iVar1 < Global_262145.f_28996)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29329 && iVar1 < Global_262145.f_28997)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_28975 && iVar1 < Global_262145.f_28994)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_28976 && iVar1 < Global_262145.f_29003)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_28977 && iVar1 < Global_262145.f_28993)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_28978 && iVar1 < Global_262145.f_28991)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29324 && iVar1 < Global_262145.f_28998)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29325 && iVar1 < Global_262145.f_28999)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29326 && iVar1 < Global_262145.f_29000)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29327 && iVar1 < Global_262145.f_29001)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_28979 && iVar1 < Global_262145.f_28990)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_28980 && iVar1 < Global_262145.f_28992)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_29775 && iVar1 < Global_262145.f_29758)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_29776 && iVar1 < Global_262145.f_29759)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_29777 && iVar1 < Global_262145.f_29760)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_29778 && iVar1 < Global_262145.f_29761)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_29779 && iVar1 < Global_262145.f_29762)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_29780 && iVar1 < Global_262145.f_29763)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_29781 && iVar1 < Global_262145.f_29764)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_29782 && iVar1 < Global_262145.f_29765)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_29783 && iVar1 < Global_262145.f_29766)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_29792)
		{
		}
		else if (!Global_262145.f_29784 && iVar1 < Global_262145.f_29767)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_29785 && iVar1 < Global_262145.f_29768)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_29786 && iVar1 < Global_262145.f_29769)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_29787 && iVar1 < Global_262145.f_29770)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_29788 && iVar1 < Global_262145.f_29771)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_29793)
		{
		}
		else if (!Global_262145.f_29789 && iVar1 < Global_262145.f_29772)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_29790 && iVar1 < Global_262145.f_29773)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_29791 && iVar1 < Global_262145.f_29774)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_30643 && iVar1 < Global_262145.f_30626)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_30644 && iVar1 < Global_262145.f_30627)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_30645 && iVar1 < Global_262145.f_30628)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_30646 && iVar1 < Global_262145.f_30629)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_30647 && iVar1 < Global_262145.f_30630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_30648 && iVar1 < Global_262145.f_30631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_30649 && iVar1 < Global_262145.f_30632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_30650 && iVar1 < Global_262145.f_30633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_30651 && iVar1 < Global_262145.f_30634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_30652 && iVar1 < Global_262145.f_30635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_30653 && iVar1 < Global_262145.f_30636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_30654 && iVar1 < Global_262145.f_30637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_30655 && iVar1 < Global_262145.f_30638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_30656 && iVar1 < Global_262145.f_30639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_30657 && iVar1 < Global_262145.f_30640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_30658 && iVar1 < Global_262145.f_30641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_30659 && iVar1 < Global_262145.f_30642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_31467 && iVar1 < Global_262145.f_31452)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_31468 && iVar1 < Global_262145.f_31453)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_31469 && iVar1 < Global_262145.f_31454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_31470 && iVar1 < Global_262145.f_31455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_31471 && iVar1 < Global_262145.f_31456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_31472 && iVar1 < Global_262145.f_31457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_31473 && iVar1 < Global_262145.f_31458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_31474 && iVar1 < Global_262145.f_31459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_31475 && iVar1 < Global_262145.f_31460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_31476 && iVar1 < Global_262145.f_31461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_31477 && iVar1 < Global_262145.f_31462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_31478 && iVar1 < Global_262145.f_31463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_31479 && iVar1 < Global_262145.f_31464)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_31480 && iVar1 < Global_262145.f_31465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_31545)
		{
		}
		else if (!Global_262145.f_31481 && iVar1 < Global_262145.f_31466)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_277()
{
	return 0;
}

int func_278()
{
	return 1;
}

int func_279()
{
	return 1;
}

int func_280()
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_281()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_151754 == 2)
	{
		return 1;
	}
	else if (Global_151754 == 3)
	{
		return 0;
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_282(var uParam0)
{
	return *uParam0;
}

bool func_283(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_112915.f_32749[iParam0], iParam1);
}

int func_284(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831,8538f, 172,1154f, 69,9058f };
			uParam0->f_3 = 157,5705f;
			uParam0->f_4 = func_285(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970,943f, 3801,684f, 31,1396f };
			uParam0->f_3 = 301,3964f;
			uParam0->f_4 = func_285(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22,6297f, -1439,137f, 29,6549f };
			uParam0->f_3 = 180,0808f;
			uParam0->f_4 = func_285(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22,5229f, -1434,699f, 29,6552f };
			uParam0->f_3 = 141,6114f;
			uParam0->f_4 = func_285(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10,9281f, 545,669f, 174,7951f };
			uParam0->f_3 = 61,392f;
			uParam0->f_4 = func_285(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6,1093f, 544,9742f, 174,2835f };
			uParam0->f_3 = 92,1548f;
			uParam0->f_4 = func_285(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981,416f, 3808,131f, 31,1384f };
			uParam0->f_3 = 117,2557f;
			uParam0->f_4 = func_285(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158,488f, -1529,367f, 3,8995f };
			uParam0->f_3 = 35,7505f;
			uParam0->f_4 = func_285(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148,2868f, -1270,569f, 28,2252f };
			uParam0->f_3 = 208,4685f;
			uParam0->f_4 = func_285(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459,509f, -1380,45f, 78,3259f };
			uParam0->f_3 = 99,6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518,947f, -1387,865f, -0,5134f };
			uParam0->f_3 = 98,3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353,0926f, 3577,593f, 32,351f };
			uParam0->f_3 = 16,6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652,004f, -3142,348f, 12,9921f };
			uParam0->f_3 = 329,1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271,649f, -3380,685f, 12,9451f };
			uParam0->f_3 = 329,5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735,586f, 3294,531f, 40,1651f };
			uParam0->f_3 = 194,9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846,27f, -1363,19f, 0,22f };
			uParam0->f_3 = 108,78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849,47f, -1354,99f, 0,24f };
			uParam0->f_3 = 109,84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852,47f, -1346,2f, 0,21f };
			uParam0->f_3 = 108,76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745,857f, -1433,904f, 4,0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756,2952f, -1441,609f, 2,9184f };
			uParam0->f_18 = { -738,0606f, -1423,068f, 8,2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761,8486f, -1453,829f, 4,0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772,8158f, -1459,957f, 3,2894f };
			uParam0->f_18 = { -754,3353f, -1440,836f, 8,3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769,3f, 3244f, 41,1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192,7897f, -1020,539f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196,2794f, -1020,479f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199,8872f, -1020,048f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203,6006f, -1019,776f, -99,98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723,2515f, -632,0496f, 27,1484f };
			uParam0->f_3 = 12,9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51,23f, 3111,9f, 24,95f };
			uParam0->f_3 = 46,78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55,7984f, -1096,586f, 25,4223f };
			uParam0->f_3 = 308,0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892,93f, 3192,37f, 11,66f };
			uParam0->f_3 = -132,35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744,308f, 3270,673f, 40,2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751,44f, 3322,643f, 42,1855f };
			uParam0->f_3 = 268,134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377,104f, -2076,2f, 52f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380,42f, -2072,77f, 51,7607f };
			uParam0->f_3 = 37,5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359,389f, 3618,441f, 33,8907f };
			uParam0->f_3 = 108,2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693,1154f, -1018,155f, 21,6387f };
			uParam0->f_3 = 177,6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73,6963f, 495,124f, 143,5226f };
			uParam0->f_3 = 155,5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67,6314f, 891,8266f, 234,5348f };
			uParam0->f_3 = 294,993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533,9048f, -169,2469f, 53,7005f };
			uParam0->f_3 = 1,2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726,8914f, -408,6952f, 34,0416f };
			uParam0->f_3 = 267,7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321,519f, 261,3993f, 61,5709f };
			uParam0->f_3 = 350,7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267,999f, 451,6463f, 93,7071f };
			uParam0->f_3 = 48,9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062,076f, -226,7637f, 37,157f };
			uParam0->f_3 = 234,2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68,16914f, -1558,958f, 29,46904f };
			uParam0->f_3 = 49,90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589,4399f, 2736,708f, 42,03316f };
			uParam0->f_3 = -175,7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488,774f, -344,5721f, 34,36356f };
			uParam0->f_3 = 82,4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288,8808f, -585,4728f, 43,15428f };
			uParam0->f_3 = -20,80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304,8294f, -1383,674f, 31,67744f };
			uParam0->f_3 = -41,11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126,194f, -1481,486f, 34,7016f };
			uParam0->f_3 = -91,43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598,36f, 5252,84f, 0f };
			uParam0->f_3 = 28,14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602,62f, 5260,37f, 0,86f };
			uParam0->f_3 = 25,32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116,571f, 4763,279f, 40,1596f };
			uParam0->f_3 = 198,723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133,21f, 120,2f, 80,9f };
			uParam0->f_3 = 134,4f;
			if (func_281())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806,31f, -2679,65f, 13,9f };
			uParam0->f_3 = 150,54f;
			if (func_281())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985,85f, 3828,96f, 31,98f };
			uParam0->f_3 = -16,58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870,75f, 4464,67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257,729f, -2564,474f, 41,717f };
			uParam0->f_3 = 284,5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643,2823f, 3014,152f, 42,2733f };
			uParam0->f_3 = 128,0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38,9368f, 850,8677f, 196,3f };
			uParam0->f_3 = 311,6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333,875f, 4262,226f, 30,78f };
			uParam0->f_3 = 262,5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_112915.f_32749.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678,8f, 3229,6f, 41,8f };
				uParam0->f_3 = 106,0906f;
			}
		}
		if (!func_219(Global_112915.f_32749.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_32749.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_112915.f_32749.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_112915.f_32749.f_1934[uParam0->f_14];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_219(Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_219(Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_112915.f_2363.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_112915.f_2363.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_285(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_287(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_286(iParam0, &Var0, iParam1);
		return Var0.f_0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_286(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_112915.f_9085.f_99.f_58[128] && !Global_112915.f_9085.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14,9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_112915.f_9085.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_112915.f_9085.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

bool func_287(int iParam0)
{
	return iParam0 < 3;
}

int func_288(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (func_291(iParam0, &Var4, &Var1, &uVar0))
	{
		if (func_290(iParam0, Var4, Var1, uVar0))
		{
			Local_3199.f_513 = { Var4 };
			Local_3199.f_522 = func_289(Var4, Var1);
			return 1;
		}
	}
	return 0;
}

float func_289(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3.f_0 - Param0.f_0), (Param3.f_1 - Param0.f_1));
}

int func_290(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	float fVar0;
	
	if (!func_93(Param1, 20f, 1f, 1f, 15f, 1, 1, 1, 200f, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param1, &fVar0, true, false))
	{
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	else
	{
		fVar0 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(Param1.f_0, Param1.f_1);
		if (Param1.f_2 < fVar0)
		{
			return 0;
		}
	}
	return 1;
}

int func_291(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	
	fVar0 = 200f;
	if (func_168(iParam0, 15))
	{
	}
	else
	{
		*uParam2 = { Local_227.f_356.f_1[iParam0 /*14*/].f_4 };
	}
	*uParam1 = { func_293(*uParam2, 0f, ((-1f * fVar0) * SYSTEM::SIN((SYSTEM::TO_FLOAT(iLocal_3140) * 30f))), (fVar0 * SYSTEM::COS((SYSTEM::TO_FLOAT(iLocal_3140) * 30f))), 0f) };
	uParam1->f_2 = (uParam1->f_2 + func_292());
	iLocal_3140++;
	if (iLocal_3140 >= 12)
	{
		iLocal_3140 = 0;
	}
	return 1;
}

float func_292()
{
	return 60f;
}

Vector3 func_293(struct<3> Param0, float fParam3, struct<2> Param4, float fParam6)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	fVar3 = fParam3;
	fVar4 = SYSTEM::COS(fVar3);
	fVar5 = SYSTEM::SIN(fVar3);
	Var0.f_0 = ((Param4.f_0 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4.f_0 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

int func_294(int iParam0)
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	float fVar10;
	
	if (func_296(iParam0, &Var1, &Var4, &fVar10, &uVar0))
	{
		if (MISC::FIND_SPAWN_POINT_IN_DIRECTION(Var4, Var1, fVar10, &Var7))
		{
			if (func_295(iParam0, Var7, Var4, uVar0))
			{
				Local_3199.f_513 = { Var7 };
				Local_3199.f_522 = func_289(Var7, Var4);
				return 1;
			}
		}
	}
	return 0;
}

int func_295(int iParam0, struct<3> Param1, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (Local_1231.f_338.f_42 != 0)
	{
		Stack.Push(iParam0);
		Stack.Push(Param1);
		Call_Loc(Local_1231.f_338.f_42);
		if (!StackVal)
		{
			return 0;
		}
	}
	else if (!func_93(Param1, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_296(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (func_168(iParam0, 15))
	{
	}
	else if (Local_1231.f_338.f_39 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_39);
		*uParam1 = { StackVal, StackVal, StackVal };
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_39);
		*uParam2 = { StackVal, StackVal, StackVal };
	}
	else
	{
		*uParam1 = { Local_227.f_356.f_1[iParam0 /*14*/].f_4 };
		*uParam2 = { Local_227.f_356.f_1[iParam0 /*14*/].f_4 };
	}
	if (iLocal_3140 > 0)
	{
		func_297(uParam1);
	}
	if (!func_168(iParam0, 15) && Local_1231.f_338.f_41 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_41);
		*uParam3 = StackVal;
	}
	else if ((uParam1->f_2 >= 0f && uParam1->f_2 < 90f) || (uParam1->f_2 >= 270f && uParam1->f_2 < 360f))
	{
		*uParam3 = 120f;
	}
	else
	{
		*uParam3 = 60f;
	}
	return 1;
}

void func_297(var uParam0)
{
	if (iLocal_3140 < 5)
	{
		switch (iLocal_3140)
		{
			case 1:
				*uParam0 = { *uParam0 + Vector(10f, 0f, 0f) };
				break;
			
			case 2:
				*uParam0 = { *uParam0 + Vector(20f, 0f, 0f) };
				break;
			
			case 3:
				*uParam0 = { *uParam0 - Vector(10f, 0f, 0f) };
				break;
			
			case 4:
				*uParam0 = { *uParam0 - Vector(20f, 0f, 0f) };
				break;
		}
		if (uParam0->f_2 > 360f)
		{
			uParam0->f_2 = (uParam0->f_2 - 360f);
		}
	}
	else
	{
		iLocal_3140 = 0;
	}
	iLocal_3140++;
}

bool func_298(int iParam0, var uParam1, var uParam2)
{
	struct<35> Var0;
	
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_338.f_38);
	Var0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
	return func_299(Local_227.f_356.f_1[iParam0 /*14*/].f_4, Local_227.f_356.f_1[iParam0 /*14*/].f_4, Local_227.f_356.f_1[iParam0 /*14*/].f_3, 0, uParam1, uParam2, &Var0);
}

int func_299(struct<3> Param0, struct<3> Param3, int iParam6, int iParam7, var uParam8, var uParam9, var uParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var66;
	
	bVar0 = false;
	if (uParam10->f_14)
	{
		if (uParam10->f_25)
		{
			uParam10->f_25 = 0;
		}
	}
	if (!func_421())
	{
		return 0;
	}
	if (func_420() && !Global_2667222.f_679 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667222.f_675 == 0)
		{
			Global_2667222.f_675 = 0;
			func_419();
			func_418();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667222.f_674)
	{
		if (!Global_2667222.f_675 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_678) < func_417(0))
			{
				return 0;
			}
			else
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_676) > 30000)
		{
			Global_2667222.f_675 = 0;
		}
		if (!Global_2667222.f_675 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_678) > func_417(1))
			{
				Global_2667222.f_675 = 0;
			}
		}
	}
	if (uParam10->f_6)
	{
		if (func_411(Param0))
		{
			if (func_410(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667222.f_675 == 0)
	{
		if (SYSTEM::VDIST(Global_2667222.f_694, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667222.f_697 != iParam6)
		{
			return 0;
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667222.f_675 == 0)
	{
		Global_2667222.f_681 = 0;
		Global_2667222.f_676 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667222.f_674 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667222.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667222.f_694 = { Param0 };
		Global_2667222.f_697 = iParam6;
		Global_2667222.f_680 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_409();
		func_419();
		if (!uParam10->f_27 || (((((((func_408(Param0, 1, 1133903872) && !uParam10->f_28) && !Global_2810287.f_924) && !Global_2810287.f_913) && !Global_2810287.f_921) && !Global_2810287.f_925) && !Global_2810287.f_933) && !Global_2810287.f_945))
		{
			func_389(Param0, iParam6);
		}
		if (func_375(Param0))
		{
			func_389(Param0, iParam6);
		}
		Global_2667222.f_675 = 2;
	}
	switch (Global_2667222.f_675)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667222.f_682 = { Param0 };
				Global_2667222.f_685 = 0f;
				if (Global_2810287.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam10->f_3 && func_93(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam10->f_7) && !func_373(Param0, *uParam9, iParam6, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667222.f_682 = { Param0 };
					Global_2667222.f_685 = *uParam9;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam7;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam10->f_5;
					Var5.f_4 = *uParam10;
					Var5.f_13 = uParam10->f_1;
					Var5.f_14 = uParam10->f_2;
					Var5.f_5 = uParam10->f_4;
					Var5.f_15 = uParam10->f_6;
					Var5.f_11 = uParam10->f_7;
					Var5.f_6 = uParam10->f_8;
					Var5.f_7 = uParam10->f_9;
					Var5.f_16 = uParam10->f_10;
					Var5.f_17 = uParam10->f_11;
					Var5 = { Param3 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam6;
					Var5.f_31 = uParam10->f_13;
					if (uParam10->f_32 && Global_2667222.f_681 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam10->f_30;
						Var5.f_29 = uParam10->f_31;
					}
					Var5.f_48 = uParam10->f_14;
					Var5.f_56 = uParam10->f_25;
					Var5.f_57 = uParam10->f_26;
					Var5.f_49 = uParam10->f_29;
					Var5.f_59 = uParam10->f_33;
					Var5.f_60 = uParam10->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam10->f_22[iVar1];
						iVar1++;
					}
					func_319(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var5);
				}
				func_317(Global_2667222.f_682, Global_2667222.f_685, iParam6, &(Global_2667222.f_672));
				Global_2667222.f_670 = 0;
				Global_2667222.f_671 = 0;
				Global_2667222.f_681++;
				Global_2667222.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667222.f_676 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667222.f_675 = 3;
			}
			break;
		
		case 3:
			if (Global_2667222.f_670)
			{
				if (Global_2667222.f_672 == Global_2667222.f_673)
				{
					if (Global_2667222.f_671)
					{
						if (uParam10->f_12 && !uParam10->f_11)
						{
							if (func_316(Global_2667222.f_682, Global_2667222.f_685, iParam6, 1, 1036831949))
							{
								Global_2667222.f_675 = 4;
								Global_2667222.f_699 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_314(Global_2667222.f_682, 0);
						func_313(-1);
					}
				}
				else
				{
					Global_2667222.f_670 = 0;
					Global_2667222.f_671 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_677) > 3000)
			{
				func_313(-1);
			}
			break;
		
		case 4:
			if (uParam10->f_12 && !uParam10->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_699) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667222.f_698))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667222.f_698))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667222.f_698))
							{
								if (func_312(Global_2667222.f_682, Global_2667222.f_685, iParam6, PLAYER::PLAYER_ID(), 0) || func_301(Global_2667222.f_682, Global_2667222.f_685, iParam6, 1, 0, 0, 0, 1, 0))
								{
									func_314(Global_2667222.f_682, 0);
									func_313(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_314(Global_2667222.f_682, 0);
								func_313(-1);
							}
						}
					}
					else
					{
						func_313(-1);
					}
				}
				else
				{
					func_313(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		
		case 5:
			Global_2667222.f_682 = { Param0 };
			Global_2667222.f_685 = 0f;
			Var66.f_6 = 1082130432;
			Var66.f_7 = 1176255488;
			Var66.f_8 = 1;
			Var66.f_10 = 1;
			Var66.f_13 = 1;
			Var66.f_15 = 1;
			Var66.f_16 = 1;
			Var66.f_31 = 1;
			Var66.f_34 = joaat("tailgater");
			Var66.f_38 = 2;
			Var66.f_45 = 2;
			Var66.f_49 = 1123024896;
			Var66.f_53 = 999;
			Var66.f_54 = 1176256410;
			Var66.f_55 = 1;
			Var66.f_56 = 1;
			Var66.f_57 = 1;
			Var66.f_9 = iParam7;
			Var66.f_3 = 3,5f;
			Var66.f_10 = uParam10->f_5;
			Var66.f_4 = *uParam10;
			Var66.f_12 = 1;
			Var66.f_13 = 0;
			Var66.f_15 = uParam10->f_6;
			Var66.f_11 = uParam10->f_7;
			Var66.f_6 = uParam10->f_8;
			Var66.f_7 = uParam10->f_9;
			Var66 = { Param3 };
			Var66.f_34 = iParam6;
			Var66.f_31 = uParam10->f_13;
			Var66.f_30 = 1;
			Var66.f_48 = uParam10->f_14;
			Var66.f_56 = uParam10->f_25;
			Var66.f_57 = uParam10->f_26;
			Var66.f_30 = uParam10->f_30;
			Var66.f_29 = uParam10->f_31;
			Var66.f_59 = uParam10->f_33;
			Var66.f_60 = uParam10->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var66.f_38[iVar1 /*3*/] = { uParam10->f_15[iVar1 /*3*/] };
				Var66.f_45[iVar1] = uParam10->f_22[iVar1];
				iVar1++;
			}
			Var66.f_49 = uParam10->f_29;
			func_319(&(Global_2667222.f_682), &(Global_2667222.f_685), &Var66);
			Global_2667222.f_675 = 6;
			break;
		
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667222.f_694 = { Param0 };
	Global_2667222.f_697 = iParam6;
	Global_2667222.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667222.f_515 = 0;
		*uParam8 = { Global_2667222.f_682 };
		*uParam9 = Global_2667222.f_685;
		func_300(1);
		return 1;
	}
	return 0;
}

void func_300(bool bParam0)
{
	Global_2667222.f_675 = 0;
	func_409();
	func_419();
	if (bParam0)
	{
		func_418();
	}
}

int func_301(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_9(iVar1, bParam5, bParam6))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_95(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_103(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0,1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_311(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_302(func_100(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_302(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_310(iParam7, 1008981770))
	{
		func_303(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_303(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_309(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_304(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0,5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_304(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_307(iParam0);
		if (iVar0 != 0)
		{
			func_305(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0,01f || SYSTEM::VMAG(*uParam2) <= 0,01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20,7f)
			{
				fParam4 = 20,7f;
			}
			if (fParam3 < 137,2f)
			{
				fParam3 = 137,2f;
			}
			if (fParam5 < 21,1f)
			{
				fParam5 = 21,1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0,5f));
		*uParam2 = (0f + (fParam4 * 0,5f));
		uParam1->f_1 = (0f - (fParam3 * 0,5f));
		uParam2->f_1 = (0f + (fParam3 * 0,5f));
		uParam1->f_2 = (0f - (fParam5 * 0,5f));
		uParam2->f_2 = (0f + (fParam5 * 0,5f));
	}
}

void func_305(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_306(iParam0, &Global_1577980);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1577980[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1577980[iVar0], &(Global_1577984[iVar0 /*3*/]), &(Global_1577991[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1577984[iVar0 /*3*/]) <= 0,01f || SYSTEM::VMAG(Global_1577991[iVar0 /*3*/]) <= 0,01f)
		{
			Global_1577984[iVar0 /*3*/] = (0f - (fParam4 * 0,5f));
			Global_1577991[iVar0 /*3*/] = (0f + (fParam4 * 0,5f));
			Global_1577984[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0,5f));
			Global_1577991[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0,5f));
			Global_1577984[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0,5f));
			Global_1577991[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0,5f));
		}
		Global_1577998[iVar0] = (Global_1577991[iVar0 /*3*/] - Global_1577984[iVar0 /*3*/]);
		Global_1578001[iVar0] = (Global_1577991[iVar0 /*3*/].f_1 - Global_1577984[iVar0 /*3*/].f_1);
		Global_1578004[iVar0] = (Global_1577991[iVar0 /*3*/].f_2 - Global_1577984[iVar0 /*3*/].f_2);
		if (Global_1577998[iVar0] > Global_1578007)
		{
			Global_1578007 = Global_1577998[iVar0];
		}
		if (Global_1578004[iVar0] > Global_1578008)
		{
			Global_1578008 = Global_1578004[iVar0];
		}
		iVar0++;
	}
	Global_1578009 = (Global_1578007 * -0,5f);
	Global_1578012 = (Global_1578007 * 0,5f);
	Global_1578009.f_1 = ((((0,5f * Global_1578001[0]) + Global_1578001[1]) + Global_1577980.f_3) * -1f);
	Global_1578012.f_1 = (0,5f * Global_1578001[0]);
	Global_1578009.f_2 = (Global_1578004[0] * -0,5f);
	Global_1578012.f_2 = (Global_1578004[0] * 0,5f);
	*uParam1 = { Global_1578009 };
	*uParam2 = { Global_1578012 };
}

void func_306(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2,6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0,5f;
			break;
	}
}

int func_307(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_308(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_308(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_309(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

float func_310(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_304(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0,5f) * (Var6.f_0 * 0,5f)) + ((Var6.f_1 * 0,5f) * (Var6.f_1 * 0,5f))) + ((Var6.f_2 * 0,5f) * (Var6.f_2 * 0,5f)))) + fParam1);
	return fVar9;
}

int func_311(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_302(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_303(Param0, fParam3, iParam4, &Global_1977108, &(Global_1977108.f_3), &(Global_1977108.f_6), 1036831949);
	func_303(Param5, fParam8, iParam9, &(Global_1977108.f_7), &(Global_1977108.f_10), &(Global_1977108.f_13), 1036831949);
	if (MISC::_0xA0AD167E4B39D9A2(Global_1977108, Global_1977108.f_3, Global_1977108.f_6, Global_1977108.f_7, Global_1977108.f_10, Global_1977108.f_13))
	{
		return 1;
	}
	return 0;
}

int func_312(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_9(iVar1, 0, 1) && func_9(iParam5, 0, 1))
			{
				if (Global_2680195.f_261[iVar0])
				{
					if (func_302(Global_2680195.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_302(func_100(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2680195.f_261[iVar0])
			{
				if (func_302(Global_2680195.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_9(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_302(func_100(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_313(int iParam0)
{
	if (Global_2667222.f_681 < 20 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_680) < 30000)
	{
		if (iParam0 == -1 || (iParam0 > -1 && Global_2667222.f_681 < iParam0))
		{
			Global_2667222.f_675 = 2;
		}
		else
		{
			Global_2667222.f_675 = 5;
		}
	}
	else
	{
		Global_2667222.f_675 = 5;
	}
}

void func_314(struct<3> Param0, int iParam3)
{
	struct<3> Var0;
	
	if (iParam3 == 0 && func_315(Param0, 0,01f))
	{
		return;
	}
	if (iParam3 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667222.f_2735[iParam3 /*3*/] };
		Global_2667222.f_2735[iParam3 /*3*/] = { Param0 };
		func_314(Var0, iParam3 + 1);
	}
}

int func_315(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2667222.f_2735[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_316(struct<3> Param0, float fParam3, int iParam4, bool bParam5, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	float fVar8;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	else
	{
		func_419();
		iVar7 = 0;
		while (iVar7 < 3)
		{
			if (Global_2667222.f_686[iVar7] == -1 && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				func_303(Param0, fParam3, iParam4, &Var0, &Var3, &uVar6, fParam6);
				if (bParam5)
				{
					fVar8 = MISC::ABSF((Var0.f_2 - Var3.f_2));
					Var0.f_2 = (Var0.f_2 + ((fVar8 * 0,5f) - 2f));
					Var3.f_2 = (Var3.f_2 + (fVar8 * 0,5f));
				}
				Global_2667222.f_686[iVar7] = NETWORK::_0x2B1C623823DB0D9D(Var0, Var3, fParam6);
				Global_2667222.f_690[iVar7] = SCRIPT::GET_ID_OF_THIS_THREAD();
				Global_2667222.f_698 = Global_2667222.f_686[iVar7];
				return 1;
			}
			iVar7++;
		}
	}
	return 0;
}

void func_317(struct<3> Param0, var uParam3, int iParam4, var uParam5)
{
	struct<8> Var0;
	
	*uParam5 = func_318(&Param0, &uParam3, &iParam4);
	Var0.f_0 = 2112408256;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_5 = uParam3;
	Var0.f_6 = iParam4;
	Var0.f_7 = *uParam5;
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 8, func_203(1, 1));
}

int func_318(var uParam0, var uParam1, var uParam2)
{
	char cVar0[64];
	int iVar16;
	
	StringCopy(&cVar0, "", 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam0), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_1), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(uParam0->f_2), 64);
	StringIntConCat(&cVar0, SYSTEM::ROUND(*uParam1), 64);
	StringIntConCat(&cVar0, *uParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	return iVar16;
}

void func_319(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2667222.f_1753 > 0)
	{
		iVar0 = 0;
		while (func_368(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_320(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_320(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_364(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999,9f;
	}
	if (uParam2->f_48)
	{
		if (func_359(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2,75f;
			fVar14 = 7,5f;
			break;
		
		default:
			fVar13 = 2,5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2674716.f_162 = 0;
	Global_2674716.f_163 = 0;
	Global_2674716.f_164 = -99;
	Global_2674716.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2674716[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2674716.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_307(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999,9f;
		uParam2->f_7 = 9999,9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2674716.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2674716.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_352(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_349(Var1))
									{
										Var1 = { func_344(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_343(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_339(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_359(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_338(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_364(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0,375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0,375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_337(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_93(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_93(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_301(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_329(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674716.f_162)
																										{
																											Global_2674716[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2674716.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2674716.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674716.f_162 == 0)
																									{
																										Global_2674716[0 /*3*/] = { Var1 };
																										Global_2674716.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2674716.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674716[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_328(Var1, fVar4, iVar16);
																													iVar16 = Global_2674716.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2674716.f_162++;
																									if (Global_2674716.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674716[Global_2674716.f_162 /*3*/] = { Var1 };
																									Global_2674716.f_121[Global_2674716.f_162] = fVar4;
																									Global_2674716.f_162++;
																									if (func_339(Var1, uParam2))
																									{
																										Global_2674716.f_163++;
																									}
																									if (Global_2674716.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674716.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2674716.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
						{
							func_326(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674716.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2674716[0 /*3*/] };
						uVar30 = Global_2674716.f_121[0];
						Global_2674716[0 /*3*/] = { Global_2674716[iVar26 /*3*/] };
						Global_2674716.f_121[0] = Global_2674716.f_121[iVar26];
						Global_2674716[iVar26 /*3*/] = { Var27 };
						Global_2674716.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2674716[0 /*3*/] };
						*uParam1 = Global_2674716.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_325(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_364(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_359(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999,9f;
								uParam2->f_7 = 9999,9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_321(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674716.f_164 = iVar8;
	}
	return 0;
}

void func_321(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_322(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

int func_322(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_324(Param0, fParam3, iParam4, iParam5, 0) || func_323(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_323(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_302(Param0, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_324(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_9(iVar1, 0, 1) && func_9(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_9(iVar1, 0, 1) && func_9(iParam4, 0, 1))
				{
					if (Global_2680195.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_100(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2680195.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2680195.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_9(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_100(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_325(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_344(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_349(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_326(int iParam0, var uParam1)
{
	if (!func_339(Global_2674716[iParam0 /*3*/], uParam1))
	{
		Global_2674716.f_162 = (Global_2674716.f_162 - 1);
		func_327(iParam0);
		if (Global_2674716.f_162 > Global_2674716.f_163)
		{
			func_326(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_326(iParam0 + 1, uParam1);
	}
}

void func_327(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2674716[iParam0 /*3*/] = { Global_2674716[iParam0 + 1 /*3*/] };
			Global_2674716.f_121[iParam0] = Global_2674716.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_328(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2674716[iParam4 /*3*/] };
	uVar3 = Global_2674716.f_121[iParam4];
	Global_2674716[iParam4 /*3*/] = { Param0 };
	Global_2674716.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2674716.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_328(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_329(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999,9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_330(iVar5))
		{
			Var1 = { func_100(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_330(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		if (!func_335(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_332(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_331(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_332(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_103(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4718592.f_543, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_332(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_333(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1853128[iParam0 /*888*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_333(int iParam0)
{
	return func_334(iParam0);
}

bool func_334(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_11.f_1, 0);
}

int func_335(int iParam0)
{
	if (func_96(iParam0, 0))
	{
		return 1;
	}
	if (func_336())
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

bool func_336()
{
	return MISC::IS_BIT_SET(Global_2621446, 3);
}

int func_337(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_311(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_311(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_338(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_312(Param0, fParam3, iParam4, iParam5, iParam6) || func_373(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_339(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_342(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_340(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

int func_340(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_341(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_341(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

bool func_342(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0,01f);
}

int func_343(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_332(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_4980736.f_33237 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_33237)
			{
				if (Global_4980736.f_33238[iVar0 /*125*/].f_7 != 0)
				{
					if (func_302(Param0, Global_4980736.f_33238[iVar0 /*125*/], Global_4980736.f_33238[iVar0 /*125*/].f_6, Global_4980736.f_33238[iVar0 /*125*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_5739 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_5739)
			{
				if (Global_4980736.f_5742[iVar0 /*366*/].f_15 != 0)
				{
					if (func_302(Param0, Global_4980736.f_5742[iVar0 /*366*/], Global_4980736.f_5742[iVar0 /*366*/].f_3, Global_4980736.f_5742[iVar0 /*366*/].f_15, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_72860 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_72860)
			{
				if (Global_4980736.f_72864[iVar0 /*435*/].f_12 != 0)
				{
					if (func_302(Param0, Global_4980736.f_72864[iVar0 /*435*/], Global_4980736.f_72864[iVar0 /*435*/].f_3, Global_4980736.f_72864[iVar0 /*435*/].f_12, 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_268 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_268)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058064.f_233[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058064.f_233[iVar0], false))
				{
					if (func_302(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058064.f_233[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058064.f_233[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058064.f_233[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058064.f_266 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058064.f_266)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058064.f_119[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058064.f_119[iVar0], false))
				{
					if (func_302(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058064.f_119[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058064.f_119[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058064.f_119[iVar0]), 0,5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

Vector3 func_344(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_347(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_346(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (SYSTEM::TO_FLOAT(iVar8) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4,2f * (SYSTEM::TO_FLOAT(iVar9) * 0,5f));
				}
				else
				{
					fVar11 = (4,2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0,95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0,5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4,2f * -0,5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_345(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_345(iParam11, 1,5f);
				}
				if (fVar14 > 1,8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1,8f) * -0,5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_347(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::_GET_ROAD_SIDE_POINT_WITH_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_345(iParam11, 3,5f);
				}
				else
				{
					fVar14 = func_345(iParam11, 1,5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0,5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_345(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_304(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_346(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_347(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_309(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_348(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_348(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

int func_349(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_351(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2674423[iVar1])
	{
		if (func_350(Param0, &(Global_2673720[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2674423[8])
	{
		if (func_350(Param0, &(Global_2673720[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_350(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_351(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2673711[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2673711[1])
	{
		if (Param0.f_0 < Global_2673715[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2673711[2])
	{
		if (Param0.f_0 < Global_2673715[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2673715[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2673715[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_352(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_358(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0,01f, 360f);
			func_357(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 0, fVar4);
			if (func_353(Var1, &uVar0) || func_358(Var1))
			{
				Var1 = { *uParam0 };
				func_357(&Var1, Global_2667222.f_592, Global_2667222.f_595, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_353(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_356())
	{
		return 0;
	}
	iVar1 = func_355();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9 == 1)
		{
			if (func_354(Param0, &(Global_2667222.f_367[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_354(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_342(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2667222.f_2733) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_340(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_355()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2667222.f_367[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_356()
{
	return Global_1946934.f_518;
}

void func_357(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_309(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_309(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

int func_358(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2667222.f_595 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2667222.f_592);
		if (fVar0 < Global_2667222.f_595)
		{
			return 1;
		}
	}
	return 0;
}

bool func_359(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2667222.f_26.f_18)
	{
		switch (Global_2667222.f_26.f_17)
		{
			case 0:
				if (func_342(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_340(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_360(*uParam0, Global_2667222.f_26.f_10, Global_2667222.f_26.f_13, Global_2667222.f_26.f_16, Global_2667222.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

Vector3 func_360(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_357(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_363(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_361(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_342(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_340(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

void func_361(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_362(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0,5f))
	{
		if (!bParam9)
		{
			if (func_348(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_348(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0,5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_362(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0,5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_362(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_348(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0,5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0,5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_348(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0,5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0,5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

Vector3 func_362(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_363(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

int func_364(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_411(Param0))
	{
		if (func_367(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_365(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_315(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_357(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_365(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_353(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_366(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_353(Var2, &uVar1) || func_358(Var2))
			{
				Var2 = { *uParam0 };
				func_366(&Var2, &(Global_2667222.f_367[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

void func_366(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_360(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_360(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_360(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_357(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2667222.f_2733) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_363(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_361(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

int func_367(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672163[iVar0 /*17*/].f_16))
			{
				if (func_354(*uParam0, &(Global_2672163[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672163[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672163[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_366(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_367(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_366(&Var1, &(Global_2672163[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_368(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2667222.f_1753 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_364(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_359(uParam0, 1))
			{
				uParam2->f_6 = 9999,9f;
				uParam2->f_7 = 9999,9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999,9f;
			uParam2->f_7 = 9999,9f;
		}
		Global_2674716.f_162 = 0;
		Global_2674716.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2674716[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2674716.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_371(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_370();
		}
		else
		{
			func_369();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667222.f_1753)
		{
			iVar2 = Global_2667222.f_2159[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667222.f_1754[iVar2 /*4*/] };
				fVar6 = Global_2667222.f_1754[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_338(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_364(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0,375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0,375f);
												}
											}
										}
										bVar12 = false;
										if (!func_337(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_93(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_93(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_301(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_329(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2674716.f_162)
															{
																Global_2674716[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2674716.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2674716.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674716.f_162 == 0)
														{
															Global_2674716[0 /*3*/] = { Var3 };
															Global_2674716.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2674716.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674716[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_328(Var3, fVar6, iVar7);
																		iVar7 = Global_2674716.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
															}
														}
													}
													else
													{
														Global_2674716[Global_2674716.f_162 /*3*/] = { Var3 };
														Global_2674716.f_121[Global_2674716.f_162] = fVar6;
														Global_2674716.f_162++;
														if (Global_2674716.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667222.f_1753;
															}
															else if (Global_2674716.f_162 == 40)
															{
																iVar1 = Global_2667222.f_1753;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674716.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674716.f_163 > 0 && !Global_2674716.f_163 == Global_2674716.f_162)
				{
					func_326(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674716.f_162);
				Var15 = { Global_2674716[0 /*3*/] };
				uVar18 = Global_2674716.f_121[0];
				Global_2674716[0 /*3*/] = { Global_2674716[iVar0 /*3*/] };
				Global_2674716.f_121[0] = Global_2674716.f_121[iVar0];
				Global_2674716[iVar0 /*3*/] = { Var15 };
				Global_2674716.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2674716[0 /*3*/] };
				*uParam1 = Global_2674716.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667222.f_1753 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667222.f_1753);
				*uParam0 = { Global_2667222.f_1754[iVar0 /*4*/] };
				*uParam1 = Global_2667222.f_1754[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_369()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		Global_2667222.f_2159[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2667222.f_1753)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667222.f_1753);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667222.f_1753);
		uVar3 = Global_2667222.f_2159[iVar1];
		Global_2667222.f_2159[iVar1] = Global_2667222.f_2159[iVar2];
		Global_2667222.f_2159[iVar2] = uVar3;
		iVar0++;
	}
}

void func_371(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2667222.f_1753)
	{
		uVar1 = func_372(Param0, fVar0, &fVar0);
		Global_2667222.f_2159[iVar2] = uVar1;
		iVar2++;
	}
}

int func_372(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2667222.f_1753)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2667222.f_1754[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

int func_373(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_374(Param0, iParam4, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_311(Param0, fParam3, iParam4, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2680195.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_9(iVar2, 0, 1) && func_9(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_374(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_310(iParam3, 1008981770);
	fVar1 = func_310(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_375(struct<3> Param0)
{
	var uVar0;
	
	if (Global_2810287.f_924 && func_376(Param0, &uVar0))
	{
		return 1;
	}
	return 0;
}

int func_376(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	*iParam3 = -1;
	iVar2 = func_388(Param0, 0);
	if (!iVar2 == -1)
	{
		iVar0 = 83;
		while (iVar0 <= 87)
		{
			iVar1 = iVar0;
			if (func_377(iVar1))
			{
				if (func_388(Global_1946934.f_532[iVar0 /*3*/], 0) == iVar2)
				{
					*iParam3 = iVar0 + 1000;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_377(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_387(iParam0);
	if (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_274 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
	if (iVar1 != func_73())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_274 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	if (func_386(PLAYER::PLAYER_ID(), 0) || (func_383(PLAYER::PLAYER_ID()) && func_241(func_382(PLAYER::PLAYER_ID())) == 12))
	{
		return 1;
	}
	if (func_381(PLAYER::PLAYER_ID()) || (func_383(PLAYER::PLAYER_ID()) && func_241(func_382(PLAYER::PLAYER_ID())) == 8))
	{
		return 1;
	}
	if (func_380(PLAYER::PLAYER_ID()) || (func_383(PLAYER::PLAYER_ID()) && func_241(func_382(PLAYER::PLAYER_ID())) == 5))
	{
		return 1;
	}
	if (func_379(PLAYER::PLAYER_ID()) || (func_383(PLAYER::PLAYER_ID()) && func_241(func_382(PLAYER::PLAYER_ID())) == 10))
	{
		return 1;
	}
	if (func_378(PLAYER::PLAYER_ID()) || (func_383(PLAYER::PLAYER_ID()) && func_241(func_382(PLAYER::PLAYER_ID())) == 6))
	{
		return 1;
	}
	return 0;
}

int func_378(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 6;
			}
		}
	}
	return 0;
}

int func_379(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 10;
			}
		}
	}
	return 0;
}

int func_380(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_73())
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 5;
			}
		}
	}
	return 0;
}

int func_381(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_73())
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 8;
			}
		}
	}
	return 0;
}

int func_382(int iParam0)
{
	if (iParam0 != func_73() && func_9(iParam0, 1, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_319.f_16;
	}
	return -1;
}

int func_383(int iParam0)
{
	if (iParam0 != func_73() && func_9(iParam0, 1, 1))
	{
		if (func_385(iParam0) && !func_384(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_384(int iParam0)
{
	if (iParam0 != func_73() && func_9(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 4);
	}
	return 0;
}

int func_385(int iParam0)
{
	if (iParam0 != func_73() && func_9(iParam0, 1, 1))
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 3);
	}
	return 0;
}

int func_386(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_73())
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 12;
			}
		}
	}
	return 0;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			return 1;
			break;
		
		case 84:
			return 2;
			break;
		
		case 85:
			return 3;
			break;
		
		case 86:
			return 4;
			break;
		
		case 87:
			return 5;
			break;
	}
	return 0;
}

int func_388(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672163[iVar0 /*17*/].f_9 == 1 || iParam3 == 0)
		{
			if (func_354(Param0, &(Global_2672163[iVar0 /*17*/]), 0,1f, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_389(struct<3> Param0, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6[3];
	
	if (Global_2667222.f_45.f_318)
	{
		return;
	}
	if (!func_407())
	{
		if (iParam3 == 0)
		{
		}
		iVar1 = func_406(Param0);
		if (iVar1 > -1)
		{
			func_418();
			switch (iVar1)
			{
				case 0:
					func_405(-1139,678f, -2694,165f, 12,949f, 283,4298f);
					func_405(-1137,455f, -2690,167f, 12,9448f, 283,0835f);
					func_405(-1135,02f, -2685,912f, 12,9412f, 283,8219f);
					func_405(-1099,898f, -2688,611f, 12,9473f, 295,3925f);
					func_405(-1110,51f, -2693,236f, 12,9595f, 298,84f);
					func_405(-1081,807f, -2690,015f, 12,7567f, 219,1729f);
					func_405(-1075,586f, -2697,09f, 12,7567f, 224,8977f);
					func_405(-1095,133f, -2659,995f, 12,7567f, 190,9326f);
					func_405(-1096,511f, -2649,483f, 12,6066f, 182,7913f);
					break;
				
				case 1:
					func_405(-1411,731f, -533,6462f, 30,2703f, 215,116f);
					func_405(-1416,407f, -527,0309f, 30,6453f, 215,2683f);
					func_405(-1432,146f, -580,9922f, 29,5263f, 118,3858f);
					func_405(-1438,8f, -584,4678f, 29,595f, 118,1207f);
					break;
				
				case 2:
					func_405(-780,5905f, 292,8159f, 84,673f, 97,2697f);
					func_405(-788,6147f, 291,8073f, 84,72f, 97,7348f);
					func_405(-765,572f, 294,4459f, 84,5182f, 93,9327f);
					func_405(-756,9962f, 294,8176f, 84,4061f, 93,9545f);
					break;
				
				case 3:
					func_405(-647,9388f, 40,9257f, 38,9494f, 356,4108f);
					func_405(-647,239f, 49,2068f, 40,7135f, 355,9723f);
					func_405(-620,1517f, 3,6633f, 40,5904f, 98,3813f);
					func_405(-610,5603f, 5,1258f, 41,2404f, 98,696f);
					break;
				
				case 4:
					func_405(-943,2437f, -487,8443f, 35,7504f, 208,6441f);
					func_405(-949,2938f, -476,3759f, 36,0878f, 208,1432f);
					func_405(-955,3208f, -465,3984f, 36,3328f, 206,9198f);
					func_405(-959,5925f, -457,0372f, 36,5226f, 207,7534f);
					break;
				
				case 5:
					func_405(-966,1365f, -401,5364f, 36,6824f, 27,6587f);
					func_405(-934,9108f, -413,4091f, 36,5161f, 118,0149f);
					func_405(-920,2501f, -405,6656f, 36,5869f, 117,2407f);
					func_405(-971,7031f, -390,5213f, 36,7118f, 26,8016f);
					break;
				
				case 6:
					func_405(-58,1347f, -573,486f, 36,5789f, 341,8442f);
					func_405(-64,227f, -590,2214f, 35,1654f, 338,972f);
					func_405(-67,0332f, -599,2827f, 35,1787f, 341,5854f);
					func_405(-71,8651f, -612,8891f, 35,1574f, 339,8537f);
					break;
				
				case 7:
					func_405(-232,1917f, -978,1431f, 28,166f, 160,2115f);
					func_405(-229,6225f, -970,9731f, 28,1636f, 160,2397f);
					func_405(-251,993f, -998,3963f, 28,3747f, 249,3297f);
					func_405(-262,222f, -994,5226f, 29,23f, 249,4673f);
					break;
				
				case 8:
					func_405(151,624f, -1309,343f, 28,2023f, 243,201f);
					func_405(152,7886f, -1305,608f, 28,2023f, 243,9973f);
					func_405(145,8017f, -1287,19f, 28,312f, 120,6275f);
					func_405(142,8935f, -1282,286f, 28,3156f, 120,3024f);
					break;
				
				case 9:
					func_405(-2333,575f, 272,6518f, 168,4671f, 23,0287f);
					func_405(-2322,187f, 277,638f, 168,4671f, 23,4249f);
					func_405(-2316,222f, 279,9105f, 168,4671f, 23,0175f);
					func_405(-2314,396f, 290,9f, 168,4671f, 114,3983f);
					func_405(-2316,81f, 296,424f, 168,4671f, 113,6228f);
					func_405(-2318,572f, 299,2423f, 168,4671f, 293,83f);
					func_405(-2327,902f, 291,6653f, 168,4671f, 294,1158f);
					func_405(-2330,711f, 274,0757f, 168,4671f, 205,2184f);
					func_405(-2345,082f, 277,3852f, 168,4671f, 113,4219f);
					func_405(-2347,777f, 282,6038f, 168,4671f, 292,7772f);
					func_405(-2339,33f, 293,4399f, 168,4671f, 114,2739f);
					func_405(-2352,681f, 294,4205f, 168,4671f, 115,5597f);
					break;
				
				case 10:
					func_403(78);
					break;
				
				case 11:
					func_403(79);
					break;
				
				case 12:
					func_403(82);
					break;
				
				case 13:
					func_403(81);
					break;
				
				case 14:
					func_403(73);
					break;
				
				case 15:
					func_405(382,9244f, 443,8122f, 142,9934f, 78,3408f);
					func_405(391,2023f, 442,4812f, 142,5089f, 82,2125f);
					func_405(400,1477f, 441,0816f, 142,0776f, 83,4259f);
					func_405(414,2964f, 439,2628f, 141,5056f, 80,8689f);
					break;
				
				case 16:
					func_403(75);
					break;
				
				case 17:
					func_403(76);
					break;
				
				case 18:
					func_403(77);
					break;
				
				case 19:
					func_405(-921,9734f, 704,0754f, 150,8142f, 96,5139f);
					func_405(-904,7881f, 708,9782f, 149,8261f, 108,2109f);
					func_405(-931,6637f, 703,693f, 151,369f, 87,7447f);
					func_405(-943,8763f, 704,2332f, 152,0993f, 87,6764f);
					break;
				
				case 20:
					func_403(80);
					break;
				
				case 21:
				case 25:
					func_403(87);
					break;
				
				case 22:
				case 26:
					func_403(88);
					break;
				
				case 23:
				case 27:
					func_403(89);
					break;
				
				case 24:
				case 28:
					func_403(90);
					break;
				
				case 29:
				case 30:
					if (func_402(iParam3))
					{
						func_403(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_30);
					}
					break;
				
				case 31:
					func_405(-352,53f, -1836,742f, 21,924f, 274,8f);
					func_405(-336,412f, -1837,341f, 22,497f, 264,6f);
					func_405(-320,707f, -1840,342f, 23,195f, 257,4f);
					func_405(-304,646f, -1843,295f, 24,219f, 261,599f);
					func_405(-288,991f, -1844,123f, 25,228f, 269,599f);
					func_405(-273,031f, -1842,69f, 26,27f, 278,199f);
					func_405(-361,271f, -1814,526f, 21,63f, 96,399f);
					func_405(-343,939f, -1813,331f, 22,368f, 87,999f);
					func_405(-326,881f, -1814,914f, 23,106f, 78,799f);
					func_405(-310,941f, -1818,223f, 23,957f, 78,799f);
					func_405(-294,16f, -1820,207f, 25,092f, 89,199f);
					func_405(-277,392f, -1819,237f, 26,283f, 100,199f);
					func_405(-257,213f, -1838,977f, 27,318f, 285,799f);
					func_405(-261,286f, -1815,615f, 27,439f, 110,399f);
					func_405(-246,086f, -1808,691f, 28,576f, 117,398f);
					func_405(-231,901f, -1800,767f, 28,619f, 119,398f);
					func_405(-199,77f, -1989,34f, 26,62f, 180,997f);
					func_405(-201,159f, -1971,41f, 26,62f, 190,798f);
					func_405(-205,571f, -1954,537f, 26,62f, 199,998f);
					func_405(-197,879f, -1940,822f, 26,62f, 114,998f);
					func_405(-141,311f, -1967,41f, 21,805f, 91,997f);
					func_405(-141,145f, -1977,861f, 21,813f, 91,997f);
					func_405(-140,565f, -1988,289f, 21,815f, 91,997f);
					func_405(-145,045f, -2032,168f, 21,956f, 73,597f);
					func_405(-147,923f, -2041,781f, 21,956f, 73,597f);
					func_405(-185,791f, -1948,005f, 26,62f, 18,596f);
					func_405(-181,155f, -1965,422f, 26,62f, 8,196f);
					func_405(-179,172f, -1984,332f, 26,62f, 1,396f);
					func_405(-225,88f, -1824,637f, 28,897f, 299,596f);
					func_405(-211,722f, -1816,401f, 28,859f, 300,796f);
					func_405(-217,99f, -1792,624f, 28,649f, 119,196f);
					func_405(-203,828f, -1784,264f, 28,678f, 119,996f);
					func_405(-194,254f, -2018,756f, 26,62f, 75f);
					func_405(-186,956f, -2031,369f, 26,62f, 338f);
					func_405(-194,916f, -2047,94f, 26,62f, 329,8f);
					func_405(-205,565f, -2064,553f, 26,62f, 320,2f);
					func_405(-218,606f, -2077,97f, 26,62f, 311,2f);
					func_405(-233,372f, -2089,601f, 26,62f, 304f);
					func_405(-207,822f, -2002,11f, 26,62f, 173,799f);
					func_405(-207,567f, -2027,579f, 26,62f, 158,599f);
					func_405(-215,235f, -2042,272f, 26,62f, 148,999f);
					func_405(-227,643f, -2058,498f, 26,62f, 138,799f);
					func_405(-242,977f, -2071,452f, 26,62f, 125,798f);
					func_405(-256,624f, -2087,982f, 26,62f, 204,198f);
					func_405(-249,549f, -2098,767f, 26,62f, 294,198f);
					func_405(-228,998f, -2048,889f, 26,62f, 141,198f);
					func_405(-176,963f, -2009,239f, 24,519f, 261,597f);
					func_405(-195,128f, -1806,447f, 28,814f, 299,997f);
					func_405(-180,02f, -1797,414f, 28,797f, 299,997f);
					func_405(-165,796f, -1787,672f, 28,788f, 304,597f);
					func_405(-188,124f, -1774,765f, 28,711f, 123,197f);
					func_405(-417,428f, -1836,374f, 19,238f, 121,797f);
					func_405(-430,967f, -1844,844f, 18,468f, 121,797f);
					func_405(-444,94f, -1853,739f, 17,786f, 121,797f);
					break;
			}
		}
		else if (func_399(Param0, &iVar2, &iVar6) || (func_376(Param0, &(iVar2[0])) && (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))))
		{
			func_418();
			iVar0 = 0;
			while (iVar0 < iVar2)
			{
				if (iVar2[iVar0] > 1000)
				{
					iVar2[iVar0] = (iVar2[iVar0] - 1000);
					iVar6[iVar0] = 1;
				}
				if (iVar2[iVar0] >= 83 && iVar2[iVar0] <= 87)
				{
					Global_2667222.f_515 = 1;
				}
				if (!iVar6[iVar0] && func_398(iVar2[iVar0], -1))
				{
					if (func_402(iParam3))
					{
						func_403(iVar2[iVar0]);
					}
				}
				else if (iVar6[iVar0])
				{
					if (((func_397(PLAYER::PLAYER_PED_ID()) || func_396(PLAYER::PLAYER_PED_ID())) && VEHICLE::IS_THIS_MODEL_A_PLANE(iParam3)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam3))
					{
						if (func_395(iParam3))
						{
							func_394(iVar2[iVar0]);
						}
						else if (func_393(iParam3))
						{
							func_392(iVar2[iVar0]);
							func_394(iVar2[iVar0]);
						}
						else
						{
							func_392(iVar2[iVar0]);
							func_394(iVar2[iVar0]);
						}
					}
					else
					{
						func_390(iVar2[iVar0], iParam3);
					}
				}
				else
				{
					func_403(iVar2[iVar0]);
				}
				iVar0++;
			}
		}
	}
}

void func_390(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 23:
			func_405(434,1898f, 6535,824f, 27,0084f, 66,9998f);
			func_405(434,9146f, 6539,661f, 26,9691f, 66,9998f);
			func_405(435,1928f, 6543,298f, 26,889f, 66,9998f);
			func_405(429,8495f, 6506,581f, 27,1807f, 59,7997f);
			func_405(429,8463f, 6511,11f, 27,0717f, 60,9997f);
			func_405(434,2748f, 6581,816f, 26,1303f, 85,1993f);
			func_405(443,1016f, 6580,717f, 26,0739f, 85,1993f);
			func_405(451,9748f, 6579,937f, 26,0319f, 85,1993f);
			break;
		
		case 26:
			func_405(-148,9694f, 6325,552f, 30,4564f, 224,1983f);
			func_405(-154,9585f, 6331,287f, 30,5809f, 225,7983f);
			func_405(-136,8806f, 6347,622f, 30,4906f, 43,9982f);
			func_405(-142,1459f, 6342,532f, 30,49f, 44,7982f);
			func_405(-136,6504f, 6357,062f, 30,4907f, 43,9982f);
			func_405(-151,1909f, 6358,461f, 30,4907f, 223,398f);
			func_405(-141,4154f, 6365,831f, 30,4907f, 43,3979f);
			func_405(-147,8279f, 6378,042f, 30,5012f, 312,7973f);
			break;
		
		case 24:
			func_405(60,7522f, 6465,807f, 30,3941f, 213,3973f);
			func_405(57,4131f, 6462,55f, 30,3663f, 213,3973f);
			func_405(48,0438f, 6452,668f, 30,3245f, 213,3973f);
			func_405(40,6765f, 6445,235f, 30,3475f, 213,3973f);
			func_405(37,8298f, 6442,521f, 30,3489f, 213,3973f);
			func_405(35,0212f, 6439,866f, 30,3332f, 213,3973f);
			func_405(32,1837f, 6437,21f, 30,2991f, 213,3973f);
			func_405(29,4732f, 6434,526f, 30,3702f, 213,3973f);
			break;
		
		case 25:
			func_405(-377,1927f, 6142,805f, 30,3409f, 315,3965f);
			func_405(-383,3481f, 6136,154f, 30,3752f, 315,3965f);
			func_405(-395,8286f, 6123,635f, 30,2987f, 46,3965f);
			func_405(-389,1636f, 6117,241f, 30,3641f, 46,3965f);
			func_405(-370,6174f, 6129,779f, 30,4414f, 45,7965f);
			func_405(-360,983f, 6130,575f, 30,4401f, 45,7965f);
			func_405(-416,8689f, 6103,411f, 30,3852f, 325,7964f);
			func_405(-420,9229f, 6095,657f, 30,3155f, 334,7964f);
			break;
		
		case 22:
			func_405(45,2181f, 6341,107f, 30,2296f, 14,3964f);
			func_405(41,6057f, 6339,476f, 30,2306f, 14,3964f);
			func_405(39,2508f, 6359,469f, 30,2398f, 207,3965f);
			func_405(36,3203f, 6356,893f, 30,2398f, 207,3965f);
			func_405(51,6043f, 6365,022f, 30,2399f, 33,5965f);
			func_405(65,6465f, 6380,626f, 30,2398f, 212,9964f);
			func_405(24,8587f, 6366,36f, 30,2286f, 32,7965f);
			func_405(19,6254f, 6360,736f, 30,2305f, 32,7965f);
			break;
		
		case 28:
			func_405(94,0245f, 181,2181f, 103,5566f, 160,3953f);
			func_405(91,0039f, 182,2811f, 103,6179f, 160,3953f);
			func_405(68,365f, 148,2105f, 103,5812f, 339,9951f);
			func_405(62,2104f, 150,5185f, 103,6101f, 339,9951f);
			func_405(69,5198f, 186,4278f, 103,9415f, 69,7949f);
			func_405(62,59f, 189,0833f, 103,9981f, 69,7949f);
			func_405(55,6095f, 191,8089f, 104,2827f, 69,7949f);
			func_405(154,7309f, 182,1333f, 104,6903f, 160,1945f);
			break;
		
		case 31:
			func_405(322,4916f, -714,5293f, 28,1574f, 158,5941f);
			func_405(329,5591f, -694,4284f, 28,1656f, 158,5941f);
			func_405(324,565f, -684,3934f, 28,3133f, 247,194f);
			func_405(326,4054f, -679,9403f, 28,3192f, 247,194f);
			func_405(297,1177f, -804,3891f, 28,4859f, 160,594f);
			func_405(288,5461f, -814,6994f, 28,1563f, 163,194f);
			func_405(286,0127f, -821,7357f, 28,3093f, 163,194f);
			func_405(283,6725f, -828,9533f, 28,1247f, 158,994f);
			break;
		
		case 29:
			func_405(-1448,551f, -355,0512f, 43,3715f, 313,3925f);
			func_405(-1454,819f, -359,998f, 42,7885f, 311,3925f);
			func_405(-1462,675f, -360,1352f, 42,9255f, 223,392f);
			func_405(-1447,965f, -368,3028f, 42,5412f, 5,9918f);
			func_405(-1468,678f, -353,4619f, 43,2024f, 217,7916f);
			func_405(-1473,219f, -346,7773f, 43,5318f, 213,9913f);
			func_405(-1490,742f, -420,1957f, 35,9291f, 229,1911f);
			func_405(-1496,003f, -395,7657f, 38,1394f, 45,7909f);
			break;
		
		case 30:
			func_405(-1174,491f, -1381,01f, 3,9253f, 116,5903f);
			func_405(-1183,148f, -1392,559f, 3,6319f, 304,9901f);
			func_405(-1160,964f, -1417,759f, 3,7043f, 65,7899f);
			func_405(-1151,611f, -1411,377f, 3,9411f, 63,5895f);
			func_405(-1167,187f, -1424,07f, 3,4884f, 123,5897f);
			func_405(-1148,22f, -1409,164f, 4,0217f, 63,5895f);
			func_405(-1137,11f, -1372,818f, 3,8993f, 27,5895f);
			func_405(-1140,608f, -1365,747f, 4,0573f, 27,5895f);
			break;
		
		case 27:
			func_405(1414,237f, -1656,344f, 60,2449f, 332,7893f);
			func_405(1416,668f, -1659,933f, 60,6982f, 332,7893f);
			func_405(1419,327f, -1663,972f, 61,2382f, 332,7893f);
			func_405(1421,557f, -1667,367f, 61,7479f, 332,7893f);
			func_405(1423,744f, -1670,853f, 62,3125f, 332,7893f);
			func_405(1412,157f, -1652,746f, 59,9105f, 332,7893f);
			func_405(1426,201f, -1673,598f, 62,7133f, 330,1893f);
			func_405(1435,804f, -1694,73f, 65,0743f, 352,5892f);
			break;
		
		case 33:
			func_405(2810,787f, 4435,92f, 47,5295f, 20,7996f);
			func_405(2808,413f, 4443,922f, 47,3732f, 14,7995f);
			func_405(2806,298f, 4451,786f, 47,1865f, 15,3995f);
			func_405(2803,925f, 4459,858f, 46,9823f, 15,3995f);
			func_405(2801,756f, 4467,755f, 46,8147f, 15,3995f);
			func_405(2893,563f, 4430,258f, 47,338f, 105,9994f);
			func_405(2903,725f, 4425,854f, 47,3523f, 23,1992f);
			func_405(2907,076f, 4418,059f, 47,6301f, 23,1992f);
			break;
		
		case 36:
			func_405(1680,448f, 4821,131f, 41,0599f, 186,399f);
			func_405(1679,76f, 4829,447f, 40,9167f, 186,399f);
			func_405(1678,668f, 4838,03f, 41,0221f, 187,7989f);
			func_405(1677,612f, 4846,028f, 41,0452f, 187,7989f);
			func_405(1675,851f, 4860,434f, 41,0901f, 187,7989f);
			func_405(1674,843f, 4868,343f, 41,0684f, 187,7989f);
			func_405(1673,543f, 4875,752f, 41,0684f, 186,7986f);
			func_405(1672,525f, 4884,972f, 41,0478f, 186,7986f);
			break;
		
		case 34:
			func_405(422,863f, 3583,901f, 32,2386f, 313,5986f);
			func_405(426,6211f, 3583,208f, 32,2386f, 313,5986f);
			func_405(430,466f, 3582,042f, 32,2386f, 313,5986f);
			func_405(434,2751f, 3580,881f, 32,2386f, 313,5986f);
			func_405(438,1525f, 3579,911f, 32,2386f, 313,5986f);
			func_405(442,0173f, 3578,948f, 32,2386f, 313,5986f);
			func_405(420,2694f, 3572,995f, 32,2385f, 353,7984f);
			func_405(424,4825f, 3572,1f, 32,2386f, 348,1984f);
			break;
		
		case 35:
			func_405(627,005f, 2726,019f, 40,7692f, 4,3984f);
			func_405(620,9771f, 2725,759f, 40,7897f, 4,3984f);
			func_405(614,8536f, 2725,355f, 40,8321f, 4,3984f);
			func_405(611,1158f, 2737,387f, 40,9734f, 185,3984f);
			func_405(598,9713f, 2736,261f, 41,0602f, 186,5986f);
			func_405(592,6151f, 2735,886f, 41,0602f, 186,5986f);
			func_405(586,0421f, 2735,9f, 41,0535f, 186,5986f);
			func_405(627,4468f, 2742,742f, 40,8963f, 183,5979f);
			break;
		
		case 32:
			func_405(214,3318f, 2492,26f, 53,9736f, 312,7978f);
			func_405(213,9953f, 2496,666f, 53,8128f, 312,7978f);
			func_405(213,7524f, 2501,251f, 53,5958f, 312,7978f);
			func_405(213,6645f, 2505,908f, 53,3477f, 312,7978f);
			func_405(213,4478f, 2510,734f, 53,1055f, 312,7978f);
			func_405(212,9148f, 2515,268f, 52,9376f, 312,7978f);
			func_405(211,5983f, 2519,216f, 52,6753f, 312,7978f);
			func_405(210,1288f, 2523,187f, 52,3493f, 312,7978f);
			break;
		
		case 38:
			func_405(153,6785f, -2476,192f, 4,9877f, 178,4004f);
			func_405(150,9209f, -2516,979f, 4,9909f, 179,9999f);
			func_405(150,9499f, -2524,965f, 4,9905f, 179,9999f);
			func_405(153,866f, -2467,242f, 4,9877f, 178,4004f);
			func_405(150,8115f, -2533,139f, 4,9895f, 180,0004f);
			func_405(153,8647f, -2433,386f, 5,2336f, 170,2002f);
			func_405(142,7427f, -2536,147f, 5f, 205,0002f);
			func_405(138,8267f, -2535,865f, 5f, 205,0002f);
			break;
		
		case 41:
			func_405(-341,4255f, -2734,451f, 5,0413f, 314,8f);
			func_405(-334,0134f, -2741,43f, 5,0269f, 314,8f);
			func_405(-329,7832f, -2745,604f, 5,0196f, 314,8f);
			func_405(-336,4781f, -2716,139f, 5,0028f, 134,1994f);
			func_405(-334,2752f, -2718,888f, 5,0048f, 135,1992f);
			func_405(-327,6603f, -2725,645f, 5,0103f, 135,1992f);
			func_405(-323,1619f, -2730,345f, 5,0099f, 135,1992f);
			func_405(-316,3481f, -2737,087f, 5,0033f, 135,1992f);
			break;
		
		case 39:
			func_405(1143,73f, -3105,091f, 4,8989f, 146,1979f);
			func_405(1140,009f, -3104,954f, 4,8985f, 146,1979f);
			func_405(1136,267f, -3104,69f, 4,8969f, 146,1979f);
			func_405(1132,732f, -3104,277f, 4,8944f, 146,1979f);
			func_405(1128,724f, -3104,54f, 4,896f, 146,1979f);
			func_405(1125,106f, -3104,057f, 4,8942f, 146,1979f);
			func_405(1117,8f, -3103,674f, 4,8922f, 146,1979f);
			func_405(1114,015f, -3103,448f, 4,8931f, 146,1979f);
			break;
		
		case 40:
			func_405(653,1188f, -2700,255f, 5,2101f, 24,7971f);
			func_405(656,1305f, -2707,245f, 5,214f, 24,7971f);
			func_405(659,3307f, -2714,378f, 5,2188f, 22,7968f);
			func_405(662,2627f, -2722,228f, 5,2188f, 19,1968f);
			func_405(649,2115f, -2728,359f, 5,1124f, 20,5967f);
			func_405(646,2606f, -2720,833f, 5,1103f, 21,3967f);
			func_405(643,4582f, -2713,846f, 5,1099f, 21,3967f);
			func_405(640,3513f, -2706,571f, 5,108f, 21,3967f);
			break;
		
		case 37:
			func_405(-260,5913f, -2615,255f, 5,0502f, 274,5953f);
			func_405(-253,2161f, -2614,896f, 5,0502f, 271,5953f);
			func_405(-245,6569f, -2614,862f, 5,0502f, 271,5953f);
			func_405(-238,214f, -2614,847f, 5,0502f, 271,5953f);
			func_405(-238,013f, -2630,961f, 5,0331f, 271,3949f);
			func_405(-260,9724f, -2631,418f, 5,0355f, 276,9951f);
			func_405(-253,401f, -2631,108f, 5,0319f, 272,195f);
			func_405(-245,5563f, -2631,06f, 5,0323f, 272,195f);
			break;
		
		case 83:
			func_405(-1190,795f, -3371,393f, 12,945f, 348,399f);
			func_405(-1185,634f, -3373,893f, 12,945f, 348,399f);
			func_405(-1114,818f, -3414,185f, 12,945f, 314,199f);
			func_405(-1110,976f, -3416,37f, 12,945f, 314,199f);
			func_405(-1098,621f, -3460,792f, 12,9453f, 329,799f);
			func_405(-1093,31f, -3463,464f, 12,9453f, 329,799f);
			func_405(-1089,433f, -3443,234f, 12,945f, 329,799f);
			func_405(-1084,271f, -3446,31f, 12,945f, 329,799f);
			func_405(-1093,808f, -3452,407f, 12,9451f, 329,799f);
			func_405(-1088,383f, -3455,466f, 12,9451f, 329,799f);
			func_405(-1118,474f, -3411,385f, 12,9451f, 313,199f);
			func_405(-1181,003f, -3375,658f, 12,945f, 346,799f);
			func_405(-1212,071f, -3382,283f, 12,9451f, 328,999f);
			func_405(-1217,708f, -3378,623f, 12,9451f, 328,999f);
			func_405(-1216,986f, -3390,396f, 12,9452f, 328,999f);
			func_405(-1222,566f, -3386,707f, 12,9452f, 328,999f);
			func_405(-1222,06f, -3398,882f, 12,9452f, 328,999f);
			func_405(-1227,698f, -3394,946f, 12,9451f, 328,999f);
			func_405(-1097,517f, -3472,086f, 12,9453f, 328,999f);
			func_405(-1102,951f, -3468,619f, 12,9452f, 328,999f);
			func_405(-1227,253f, -3407,38f, 12,9452f, 328,999f);
			func_405(-1232,836f, -3403,572f, 12,9452f, 328,999f);
			break;
		
		case 84:
			func_405(-1364,879f, -3285,201f, 12,945f, 330,2f);
			func_405(-1359,229f, -3288,52f, 12,945f, 330,2f);
			func_405(-1369,636f, -3293,617f, 12,945f, 330,2f);
			func_405(-1363,881f, -3296,796f, 12,945f, 330,2f);
			func_405(-1432,898f, -3247,702f, 12,945f, 330,2f);
			func_405(-1437,282f, -3255,429f, 12,945f, 330,2f);
			func_405(-1441,623f, -3262,969f, 12,945f, 330,2f);
			func_405(-1443,954f, -3251,006f, 12,945f, 330,2f);
			func_405(-1374,159f, -3301,61f, 12,945f, 330,2f);
			func_405(-1368,508f, -3304,924f, 12,945f, 330,2f);
			func_405(-1359,905f, -3276,118f, 12,9448f, 330,4f);
			func_405(-1354,228f, -3279,63f, 12,9448f, 330,4f);
			func_405(-1406,493f, -3246,223f, 12,9449f, 344,5997f);
			func_405(-1411,058f, -3243,62f, 12,9449f, 344,5997f);
			func_405(-1415,326f, -3241,014f, 12,9449f, 344,5997f);
			func_405(-1419,899f, -3238,116f, 12,9449f, 344,5997f);
			func_405(-1370,986f, -3268,945f, 12,9449f, 322,3996f);
			func_405(-1365,735f, -3272,363f, 12,9449f, 322,3996f);
			func_405(-1373,341f, -3313,206f, 12,9448f, 329,5996f);
			func_405(-1379,091f, -3310,004f, 12,9448f, 330,7996f);
			func_405(-1436,989f, -3228,515f, 12,9449f, 343,9996f);
			func_405(-1444,064f, -3273,751f, 12,945f, 330,7996f);
			break;
		
		case 85:
			func_405(-2060,105f, 3186,159f, 31,81f, 329,599f);
			func_405(-2065,521f, 3189,007f, 31,81f, 150,199f);
			func_405(-2055,006f, 3194,989f, 31,81f, 329,599f);
			func_405(-2060,471f, 3197,816f, 31,81f, 150,199f);
			func_405(-2049,611f, 3204,032f, 31,81f, 329,599f);
			func_405(-2055,048f, 3206,958f, 31,81f, 150,199f);
			func_405(-2049,627f, 3216,253f, 31,81f, 150,199f);
			func_405(-2039,024f, 3222,121f, 31,81f, 329,599f);
			func_405(-2044,17f, 3213,208f, 31,81f, 329,599f);
			func_405(-2044,672f, 3224,638f, 31,81f, 150,199f);
			func_405(-2060,486f, 3165,928f, 31,8103f, 133,9988f);
			func_405(-2055,707f, 3163,053f, 31,8103f, 133,9988f);
			func_405(-2050,911f, 3160,092f, 31,8103f, 133,9988f);
			func_405(-1974,635f, 3137,847f, 31,8103f, 149,5986f);
			func_405(-1970,354f, 3145,22f, 31,8103f, 149,5986f);
			func_405(-1965,709f, 3153,221f, 31,8103f, 149,5986f);
			func_405(-1960,991f, 3161,346f, 31,8103f, 149,5986f);
			func_405(-1983,17f, 3131,33f, 31,8103f, 149,5986f);
			func_405(-1976,614f, 3127,627f, 31,8103f, 149,5986f);
			func_405(-1991,582f, 3127,264f, 31,8103f, 167,7985f);
			func_405(-1995,584f, 3129,369f, 31,8103f, 167,7985f);
			func_405(-1999,335f, 3131,182f, 31,8103f, 167,7985f);
			break;
		
		case 86:
			func_405(-1843,828f, 3085,094f, 31,81f, 165,8f);
			func_405(-1828,571f, 3084,114f, 31,841f, 329,2f);
			func_405(-1823,414f, 3092,762f, 31,843f, 330f);
			func_405(-1819,045f, 3100,435f, 31,845f, 330f);
			func_405(-1833,313f, 3075,722f, 31,838f, 330f);
			func_405(-1847,648f, 3076,8f, 31,835f, 165,8f);
			func_405(-1838,479f, 3078,576f, 31,863f, 150,599f);
			func_405(-1833,605f, 3086,784f, 31,863f, 150,599f);
			func_405(-1828,424f, 3095,617f, 31,863f, 150,599f);
			func_405(-1823,95f, 3102,821f, 31,862f, 150,599f);
			func_405(-1819,284f, 3110,67f, 31,8615f, 150,2f);
			func_405(-1814,545f, 3108,229f, 31,8476f, 330,6f);
			func_405(-1853,939f, 3076,271f, 31,8105f, 176,7996f);
			func_405(-1857,726f, 3078,668f, 31,8105f, 176,7996f);
			func_405(-1861,626f, 3080,777f, 31,8105f, 176,7996f);
			func_405(-1865,584f, 3083,136f, 31,8103f, 176,7996f);
			func_405(-1869,255f, 3085,565f, 31,8103f, 176,7996f);
			func_405(-1913,263f, 3125,342f, 31,8103f, 150,7988f);
			func_405(-1917,546f, 3127,678f, 31,8103f, 150,7988f);
			func_405(-1922,74f, 3130,555f, 31,8103f, 150,7988f);
			func_405(-1927,676f, 3133,413f, 31,8103f, 150,7988f);
			func_405(-1932,418f, 3136,273f, 31,8103f, 150,7988f);
			break;
		
		case 87:
			func_405(-2538,561f, 3303,172f, 31,814f, 296,999f);
			func_405(-2530,309f, 3307,445f, 31,816f, 296,999f);
			func_405(-2521,733f, 3311,833f, 31,817f, 296,999f);
			func_405(-2512,881f, 3316,428f, 31,819f, 296,999f);
			func_405(-2502,952f, 3321,518f, 31,821f, 296,999f);
			func_405(-2542,613f, 3310,728f, 31,814f, 296,999f);
			func_405(-2534,195f, 3314,753f, 31,815f, 296,999f);
			func_405(-2525,635f, 3318,97f, 31,817f, 296,999f);
			func_405(-2516,674f, 3323,545f, 31,819f, 296,999f);
			func_405(-2507,153f, 3328,454f, 31,82f, 296,999f);
			func_405(-2547,689f, 3298,791f, 31,812f, 296,999f);
			func_405(-2551,261f, 3306,304f, 31,8123f, 296,999f);
			func_405(-2497,446f, 3333,296f, 31,821f, 296,999f);
			func_405(-2494,089f, 3326,065f, 31,8218f, 296,999f);
			func_405(-2453,405f, 3255,388f, 31,8276f, 167,1986f);
			func_405(-2449,37f, 3253,417f, 31,8276f, 167,1986f);
			func_405(-2445,49f, 3251,138f, 31,8276f, 167,1986f);
			func_405(-2441,575f, 3248,888f, 31,8276f, 167,1986f);
			func_405(-2437,319f, 3246,554f, 31,8277f, 167,1986f);
			func_405(-2432,723f, 3244,232f, 31,8277f, 167,1986f);
			func_405(-2485,273f, 3330,891f, 31,8239f, 298,1979f);
			func_405(-2488,82f, 3338,365f, 31,8226f, 298,1979f);
			break;
		
		case 89:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(1284,416f, 2890,299f, 45,0276f, 336,3999f);
				func_405(1273,248f, 2901,428f, 45,0426f, 338,3999f);
				func_405(1262,945f, 2911,535f, 43,2959f, 341,9999f);
				func_405(1272,094f, 2873,387f, 45,3443f, 328,5991f);
				func_405(1259,785f, 2892,217f, 45,1126f, 339,9999f);
				func_405(1231,279f, 2910,881f, 43,3085f, 12f);
				func_405(1306,515f, 2839,475f, 46,8947f, 132,3996f);
				func_405(1307,453f, 2825,276f, 45,1566f, 127,1998f);
				func_405(1257,029f, 2872,157f, 45,9766f, 338,5992f);
				func_405(1225,764f, 2930,095f, 41,6173f, 14,7999f);
			}
			else
			{
				func_405(1265,123f, 2836,949f, 47,1021f, 119,9996f);
				func_405(1258,145f, 2831,643f, 46,4503f, 135,7993f);
				func_405(1240,847f, 2828,721f, 46,4388f, 39,5992f);
				func_405(1236,877f, 2835,49f, 46,3491f, 22,9991f);
				func_405(1235,697f, 2843,403f, 46,0231f, 2,7991f);
				func_405(1237,686f, 2850,607f, 45,5261f, 335,5991f);
				func_405(1241,126f, 2858,816f, 45,0176f, 339,7991f);
				func_405(1249,715f, 2810,588f, 47,2648f, 255,1992f);
				func_405(1257,696f, 2808,609f, 47,014f, 266,1992f);
				func_405(1265,577f, 2808,353f, 46,7598f, 277,199f);
				func_405(1273,808f, 2808,484f, 46,3872f, 263,999f);
				func_405(1282,535f, 2807,134f, 45,9705f, 250,7989f);
				func_405(1290,168f, 2803,745f, 45,8005f, 238,7988f);
				func_405(1296,445f, 2798,777f, 46,0903f, 228,9988f);
				func_405(1302,041f, 2792,33f, 45,957f, 221,7987f);
				func_405(1251,389f, 2825,818f, 45,9856f, 119,1982f);
				func_405(1285,48f, 2819,238f, 45,044f, 228,3993f);
				func_405(1293,023f, 2814,164f, 44,8859f, 233,399f);
				func_405(1242,18f, 2814,153f, 47,7108f, 227,3991f);
				func_405(1236,362f, 2819,623f, 47,6845f, 224,399f);
				func_405(1231,532f, 2825,855f, 47,4649f, 210,5992f);
				func_405(1228,177f, 2833,423f, 47,3171f, 197,5993f);
				func_405(1243,095f, 2866,749f, 44,6219f, 353,7992f);
				func_405(1307,346f, 2785,787f, 46,1136f, 219,9997f);
				func_405(1300,752f, 2808,224f, 44,5688f, 228,9997f);
				func_405(1306,571f, 2802,468f, 44,6275f, 224,1992f);
				func_405(1244,465f, 2875,697f, 44,5839f, 353,7992f);
				func_405(1312,441f, 2795,427f, 45,2701f, 218,5991f);
			}
			break;
		
		case 90:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(14,4916f, 2660,726f, 79,0178f, 310,1999f);
				func_405(3,855f, 2672,388f, 78,437f, 319,2f);
				func_405(-7,057f, 2682,247f, 77,472f, 319,2f);
				func_405(-14,041f, 2663,43f, 77,4221f, 319,2f);
				func_405(41,8086f, 2597,059f, 81,3524f, 301,9997f);
				func_405(60,2273f, 2609,745f, 79,5672f, 305,9998f);
				func_405(34,0188f, 2659,723f, 78,9894f, 314,2f);
				func_405(29,4879f, 2675,34f, 76,0202f, 314,2f);
				func_405(19,0088f, 2686,16f, 75,6897f, 314,2f);
				func_405(7,6101f, 2697,113f, 76,2923f, 314,2f);
			}
			else
			{
				func_405(50,6405f, 2633,902f, 79,4503f, 305,1998f);
				func_405(46,2894f, 2639,951f, 79,9122f, 305,1998f);
				func_405(55,3668f, 2627,773f, 79,6363f, 305,1998f);
				func_405(59,9522f, 2620,408f, 80,0499f, 305,1998f);
				func_405(42,1486f, 2646,073f, 80,108f, 305,1998f);
				func_405(68,1481f, 2630,07f, 77,0725f, 305,1998f);
				func_405(62,6048f, 2637,014f, 76,1722f, 305,1998f);
				func_405(57,3543f, 2643,56f, 75,5301f, 305,1998f);
				func_405(52,611f, 2649,698f, 76,1354f, 305,1998f);
				func_405(74,5845f, 2640,475f, 72,602f, 305,1998f);
				func_405(68,5462f, 2646,784f, 71,6298f, 305,1998f);
				func_405(62,426f, 2652,977f, 71,7029f, 305,1998f);
				func_405(79,5597f, 2650,835f, 68,668f, 305,1998f);
				func_405(72,6035f, 2656,857f, 67,3294f, 305,1998f);
				func_405(83,4156f, 2660,237f, 64,3198f, 305,1998f);
				func_405(102,851f, 2688,009f, 51,732f, 224f);
				func_405(109,815f, 2681,012f, 51,112f, 224f);
				func_405(116,355f, 2674,26f, 50,529f, 224f);
				func_405(125,138f, 2665,98f, 49,8f, 224f);
				func_405(132,228f, 2659,865f, 49,26f, 228,4f);
				func_405(139,354f, 2653,536f, 48,737f, 228,4f);
				func_405(88,512f, 2702,995f, 53,042f, 224,199f);
				func_405(81,565f, 2710,357f, 53,67f, 224,199f);
				func_405(75,156f, 2716,981f, 54,223f, 224,199f);
				func_405(68,442f, 2723,806f, 54,775f, 226,199f);
				func_405(61,449f, 2730,606f, 55,308f, 226,199f);
				func_405(53,702f, 2738,167f, 55,855f, 226,199f);
				func_405(91,2443f, 2667,262f, 59,9931f, 314,599f);
			}
			break;
		
		case 91:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(2772,011f, 3889,062f, 42,94f, 145,4f);
				func_405(2785,592f, 3880,409f, 43,695f, 146,199f);
				func_405(2788,387f, 3898,107f, 45,364f, 140,999f);
				func_405(2801,558f, 3912,485f, 44,931f, 131,999f);
				func_405(2805,531f, 3892,253f, 47,01f, 106,399f);
				func_405(2824,791f, 3894,787f, 47,4293f, 105,3989f);
				func_405(2761,739f, 3945,948f, 44,59f, 135,398f);
				func_405(2814,589f, 3930,404f, 44,816f, 134,9978f);
				func_405(2747,627f, 3930,92f, 43,8497f, 138,3978f);
				func_405(2796,312f, 3928,316f, 42,6106f, 134,5979f);
			}
			else
			{
				func_405(2730,174f, 3890,294f, 42,435f, 54,6f);
				func_405(2714,633f, 3918,283f, 42,938f, 16f);
				func_405(2716,533f, 3910,15f, 42,699f, 19,6f);
				func_405(2757,499f, 3874,045f, 42,724f, 64,8f);
				func_405(2747,99f, 3878,676f, 42,561f, 62,8f);
				func_405(2738,337f, 3884,314f, 42,614f, 57,2f);
				func_405(2711,836f, 3926,255f, 42,931f, 21,6f);
				func_405(2707,586f, 3934,558f, 42,984f, 27,6f);
				func_405(2702,361f, 3943,039f, 42,951f, 30,6f);
				func_405(2696,696f, 3951,317f, 43,012f, 34,8f);
				func_405(2766,778f, 3868,911f, 42,822f, 59,8f);
				func_405(2775,397f, 3863,697f, 43,204f, 54,2f);
				func_405(2738,841f, 3869,927f, 42,492f, 242,799f);
				func_405(2746,49f, 3865,861f, 42,808f, 239,599f);
				func_405(2754,829f, 3861,039f, 42,906f, 240,799f);
				func_405(2762,616f, 3856,316f, 42,895f, 240,799f);
				func_405(2770,463f, 3851,383f, 43,216f, 233,199f);
				func_405(2778,129f, 3844,914f, 43,26f, 229,199f);
				func_405(2785,341f, 3837,918f, 43,141f, 224,999f);
				func_405(2730,65f, 3875,186f, 42,437f, 231,999f);
				func_405(2724,14f, 3880,885f, 42,469f, 224,599f);
				func_405(2718,541f, 3887,508f, 42,614f, 217,399f);
				func_405(2783,246f, 3857,409f, 43,175f, 45,199f);
				func_405(2790,716f, 3850,631f, 43,125f, 45,199f);
				func_405(2690,655f, 3959,246f, 43,255f, 40,199f);
				func_405(2797,912f, 3842,523f, 43,166f, 40,199f);
				func_405(2791,836f, 3830,845f, 43,14f, 221,999f);
				func_405(2712,952f, 3894,566f, 42,484f, 14,799f);
			}
			break;
		
		case 92:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(3374,661f, 5559,709f, 12,3726f, 138,7999f);
				func_405(3366,365f, 5569,449f, 13,9704f, 112,8f);
				func_405(3358,493f, 5581,463f, 16,1783f, 112,8f);
				func_405(3356,705f, 5595,363f, 15,4029f, 112,8f);
				func_405(3336,662f, 5552,357f, 19,491f, 249,6f);
				func_405(3336,791f, 5567,825f, 20,432f, 249,6f);
				func_405(3335,259f, 5599,046f, 22,4606f, 249,6f);
				func_405(3336,811f, 5613,029f, 22,2159f, 249,6f);
				func_405(3354,696f, 5609,699f, 15,9453f, 111,3999f);
				func_405(3354,006f, 5624,206f, 16,018f, 111,3999f);
			}
			else
			{
				func_405(3372,053f, 5506,134f, 20,8174f, 99,5999f);
				func_405(3374,923f, 5520,177f, 20,3207f, 86f);
				func_405(3350,643f, 5490,432f, 18,8423f, 139,9997f);
				func_405(3364,189f, 5502,98f, 19,648f, 125,7999f);
				func_405(3354,101f, 5484,773f, 19,619f, 116,399f);
				func_405(3365,919f, 5519,949f, 18,8008f, 102,9988f);
				func_405(3341,889f, 5506,809f, 19,584f, 161,199f);
				func_405(3338,581f, 5497,709f, 19,376f, 161,199f);
				func_405(3335,674f, 5489,348f, 19,542f, 161,199f);
				func_405(3332,019f, 5479,563f, 19,738f, 150,998f);
				func_405(3327,404f, 5470,857f, 19,302f, 159,398f);
				func_405(3323,903f, 5461,49f, 18,492f, 156,398f);
				func_405(3320,016f, 5452,957f, 17,834f, 153,198f);
				func_405(3315,782f, 5444,61f, 17,115f, 150,798f);
				func_405(3335,451f, 5455,723f, 18,2323f, 162,1979f);
				func_405(3338,788f, 5464,803f, 18,8631f, 163,7977f);
				func_405(3362,476f, 5488,211f, 20,4432f, 108,5979f);
				func_405(3371,259f, 5491,274f, 21,5286f, 104,9989f);
				func_405(3342,201f, 5517,014f, 19,642f, 170,199f);
				func_405(3343,267f, 5526,085f, 18,902f, 175,598f);
				func_405(3343,531f, 5536,075f, 18,217f, 178,598f);
				func_405(3357,257f, 5496,71f, 18,9729f, 132,5977f);
				func_405(3342,346f, 5473,345f, 19,1235f, 159,3987f);
				func_405(3347,236f, 5480,447f, 19,4672f, 131,199f);
				func_405(3357,623f, 5516,9f, 16,9016f, 118,7991f);
				func_405(3361,366f, 5545,886f, 15,5532f, 118,7991f);
				func_405(3352,612f, 5541,013f, 16,3238f, 131,999f);
				func_405(3343,349f, 5546,494f, 17,8738f, 173,9988f);
			}
			break;
		
		case 93:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(43,848f, 6845,657f, 13,379f, 247,2f);
				func_405(50,379f, 6861,146f, 15,105f, 247,2f);
				func_405(32,501f, 6871,777f, 13,3283f, 247,2f);
				func_405(38,437f, 6885,796f, 13,3627f, 247,2f);
				func_405(55,806f, 6875,081f, 14,824f, 247,2f);
				func_405(11,616f, 6877,079f, 11,466f, 247,2f);
				func_405(18,954f, 6891,633f, 11,37f, 247,2f);
				func_405(26,68f, 6907,587f, 11,869f, 247,2f);
				func_405(7,479f, 6907,895f, 12,024f, 247,2f);
				func_405(44,9981f, 6901,352f, 11,9426f, 247,2f);
			}
			else
			{
				func_405(35,591f, 6836,608f, 13,288f, 274,4f);
				func_405(36,028f, 6830,135f, 13,801f, 270,8f);
				func_405(35,114f, 6823,884f, 14,527f, 260,8f);
				func_405(48,779f, 6838,693f, 14,337f, 273,6f);
				func_405(56,738f, 6821,8f, 15,244f, 244,8f);
				func_405(48,377f, 6825,895f, 14,656f, 249,8f);
				func_405(49,11f, 6831,439f, 13,991f, 274,8f);
				func_405(53,544f, 6818,275f, 16,342f, 243f);
				func_405(46,162f, 6821,945f, 15,483f, 249,8f);
				func_405(60,129f, 6836,8f, 15,605f, 269,6f);
				func_405(40,88f, 6802,952f, 20,113f, 242,6f);
				func_405(48,203f, 6799,134f, 20,897f, 244,4f);
				func_405(70,449f, 6809,271f, 16,846f, 243f);
				func_405(61,436f, 6814,266f, 16,71f, 244,2f);
				func_405(56,142f, 6793,458f, 19,806f, 242,6f);
				func_405(65,759f, 6791,12f, 18,433f, 276,4f);
				func_405(77,305f, 6805,391f, 18,558f, 245,6f);
				func_405(85,893f, 6800,243f, 18,535f, 249,8f);
				func_405(56,85f, 6780,582f, 18,822f, 297,999f);
				func_405(65,636f, 6784,669f, 18,789f, 293,799f);
				func_405(74,121f, 6788,498f, 18,739f, 293,799f);
				func_405(97,779f, 6796,32f, 19,02f, 276,799f);
				func_405(106,76f, 6796,983f, 18,914f, 272,599f);
				func_405(112,387f, 6802,858f, 18,994f, 210,599f);
				func_405(117,58f, 6802,644f, 18,663f, 209,399f);
				func_405(122,481f, 6802,693f, 18,468f, 209,399f);
				func_405(127,182f, 6802,686f, 18,218f, 209,399f);
				func_405(132,429f, 6801,882f, 17,949f, 209,399f);
			}
			break;
		
		case 94:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(-2213,552f, 2283,726f, 31,7464f, 293,7993f);
				func_405(-2196,71f, 2290,824f, 32,0819f, 293,7993f);
				func_405(-2232,397f, 2274,252f, 31,602f, 296,7993f);
				func_405(-2180,471f, 2296,206f, 32,9612f, 287,5992f);
				func_405(-2180,87f, 2419,649f, 0,2324f, 147,7987f);
				func_405(-2180,166f, 2436,91f, 0,2325f, 144,5987f);
				func_405(-2185,271f, 2457,022f, 0,2062f, 160,1985f);
				func_405(-2329,465f, 2393,603f, 2,5699f, 289,7982f);
				func_405(-2328,978f, 2380,406f, 2,7911f, 289,7982f);
				func_405(-2333,665f, 2366,641f, 3,4939f, 289,7982f);
			}
			else
			{
				func_405(-2239,671f, 2390,292f, 10,756f, 189,2002f);
				func_405(-2217,413f, 2392,471f, 12,2202f, 189,2002f);
				func_405(-2238,863f, 2381,56f, 13,1388f, 185,2003f);
				func_405(-2215,695f, 2383,035f, 14,9809f, 189,4004f);
				func_405(-2238,044f, 2372,67f, 15,07f, 187,4004f);
				func_405(-2215,96f, 2374,251f, 17,0939f, 187,4004f);
				func_405(-2237,494f, 2364,467f, 15,3155f, 186,2004f);
				func_405(-2216,857f, 2365,651f, 18,9029f, 173,0005f);
				func_405(-2218,526f, 2357,065f, 20,7893f, 179,0004f);
				func_405(-2237,625f, 2348,108f, 20,9097f, 179,0004f);
				func_405(-2218,447f, 2348,733f, 22,9621f, 179,0004f);
				func_405(-2238,18f, 2339,141f, 22,5602f, 174,8003f);
				func_405(-2218,771f, 2340,131f, 25,5237f, 177,2002f);
				func_405(-2238,998f, 2330,958f, 25,7263f, 175,8005f);
				func_405(-2219,221f, 2331,934f, 28,5604f, 177,8006f);
				func_405(-2219,077f, 2324,066f, 30,9043f, 198,8006f);
				func_405(-2239,413f, 2322,913f, 28,0647f, 177,8008f);
				func_405(-2240,014f, 2313,951f, 29,5314f, 170,6008f);
				func_405(-2241,543f, 2305,819f, 30,7136f, 163,4006f);
				func_405(-2244,904f, 2298,388f, 31,4166f, 148,2005f);
				func_405(-2249,31f, 2290,892f, 31,5742f, 139,2004f);
				func_405(-2211,896f, 2319,581f, 31,7538f, 259,4002f);
				func_405(-2203,961f, 2320,016f, 31,9895f, 271,4001f);
				func_405(-2255,106f, 2285,415f, 31,617f, 130,3999f);
				func_405(-2196,17f, 2320,341f, 32,2704f, 270,6003f);
				func_405(-2261,335f, 2280,203f, 31,6562f, 130,0002f);
				func_405(-2268,447f, 2275,528f, 31,7095f, 124,4001f);
				func_405(-2188,258f, 2319,985f, 32,5649f, 267,3998f);
			}
			break;
		
		case 95:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(4,0332f, 3378,618f, 41,0822f, 247,1989f);
				func_405(38,819f, 3321,2f, 37,0283f, 203,999f);
				func_405(26,877f, 3309,062f, 37,93f, 191,9991f);
				func_405(15,6727f, 3297,846f, 39,0535f, 191,9991f);
				func_405(-24,2865f, 3367,527f, 41,4783f, 264,399f);
				func_405(-23,1279f, 3352,254f, 40,52f, 280,399f);
				func_405(-25,5802f, 3337,243f, 40,7142f, 320,1988f);
				func_405(97,4844f, 3335,385f, 34,6164f, 7,9981f);
				func_405(20,409f, 3370,839f, 38,8393f, 235,799f);
				func_405(48,457f, 3336,586f, 35,8912f, 270,3979f);
			}
			else
			{
				func_405(25,9869f, 3349,706f, 36,0366f, 273,9994f);
				func_405(25,0176f, 3356,915f, 36,4258f, 276,9998f);
				func_405(36,2443f, 3351,358f, 36,2386f, 272,5997f);
				func_405(35,9352f, 3358,816f, 37,0033f, 276,7998f);
				func_405(25,9651f, 3342,673f, 36,2157f, 270,7997f);
				func_405(30,027f, 3292,351f, 38,604f, 140,199f);
				func_405(49,1614f, 3358,589f, 35,9759f, 263,5988f);
				func_405(48,288f, 3352,494f, 35,5841f, 261,1988f);
				func_405(23,897f, 3283,152f, 39,381f, 145,399f);
				func_405(60,9182f, 3356,21f, 35,8814f, 255,3988f);
				func_405(18,723f, 3274,025f, 40,054f, 155,799f);
				func_405(59,0177f, 3350,004f, 35,3204f, 255,7989f);
				func_405(36,958f, 3298,847f, 38,001f, 127,799f);
				func_405(54,165f, 3311,582f, 36,517f, 303,799f);
				func_405(61,607f, 3317,105f, 35,916f, 306,999f);
				func_405(68,994f, 3323,129f, 35,364f, 308,199f);
				func_405(76,266f, 3329,467f, 34,805f, 311,399f);
				func_405(82,757f, 3335,915f, 34,344f, 316,598f);
				func_405(46,5977f, 3306,196f, 37,1628f, 304,9976f);
				func_405(14,664f, 3263,688f, 40,931f, 160,398f);
				func_405(50,8234f, 3324,118f, 36,2129f, 305,1976f);
				func_405(11,7852f, 3256,101f, 41,7031f, 159,198f);
				func_405(89,575f, 3343,311f, 33,932f, 318,398f);
				func_405(58,4154f, 3329,423f, 35,6197f, 305,5979f);
				func_405(65,3201f, 3334,253f, 35,1903f, 306,5977f);
				func_405(72,1063f, 3339,793f, 34,8449f, 308,5977f);
				func_405(95,6614f, 3349,917f, 33,696f, 316,1977f);
				func_405(85,4387f, 3353,183f, 33,8047f, 317,9978f);
			}
			break;
		
		case 96:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(2135,708f, 1757,503f, 102,073f, 40,999f);
				func_405(2148,674f, 1764,557f, 102,75f, 40,999f);
				func_405(2160,511f, 1771,173f, 104,149f, 40,999f);
				func_405(2172,842f, 1777,391f, 105,369f, 40,999f);
				func_405(2127,938f, 1736,353f, 100,835f, 222,199f);
				func_405(2141,682f, 1739,865f, 99,833f, 222,199f);
				func_405(2152,786f, 1747,776f, 99,785f, 222,199f);
				func_405(2166,356f, 1754,682f, 100,07f, 220,399f);
				func_405(2090,66f, 1701,805f, 101,681f, 243,199f);
				func_405(2066,149f, 1716,735f, 102,112f, 228,2f);
			}
			else
			{
				func_405(2073,044f, 1725,935f, 102,5096f, 225,2f);
				func_405(2077,24f, 1730,299f, 102,5247f, 225,2f);
				func_405(2081,68f, 1734,742f, 102,5588f, 225,2f);
				func_405(2086,052f, 1739,045f, 102,6618f, 225,2f);
				func_405(2090,55f, 1743,53f, 102,6058f, 225,2f);
				func_405(2095,295f, 1748,274f, 102,3022f, 225,2f);
				func_405(2101,779f, 1721,807f, 101,927f, 225,2f);
				func_405(2107,08f, 1727,001f, 101,932f, 225,2f);
				func_405(2095,867f, 1716,475f, 101,925f, 225,2f);
				func_405(2112,387f, 1732,492f, 101,849f, 225,2f);
				func_405(2089,718f, 1710,779f, 101,978f, 225,2f);
				func_405(2111,639f, 1717,132f, 100,855f, 225,2f);
				func_405(2117,297f, 1722,655f, 100,704f, 225,2f);
				func_405(2105,821f, 1711,672f, 101,065f, 225,2f);
				func_405(2098,759f, 1704,866f, 101,209f, 225,2f);
				func_405(2121,208f, 1713,145f, 99,65f, 225,2f);
				func_405(2115,34f, 1707,542f, 99,829f, 225,2f);
				func_405(2109,211f, 1702,247f, 100,079f, 225,2f);
				func_405(2124,167f, 1704,036f, 98,584f, 225,2f);
				func_405(2118,181f, 1698,253f, 98,645f, 225,2f);
				func_405(2127,253f, 1694,878f, 97,078f, 225,2f);
				func_405(2117,786f, 1738,219f, 101,839f, 225,2f);
				func_405(2122,34f, 1728,011f, 100,627f, 225,2f);
				func_405(2126,288f, 1718,542f, 99,501f, 225,2f);
				func_405(2129,762f, 1709,847f, 98,352f, 225,2f);
				func_405(2132,765f, 1700,777f, 96,999f, 225,2f);
				func_405(2120,399f, 1689,165f, 97,388f, 225,2f);
				func_405(2098,994f, 1747,929f, 102,2403f, 225,2f);
			}
			break;
		
		case 97:
			if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_59 == 0)
			{
				func_405(1871,691f, 358,5369f, 162,1067f, 153,1979f);
				func_405(1858,966f, 351,2935f, 161,7614f, 166,598f);
				func_405(1873,611f, 342,6637f, 161,6936f, 142,998f);
				func_405(1887,645f, 343,1557f, 162,1659f, 138,5979f);
				func_405(1888,644f, 328,0839f, 161,7489f, 139,398f);
				func_405(1898,596f, 315,2232f, 161,4418f, 173,7979f);
				func_405(1896,729f, 266,5388f, 161,1619f, 113,5978f);
				func_405(1900,167f, 281,3884f, 161,7807f, 115,197f);
				func_405(1856,286f, 294,624f, 161,442f, 167,9966f);
				func_405(1868,622f, 309,7907f, 162,6084f, 155,1968f);
			}
			else
			{
				func_405(1856,378f, 255,9146f, 162,7158f, 147,6202f);
				func_405(1837,279f, 227,3696f, 165,2592f, 164,3995f);
				func_405(1835,192f, 219,3931f, 167,5468f, 169,9994f);
				func_405(1833,557f, 211,859f, 169,864f, 169,9994f);
				func_405(1839,534f, 194,4053f, 171,3841f, 172,9989f);
				func_405(1838,289f, 185,8157f, 171,2585f, 174,1989f);
				func_405(1837,478f, 177,0607f, 170,7063f, 174,1989f);
				func_405(1840,463f, 202,6959f, 170,8702f, 174,1989f);
				func_405(1836,296f, 168,7307f, 170,5786f, 174,1989f);
				func_405(1835,412f, 159,3162f, 170,4163f, 171,1989f);
				func_405(1826,91f, 214,9648f, 172,2502f, 18,7986f);
				func_405(1823,805f, 223,0288f, 172,0794f, 21,7986f);
				func_405(1820,599f, 231,144f, 172,2987f, 21,7986f);
				func_405(1817,245f, 239,1232f, 172,0878f, 21,7986f);
				func_405(1814,089f, 247,0423f, 171,7386f, 24,9986f);
				func_405(1810,879f, 255,6553f, 171,7517f, 19,3986f);
				func_405(1807,729f, 265,4899f, 172,2307f, 15,1986f);
				func_405(1823,147f, 197,3122f, 172,235f, 192,3984f);
				func_405(1824,641f, 184,4241f, 171,5948f, 183,3985f);
				func_405(1825,019f, 171,2314f, 170,5843f, 183,3985f);
				func_405(1824,748f, 162,8998f, 170,4961f, 173,1985f);
				func_405(1817,345f, 214,6964f, 172,5223f, 203,9982f);
				func_405(1813,466f, 222,3717f, 172,3316f, 200,9982f);
				func_405(1809,114f, 230,8225f, 172,346f, 205,1983f);
				func_405(1805,594f, 239,3896f, 172,0033f, 197,9984f);
				func_405(1802,515f, 247,4269f, 171,8964f, 197,9984f);
				func_405(1833,982f, 150,4025f, 170,411f, 163,7985f);
				func_405(1823,079f, 154,5105f, 170,8194f, 163,7985f);
			}
			break;
		
		case 123:
		case 124:
		case 125:
			func_391(896,357f, -3,23695f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(899,759f, -5,54885f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(903,021f, -7,62495f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(906,474f, -9,70314f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(909,884f, -11,888f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(913,209f, -14,0965f, 77,7645f, 147,3987f, iParam1, 0);
			func_391(879,578f, 7,26725f, 77,7646f, 147,3987f, iParam1, 0);
			func_391(876,642f, 9,05555f, 77,7646f, 147,3987f, iParam1, 0);
			func_391(873,534f, 10,8622f, 77,7646f, 147,3987f, iParam1, 0);
			func_391(869,685f, -7,55887f, 77,7646f, 237,3985f, iParam1, 0);
			func_391(867,866f, -10,464f, 77,7646f, 237,3985f, iParam1, 0);
			func_391(866,077f, -13,4579f, 77,7646f, 237,3985f, iParam1, 0);
			func_391(864,322f, -16,4335f, 77,7646f, 237,3985f, iParam1, 0);
			func_391(862,534f, -19,2652f, 77,7644f, 237,3985f, iParam1, 0);
			func_391(887,524f, -18,7251f, 77,7647f, 237,3985f, iParam1, 0);
			func_391(885,594f, -21,7041f, 77,7647f, 237,3985f, iParam1, 0);
			func_391(883,691f, -24,7685f, 77,7647f, 237,3985f, iParam1, 0);
			func_391(881,827f, -27,7084f, 77,7644f, 237,3985f, iParam1, 0);
			func_391(880,013f, -30,5612f, 77,7644f, 237,3985f, iParam1, 0);
			func_391(884,931f, -17,2169f, 77,7646f, 57,5983f, iParam1, 0);
			func_391(883,043f, -20,1063f, 77,7646f, 57,5983f, iParam1, 0);
			func_391(881,118f, -22,9962f, 77,7644f, 57,5983f, iParam1, 0);
			func_391(879,345f, -25,9389f, 77,7644f, 57,5983f, iParam1, 0);
			func_391(877,631f, -28,8543f, 77,7644f, 57,5983f, iParam1, 0);
			func_391(903,231f, -28,6965f, 77,7647f, 57,5983f, iParam1, 0);
			func_391(901,368f, -31,6316f, 77,7647f, 57,5983f, iParam1, 0);
			func_391(899,552f, -34,4844f, 77,7647f, 57,5983f, iParam1, 0);
			func_391(897,669f, -37,4419f, 77,7647f, 57,5983f, iParam1, 0);
			func_391(895,831f, -40,3309f, 77,7647f, 57,5983f, iParam1, 0);
			func_391(932,842f, -25,6631f, 77,7647f, 147,798f, iParam1, 0);
			func_391(935,693f, -27,516f, 77,7647f, 147,798f, iParam1, 0);
			func_391(938,593f, -29,5809f, 77,7647f, 147,798f, iParam1, 0);
			break;
		
		default:
			break;
	}
}

void func_391(struct<3> Param0, float fParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	
	if (!iParam4 == 0)
	{
		func_304(iParam4, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
		fVar6 = (Var3.f_1 - Var0.f_1);
		if (bParam5)
		{
			fVar6 = (fVar6 * -1f);
		}
		fVar6 = (fVar6 * 0,5f);
		Var7 = { 0f, fVar6, 0f };
		Var10 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Param0, fParam3, Var7) };
		func_405(Var10, fParam3);
	}
	else
	{
		func_405(Param0, fParam3);
	}
}

void func_392(int iParam0)
{
	switch (iParam0)
	{
		case 83:
			func_405(-1133,454f, -3371,672f, 12,945f, 329,799f);
			func_405(-1119,748f, -3379,991f, 12,945f, 329,799f);
			func_405(-1147,602f, -3363,505f, 12,945f, 329,799f);
			func_405(-1161,988f, -3354,852f, 12,945f, 329,799f);
			func_405(-1116,563f, -3358,99f, 12,945f, 329,799f);
			func_405(-1131,23f, -3350,104f, 12,945f, 329,799f);
			func_405(-1145,252f, -3341,608f, 12,945f, 329,799f);
			func_405(-1115,202f, -3339,265f, 12,945f, 329,799f);
			func_405(-1129,559f, -3330,697f, 12,945f, 329,799f);
			func_405(-1114,664f, -3320,954f, 12,945f, 329,799f);
			func_405(-1199,923f, -3369,502f, 12,945f, 350,399f);
			func_405(-1212,069f, -3363,568f, 12,945f, 350,399f);
			func_405(-1223,637f, -3356,694f, 12,945f, 350,399f);
			func_405(-1102,284f, -3420,613f, 12,945f, 354,599f);
			func_405(-1091,131f, -3427,396f, 12,945f, 354,599f);
			func_405(-1079,372f, -3434,306f, 12,945f, 354,599f);
			func_405(-1067,498f, -3441,878f, 13,114f, 354,599f);
			func_405(-1055,714f, -3448,819f, 12,977f, 354,599f);
			func_405(-1043,37f, -3455,796f, 13,146f, 354,599f);
			func_405(-1017,023f, -3382,777f, 12,8401f, 330,6f);
			func_405(-1010,608f, -3386,103f, 12,8401f, 330,6f);
			func_405(-1004,658f, -3389,823f, 12,8401f, 330,6f);
			func_405(-998,3798f, -3393,644f, 12,8401f, 330,6f);
			func_405(-991,5242f, -3397,297f, 12,8401f, 330,6f);
			func_405(-985,0826f, -3401,247f, 12,8401f, 330,6f);
			func_405(-978,2733f, -3405,031f, 12,8401f, 330,6f);
			func_405(-971,724f, -3409,109f, 12,8401f, 330,6f);
			func_405(-964,4719f, -3413,202f, 13,1463f, 330,6f);
			func_405(-1022,94f, -3392,372f, 12,8401f, 330,6f);
			func_405(-1016,219f, -3395,82f, 12,8401f, 330,6f);
			func_405(-1009,873f, -3399,143f, 12,8401f, 330,6f);
			func_405(-1003,436f, -3402,982f, 12,8401f, 330,6f);
			func_405(-997,0872f, -3406,928f, 12,8401f, 330,6f);
			func_405(-990,2305f, -3410,548f, 12,8401f, 330,6f);
			func_405(-983,4429f, -3414,093f, 12,8401f, 330,6f);
			func_405(-976,8809f, -3417,846f, 12,8401f, 330,6f);
			func_405(-969,4039f, -3421,727f, 13,1463f, 330,6f);
			func_405(-1028,251f, -3401,834f, 12,8401f, 330,6f);
			func_405(-1021,631f, -3405,433f, 12,8401f, 330,6f);
			func_405(-1015,209f, -3408,563f, 12,8401f, 330,6f);
			func_405(-1008,81f, -3412,484f, 12,8401f, 330,6f);
			func_405(-1002,277f, -3415,987f, 12,8401f, 330,6f);
			func_405(-995,7023f, -3419,97f, 12,8401f, 330,6f);
			func_405(-989,1453f, -3423,988f, 12,8401f, 330,6f);
			func_405(-982,6298f, -3427,981f, 12,8401f, 330,6f);
			func_405(-974,9305f, -3431,833f, 13,1463f, 330,6f);
			break;
		
		case 84:
			func_405(-1356,991f, -3242,228f, 12,945f, 330f);
			func_405(-1369,313f, -3234,758f, 12,945f, 330f);
			func_405(-1381,751f, -3227,408f, 12,945f, 330f);
			func_405(-1394,302f, -3220,021f, 12,945f, 330f);
			func_405(-1354,339f, -3223,129f, 12,945f, 330f);
			func_405(-1366,302f, -3215,809f, 12,945f, 330f);
			func_405(-1378,492f, -3208,645f, 12,945f, 330f);
			func_405(-1350,322f, -3203,405f, 12,945f, 330f);
			func_405(-1362,684f, -3196,451f, 12,945f, 330f);
			func_405(-1347,089f, -3182,69f, 12,945f, 330f);
			func_405(-1452,642f, -3222,367f, 12,945f, 347,799f);
			func_405(-1464,229f, -3215,108f, 12,945f, 347,799f);
			func_405(-1476,133f, -3207,652f, 12,945f, 347,799f);
			func_405(-1488,295f, -3200,033f, 12,945f, 347,799f);
			func_405(-1336,877f, -3272,344f, 12,945f, 8,199f);
			func_405(-1323,381f, -3279,614f, 12,945f, 8,199f);
			func_405(-1309,671f, -3287,749f, 12,945f, 8,199f);
			func_405(-1296,963f, -3294,511f, 12,945f, 8,199f);
			func_405(-1501,978f, -3193,849f, 12,945f, 350,599f);
			func_405(-1344,716f, -3288,333f, 12,9445f, 331,2f);
			func_405(-1338,141f, -3290,335f, 12,9445f, 331,2f);
			func_405(-1331,473f, -3294,178f, 12,9445f, 331,2f);
			func_405(-1324,921f, -3297,998f, 12,9445f, 331,2f);
			func_405(-1318,129f, -3301,957f, 12,9445f, 331,2f);
			func_405(-1350,466f, -3294,226f, 12,9445f, 331,2f);
			func_405(-1343,482f, -3297,576f, 12,9445f, 331,2f);
			func_405(-1336,398f, -3302,456f, 12,9445f, 331,2f);
			func_405(-1329,82f, -3306,82f, 12,945f, 331,2f);
			func_405(-1322,761f, -3310,353f, 12,945f, 331,2f);
			func_405(-1316,587f, -3314,556f, 12,945f, 331,2f);
			func_405(-1326,538f, -3318,499f, 12,945f, 331,2f);
			func_405(-1335,74f, -3313,678f, 12,945f, 331,2f);
			func_405(-1350,848f, -3302,619f, 12,9446f, 331,2f);
			func_405(-1357,961f, -3306,886f, 12,945f, 331,2f);
			func_405(-1335,202f, -3322,428f, 12,9452f, 331,2f);
			func_405(-1351,401f, -3311,566f, 12,9452f, 331,2f);
			func_405(-1344,255f, -3305,965f, 12,9451f, 331,2f);
			func_405(-1299,832f, -3305,573f, 12,945f, 331,2f);
			func_405(-1293,414f, -3309,413f, 12,945f, 331,2f);
			func_405(-1286,835f, -3313,157f, 12,945f, 331,2f);
			func_405(-1303,988f, -3313,1f, 12,945f, 331,2f);
			func_405(-1297,402f, -3316,699f, 12,945f, 331,2f);
			func_405(-1290,969f, -3320,519f, 12,945f, 331,2f);
			func_405(-1308,27f, -3320,612f, 12,945f, 331,2f);
			func_405(-1301,968f, -3324,714f, 12,945f, 331,2f);
			func_405(-1295,483f, -3328,422f, 12,945f, 331,2f);
			break;
		
		case 85:
			func_405(-2039,992f, 3132,191f, 31,81f, 149,399f);
			func_405(-2025,075f, 3128,63f, 31,81f, 197,599f);
			func_405(-2049,589f, 3142,464f, 31,81f, 109,199f);
			func_405(-2088,648f, 3081,327f, 31,81f, 150,599f);
			func_405(-2070,669f, 3111,575f, 31,81f, 123,399f);
			func_405(-2053,385f, 3109,703f, 31,81f, 150,599f);
			func_405(-2044,448f, 3094,012f, 31,81f, 181,799f);
			func_405(-2071,825f, 3093,477f, 31,81f, 150,599f);
			func_405(-2060,579f, 3085,924f, 31,81f, 150,599f);
			func_405(-2062,712f, 3066,073f, 31,81f, 150,599f);
			func_405(-2094,385f, 3190,445f, 31,81f, 117,799f);
			func_405(-2083,056f, 3182,885f, 31,81f, 117,799f);
			func_405(-2071,578f, 3175,554f, 31,81f, 117,799f);
			func_405(-2120,249f, 3173,97f, 31,81f, 25,199f);
			func_405(-2067,547f, 3146,325f, 31,81f, 14,998f);
			func_405(-2080,506f, 3154,591f, 31,81f, 15,798f);
			func_405(-2093,278f, 3159,793f, 31,81f, 14,798f);
			func_405(-2106,614f, 3167,605f, 31,81f, 21,198f);
			func_405(-2106,347f, 3196,902f, 31,81f, 117,799f);
			func_405(-2024,425f, 3102,707f, 31,8103f, 150,7997f);
			func_405(-2018,074f, 3099,056f, 31,8103f, 150,7997f);
			func_405(-2009,032f, 3094,171f, 31,8103f, 150,7997f);
			func_405(-2002,923f, 3090,669f, 31,8103f, 150,7997f);
			func_405(-1996,542f, 3087,201f, 31,8103f, 150,7997f);
			func_405(-1990,232f, 3083,534f, 31,8103f, 150,7997f);
			func_405(-1983,518f, 3080,033f, 31,8103f, 150,7997f);
			func_405(-2029,16f, 3094,357f, 31,8103f, 150,7997f);
			func_405(-2022,431f, 3090,703f, 31,8103f, 150,7997f);
			func_405(-2013,702f, 3086,015f, 31,8103f, 150,7997f);
			func_405(-2007,67f, 3082,42f, 31,8103f, 150,7997f);
			func_405(-2001,211f, 3078,569f, 31,8103f, 150,7997f);
			func_405(-1994,644f, 3074,654f, 31,8103f, 150,7997f);
			func_405(-1987,934f, 3070,654f, 31,8103f, 150,7997f);
			func_405(-2033,776f, 3086,031f, 31,8103f, 150,7997f);
			func_405(-2026,929f, 3082,094f, 31,8103f, 150,7997f);
			func_405(-2018,663f, 3077,341f, 31,8103f, 150,7997f);
			func_405(-2012,345f, 3073,707f, 31,8103f, 150,7997f);
			func_405(-2006,052f, 3070,089f, 31,8103f, 150,7997f);
			func_405(-1999,169f, 3066,132f, 31,8103f, 150,7997f);
			func_405(-1992,542f, 3062,257f, 31,8103f, 150,7997f);
			func_405(-2038,545f, 3077,344f, 31,8103f, 150,7997f);
			func_405(-2031,587f, 3073,344f, 31,8103f, 150,7997f);
			func_405(-2021,909f, 3067,715f, 31,8103f, 150,7997f);
			func_405(-2012,886f, 3063,219f, 31,8103f, 150,7997f);
			func_405(-2003,481f, 3057,141f, 31,8103f, 150,7997f);
			func_405(-1996,618f, 3053,195f, 31,8103f, 150,7997f);
			break;
		
		case 86:
			func_405(-1885,187f, 3095,344f, 31,81f, 150,2f);
			func_405(-1898,637f, 3072,816f, 31,811f, 150,2f);
			func_405(-1886,469f, 3065,78f, 31,811f, 150,2f);
			func_405(-1874,621f, 3058,437f, 31,81f, 150,2f);
			func_405(-1862,818f, 3051,244f, 31,81f, 150,2f);
			func_405(-1915,317f, 3041,652f, 31,811f, 150,2f);
			func_405(-1896,724f, 2997,848f, 31,81f, 150,2f);
			func_405(-1932,975f, 3011,781f, 31,81f, 150,2f);
			func_405(-1875,668f, 3034,438f, 31,811f, 150,2f);
			func_405(-1886,144f, 3016,285f, 31,81f, 150,2f);
			func_405(-1913,706f, 3104,196f, 31,81f, 118,599f);
			func_405(-1925,44f, 3112,236f, 31,81f, 118,599f);
			func_405(-1938,08f, 3119,383f, 31,81f, 118,599f);
			func_405(-1927,822f, 3072,679f, 31,81f, 13,399f);
			func_405(-1940,575f, 3079,031f, 31,81f, 13,399f);
			func_405(-1953,344f, 3084,888f, 31,81f, 13,399f);
			func_405(-1965,91f, 3091,929f, 31,81f, 13,399f);
			func_405(-1978,86f, 3100,029f, 31,81f, 13,399f);
			func_405(-1950,928f, 3126,457f, 31,81f, 118,999f);
			func_405(-1975,282f, 3083,046f, 31,8103f, 150,1997f);
			func_405(-1969,362f, 3079,909f, 31,8103f, 150,1997f);
			func_405(-1963,673f, 3076,887f, 31,8103f, 150,1997f);
			func_405(-1958,524f, 3073,899f, 31,8103f, 150,1997f);
			func_405(-1979,828f, 3074,704f, 31,8103f, 150,1997f);
			func_405(-1973,901f, 3071,418f, 31,8103f, 150,1997f);
			func_405(-1967,917f, 3068,089f, 31,8103f, 150,1997f);
			func_405(-1949,916f, 3068,72f, 31,8103f, 150,1997f);
			func_405(-1961,934f, 3064,6f, 31,8103f, 150,1997f);
			func_405(-1984,332f, 3067,03f, 31,8103f, 150,1997f);
			func_405(-1978,182f, 3063,286f, 31,8103f, 150,1997f);
			func_405(-1972,061f, 3060,191f, 31,8103f, 150,1997f);
			func_405(-1952,61f, 3059,551f, 31,8103f, 150,1997f);
			func_405(-1956,958f, 3051,589f, 31,8103f, 150,1997f);
			func_405(-1988,778f, 3059,135f, 31,8103f, 150,1997f);
			func_405(-1982,174f, 3055,591f, 31,8103f, 150,1997f);
			func_405(-1975,579f, 3051,898f, 31,8103f, 150,1997f);
			func_405(-1969,139f, 3048,28f, 31,8103f, 150,1997f);
			func_405(-1962,25f, 3044,256f, 31,8103f, 150,1997f);
			func_405(-1989,48f, 3050,467f, 31,8103f, 150,1997f);
			func_405(-1977,325f, 3043,786f, 31,8103f, 150,1997f);
			func_405(-1971,07f, 3040,306f, 31,8103f, 150,1997f);
			func_405(-1964,409f, 3037,118f, 31,8103f, 150,1997f);
			func_405(-1998,375f, 3042,349f, 31,8103f, 150,1997f);
			func_405(-1991,769f, 3038,47f, 31,8103f, 150,1997f);
			func_405(-1978,718f, 3035,164f, 31,8103f, 150,1997f);
			func_405(-1971,483f, 3031,316f, 31,8103f, 150,1997f);
			break;
		
		case 87:
			func_405(-2484,323f, 3249,294f, 31,828f, 151f);
			func_405(-2495,313f, 3255,746f, 31,828f, 151f);
			func_405(-2472,644f, 3242,684f, 31,828f, 151f);
			func_405(-2506,313f, 3262,27f, 31,823f, 151f);
			func_405(-2461,494f, 3235,93f, 31,828f, 151f);
			func_405(-2505,602f, 3238,049f, 31,828f, 151f);
			func_405(-2481,937f, 3224,8f, 31,828f, 151f);
			func_405(-2516,813f, 3244,266f, 31,823f, 151f);
			func_405(-2470,03f, 3217,899f, 31,828f, 151f);
			func_405(-2493,933f, 3231,308f, 31,828f, 151f);
			func_405(-2443,467f, 3227,753f, 31,828f, 175,8f);
			func_405(-2431,365f, 3220,9f, 31,828f, 175,8f);
			func_405(-2419,883f, 3214,708f, 31,828f, 175,8f);
			func_405(-2501,903f, 3272,865f, 31,822f, 123,999f);
			func_405(-2513,555f, 3280,176f, 31,817f, 123,999f);
			func_405(-2524,776f, 3287,276f, 31,973f, 123,999f);
			func_405(-2407,718f, 3208,055f, 31,827f, 176,199f);
			func_405(-2395,689f, 3201,125f, 31,827f, 176,199f);
			func_405(-2383,498f, 3194,211f, 31,833f, 176,199f);
			func_405(-2426,219f, 3238,211f, 31,8616f, 150,5996f);
			func_405(-2419,052f, 3233,866f, 31,8726f, 150,5996f);
			func_405(-2412,069f, 3229,854f, 31,8859f, 150,5996f);
			func_405(-2405,282f, 3225,809f, 31,8841f, 150,5996f);
			func_405(-2398,624f, 3222,135f, 31,9249f, 150,5996f);
			func_405(-2391,729f, 3218,229f, 31,9354f, 150,5996f);
			func_405(-2384,727f, 3214,524f, 31,9585f, 150,5996f);
			func_405(-2377,55f, 3210,461f, 31,9192f, 150,5996f);
			func_405(-2369,96f, 3205,835f, 31,8267f, 150,5996f);
			func_405(-2404,498f, 3235,728f, 31,8959f, 150,5996f);
			func_405(-2397,481f, 3232,375f, 31,9879f, 150,5996f);
			func_405(-2390,524f, 3228,125f, 31,9758f, 150,5996f);
			func_405(-2383,986f, 3223,995f, 31,986f, 150,5996f);
			func_405(-2377,176f, 3219,695f, 31,9615f, 150,5996f);
			func_405(-2370,524f, 3215,946f, 32,002f, 150,5996f);
			func_405(-2400,23f, 3243,846f, 31,8311f, 150,5996f);
			func_405(-2393,28f, 3240,281f, 32,0164f, 150,5996f);
			func_405(-2386,355f, 3236,819f, 32,0616f, 150,5996f);
			func_405(-2379,382f, 3232,74f, 32,0318f, 150,5996f);
			func_405(-2372,314f, 3229,196f, 32,0177f, 150,5996f);
			func_405(-2365,153f, 3225,732f, 32,0145f, 150,5996f);
			func_405(-2395,04f, 3252,644f, 31,8557f, 150,5996f);
			func_405(-2388,684f, 3249,092f, 32,0198f, 150,5996f);
			func_405(-2382,127f, 3245,045f, 32,0086f, 150,5996f);
			func_405(-2374,905f, 3240,938f, 32,0085f, 150,5996f);
			func_405(-2368,14f, 3237,328f, 32,0177f, 150,5996f);
			func_405(-2361,068f, 3233,396f, 31,9573f, 150,5996f);
			break;
		
		default:
			break;
	}
}

int func_393(int iParam0)
{
	switch (iParam0)
	{
		case joaat("microlight"):
		case joaat("havok"):
		case joaat("seabreeze"):
		case joaat("rogue"):
		case joaat("pyro"):
		case joaat("buzzard"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("volatus"):
		case joaat("cuban800"):
		case joaat("besra"):
		case joaat("duster"):
		case joaat("stunt"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("lazer"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("starling"):
			return 1;
		
		default:
	}
	return 0;
}

void func_394(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
			func_405(-947,712f, -3367,704f, 12,944f, 60f);
			func_405(-904,692f, -3293,072f, 12,944f, 60f);
			func_405(-863,71f, -3221,978f, 12,944f, 60f);
			func_405(-966,418f, -3162,773f, 12,944f, 60f);
			func_405(-1007,435f, -3233,93f, 12,944f, 60f);
			func_405(-1050,455f, -3308,559f, 12,944f, 60f);
			func_405(-1145,673f, -3253,456f, 12,944f, 60f);
			func_405(-1098,386f, -3181,428f, 12,944f, 60f);
			func_405(-1060,474f, -3108,903f, 12,944f, 60f);
			func_405(-1155,391f, -3053,632f, 12,944f, 60f);
			func_405(-1196,114f, -3125,146f, 12,948f, 60f);
			func_405(-1235,552f, -3201,86f, 12,944f, 60f);
			func_405(-1344,446f, -3139,177f, 12,944f, 60f);
			func_405(-1301,308f, -3064,341f, 12,944f, 60f);
			func_405(-1260,135f, -2992,912f, 12,944f, 60f);
			func_405(-1364,244f, -2932,9f, 12,98f, 60f);
			func_405(-1405,284f, -3004,108f, 12,96f, 60f);
			func_405(-1448,29f, -3078,72f, 12,95f, 60f);
			func_405(-1535,732f, -3028,318f, 12,945f, 60f);
			func_405(-1492,639f, -2953,558f, 12,945f, 60f);
			func_405(-1451,506f, -2882,2f, 12,944f, 60f);
			func_405(-1553,927f, -2823,12f, 13,002f, 60f);
			func_405(-1595,097f, -2894,571f, 12,944f, 60f);
			func_405(-1637,836f, -2968,714f, 12,945f, 60f);
			func_405(-1740,971f, -2911,484f, 12,944f, 330f);
			func_405(-1696,293f, -2833,978f, 12,944f, 330f);
			func_405(-1651,502f, -2756,273f, 12,945f, 330f);
			func_405(-1588,258f, -2647,575f, 12,944f, 330f);
			func_405(-1536,862f, -2681,378f, 12,945f, 330f);
			func_405(-1529,025f, -2544,485f, 12,944f, 330f);
			break;
		
		case 85:
		case 86:
		case 87:
			func_405(-1970,422f, 2825,696f, 31,81f, 60,4f);
			func_405(-2033,307f, 2855,526f, 31,83f, 60,4f);
			func_405(-2091,018f, 2888,691f, 31,81f, 60,4f);
			func_405(-2206,717f, 2955,363f, 31,81f, 60,4f);
			func_405(-2268,817f, 2990,846f, 31,81f, 60,4f);
			func_405(-2324,039f, 3023,154f, 31,811f, 60,4f);
			func_405(-2435,806f, 3087,705f, 31,824f, 60,4f);
			func_405(-2543,753f, 3149,909f, 31,821f, 60,4f);
			func_405(-1944,848f, 2898,798f, 31,81f, 125,398f);
			func_405(-1978,705f, 2924,367f, 31,846f, 151,999f);
			func_405(-2064,849f, 2955,153f, 31,867f, 151,199f);
			func_405(-2106,165f, 2980,687f, 31,81f, 104,599f);
			func_405(-2302,367f, 3088,676f, 31,814f, 150,598f);
			func_405(-2152,113f, 2924,162f, 31,81f, 60,198f);
			func_405(-2488,232f, 3118,146f, 31,822f, 59,798f);
			func_405(-2277,922f, 3133,756f, 31,811f, 120,598f);
			func_405(-2604,776f, 3185,186f, 31,812f, 59,998f);
			func_405(-2608,107f, 3305,049f, 31,812f, 60,198f);
			func_405(-2718,936f, 3323,203f, 31,81f, 201,198f);
			func_405(-2658,718f, 3216,499f, 31,812f, 59,998f);
			func_405(-2380,372f, 3055,341f, 31,826f, 60,4f);
			func_405(-2790,616f, 3286,24f, 31,812f, 240,397f);
			func_405(-2770,946f, 3322,605f, 31,812f, 240,397f);
			func_405(-2678,805f, 3339,186f, 31,812f, 199,597f);
			func_405(-2743,882f, 3224,094f, 31,81f, 303,397f);
			func_405(-2701,354f, 3203,092f, 31,994f, 328,397f);
			func_405(-2249,816f, 2944,609f, 31,937f, 330,196f);
			func_405(-2586,579f, 3137,286f, 31,935f, 330,196f);
			func_405(-2134,76f, 2878,728f, 31,81f, 330,196f);
			func_405(-1949,075f, 2861,21f, 31,811f, 58,798f);
			break;
		
		default:
			break;
	}
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hydra"):
		case joaat("dodo"):
		case joaat("mammatus"):
		case joaat("annihilator"):
		case joaat("tula"):
		case joaat("hunter"):
		case joaat("mogul"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("shamal"):
		case joaat("savage"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("nimbus"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("valkyrie"):
		case joaat("titan"):
		case joaat("skylift"):
		case joaat("miljet"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("alkonost"):
			return 1;
		
		default:
	}
	return 0;
}

int func_396(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -1308,118f, -2934,27f, 13,7545f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true), -2270,245f, 3127,913f, 31,8118f) < 1000f)
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_399(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	iVar2 = 0;
	fVar3 = 50f;
	iVar0 = 1;
	while (iVar0 <= 128)
	{
		if (iVar2 < *uParam3)
		{
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/], Global_1312124[iVar0 /*1951*/].f_3[iVar1 /*3*/].f_1, 0f) < fVar3)
				{
					(*uParam3)[iVar2] = iVar0;
					(*uParam4)[iVar2] = 0;
					iVar2++;
					iVar1 = 99;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 159)
	{
		fVar3 = 50f;
		if (iVar0 >= 83 && iVar0 <= 87)
		{
			if (func_377(iVar0))
			{
				fVar3 = 300f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 89 && iVar0 <= 97)
		{
			if (func_400(iVar0))
			{
				fVar3 = 75f;
			}
			else
			{
				fVar3 = 0f;
			}
		}
		if (iVar0 >= 123 && iVar0 <= 125)
		{
			fVar3 = 150f;
		}
		if (iVar2 < *uParam3)
		{
			fVar4 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
			if (fVar4 < fVar3)
			{
				(*uParam3)[iVar2] = iVar0;
				(*uParam4)[iVar2] = 1;
				iVar2++;
			}
		}
		iVar0++;
	}
	if (iVar2 > 0)
	{
		return 1;
	}
	return 0;
}

int func_400(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_401(iParam0);
	if (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_281 == iVar0)
	{
		return 1;
	}
	iVar1 = Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11;
	if (iVar1 != func_73())
	{
		if (Global_1853128[iVar1 /*888*/].f_267.f_281 == iVar0)
		{
			return 1;
		}
	}
	if (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_6 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 89:
			return 1;
			break;
		
		case 90:
			return 2;
			break;
		
		case 91:
			return 3;
			break;
		
		case 92:
			return 4;
			break;
		
		case 93:
			return 5;
			break;
		
		case 94:
			return 6;
			break;
		
		case 95:
			return 7;
			break;
		
		case 96:
			return 8;
			break;
		
		case 97:
			return 9;
			break;
	}
	return 0;
}

int func_402(int iParam0)
{
	if ((VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_403(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			func_405(-602,6942f, 690,0488f, 148,1567f, 75,0245f);
			func_405(-612,8933f, 692,116f, 148,7577f, 79,1005f);
			func_405(-626,1633f, 694,6517f, 149,6835f, 75,1121f);
			func_405(-639,3558f, 696,9992f, 150,5134f, 77,481f);
			break;
		
		case joaat("mpsv_lp0_31"):
			func_405(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_405(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_405(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_405(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 82:
			func_405(382,9244f, 443,8122f, 142,9934f, 78,3408f);
			func_405(391,2023f, 442,4812f, 142,5089f, 82,2125f);
			func_405(400,1477f, 441,0816f, 142,0776f, 83,4259f);
			func_405(414,2964f, 439,2628f, 141,5056f, 80,8689f);
			break;
		
		case 81:
			func_405(-1294,64f, 468,1975f, 96,4245f, 141,8551f);
			func_405(-1300,508f, 468,0167f, 96,8298f, 139,6287f);
			func_405(-1283,894f, 467,2136f, 95,4036f, 95,058f);
			func_405(-1273,584f, 454,4406f, 94,2269f, 30,8724f);
			break;
		
		case 73:
			func_405(-209,2598f, 509,0326f, 130,7979f, 97,2043f);
			func_405(-221,7214f, 507,2553f, 128,5651f, 92,2773f);
			func_405(-237,2848f, 506,8763f, 125,8112f, 85,9315f);
			func_405(-255,5678f, 507,9559f, 122,3364f, 85,1752f);
			break;
		
		case 75:
			func_405(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			func_405(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_405(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_405(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			break;
		
		case 76:
			func_405(-668,575f, 668,7567f, 149,4004f, 69,8844f);
			func_405(-671,5947f, 646,5754f, 148,3114f, 49,9935f);
			func_405(-759,3964f, 690,4262f, 143,0253f, 214,9099f);
			func_405(-763,4828f, 668,4921f, 142,8936f, 236,9954f);
			break;
		
		case 77:
			func_405(128,4334f, 578,7522f, 182,2934f, 106,5458f);
			func_405(97,7791f, 576,8907f, 181,5599f, 91,3539f);
			func_405(83,5896f, 576,4791f, 181,0832f, 89,7262f);
			func_405(69,9599f, 575,9902f, 180,5019f, 91,4926f);
			break;
		
		case 80:
			func_405(-872,1293f, 698,7591f, 148,5084f, 339,673f);
			func_405(-916,5449f, 695,5253f, 150,5625f, 272,7097f);
			func_405(-907,3458f, 695,8158f, 150,396f, 270,6491f);
			func_405(-923,6974f, 691,4489f, 150,9506f, 357,4356f);
			break;
		
		case 87:
			if (func_404())
			{
				func_405(-1608,297f, -556,875f, 33,406f, 310f);
				func_405(-1616,095f, -563,402f, 33,049f, 309,4f);
				func_405(-1560,29f, -531,69f, 34,576f, 35,3994f);
				func_405(-1555,303f, -538,781f, 34,044f, 35,3994f);
			}
			else
			{
				func_405(-1605,148f, -552,5016f, 33,4606f, 309,4211f);
				func_405(-1616,306f, -561,6959f, 32,9867f, 309,4369f);
				func_405(-1582,681f, -534,1682f, 34,4171f, 307,8589f);
				func_405(-1619,657f, -531,5862f, 33,4254f, 128,9132f);
				func_405(-1560,257f, -532,3268f, 34,5436f, 216,0882f);
				func_405(-1553,698f, -541,3412f, 33,8662f, 215,8465f);
				func_405(-1611,769f, -601,588f, 31,2908f, 50,7362f);
				func_405(-1600,63f, -610,1141f, 30,5087f, 51,7297f);
			}
			break;
		
		case 88:
			if (func_404())
			{
				func_405(-1402,362f, -511,396f, 30,888f, 35,4f);
				func_405(-1356,617f, -531,0343f, 29,7588f, 124,9982f);
				func_405(-1407,634f, -503,839f, 31,35f, 35,4f);
				func_405(-1346,007f, -523,3546f, 30,6339f, 125,9976f);
			}
			else
			{
				func_405(-1390,604f, -528,6405f, 29,8387f, 35,4572f);
				func_405(-1357,085f, -531,4611f, 29,7218f, 125,0906f);
				func_405(-1346,236f, -523,9114f, 30,6f, 124,7302f);
				func_405(-1337,852f, -518,1096f, 31,2329f, 124,6998f);
				func_405(-1336,39f, -556,0637f, 29,7514f, 33,8088f);
				func_405(-1340,214f, -508,9828f, 31,4089f, 98,7714f);
				func_405(-1348,607f, -510,3536f, 30,9263f, 99,2425f);
				func_405(-1380,764f, -536,3867f, 29,3128f, 63,6203f);
			}
			break;
		
		case 89:
			if (func_404())
			{
				func_405(-102,737f, -597,379f, 35,053f, 160,999f);
				func_405(-97,793f, -589,568f, 35,082f, 134,799f);
				func_405(-110,357f, -619,402f, 35,055f, 160,599f);
				func_405(-112,561f, -627,723f, 35,046f, 165,399f);
			}
			else
			{
				func_405(-108,2604f, -613,6386f, 35,055f, 160,8063f);
				func_405(-103,0375f, -598,4797f, 35,0538f, 161,1968f);
				func_405(-112,84f, -629,6357f, 35,0662f, 174,9843f);
				func_405(-98,7403f, -590,3209f, 35,075f, 139,7632f);
				func_405(-98,3748f, -612,642f, 35,137f, 161,1124f);
				func_405(-92,595f, -595,4065f, 35,1888f, 161,3083f);
				func_405(-104,4742f, -630,1472f, 35,1396f, 161,184f);
				func_405(-74,1068f, -619,9417f, 35,1488f, 340,9123f);
			}
			break;
		
		case 90:
			if (func_404())
			{
				func_405(-59,349f, -779,238f, 43,134f, 228,398f);
				func_405(-41,6311f, -789,1425f, 43,1323f, 255,5993f);
				func_405(-65,212f, -772,66f, 43,151f, 219,398f);
				func_405(-33,0648f, -789,3544f, 43,1287f, 279,5989f);
			}
			else
			{
				func_405(-59,684f, -779,4568f, 43,114f, 228,7591f);
				func_405(-52,7425f, -784,7151f, 43,1134f, 237,7756f);
				func_405(-45,2736f, -788,4313f, 43,1133f, 250,2438f);
				func_405(-35,9308f, -789,8549f, 43,1167f, 271,1923f);
				func_405(-64,6911f, -762,4548f, 43,1316f, 35,6897f);
				func_405(-24,9853f, -786,8022f, 43,1163f, 297,8276f);
				func_405(-86,2083f, -739,3044f, 43,0546f, 204,9405f);
				func_405(-9,239f, -773,0505f, 43,0788f, 318,0367f);
			}
			break;
		
		case 91:
			func_405(246,5035f, -1798,749f, 26,1131f, 212,5996f);
			func_405(247,8968f, -1797,017f, 26,1131f, 212,5996f);
			func_405(249,3848f, -1795,374f, 26,1131f, 212,5996f);
			func_405(250,8498f, -1793,695f, 26,1131f, 212,5996f);
			func_405(262,9285f, -1784,205f, 26,1131f, 164,5991f);
			func_405(266,8129f, -1787,476f, 26,1131f, 164,5991f);
			func_405(264,814f, -1785,801f, 26,1131f, 164,5991f);
			func_405(269,0069f, -1789,16f, 26,1131f, 164,5991f);
			break;
		
		case 92:
			func_405(-1464,5f, -927,9f, 9f, 296,7991f);
			func_405(-1466f, -926,1f, 9f, 296,7991f);
			func_405(-1467,9f, -924,7f, 9f, 296,7991f);
			func_405(-1469,7f, -923,7f, 9f, 296,7991f);
			func_405(-1462,481f, -931,2933f, 9,1294f, 296,5982f);
			func_405(-1460,639f, -932,9284f, 9,1315f, 296,5982f);
			func_405(-1454,923f, -931,1019f, 9,0872f, 237,1973f);
			func_405(-1450,848f, -934,5874f, 8,4514f, 237,1973f);
			break;
		
		case 93:
			func_405(30,0784f, -1024,16f, 28,4469f, 234,5994f);
			func_405(29,1695f, -1026,719f, 28,4453f, 234,5994f);
			func_405(28,2538f, -1029,296f, 28,4421f, 234,5994f);
			func_405(27,3737f, -1031,767f, 28,3937f, 234,5994f);
			func_405(32,6932f, -1017,063f, 28,4531f, 234,5994f);
			func_405(33,672f, -1014,399f, 28,4552f, 234,5994f);
			func_405(37,488f, -1014,344f, 28,4781f, 175,5986f);
			func_405(39,4909f, -1015,097f, 28,484f, 175,5986f);
			break;
		
		case 94:
			func_405(45,0033f, 2784,392f, 56,8782f, 103,5999f);
			func_405(43,316f, 2785,903f, 56,8782f, 103,5999f);
			func_405(41,6126f, 2787,36f, 56,8782f, 103,5999f);
			func_405(39,9584f, 2788,773f, 56,8782f, 103,5999f);
			func_405(35,2347f, 2792,135f, 56,8781f, 208,7997f);
			func_405(33,7771f, 2790,379f, 56,8781f, 208,7997f);
			func_405(30,7578f, 2786,8f, 56,8781f, 208,7997f);
			func_405(29,3121f, 2785,045f, 56,8745f, 208,7997f);
			break;
		
		case 95:
			func_405(-332,5679f, 6069,145f, 30,2175f, 152,9999f);
			func_405(-334,2811f, 6070,787f, 30,2212f, 152,9999f);
			func_405(-335,9948f, 6072,454f, 30,2455f, 152,9999f);
			func_405(-337,675f, 6074,252f, 30,2727f, 152,9999f);
			func_405(-339,3682f, 6075,904f, 30,3074f, 152,9999f);
			func_405(-341,0913f, 6077,729f, 30,3114f, 152,9999f);
			func_405(-342,9239f, 6079,522f, 30,3122f, 152,9999f);
			func_405(-344,6985f, 6081,302f, 30,3097f, 152,9999f);
			break;
		
		case 96:
			func_405(1738,422f, 3716,779f, 33,0787f, 6,9999f);
			func_405(1736,207f, 3715,989f, 33,094f, 6,9999f);
			func_405(1748,442f, 3714,17f, 33,0889f, 39,399f);
			func_405(1750,475f, 3715,007f, 33,1067f, 39,399f);
			func_405(1747,18f, 3721,102f, 33,007f, 95,199f);
			func_405(1746,413f, 3723,255f, 32,9738f, 95,199f);
			func_405(1740,67f, 3717,613f, 33,0616f, 8,199f);
			func_405(1733,937f, 3715,08f, 33,1236f, 8,199f);
			break;
		
		case 97:
			func_405(947,9371f, -1452,737f, 30,143f, 331,5991f);
			func_405(950,2141f, -1452,826f, 30,1364f, 331,5991f);
			func_405(952,4588f, -1452,882f, 30,129f, 331,5991f);
			func_405(954,6608f, -1452,869f, 30,1303f, 331,5991f);
			func_405(935,1006f, -1452,701f, 30,1907f, 316,999f);
			func_405(932,5459f, -1452,579f, 30,2194f, 316,999f);
			func_405(929,9319f, -1452,567f, 30,2647f, 316,999f);
			func_405(927,4857f, -1452,446f, 30,3167f, 316,999f);
			break;
		
		case 98:
			func_405(186,6051f, 306,8702f, 104,389f, 162,3999f);
			func_405(184,3881f, 306,7666f, 104,3845f, 162,3999f);
			func_405(182,1681f, 306,6823f, 104,375f, 162,3999f);
			func_405(183,3219f, 296,2871f, 104,3707f, 350,7995f);
			func_405(180,9933f, 296,3411f, 104,3704f, 350,7995f);
			func_405(178,6569f, 296,4709f, 104,3701f, 350,7995f);
			func_405(195,1475f, 304,4284f, 104,4644f, 77,3989f);
			func_405(195,0814f, 301,8218f, 104,5287f, 77,3989f);
			break;
		
		case 99:
			func_405(-31,2801f, -200,3394f, 51,3551f, 5,3995f);
			func_405(-33,3895f, -199,7716f, 51,355f, 5,3995f);
			func_405(-35,4307f, -199,1125f, 51,3549f, 5,3995f);
			func_405(-37,5545f, -198,5244f, 51,3549f, 5,3995f);
			func_405(-17,9628f, -206,2525f, 51,3702f, 29,399f);
			func_405(-14,8043f, -207,5648f, 51,4707f, 29,399f);
			func_405(-11,8482f, -208,6405f, 51,5633f, 29,399f);
			func_405(-9,1304f, -209,4894f, 51,6472f, 29,399f);
			break;
		
		case 100:
			func_405(2478,52f, 4082,137f, 36,8208f, 227,5999f);
			func_405(2477,557f, 4079,946f, 36,8014f, 227,5999f);
			func_405(2465,123f, 4081,35f, 37,0655f, 167,4f);
			func_405(2463,017f, 4082,271f, 37,0653f, 167,4f);
			func_405(2467,7f, 4080,332f, 37,0649f, 167,4f);
			func_405(2469,587f, 4079,538f, 37,061f, 167,4f);
			func_405(2481,354f, 4088,553f, 36,9131f, 209,4f);
			func_405(2482,442f, 4091,023f, 36,9472f, 209,4f);
			break;
		
		case 101:
			func_405(-32,1085f, 6407,398f, 30,4903f, 291,1999f);
			func_405(-29,4917f, 6404,578f, 30,4903f, 291,1999f);
			func_405(-26,4319f, 6401,523f, 30,4903f, 291,1999f);
			func_405(-23,3427f, 6398,638f, 30,4903f, 291,1999f);
			func_405(-20,7035f, 6395,76f, 30,4885f, 291,1999f);
			func_405(-23,7283f, 6412,838f, 30,4904f, 176,5999f);
			func_405(-20,5405f, 6409,805f, 30,4905f, 176,5999f);
			func_405(-17,3045f, 6406,66f, 30,4904f, 176,5999f);
			break;
		
		case 102:
			func_405(-1138,057f, -1572,18f, 3,4157f, 125,9996f);
			func_405(-1142,03f, -1574,983f, 3,4133f, 125,9996f);
			func_405(-1145,05f, -1592,81f, 3,3855f, 306,5991f);
			func_405(-1139,933f, -1589,211f, 3,3978f, 306,5991f);
			func_405(-1124,295f, -1578,776f, 3,3854f, 306,5991f);
			func_405(-1119,954f, -1575,551f, 3,3852f, 306,5991f);
			func_405(-1124,942f, -1562,985f, 3,2916f, 168,9988f);
			func_405(-1127,039f, -1564,395f, 3,292f, 168,9988f);
			break;
		
		default:
			break;
	}
}

bool func_404()
{
	return Global_2714627.f_17;
}

void func_405(struct<3> Param0, float fParam3)
{
	if (Global_2667222.f_1753 < 101)
	{
		if (SYSTEM::VMAG(Param0) <= 0,01f)
		{
			return;
		}
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/] = { Param0 };
		Global_2667222.f_1754[Global_2667222.f_1753 /*4*/].f_3 = fParam3;
		Global_2667222.f_1753++;
	}
}

int func_406(struct<3> Param0)
{
	int iVar0;
	
	if (SYSTEM::VDIST(Global_2667222.f_2902, Param0) < Global_2667222.f_2910)
	{
		return Global_2667222.f_2905;
	}
	Global_2667222.f_2902 = { Param0 };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Param0.f_2 <= 0f)
		{
			Param0.f_2 = ((Global_2674477[iVar0 /*7*/].f_2 + Global_2674477[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_350(Param0, &(Global_2674477[iVar0 /*7*/])))
		{
			Global_2667222.f_2905 = iVar0;
			return iVar0;
		}
		iVar0++;
	}
	Global_2667222.f_2905 = -1;
	return -1;
}

int func_407()
{
	if (MISC::IS_BIT_SET(Global_4718592.f_13, 0) && !Global_2715542.f_6395)
	{
		return 0;
	}
	return 0;
}

int func_408(struct<2> Param0, var uParam2, bool bParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 0;
	iVar0 = 83;
	while (iVar0 <= 84 + 1)
	{
		if (bParam3)
		{
			if (func_377(iVar0))
			{
				fVar1 = fParam4;
			}
			else
			{
				fVar1 = 0f;
			}
		}
		else
		{
			fVar1 = fParam4;
		}
		fVar2 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Global_1946934.f_532[iVar0 /*3*/], Global_1946934.f_532[iVar0 /*3*/].f_1, 0f);
		if (fVar2 < fVar1)
		{
			iVar3++;
		}
		iVar0++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_409()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Global_2667222.f_2735[iVar0 /*3*/] = { 0f, 0f, 0f };
		iVar0++;
	}
}

int func_410(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { *uParam0 };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Var1.f_2 <= 0f)
		{
			Var1.f_2 = ((Global_2674433[iVar0 /*7*/].f_2 + Global_2674433[iVar0 /*7*/].f_3.f_2) * 0,5f);
		}
		if (func_350(Var1, &(Global_2674433[iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_361(&Var1, Global_2674433[iVar0 /*7*/], Global_2674433[iVar0 /*7*/].f_3, Global_2674433[iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_411(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2667222.f_514 && !Global_2667222.f_515)
	{
		if (!Global_2667222.f_45.f_316)
		{
			if (!func_415(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_414(Param0, 1008981770))
			{
				if (!func_367(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_367(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_413(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_412(&(Global_2667222.f_45[iVar0 /*12*/])) };
					if (!func_367(&Var1, 0, 0, 0, 1))
					{
						if (!func_367(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_412(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0,5f, 0,5f, 0,5f);
			break;
	}
	return *uParam0;
}

int func_413(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_354(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_414(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2667222.f_45[iVar0 /*12*/].f_9)
		{
			if (func_354(Param0, &(Global_2667222.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_415(int iParam0, bool bParam1)
{
	if (func_210() != 0)
	{
		return func_416(iParam0) != 0;
	}
	return func_332(iParam0, bParam1, 0);
}

int func_416(int iParam0)
{
	if (func_9(iParam0, 0, 1))
	{
		return Global_2689156[iParam0 /*453*/].f_1;
	}
	return 0;
}

int func_417(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

void func_418()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 101)
	{
		Global_2667222.f_1754[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
	Global_2667222.f_1753 = 0;
}

void func_419()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667222.f_690[iVar0]))
		{
			if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667222.f_690[iVar0])
			{
				if (!Global_2667222.f_686[iVar0] == -1)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667222.f_686[iVar0]))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Global_2667222.f_686[iVar0]);
						Global_2667222.f_686[iVar0] = -1;
					}
					else
					{
						Global_2667222.f_686[iVar0] = -1;
					}
				}
			}
		}
		else if (!Global_2667222.f_686[iVar0] == -1)
		{
			Global_2667222.f_686[iVar0] = -1;
		}
		iVar0++;
	}
}

int func_420()
{
	if (!Global_2667222.f_605 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667222.f_610) < func_417(0))
	{
		return 1;
	}
	return 0;
}

int func_421()
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!STREAMING::GET_PLAYER_SWITCH_STATE() > 7 && !STREAMING::GET_PLAYER_SWITCH_STATE() == 5)
		{
			return 0;
		}
	}
	if (Global_2667222.f_516 == MISC::GET_FRAME_COUNT())
	{
		return 0;
	}
	if (!func_423(PLAYER::PLAYER_ID()) && !func_422())
	{
		return 0;
	}
	return 1;
}

bool func_422()
{
	return Global_1575022;
}

int func_423(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2703656.f_1, iParam0);
	}
	return 1;
}

int func_424(int iParam0)
{
	if (!func_139(1, iParam0))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(iLocal_3118))
	{
		return 0;
	}
	Stack.Push(Local_1231.f_338.f_54 != 0);
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_338.f_54);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

int func_425(int iParam0)
{
	int iVar0;
	
	if (Local_1231.f_338.f_34 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_34);
		iVar0 = StackVal;
		if (iVar0 != -1)
		{
			if (!func_13(&(Local_3199.f_341[iParam0 /*8*/].f_6), iVar0, 0))
			{
				return 0;
			}
			else
			{
				func_53(&(Local_3199.f_341[iParam0 /*8*/].f_6));
			}
		}
	}
	return 1;
}

int func_426(int iParam0)
{
	if (Local_1231.f_338.f_23 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_338.f_23);
		return StackVal;
	}
	return 1;
}

void func_427(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_9 == -1)
	{
		return;
	}
	if (func_138(iParam0) > 2 && func_138(iParam0) < 5)
	{
		if (func_428(iParam0, iParam1))
		{
			func_174(iParam0, 2);
		}
		else
		{
			func_173(iParam0, 2);
		}
	}
}

bool func_428(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = func_430(iParam1);
		if (iVar0 != func_73() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
			return func_429(iVar1, 2);
		}
	}
	return func_168(iParam0, 2);
}

bool func_429(int iParam0, int iParam1)
{
	return func_4(&(Local_3783[iParam0 /*115*/].f_1), iParam1);
}

int func_430(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			if (iVar1 != func_73() && func_9(iVar1, 0, 1))
			{
				return iVar1;
			}
		}
	}
	return func_73();
}

int func_431(int iParam0, int iParam1)
{
	return 0;
}

void func_432(int iParam0, int iParam1)
{
	Local_3199.f_341[iParam0 /*8*/].f_1 = iParam1;
}

int func_433(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != func_435())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		if (iParam0 == func_434(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_434(int iParam0)
{
	return Local_3199.f_2.f_27[iParam0];
}

int func_435()
{
	return Local_227.f_19.f_5[0 /*13*/].f_11;
}

int func_436(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_437(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_73()) && func_9(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_437(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

int func_438(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_439(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_439(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_440()
{
	func_441();
}

void func_441()
{
	struct<20> Var0;
	
	if (!func_3(8))
	{
		if (func_449() > 0 && Local_2860.f_0 > 0)
		{
			if (func_1204(53))
			{
				Var0 = { func_448(func_10()) };
				if (func_442(func_10(), Local_3199.f_537, &Var0))
				{
					func_16(8);
				}
			}
		}
	}
}

int func_442(int iParam0, struct<3> Param1, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_447(Param1))
	{
		return 0;
	}
	if (iParam0 == func_73())
	{
		return 0;
	}
	if (*uParam4 > 18)
	{
		return 0;
	}
	iVar0 = func_446(iParam0);
	if (iVar0 != -1)
	{
		iVar1 = 0;
		while (iVar1 < *uParam4)
		{
			if ((*uParam4)[iVar1] != 0)
			{
				iVar2 = func_445(iVar0, (*uParam4)[iVar1]);
				if (iVar2 != -1)
				{
					if (!func_444(Param1, Global_2681692.f_199.f_962[iVar0 /*75*/].f_20[iVar2 /*3*/]))
					{
						if (!func_15(&(Global_1952863.f_5013)) || func_13(&(Global_1952863.f_5013), 10000, 0))
						{
							func_18(&(Global_1952863.f_5013), 0, 0);
							func_443(iParam0, Param1, uParam4);
						}
						return 0;
					}
				}
			}
			iVar1++;
		}
		return 1;
	}
	return 0;
}

void func_443(int iParam0, struct<3> Param1, var uParam4)
{
	struct<26> Var0;
	int iVar26;
	int iVar27;
	
	if (!func_447(Param1))
	{
		return;
	}
	if (*uParam4 > 18)
	{
		return;
	}
	if (*uParam4 <= 0)
	{
		return;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_3.f_2 = -1000;
	Var0.f_6 = 18;
	Var0.f_0 = -615565347;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = { Param1 };
	Var0.f_25 = *uParam4;
	iVar26 = 0;
	while (iVar26 < *uParam4)
	{
		Var0.f_6[iVar26] = (*uParam4)[iVar26];
		iVar26++;
	}
	iVar27 = func_203(1, 1);
	if (!iVar27 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 26, iVar27);
	}
}

int func_444(struct<3> Param0, struct<3> Param3)
{
	if (!func_447(Param0))
	{
		return 0;
	}
	if (Param0.f_0 == Param3.f_0 && Param0.f_2 == Param3.f_2)
	{
		return 1;
	}
	return 0;
}

int func_445(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (iParam1 == Global_2681692.f_199.f_962[iParam0 /*75*/].f_1[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_446(int iParam0)
{
	int iVar0;
	
	if (func_9(iParam0, 0, 1))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (Global_2681692.f_199.f_962[iVar0 /*75*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_447(struct<3> Param0)
{
	if (Param0.f_0 == -1 || Param0.f_2 == -1000)
	{
		return 0;
	}
	return 1;
}

struct<20> func_448(int iParam0)
{
	struct<20> Var0;
	int iVar20;
	int iVar21;
	
	Var0 = 18;
	Var0.f_19 = 0;
	if (!func_78(iParam0))
	{
		return Var0;
	}
	if (func_9(iParam0, 0, 1))
	{
		iVar20 = 0;
		while (iVar20 < 10)
		{
			if (Global_2681692.f_199.f_962[iVar20 /*75*/] == iParam0)
			{
				iVar21 = 0;
				while (iVar21 < 18)
				{
					if (Global_2681692.f_199.f_962[iVar20 /*75*/].f_1[iVar21] != 0 && !func_447(Global_2681692.f_199.f_962[iVar20 /*75*/].f_20[iVar21 /*3*/]))
					{
						Var0[Var0.f_19] = Global_2681692.f_199.f_962[iVar20 /*75*/].f_1[iVar21];
						Var0.f_19++;
					}
					iVar21++;
				}
			}
			else
			{
				iVar20++;
			}
		}
	}
	return Var0;
}

int func_449()
{
	int iVar0;
	
	iVar0 = (iVar0 + func_28());
	return iVar0;
}

void func_450()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		func_462(iVar0);
		func_457(iVar0);
		iVar0++;
	}
	func_451();
}

void func_451()
{
	if (Local_227.f_19 <= 0)
	{
		return;
	}
	if (!func_456())
	{
		return;
	}
	Stack.Push(Local_1231.f_108.f_36 != 0);
	Call_Loc(Local_1231.f_108.f_36);
	if (StackVal && StackVal)
	{
		return;
	}
	if (func_455())
	{
		if (func_454())
		{
			func_8(5);
		}
	}
	else if (func_452())
	{
		func_8(5);
	}
}

int func_452()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_453(iVar0, 3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_453(int iParam0, int iParam1)
{
	return func_4(&(Local_3199.f_2.f_14[iParam0 /*3*/]), iParam1);
}

int func_454()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_453(iVar0, 3))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_455()
{
	return func_84(0);
}

int func_456()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_453(iVar0, 6))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_457(int iParam0)
{
	if (func_453(iParam0, 29) && func_460(iParam0))
	{
		if (func_459(iParam0))
		{
			func_458(iParam0, 29);
		}
	}
}

void func_458(int iParam0, int iParam1)
{
	if (func_157(&(Local_3199.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_459(int iParam0)
{
	int iVar0;
	
	if (func_460(iParam0))
	{
		iVar0 = func_434(iParam0);
		return (Local_3199.f_341[iVar0 /*8*/].f_1 == 5 || func_453(iParam0, 0));
	}
	return 1;
}

bool func_460(int iParam0)
{
	return (func_461(iParam0) && func_435() == 2);
}

bool func_461(int iParam0)
{
	return Local_3199.f_2.f_27[iParam0] != -1;
}

void func_462(int iParam0)
{
	if (Local_227.f_19.f_5[iParam0 /*13*/].f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_23);
		if (StackVal)
		{
			if (!func_453(iParam0, 6))
			{
				if (func_40(Local_227.f_19.f_5[iParam0 /*13*/].f_2))
				{
					if (NETWORK::_CAN_REGISTER_MISSION_PICKUPS(1))
					{
						if (func_464(iParam0))
						{
							func_463(iParam0, 6);
						}
					}
				}
			}
		}
	}
}

void func_463(int iParam0, int iParam1)
{
	if (func_17(&(Local_3199.f_2.f_14[iParam0 /*3*/]), iParam1))
	{
	}
}

int func_464(int iParam0)
{
	struct<3> Var0;
	float fVar3;
	struct<3> Var4;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_2[iParam0]))
	{
		Var0 = { func_498(iParam0) };
		fVar3 = Local_227.f_19.f_5[iParam0 /*13*/].f_6;
		Var4 = { Local_227.f_19.f_5[iParam0 /*13*/].f_7 };
		if (func_33(Var0))
		{
			return 0;
		}
		Local_3199.f_2[iParam0] = NETWORK::OBJ_TO_NET(OBJECT::CREATE_PORTABLE_PICKUP(func_497(iParam0), Var0, !func_496(iParam0, 0), Local_227.f_19.f_5[iParam0 /*13*/].f_2));
		ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), fVar3);
		if (!func_33(Var4))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), Var4, 2, true);
		}
		func_490(iParam0, Var0);
		if (Local_1231.f_108.f_30 != 0)
		{
			Stack.Push(iParam0);
			Call_Loc(Local_1231.f_108.f_30);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_3199.f_2[iParam0]))
	{
		if (func_465(&(Local_3199.f_2.f_37[iParam0]), 0, iParam0, func_489(iParam0), func_488(), func_487(iParam0), func_486(iParam0)))
		{
			func_185(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), Local_3199.f_562.f_1[func_186(iParam0) /*5*/].f_1);
			Local_3199.f_2.f_32[iParam0] = NETWORK::GET_CLOUD_TIME_AS_INT();
			return 1;
		}
	}
	return 0;
}

int func_465(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5, var uParam6)
{
	if (*uParam0 == -1)
	{
		*uParam0 = func_485();
		if (*uParam0 == -1)
		{
			return 0;
		}
	}
	if (Local_3199.f_562 != iParam4)
	{
		Local_3199.f_562 = iParam4;
	}
	if (Local_3199.f_562.f_1[*uParam0 /*5*/].f_2 == -1)
	{
		Local_3199.f_562.f_1[*uParam0 /*5*/].f_2 = iParam1;
		Local_3199.f_562.f_1[*uParam0 /*5*/].f_3 = iParam2;
	}
	if (func_466(&(Local_3199.f_562.f_1[*uParam0 /*5*/]), iParam3, *uParam0, Local_3199.f_562, &(Local_3199.f_537), uParam5, uParam6))
	{
		return 1;
	}
	return 0;
}

int func_466(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	struct<3> Var4;
	bool bVar7;
	
	if (iParam1 == func_73())
	{
		return 0;
	}
	if (!func_447(*uParam4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			*uParam4 = { func_484() };
		}
		else
		{
			return 0;
		}
	}
	if (!func_444(*uParam4, Global_1952863.f_5015))
	{
		if ((MISC::GET_FRAME_COUNT() - Global_1952863.f_5015.f_4) <= 90 || (func_15(&(Global_1952863.f_4840)) && !func_13(&(Global_1952863.f_4840), 1500, 0)))
		{
			return 0;
		}
		else
		{
			func_482();
			func_481(*uParam4);
		}
	}
	if (MISC::IS_BIT_SET(Global_1952863.f_5015.f_3, 31))
	{
		iVar1 = (Global_1952863.f_5015.f_4 - 1);
		if (MISC::GET_FRAME_COUNT() == iVar1)
		{
			return 0;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1952863.f_5015.f_3), 31);
		}
	}
	if (Global_1952863.f_5015.f_4 == 0)
	{
		Global_1952863.f_5015.f_4 = MISC::GET_FRAME_COUNT();
		iVar0 = 0;
		while (iVar0 < 20)
		{
			Global_1952863.f_5020[iVar0] = -1;
			iVar2 = func_479(PLAYER::PLAYER_ID(), iVar0);
			if (func_478(iVar2))
			{
				MISC::SET_BIT(&(Global_1952863.f_5015.f_3), iVar0);
			}
			iVar0++;
		}
	}
	uVar3 = func_477(iParam1, iParam2);
	*uParam0 = iParam1;
	uParam0->f_1 = uVar3;
	if (func_476(*uParam0))
	{
		Var4 = { func_474(*uParam0) };
		if ((Global_1952863.f_5015.f_4 == MISC::GET_FRAME_COUNT() || func_473(*uParam0) != iParam3) || !func_444(*uParam4, Var4))
		{
			if (Global_1952863.f_5015.f_4 != MISC::GET_FRAME_COUNT())
			{
				Global_1952863.f_5015.f_4 = MISC::GET_FRAME_COUNT();
				if (Global_1952863.f_5020[iVar0] == uParam0->f_1)
				{
					Global_1952863.f_5020[iVar0] = -1;
				}
			}
			MISC::SET_BIT(&(Global_1952863.f_5015.f_3), iParam2);
			MISC::SET_BIT(&(Global_1952863.f_5015.f_3), 31);
			uParam0->f_1 = -1;
			Global_1952863.f_5015.f_4++;
			return 0;
		}
		else
		{
			func_468(*uParam0, "FREEMODE_DELIVERY_CREATE_DELIVERABLE");
			return 1;
		}
	}
	if (Global_1952863.f_5020[iParam2] == -1)
	{
		Global_1952863.f_5020[iParam2] = uVar3;
	}
	if (!func_15(&(Global_1952863.f_4840)) || func_13(&(Global_1952863.f_4840), 1500, 0))
	{
		bVar7 = true;
		func_18(&(Global_1952863.f_4840), 0, 0);
	}
	if (!bVar7)
	{
		if (MISC::GET_FRAME_COUNT() == Global_1952863.f_4842)
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		func_467(*uParam0, iParam3, uParam5, *uParam4, uParam6);
		Global_1952863.f_4842 = MISC::GET_FRAME_COUNT();
	}
	return 0;
}

void func_467(struct<2> Param0, int iParam2, var uParam3, struct<3> Param4, var uParam7)
{
	struct<10> Var0;
	int iVar10;
	
	if (!func_447(Param4))
	{
		return;
	}
	Var0.f_2.f_1 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_6.f_2 = -1000;
	Var0.f_0 = 394024783;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0 };
	Var0.f_4 = iParam2;
	Var0.f_9 = uParam3;
	Var0.f_5 = uParam7;
	Var0.f_6 = { Param4 };
	iVar10 = func_203(1, 1);
	if (!iVar10 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 10, iVar10);
	}
}

void func_468(struct<2> Param0, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	char cVar6[16];
	
	bVar0 = false;
	if (bVar0)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			sParam2 = "FREEMODE_DELIVERY_DEBUG_PRINT_DELIVERABLE_ID";
		}
		bVar1 = func_472(Param0);
		bVar2 = func_476(Param0);
		uVar3 = func_473(Param0);
		iVar4 = func_471(Param0);
		uVar5 = func_469(Param0);
		if (iVar4 == 0)
		{
			StringCopy(&cVar6, "Initial", 16);
		}
		else if (iVar4 == 2)
		{
			StringCopy(&cVar6, "Delivered", 16);
		}
		else if (iVar4 == -1)
		{
			StringCopy(&cVar6, "Invalid", 16);
		}
		else
		{
			IntToString(&cVar6, iVar4, 16);
		}
	}
}

int func_469(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_470(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/].f_14;
		}
		iVar0++;
	}
	return 0;
}

int func_470(struct<2> Param0, struct<2> Param2)
{
	if (Param0.f_1 != -1 && Param2.f_1 != -1)
	{
		return (Param0.f_0 == Param2.f_0 && Param0.f_1 == Param2.f_1);
	}
	return 0;
}

int func_471(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_470(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/];
		}
		iVar0++;
	}
	return -1;
}

bool func_472(struct<2> Param0)
{
	return (Param0.f_1 != -1 && Param0.f_0 != func_73());
}

int func_473(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_470(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return Global_2681692.f_199.f_1[iVar0 /*15*/].f_3;
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_474(struct<2> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_475(Param0);
	if (iVar0 < 0 || iVar0 >= 64)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1.f_2 = -1000;
		return Var1;
	}
	return Global_2681692.f_199.f_1[iVar0 /*15*/].f_11;
}

int func_475(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (func_470(Param0, Global_2681692.f_199.f_1[iVar0 /*15*/].f_1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_476(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && func_470(Global_2681692.f_199.f_1[iVar0 /*15*/].f_1, Param0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_477(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1952863.f_5020[iParam1] != -1)
	{
		return Global_1952863.f_5020[iParam1];
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (!MISC::IS_BIT_SET(Global_1952863.f_5015.f_3, iVar0))
		{
			MISC::SET_BIT(&(Global_1952863.f_5015.f_3), iVar0);
			return func_479(iParam0, iVar0);
		}
		iVar0++;
	}
	return -1;
}

int func_478(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 != -1 && Global_2681692.f_199.f_1[iVar0 /*15*/].f_1.f_1 == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_479(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_480(iParam0);
	return (iVar0 + iParam1);
}

int func_480(int iParam0)
{
	return MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_481(struct<3> Param0)
{
	Global_1952863.f_5015 = { Param0 };
}

void func_482()
{
	Global_1952863.f_5015.f_3 = 0;
	Global_1952863.f_5015.f_4 = 0;
	Global_1952863.f_5015 = { func_483() };
}

Vector3 func_483()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	return Var0;
}

Vector3 func_484()
{
	struct<3> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1000;
	Var0.f_1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	Var0.f_0 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
	Var0.f_2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
	return Var0;
}

int func_485()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!func_472(Local_3199.f_562.f_1[iVar1 /*5*/]))
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

int func_486(int iParam0)
{
	return 0;
}

int func_487(int iParam0)
{
	return 1;
}

int func_488()
{
	return 23;
}

int func_489(int iParam0)
{
	return func_10();
}

void func_490(int iParam0, struct<3> Param1)
{
	if (func_461(iParam0))
	{
		func_463(iParam0, 29);
		if (iParam0 != func_495(func_434(iParam0)))
		{
			func_463(iParam0, 40);
		}
	}
	else if (!func_496(iParam0, 7))
	{
		func_463(iParam0, 39);
	}
	NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_3199.f_2[iParam0], true);
	ENTITY::SET_ENTITY_LOD_DIST(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), 1200);
	ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), 50, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
	ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true, true, false, true, true, true, true, false);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), true, 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), true);
	OBJECT::_0x641F272B52E2F0F8(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), 1);
	OBJECT::SET_OBJECT_FORCE_VEHICLES_TO_AVOID(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
	if (func_494())
	{
		OBJECT::_0x4C134B4DF76025D0(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
	}
	if (func_493(iParam0))
	{
		ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
	}
	else
	{
		func_463(iParam0, 28);
	}
	if (!func_496(iParam0, 1))
	{
		OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]));
	}
	if (func_496(iParam0, 2))
	{
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), Param1, true, false, false, true);
	}
	if (func_496(iParam0, 3))
	{
		PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]));
		OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
	}
	if (func_496(iParam0, 4))
	{
		ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), true);
	}
	if ((func_496(iParam0, 6) || func_496(iParam0, 7)) || func_461(iParam0))
	{
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), false, false);
	}
	if (Local_227.f_19.f_5[iParam0 /*13*/].f_12 != -1)
	{
		func_463(iParam0, 23);
	}
	if (func_492(iParam0))
	{
		NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), true);
	}
	if (func_496(iParam0, 9) || Local_1231.f_108.f_38 != 0)
	{
		func_491(iParam0, 1, 0);
	}
}

void func_491(int iParam0, bool bParam1, bool bParam2)
{
	OBJECT::PREVENT_COLLECTION_OF_PORTABLE_PICKUP(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), bParam1, bParam2);
}

int func_492(int iParam0)
{
	if (func_496(iParam0, 8))
	{
		return 1;
	}
	if (func_84(22))
	{
		return 1;
	}
	return 0;
}

bool func_493(int iParam0)
{
	if (func_453(iParam0, 29))
	{
		return 0;
	}
	return !func_496(iParam0, 5);
}

int func_494()
{
	return 0;
}

int func_495(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		if (Local_3199.f_2.f_27[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_496(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_19.f_5[iParam0 /*13*/]), iParam1);
}

int func_497(int iParam0)
{
	if (Local_1231.f_108.f_28 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_28);
		return StackVal;
	}
	return 68603185;
}

Vector3 func_498(int iParam0)
{
	if (func_500(iParam0))
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_27);
		return StackVal, StackVal, StackVal;
	}
	else if (func_460(iParam0))
	{
		return Local_227.f_356.f_1[func_434(iParam0) /*14*/].f_4 + func_499(iParam0, Local_227.f_356.f_1[func_434(iParam0) /*14*/].f_3);
	}
	return Local_227.f_19.f_5[iParam0 /*13*/].f_3;
}

Vector3 func_499(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("insurgent3"):
		case joaat("limo2"):
			switch (iParam0)
			{
				case 0:
					return 1f, -2f, -0,1f;
				
				case 1:
					return -1f, -2f, -0,1f;
				
				case 2:
					return 1f, -2f, -0,1f;
				
				case 3:
					return -1f, -2f, -0,1f;
				
				default:
			}
			break;
		
		case joaat("issi3"):
		case joaat("panto"):
		case joaat("raptor"):
			switch (iParam0)
			{
				case 0:
					return 0,5f, 0f, -0,1f;
				
				case 1:
					return -0,5f, 0f, -0,1f;
				
				case 2:
					return 0,5f, 0f, -0,1f;
				
				case 3:
					return -0,5f, 0f, -0,1f;
				
				default:
			}
			break;
	}
	switch (iParam0)
	{
		case 0:
			return 1f, 0f, -0,1f;
		
		case 1:
			return -1f, 0f, -0,1f;
		
		case 2:
			return 1f, 0f, -0,1f;
		
		case 3:
			return -1f, 0f, -0,1f;
		
		default:
	}
	return 0f, -1f, -0,1f;
}

bool func_500(var uParam0)
{
	struct<3> Var0;
	
	if (Local_1231.f_108.f_27 == 0)
	{
		return 0;
	}
	Stack.Push(uParam0);
	Call_Loc(Local_1231.f_108.f_27);
	Var0 = { StackVal, StackVal, StackVal };
	return !func_33(Var0);
}

void func_501()
{
}

int func_502()
{
	return Local_3199.f_483;
}

void func_503(int iParam0)
{
	Local_3199.f_482 = iParam0;
}

int func_504()
{
	int iVar0;
	int iVar1;
	
	if (!func_1198(func_1202(), func_1200()))
	{
		return 0;
	}
	if (!func_524())
	{
		return 0;
	}
	func_523();
	func_520();
	Local_3199.f_494 = NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_519(), -1, 0);
	func_517();
	func_514();
	func_513();
	func_511();
	func_510();
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_507(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 1)
	{
		Local_3199.f_419[iVar1] = -1;
		iVar1++;
	}
	Local_3199.f_498 = MISC::GET_RANDOM_INT_IN_RANGE(0, 99999999);
	STATS::_0x6DEE77AFF8C21BD1(&(Local_3199.f_491), &(Local_3199.f_492));
	Global_1893548[iLocal_3118 /*600*/].f_527 = Local_3199.f_491;
	Global_1893548[iLocal_3118 /*600*/].f_528 = Local_3199.f_492;
	func_506();
	if (!func_505())
	{
		return 0;
	}
	Call_Loc(Local_1231.f_1);
	return StackVal;
}

int func_505()
{
	return 1;
}

void func_506()
{
	if (Local_3199.f_499 == -1)
	{
		Local_3199.f_499 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_507(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	if (Local_1231.f_447.f_2 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_447.f_2);
		Local_3199.f_428.f_2[iParam0 /*3*/] = { StackVal, StackVal, StackVal };
		return;
	}
	fVar0 = (Local_227.f_759.f_1[iParam0 /*14*/].f_7 / 2f);
	fVar1 = (fVar0 * 0,25f);
	fVar2 = (fVar0 * 0,5f);
	Var3 = { func_508(iParam0) };
	if (func_115())
	{
		Var3.f_0 = (Var3.f_0 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
	}
	else
	{
		Var3.f_0 = (Var3.f_0 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
	}
	if (func_115())
	{
		Var3.f_1 = (Var3.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
	}
	else
	{
		Var3.f_1 = (Var3.f_1 - MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar1, fVar2));
	}
	Local_3199.f_428.f_2[iParam0 /*3*/] = { Var3 };
}

Vector3 func_508(int iParam0)
{
	if (Local_1231.f_447.f_3 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_447.f_3);
		return StackVal, StackVal, StackVal;
	}
	if (Local_227.f_759.f_1[iParam0 /*14*/].f_2 != -1)
	{
		return func_509(Local_227.f_759.f_1[iParam0 /*14*/].f_2, Local_227.f_759.f_1[iParam0 /*14*/].f_3);
	}
	return Local_227.f_759.f_1[iParam0 /*14*/].f_4;
}

Vector3 func_509(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			return Local_227.f_19.f_5[iParam1 /*13*/].f_3;
		
		case 0:
			return Local_227.f_77.f_1[iParam1 /*21*/].f_3;
		
		case 1:
			return Local_227.f_356.f_1[iParam1 /*14*/].f_4;
		
		case 2:
			return Local_227.f_429.f_1[iParam1 /*12*/].f_4;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_510()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = (iVar1 + Local_227.f_654[iVar0 /*32*/]);
		iVar0++;
	}
	Local_3199.f_503 = iVar1;
}

void func_511()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_77)
	{
		Local_3199.f_52[iVar0 /*24*/].f_15 = func_512(iVar0);
		iVar0++;
	}
}

int func_512(int iParam0)
{
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_16 == -1)
	{
		if (iParam0 < 14)
		{
			return (iParam0 + 1 * (1000 / Local_227.f_77));
		}
		else
		{
			return ((iParam0 + 1 - 14) * (1000 / Local_227.f_77));
		}
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, Local_227.f_77.f_1[iParam0 /*21*/].f_16);
}

void func_513()
{
	Local_3199.f_484 = 2;
}

void func_514()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		Local_3199.f_2.f_37[iVar0] = -1;
		iVar0++;
	}
	func_515();
}

void func_515()
{
	int iVar0;
	
	if (func_516())
	{
		if (func_25(&(Local_3199.f_2.f_27), &(Local_3199.f_419.f_3)))
		{
			func_16(2);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Local_227.f_19)
		{
			Local_3199.f_2.f_27[iVar0] = Local_227.f_19.f_5[iVar0 /*13*/].f_10;
			iVar0++;
		}
	}
}

int func_516()
{
	return 0;
}

void func_517()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		iVar3 = Local_227.f_19.f_5[iVar0 /*13*/].f_10;
		iVar4 = Local_227.f_19.f_5[iVar0 /*13*/].f_11;
		if (iVar3 != -1 && iVar4 != 0)
		{
			switch (iVar4)
			{
				case 2:
					func_174(iVar3, 14);
					break;
				}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Local_227.f_77)
	{
		iVar2 = Local_227.f_77.f_1[iVar1 /*21*/].f_8;
		if (iVar2 != -1 && func_168(iVar2, 15))
		{
			func_45(iVar1, 19);
		}
		iVar5 = 0;
		while (iVar5 < Local_227.f_789)
		{
			if (Local_227.f_789.f_1[iVar5 /*10*/] == iVar1)
			{
				func_45(iVar1, 21);
			}
			iVar5++;
		}
		iVar1++;
	}
	func_518(0);
}

void func_518(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_227.f_654[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1 == -1)
		{
		}
		else
		{
			switch (Local_227.f_654[iParam0 /*32*/].f_7[iVar0 /*2*/])
			{
				case 2:
					func_174(Local_227.f_654[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 16);
					break;
				
				case 3:
					func_165(Local_227.f_654[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 5);
					break;
				
				case 1:
					func_45(Local_227.f_654[iParam0 /*32*/].f_7[iVar0 /*2*/].f_1, 20);
					break;
			}
			iVar0++;
		}
	}
}

char* func_519()
{
	switch (Global_2727578)
	{
		case 0:
			return "freemode";
		
		default:
	}
	return "freemode";
}

void func_520()
{
	Local_3199.f_493 = func_521() + 1;
	Global_1893548[iLocal_3118 /*600*/].f_11.f_391 = Local_3199.f_493;
}

int func_521()
{
	if (func_74() == func_73())
	{
		return 0;
	}
	return func_522(func_74());
}

int func_522(int iParam0)
{
	if (func_105(iParam0) == func_73())
	{
		return 0;
	}
	return Global_1893548[iParam0 /*600*/].f_11.f_19;
}

void func_523()
{
}

int func_524()
{
	func_1197();
	func_568();
	if (!func_526())
	{
		return 0;
	}
	func_525();
	Stack.Push(Local_1231.f_0 != 0);
	Call_Loc(Local_1231.f_0);
	if (StackVal && !StackVal)
	{
		return 0;
	}
	return 1;
}

void func_525()
{
}

int func_526()
{
	if (func_1204(12))
	{
		return 1;
	}
	if (!func_540())
	{
		return 0;
	}
	func_536();
	func_529();
	func_528();
	if (Local_1231.f_13 != 0)
	{
		Call_Loc(Local_1231.f_13);
	}
	func_527(12);
	return 1;
}

void func_527(int iParam0)
{
	if (func_17(&uLocal_3133, iParam0))
	{
	}
}

void func_528()
{
}

void func_529()
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
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_608)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (-1 != Local_227.f_19.f_5[iVar0 /*13*/].f_10)
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_77)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			iVar2++;
		}
		if (Local_227.f_77.f_1[iVar0 /*21*/].f_10 != -1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_227.f_815[Local_227.f_77.f_1[iVar0 /*21*/].f_10 /*16*/])))
			{
			}
		}
		iVar3 = Local_227.f_77.f_1[iVar0 /*21*/].f_11;
		if (iVar3 != -1 && iVar3 < 1)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_227.f_960[iVar3 /*9*/])))
			{
			}
			iVar4 = Local_227.f_960[Local_227.f_77.f_1[iVar0 /*21*/].f_11 /*9*/].f_8;
			if (iVar4 != -1)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_227.f_960.f_10[iVar4 /*16*/])))
				{
				}
			}
		}
		if (-1 != Local_227.f_77.f_1[iVar0 /*21*/].f_8)
		{
		}
		if (-1 != Local_227.f_77.f_1[iVar0 /*21*/].f_8)
		{
		}
		func_535(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_356)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_534(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_429)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			iVar2++;
		}
		func_533(iVar0);
		iVar0++;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		iVar6 = 0;
		while (iVar6 < Local_227.f_654[iVar5 /*32*/])
		{
			iVar6++;
		}
		iVar5++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_789)
	{
		iVar7 = 0;
		while (iVar7 < 1)
		{
			iVar7++;
		}
		iVar0++;
	}
	iVar8 = 0;
	while (iVar8 < 1)
	{
		iVar8++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_33(Local_227.f_987[iVar0 /*8*/]))
		{
			func_531(iVar0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_703)
	{
		func_530(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_227.f_759)
	{
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		switch (Local_227.f_687.f_1[iVar0 /*7*/])
		{
			case -1:
				break;
			
			case 0:
				break;
			
			case 1:
				break;
			
			case 2:
				break;
		}
		iVar0++;
	}
}

void func_530(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (func_119(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_531(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_532(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

bool func_532(int iParam0, int iParam1)
{
	return func_4(&(Local_227.f_987[iParam0 /*8*/].f_6), iParam1);
}

void func_533(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_159(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_534(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		if (func_177(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_535(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_43(iParam0, iVar0))
		{
		}
		iVar0++;
	}
}

void func_536()
{
	int iVar0;
	var uVar1;
	
	iVar0 = iVar0;
	uVar1 = uVar1;
	func_539(Local_227.f_19, 4, "data.MissionEntity.iCount", "MAX_NUM_MISSION_ENTITIES");
	func_539(Local_227.f_77, 12, "data.Ped.iCount", "MAX_NUM_PEDS");
	func_539(Local_227.f_356, 5, "data.Vehicle.iCount", "MAX_NUM_VEHICLES");
	func_539(Local_227.f_429, 7, "data.Prop.iCount", "MAX_NUM_PROPS");
	func_539(Local_227.f_534, 5, "data.Pickup.iCount", "MAX_NUM_PICKUPS");
	func_539(Local_227.f_789, 1, "data.Patrol.iCount", "MAX_NUM_PATROLS");
	func_539(Local_227.f_703, 6, "data.TriggerArea.iCount", "MAX_NUM_TRIGGER_AREAS");
	func_539(Local_227.f_608, 4, "data.GoToPoint.iCount", "MAX_NUM_GOTO_LOCATIONS");
	iVar0 = 0;
	while (iVar0 < 1)
	{
		func_539(Local_227.f_654[iVar0 /*32*/], 12, "data.TakeOutTarget[iStage].iCount", "MAX_NUM_TARGETS");
		iVar0++;
	}
	func_539(Local_227.f_759, 2, "data.SearchArea.iNumAreas", "MAX_NUM_SEARCH_AREAS");
	func_539(Local_227.f_687, 2, "data.Population.iCount", "MAX_NUM_POP_BLOCKERS");
	func_539(func_538(), 2, "GET_NUM_PED_GROUPS", "MAX_NUM_PED_GROUPS");
	func_539(func_537(), 9, "GET_NUM_PED_SCENARIOS", "MAX_NUM_SCENARIOS");
}

int func_537()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_227.f_77)
	{
		if (Local_227.f_77.f_1[iVar1 /*21*/].f_10 != -1)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_538()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_77)
	{
		if (Local_227.f_77.f_1[iVar0 /*21*/].f_14 > iVar1)
		{
			iVar1 = Local_227.f_77.f_1[iVar0 /*21*/].f_14;
		}
		iVar0++;
	}
	return iVar1 + 1;
}

void func_539(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	if (iParam0 <= iParam1)
	{
	}
}

int func_540()
{
	if (!func_567(Local_3129.f_0))
	{
		return 1;
	}
	return func_541(func_563(), &Local_227, &Local_1831);
}

int func_541(char* sParam0, var uParam1, var uParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	func_562();
	if (!DATAFILE::DATAFILE_LOAD_OFFLINE_UGC(sParam0, 0))
	{
		return 0;
	}
	func_543(uParam1);
	func_542(uParam2);
	return 1;
}

void func_542(var uParam0)
{
	DATAFILE::DATAFILE_DELETE(0);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
}

void func_543(var uParam0)
{
	char* sVar0;
	var* uVar1;
	var uVar2;
	
	sVar0 = DATAFILE::DATAFILE_GET_FILE_DICT(0);
	uVar1 = DATAFILE::DATADICT_GET_DICT(sVar0, "mission");
	Global_4718592.f_87180 = DATAFILE::DATADICT_GET_INT(sVar0, "debugOnlyVersion");
	func_544(&uVar1, uParam0, 0, &uVar2);
}

bool func_544(var* uParam0, var uParam1, bool bParam2, var uParam3)
{
	if (!bParam2 || *uParam3 == 0)
	{
		func_545(uParam0, uParam1);
	}
	if (!bParam2 || *uParam3 == 1)
	{
	}
	if (!bParam2 || *uParam3 == 2)
	{
		*uParam3 = 0;
		return 1;
	}
	*uParam3++;
	return !bParam2;
}

void func_545(var uParam0, var uParam1)
{
	struct<2> Var0;
	int iVar4;
	int iVar5;
	var* uVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var* uVar11[1];
	int iVar13[1];
	var* uVar15;
	bool bVar16;
	var* uVar17;
	bool bVar18;
	var* uVar19;
	bool bVar20;
	var* uVar21;
	bool bVar22;
	var* uVar23;
	bool bVar24;
	var* uVar25;
	bool bVar26;
	var* uVar27;
	bool bVar28;
	int iVar29;
	int iVar30;
	var* uVar31[1];
	int iVar33[1];
	var* uVar35;
	bool bVar36;
	var* uVar37;
	bool bVar38;
	var* uVar39;
	bool bVar40;
	var* uVar41;
	bool bVar42;
	var* uVar43;
	bool bVar44;
	var* uVar45;
	bool bVar46;
	var* uVar47;
	bool bVar48;
	var* uVar49;
	bool bVar50;
	var* uVar51;
	bool bVar52;
	var* uVar53;
	bool bVar54;
	var* uVar55;
	bool bVar56;
	var* uVar57;
	bool bVar58;
	var* uVar59;
	bool bVar60;
	var* uVar61;
	bool bVar62;
	var* uVar63;
	bool bVar64;
	var* uVar65;
	bool bVar66;
	var* uVar67;
	bool bVar68;
	int iVar69;
	var uVar70;
	int iVar71;
	var* uVar72[6];
	int iVar79[6];
	var* uVar86;
	bool bVar87;
	var* uVar88;
	bool bVar89;
	int iVar90;
	var* uVar91[1];
	int iVar93[1];
	var* uVar95;
	bool bVar96;
	int iVar97;
	int iVar98;
	var* uVar99[2];
	int iVar102[2];
	var* uVar105;
	bool bVar106;
	var* uVar107;
	bool bVar108;
	var* uVar109;
	bool bVar110;
	var* uVar111;
	bool bVar112;
	var* uVar113;
	bool bVar114;
	int iVar115;
	var* uVar116;
	bool bVar117;
	var* uVar118;
	bool bVar119;
	var* uVar120;
	bool bVar121;
	var* uVar122;
	bool bVar123;
	int iVar124;
	int iVar125;
	var* uVar126[2];
	int iVar129[2];
	var* uVar132;
	bool bVar133;
	var* uVar134;
	bool bVar135;
	var* uVar136;
	bool bVar137;
	var* uVar138;
	bool bVar139;
	var* uVar140;
	bool bVar141;
	int iVar142;
	int iVar143;
	int iVar144;
	int iVar145;
	var* uVar146;
	bool bVar147;
	var* uVar148;
	bool bVar149;
	var* uVar150[1];
	int iVar152[1];
	var* uVar154;
	bool bVar155;
	int iVar156;
	var* uVar157;
	bool bVar158;
	var* uVar159;
	bool bVar160;
	var* uVar161;
	bool bVar162;
	var* uVar163;
	bool bVar164;
	int iVar165;
	var* uVar166;
	bool bVar167;
	int iVar168;
	var* uVar169;
	bool bVar170;
	var* uVar171;
	bool bVar172;
	var* uVar173;
	bool bVar174;
	var* uVar175;
	bool bVar176;
	int iVar177;
	var* uVar178[12];
	int iVar191[12];
	var* uVar204[12];
	int iVar217[12];
	int iVar230;
	int iVar231;
	var* uVar232;
	bool bVar233;
	var* uVar234;
	bool bVar235;
	var* uVar236;
	bool bVar237;
	int iVar238;
	int iVar239;
	var* uVar240[1];
	int iVar242[1];
	var* uVar244;
	bool bVar245;
	var* uVar246;
	bool bVar247;
	var* uVar248;
	bool bVar249;
	int iVar250;
	int iVar251;
	var* uVar252[1];
	int iVar254[1];
	var* uVar256;
	bool bVar257;
	var* uVar258;
	bool bVar259;
	var* uVar260;
	bool bVar261;
	var* uVar262;
	bool bVar263;
	var* uVar264;
	bool bVar265;
	var* uVar266;
	bool bVar267;
	int iVar268;
	var* uVar269;
	bool bVar270;
	var* uVar271;
	bool bVar272;
	var* uVar273;
	bool bVar274;
	var* uVar275;
	bool bVar276;
	int iVar277;
	int iVar278;
	var* uVar279;
	bool bVar280;
	int iVar281;
	var* uVar282[1];
	int iVar284[1];
	var* uVar286[1];
	int iVar288[1];
	var* uVar290[1];
	int iVar292[1];
	var* uVar294[1];
	int iVar296[1];
	int iVar298;
	int iVar299;
	var* uVar300;
	bool bVar301;
	var* uVar302;
	bool bVar303;
	var* uVar304;
	bool bVar305;
	var* uVar306;
	bool bVar307;
	int iVar308;
	var* uVar309;
	bool bVar310;
	int iVar311;
	int iVar312;
	var* uVar313;
	bool bVar314;
	var* uVar315;
	bool bVar316;
	int iVar317;
	var* uVar318;
	bool bVar319;
	int iVar320;
	var* uVar321;
	bool bVar322;
	var* uVar323;
	bool bVar324;
	var* uVar325;
	bool bVar326;
	var* uVar327[1];
	int iVar329[1];
	
	func_561(&iVar8, *uParam0, "me");
	func_561(&iVar9, iVar8, "blp");
	func_561(&iVar10, iVar8, "ents");
	func_561(&iVar29, *uParam0, "pd");
	func_561(&iVar30, iVar29, "pds");
	func_561(&iVar69, iVar29, "grp");
	func_561(&uVar70, iVar69, "rel");
	func_561(&iVar71, iVar69, "trg");
	func_561(&iVar90, iVar29, "asp");
	func_561(&iVar97, *uParam0, "vh");
	func_561(&iVar98, iVar97, "veh");
	func_561(&iVar115, iVar98, "blp");
	func_561(&iVar124, *uParam0, "pp");
	func_561(&iVar125, iVar124, "prps");
	func_561(&iVar142, *uParam0, "want");
	func_561(&iVar143, *uParam0, "modt");
	func_561(&iVar144, *uParam0, "gt");
	func_561(&iVar145, iVar144, "loc");
	func_561(&iVar156, iVar145, "blp");
	func_561(&iVar165, *uParam0, "tot");
	func_561(&iVar168, iVar165, "tohud");
	func_561(&iVar177, iVar165, "tar");
	func_561(&iVar230, *uParam0, "pop");
	func_561(&iVar231, iVar230, "blkr");
	func_561(&iVar238, *uParam0, "ta");
	func_561(&iVar239, iVar238, "ars");
	func_561(&iVar250, *uParam0, "sear");
	func_561(&iVar251, iVar250, "area");
	func_561(&iVar268, iVar251, "blp");
	func_561(&iVar277, *uParam0, "ptrl");
	func_561(&iVar278, iVar277, "pat");
	func_561(&iVar281, iVar278, "nd");
	func_561(&iVar298, *uParam0, "fcs");
	func_561(&iVar299, iVar298, "fcs");
	func_561(&iVar308, *uParam0, "sro");
	func_561(&iVar311, *uParam0, "anims");
	func_561(&iVar312, iVar311, "anm");
	func_561(&iVar317, iVar311, "anmD");
	func_561(&iVar320, *uParam0, "port");
	if (func_560(*uParam0, "fmbs") == 7)
	{
		bVar7 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar10, &Var0) == 7)
		{
			iVar13[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar10, "mn") == 7)
	{
		bVar16 = true;
	}
	if (func_560(iVar10, "pos") == 7)
	{
		bVar18 = true;
	}
	if (func_560(iVar10, "head") == 7)
	{
		bVar20 = true;
	}
	if (func_560(iVar10, "rot") == 7)
	{
		bVar22 = true;
	}
	if (func_560(iVar10, "cv") == 7)
	{
		bVar24 = true;
	}
	if (func_560(iVar10, "crt") == 7)
	{
		bVar26 = true;
	}
	if (func_560(iVar10, "int") == 7)
	{
		bVar28 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar30, &Var0) == 7)
		{
			iVar33[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar30, "mn") == 7)
	{
		bVar36 = true;
	}
	if (func_560(iVar30, "pos") == 7)
	{
		bVar38 = true;
	}
	if (func_560(iVar30, "head") == 7)
	{
		bVar40 = true;
	}
	if (func_560(iVar30, "wpn") == 7)
	{
		bVar42 = true;
	}
	if (func_560(iVar30, "veh") == 7)
	{
		bVar44 = true;
	}
	if (func_560(iVar30, "st") == 7)
	{
		bVar46 = true;
	}
	if (func_560(iVar30, "scen") == 7)
	{
		bVar48 = true;
	}
	if (func_560(iVar30, "anim") == 7)
	{
		bVar50 = true;
	}
	if (func_560(iVar30, "int") == 7)
	{
		bVar52 = true;
	}
	if (func_560(iVar30, "asi") == 7)
	{
		bVar54 = true;
	}
	if (func_560(iVar30, "grp") == 7)
	{
		bVar56 = true;
	}
	if (func_560(iVar30, "mvmt") == 7)
	{
		bVar58 = true;
	}
	if (func_560(iVar30, "mrd") == 7)
	{
		bVar60 = true;
	}
	if (func_560(iVar30, "sr") == 7)
	{
		bVar62 = true;
	}
	if (func_560(iVar30, "sa") == 7)
	{
		bVar64 = true;
	}
	if (func_560(iVar30, "hr") == 7)
	{
		bVar66 = true;
	}
	if (func_560(iVar30, "dr") == 7)
	{
		bVar68 = true;
	}
	iVar5 = 0;
	while (iVar5 < 6)
	{
		StringCopy(&Var0, "ar", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar71, &Var0) == 7)
		{
			iVar79[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar69, "ed") == 7)
	{
		bVar87 = true;
	}
	if (func_560(iVar69, "gt") == 7)
	{
		bVar89 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar90, &Var0) == 7)
		{
			iVar93[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar90, "vh") == 7)
	{
		bVar96 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar98, &Var0) == 7)
		{
			iVar102[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar98, "mn") == 7)
	{
		bVar106 = true;
	}
	if (func_560(iVar98, "pos") == 7)
	{
		bVar108 = true;
	}
	if (func_560(iVar98, "head") == 7)
	{
		bVar110 = true;
	}
	if (func_560(iVar98, "col") == 7)
	{
		bVar112 = true;
	}
	if (func_560(iVar98, "int") == 7)
	{
		bVar114 = true;
	}
	if (func_560(iVar115, "sprt") == 7)
	{
		bVar117 = true;
	}
	if (func_560(iVar115, "hclr") == 7)
	{
		bVar119 = true;
	}
	if (func_560(iVar115, "scl") == 7)
	{
		bVar121 = true;
	}
	if (func_560(iVar115, "sh") == 7)
	{
		bVar123 = true;
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar125, &Var0) == 7)
		{
			iVar129[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar125, "mn") == 7)
	{
		bVar133 = true;
	}
	if (func_560(iVar125, "pos") == 7)
	{
		bVar135 = true;
	}
	if (func_560(iVar125, "head") == 7)
	{
		bVar137 = true;
	}
	if (func_560(iVar125, "rot") == 7)
	{
		bVar139 = true;
	}
	if (func_560(iVar125, "int") == 7)
	{
		bVar141 = true;
	}
	if (func_560(iVar145, "pos") == 7)
	{
		bVar147 = true;
	}
	if (func_560(iVar145, "rad") == 7)
	{
		bVar149 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "bsa", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar145, &Var0) == 7)
		{
			iVar152[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar145, "brd") == 7)
	{
		bVar155 = true;
	}
	if (func_560(iVar156, "sprt") == 7)
	{
		bVar158 = true;
	}
	if (func_560(iVar156, "hclr") == 7)
	{
		bVar160 = true;
	}
	if (func_560(iVar156, "scl") == 7)
	{
		bVar162 = true;
	}
	if (func_560(iVar156, "sh") == 7)
	{
		bVar164 = true;
	}
	if (func_560(iVar165, "tco") == 7)
	{
		bVar167 = true;
	}
	if (func_560(iVar168, "brtyp") == 7)
	{
		bVar170 = true;
	}
	if (func_560(iVar168, "brtit") == 7)
	{
		bVar172 = true;
	}
	if (func_560(iVar168, "brmax") == 7)
	{
		bVar174 = true;
	}
	if (func_560(iVar168, "brord") == 7)
	{
		bVar176 = true;
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		StringCopy(&Var0, "totyp", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar177, &Var0) == 7)
		{
			iVar191[iVar5] = 1;
		}
		StringCopy(&Var0, "toid", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar177, &Var0) == 7)
		{
			iVar217[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar231, "typ") == 7)
	{
		bVar233 = true;
	}
	if (func_560(iVar231, "min") == 7)
	{
		bVar235 = true;
	}
	if (func_560(iVar231, "max") == 7)
	{
		bVar237 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar239, &Var0) == 7)
		{
			iVar242[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar239, "vmn") == 7)
	{
		bVar245 = true;
	}
	if (func_560(iVar239, "vmx") == 7)
	{
		bVar247 = true;
	}
	if (func_560(iVar239, "fwd") == 7)
	{
		bVar249 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar251, &Var0) == 7)
		{
			iVar254[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar251, "typ") == 7)
	{
		bVar257 = true;
	}
	if (func_560(iVar251, "iei") == 7)
	{
		bVar259 = true;
	}
	if (func_560(iVar251, "vco") == 7)
	{
		bVar261 = true;
	}
	if (func_560(iVar251, "ent") == 7)
	{
		bVar263 = true;
	}
	if (func_560(iVar251, "tri") == 7)
	{
		bVar265 = true;
	}
	if (func_560(iVar251, "ita") == 7)
	{
		bVar267 = true;
	}
	if (func_560(iVar268, "sprt") == 7)
	{
		bVar270 = true;
	}
	if (func_560(iVar268, "hclr") == 7)
	{
		bVar272 = true;
	}
	if (func_560(iVar268, "scl") == 7)
	{
		bVar274 = true;
	}
	if (func_560(iVar268, "sh") == 7)
	{
		bVar276 = true;
	}
	if (func_560(iVar278, "pedi") == 7)
	{
		bVar280 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "scro", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar281, &Var0) == 7)
		{
			iVar284[iVar5] = 1;
		}
		StringCopy(&Var0, "pos", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar281, &Var0) == 7)
		{
			iVar288[iVar5] = 1;
		}
		StringCopy(&Var0, "look", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar281, &Var0) == 7)
		{
			iVar292[iVar5] = 1;
		}
		StringCopy(&Var0, "dur", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar281, &Var0) == 7)
		{
			iVar296[iVar5] = 1;
		}
		iVar5++;
	}
	if (func_560(iVar299, "ftyp") == 7)
	{
		bVar301 = true;
	}
	if (func_560(iVar299, "feid") == 7)
	{
		bVar303 = true;
	}
	if (func_560(iVar299, "fvec") == 7)
	{
		bVar305 = true;
	}
	if (func_560(iVar299, "frng") == 7)
	{
		bVar307 = true;
	}
	if (func_560(iVar308, "name") == 7)
	{
		bVar310 = true;
	}
	if (func_560(iVar312, "name") == 7)
	{
		bVar314 = true;
	}
	if (func_560(iVar312, "indx") == 7)
	{
		bVar316 = true;
	}
	if (func_560(iVar317, "name") == 7)
	{
		bVar319 = true;
	}
	if (func_560(iVar320, "pos") == 7)
	{
		bVar322 = true;
	}
	if (func_560(iVar320, "head") == 7)
	{
		bVar324 = true;
	}
	if (func_560(iVar320, "plnkp") == 7)
	{
		bVar326 = true;
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		StringCopy(&Var0, "ibs", 16);
		StringIntConCat(&Var0, iVar5, 16);
		if (func_560(iVar320, &Var0) == 7)
		{
			iVar329[iVar5] = 1;
		}
		iVar5++;
	}
	if (bVar7)
	{
		uVar6 = DATAFILE::DATADICT_GET_ARRAY(*uParam0, "fmbs");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar13[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar11[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar10, &Var0);
		}
		iVar5++;
	}
	if (bVar16)
	{
		uVar15 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "mn");
	}
	if (bVar18)
	{
		uVar17 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "pos");
	}
	if (bVar20)
	{
		uVar19 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "head");
	}
	if (bVar22)
	{
		uVar21 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "rot");
	}
	if (bVar24)
	{
		uVar23 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "cv");
	}
	if (bVar26)
	{
		uVar25 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "crt");
	}
	if (bVar28)
	{
		uVar27 = DATAFILE::DATADICT_GET_ARRAY(iVar10, "int");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar33[iVar5])
		{
			StringCopy(&Var0, "bs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar31[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar30, &Var0);
		}
		iVar5++;
	}
	if (bVar36)
	{
		uVar35 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mn");
	}
	if (bVar38)
	{
		uVar37 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "pos");
	}
	if (bVar40)
	{
		uVar39 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "head");
	}
	if (bVar42)
	{
		uVar41 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "wpn");
	}
	if (bVar44)
	{
		uVar43 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "veh");
	}
	if (bVar46)
	{
		uVar45 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "st");
	}
	if (bVar48)
	{
		uVar47 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "scen");
	}
	if (bVar50)
	{
		uVar49 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "anim");
	}
	if (bVar52)
	{
		uVar51 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "int");
	}
	if (bVar54)
	{
		uVar53 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "asi");
	}
	if (bVar56)
	{
		uVar55 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "grp");
	}
	if (bVar58)
	{
		uVar57 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mvmt");
	}
	if (bVar60)
	{
		uVar59 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "mrd");
	}
	if (bVar62)
	{
		uVar61 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "sr");
	}
	if (bVar64)
	{
		uVar63 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "sa");
	}
	if (bVar66)
	{
		uVar65 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "hr");
	}
	if (bVar68)
	{
		uVar67 = DATAFILE::DATADICT_GET_ARRAY(iVar30, "dr");
	}
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if (iVar79[iVar5])
		{
			StringCopy(&Var0, "ar", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar72[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar71, &Var0);
		}
		iVar5++;
	}
	if (bVar87)
	{
		uVar86 = DATAFILE::DATADICT_GET_ARRAY(iVar69, "ed");
	}
	if (bVar89)
	{
		uVar88 = DATAFILE::DATADICT_GET_ARRAY(iVar69, "gt");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar93[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar91[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar90, &Var0);
		}
		iVar5++;
	}
	if (bVar96)
	{
		uVar95 = DATAFILE::DATADICT_GET_ARRAY(iVar90, "vh");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar102[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar99[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar98, &Var0);
		}
		iVar5++;
	}
	if (bVar106)
	{
		uVar105 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "mn");
	}
	if (bVar108)
	{
		uVar107 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "pos");
	}
	if (bVar110)
	{
		uVar109 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "head");
	}
	if (bVar112)
	{
		uVar111 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "col");
	}
	if (bVar114)
	{
		uVar113 = DATAFILE::DATADICT_GET_ARRAY(iVar98, "int");
	}
	if (bVar117)
	{
		uVar116 = DATAFILE::DATADICT_GET_ARRAY(iVar115, "sprt");
	}
	if (bVar119)
	{
		uVar118 = DATAFILE::DATADICT_GET_ARRAY(iVar115, "hclr");
	}
	if (bVar121)
	{
		uVar120 = DATAFILE::DATADICT_GET_ARRAY(iVar115, "scl");
	}
	if (bVar123)
	{
		uVar122 = DATAFILE::DATADICT_GET_ARRAY(iVar115, "sh");
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar129[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar126[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar125, &Var0);
		}
		iVar5++;
	}
	if (bVar133)
	{
		uVar132 = DATAFILE::DATADICT_GET_ARRAY(iVar125, "mn");
	}
	if (bVar135)
	{
		uVar134 = DATAFILE::DATADICT_GET_ARRAY(iVar125, "pos");
	}
	if (bVar137)
	{
		uVar136 = DATAFILE::DATADICT_GET_ARRAY(iVar125, "head");
	}
	if (bVar139)
	{
		uVar138 = DATAFILE::DATADICT_GET_ARRAY(iVar125, "rot");
	}
	if (bVar141)
	{
		uVar140 = DATAFILE::DATADICT_GET_ARRAY(iVar125, "int");
	}
	if (bVar147)
	{
		uVar146 = DATAFILE::DATADICT_GET_ARRAY(iVar145, "pos");
	}
	if (bVar149)
	{
		uVar148 = DATAFILE::DATADICT_GET_ARRAY(iVar145, "rad");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar152[iVar5])
		{
			StringCopy(&Var0, "bsa", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar150[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar145, &Var0);
		}
		iVar5++;
	}
	if (bVar155)
	{
		uVar154 = DATAFILE::DATADICT_GET_ARRAY(iVar145, "brd");
	}
	if (bVar158)
	{
		uVar157 = DATAFILE::DATADICT_GET_ARRAY(iVar156, "sprt");
	}
	if (bVar160)
	{
		uVar159 = DATAFILE::DATADICT_GET_ARRAY(iVar156, "hclr");
	}
	if (bVar162)
	{
		uVar161 = DATAFILE::DATADICT_GET_ARRAY(iVar156, "scl");
	}
	if (bVar164)
	{
		uVar163 = DATAFILE::DATADICT_GET_ARRAY(iVar156, "sh");
	}
	if (bVar167)
	{
		uVar166 = DATAFILE::DATADICT_GET_ARRAY(iVar165, "tco");
	}
	if (bVar170)
	{
		uVar169 = DATAFILE::DATADICT_GET_ARRAY(iVar168, "brtyp");
	}
	if (bVar172)
	{
		uVar171 = DATAFILE::DATADICT_GET_ARRAY(iVar168, "brtit");
	}
	if (bVar174)
	{
		uVar173 = DATAFILE::DATADICT_GET_ARRAY(iVar168, "brmax");
	}
	if (bVar176)
	{
		uVar175 = DATAFILE::DATADICT_GET_ARRAY(iVar168, "brord");
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		if (iVar191[iVar5])
		{
			StringCopy(&Var0, "totyp", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar178[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar177, &Var0);
		}
		if (iVar217[iVar5])
		{
			StringCopy(&Var0, "toid", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar204[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar177, &Var0);
		}
		iVar5++;
	}
	if (bVar233)
	{
		uVar232 = DATAFILE::DATADICT_GET_ARRAY(iVar231, "typ");
	}
	if (bVar235)
	{
		uVar234 = DATAFILE::DATADICT_GET_ARRAY(iVar231, "min");
	}
	if (bVar237)
	{
		uVar236 = DATAFILE::DATADICT_GET_ARRAY(iVar231, "max");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar242[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar240[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar239, &Var0);
		}
		iVar5++;
	}
	if (bVar245)
	{
		uVar244 = DATAFILE::DATADICT_GET_ARRAY(iVar239, "vmn");
	}
	if (bVar247)
	{
		uVar246 = DATAFILE::DATADICT_GET_ARRAY(iVar239, "vmx");
	}
	if (bVar249)
	{
		uVar248 = DATAFILE::DATADICT_GET_ARRAY(iVar239, "fwd");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar254[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar252[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar251, &Var0);
		}
		iVar5++;
	}
	if (bVar257)
	{
		uVar256 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "typ");
	}
	if (bVar259)
	{
		uVar258 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "iei");
	}
	if (bVar261)
	{
		uVar260 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "vco");
	}
	if (bVar263)
	{
		uVar262 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "ent");
	}
	if (bVar265)
	{
		uVar264 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "tri");
	}
	if (bVar267)
	{
		uVar266 = DATAFILE::DATADICT_GET_ARRAY(iVar251, "ita");
	}
	if (bVar270)
	{
		uVar269 = DATAFILE::DATADICT_GET_ARRAY(iVar268, "sprt");
	}
	if (bVar272)
	{
		uVar271 = DATAFILE::DATADICT_GET_ARRAY(iVar268, "hclr");
	}
	if (bVar274)
	{
		uVar273 = DATAFILE::DATADICT_GET_ARRAY(iVar268, "scl");
	}
	if (bVar276)
	{
		uVar275 = DATAFILE::DATADICT_GET_ARRAY(iVar268, "sh");
	}
	if (bVar280)
	{
		uVar279 = DATAFILE::DATADICT_GET_ARRAY(iVar278, "pedi");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar284[iVar5])
		{
			StringCopy(&Var0, "scro", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar282[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar281, &Var0);
		}
		if (iVar288[iVar5])
		{
			StringCopy(&Var0, "pos", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar286[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar281, &Var0);
		}
		if (iVar292[iVar5])
		{
			StringCopy(&Var0, "look", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar290[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar281, &Var0);
		}
		if (iVar296[iVar5])
		{
			StringCopy(&Var0, "dur", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar294[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar281, &Var0);
		}
		iVar5++;
	}
	if (bVar301)
	{
		uVar300 = DATAFILE::DATADICT_GET_ARRAY(iVar299, "ftyp");
	}
	if (bVar303)
	{
		uVar302 = DATAFILE::DATADICT_GET_ARRAY(iVar299, "feid");
	}
	if (bVar305)
	{
		uVar304 = DATAFILE::DATADICT_GET_ARRAY(iVar299, "fvec");
	}
	if (bVar307)
	{
		uVar306 = DATAFILE::DATADICT_GET_ARRAY(iVar299, "frng");
	}
	if (bVar310)
	{
		uVar309 = DATAFILE::DATADICT_GET_ARRAY(iVar308, "name");
	}
	if (bVar314)
	{
		uVar313 = DATAFILE::DATADICT_GET_ARRAY(iVar312, "name");
	}
	if (bVar316)
	{
		uVar315 = DATAFILE::DATADICT_GET_ARRAY(iVar312, "indx");
	}
	if (bVar319)
	{
		uVar318 = DATAFILE::DATADICT_GET_ARRAY(iVar317, "name");
	}
	if (bVar322)
	{
		uVar321 = DATAFILE::DATADICT_GET_ARRAY(iVar320, "pos");
	}
	if (bVar324)
	{
		uVar323 = DATAFILE::DATADICT_GET_ARRAY(iVar320, "head");
	}
	if (bVar326)
	{
		uVar325 = DATAFILE::DATADICT_GET_ARRAY(iVar320, "plnkp");
	}
	iVar5 = 0;
	while (iVar5 < 1)
	{
		if (iVar329[iVar5])
		{
			StringCopy(&Var0, "ibs", 16);
			StringIntConCat(&Var0, iVar5, 16);
			uVar327[iVar5] = DATAFILE::DATADICT_GET_ARRAY(iVar320, &Var0);
		}
		iVar5++;
	}
	*uParam1 = { func_559(*uParam0, "fmnm", "") };
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_16[iVar4] = func_558(uVar6, iVar4, 0, bVar7);
		iVar4++;
	}
	uParam1->f_19 = func_557(iVar8, "num", 0);
	uParam1->f_19.f_1 = func_556(iVar9, "sprt", -1);
	uParam1->f_19.f_1.f_1 = func_556(iVar9, "hclr", 12);
	uParam1->f_19.f_1.f_2 = func_555(iVar9, "scl", 1f);
	uParam1->f_19.f_1.f_3 = func_553(iVar9, "sh", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_19.f_5[iVar4 /*13*/][iVar5] = func_558(uVar11[iVar5], iVar4, 0, iVar13[iVar5]);
			iVar5++;
		}
		uParam1->f_19.f_5[iVar4 /*13*/].f_2 = func_552(uVar15, iVar4, 0, bVar16);
		uParam1->f_19.f_5[iVar4 /*13*/].f_3 = { func_551(uVar17, iVar4, 0f, 0f, 0f, bVar18) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_6 = func_550(uVar19, iVar4, 0f, bVar20);
		uParam1->f_19.f_5[iVar4 /*13*/].f_7 = { func_551(uVar21, iVar4, 0f, 0f, 0f, bVar22) };
		uParam1->f_19.f_5[iVar4 /*13*/].f_10 = func_558(uVar23, iVar4, -1, bVar24);
		uParam1->f_19.f_5[iVar4 /*13*/].f_11 = func_552(uVar25, iVar4, 2, bVar26);
		uParam1->f_19.f_5[iVar4 /*13*/].f_12 = func_558(uVar27, iVar4, -1, bVar28);
		iVar4++;
	}
	uParam1->f_77 = func_557(iVar29, "num", 0);
	iVar4 = 0;
	while (iVar4 < 12)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_77.f_1[iVar4 /*21*/][iVar5] = func_558(uVar31[iVar5], iVar4, 0, iVar33[iVar5]);
			iVar5++;
		}
		uParam1->f_77.f_1[iVar4 /*21*/].f_2 = func_552(uVar35, iVar4, 0, bVar36);
		uParam1->f_77.f_1[iVar4 /*21*/].f_3 = { func_551(uVar37, iVar4, 0f, 0f, 0f, bVar38) };
		uParam1->f_77.f_1[iVar4 /*21*/].f_6 = func_550(uVar39, iVar4, 0f, bVar40);
		uParam1->f_77.f_1[iVar4 /*21*/].f_7 = func_552(uVar41, iVar4, 0, bVar42);
		uParam1->f_77.f_1[iVar4 /*21*/].f_8 = func_558(uVar43, iVar4, -1, bVar44);
		uParam1->f_77.f_1[iVar4 /*21*/].f_9 = func_552(uVar45, iVar4, 0, bVar46);
		uParam1->f_77.f_1[iVar4 /*21*/].f_10 = func_558(uVar47, iVar4, -1, bVar48);
		uParam1->f_77.f_1[iVar4 /*21*/].f_11 = func_558(uVar49, iVar4, -1, bVar50);
		uParam1->f_77.f_1[iVar4 /*21*/].f_12 = func_558(uVar51, iVar4, -1, bVar52);
		uParam1->f_77.f_1[iVar4 /*21*/].f_13 = func_558(uVar53, iVar4, -1, bVar54);
		uParam1->f_77.f_1[iVar4 /*21*/].f_14 = func_558(uVar55, iVar4, 0, bVar56);
		uParam1->f_77.f_1[iVar4 /*21*/].f_15 = func_552(uVar57, iVar4, 2, bVar58);
		uParam1->f_77.f_1[iVar4 /*21*/].f_16 = func_558(uVar59, iVar4, -1, bVar60);
		uParam1->f_77.f_1[iVar4 /*21*/].f_17 = func_550(uVar61, iVar4, 60f, bVar62);
		uParam1->f_77.f_1[iVar4 /*21*/].f_18 = func_550(uVar63, iVar4, 60f, bVar64);
		uParam1->f_77.f_1[iVar4 /*21*/].f_19 = func_550(uVar65, iVar4, 60f, bVar66);
		uParam1->f_77.f_1[iVar4 /*21*/].f_20 = func_550(uVar67, iVar4, -1f, bVar68);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iVar5 = 0;
		while (iVar5 < 6)
		{
			uParam1->f_77.f_254[iVar4 /*10*/].f_1[iVar5] = func_558(uVar72[iVar5], iVar4, -1, iVar79[iVar5]);
			iVar5++;
		}
		uParam1->f_77.f_254[iVar4 /*10*/].f_8 = func_558(uVar86, iVar4, 0, bVar87);
		uParam1->f_77.f_254[iVar4 /*10*/].f_9 = func_558(uVar88, iVar4, -1, bVar89);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_77.f_275[iVar4 /*3*/][iVar5] = func_558(uVar91[iVar5], iVar4, 0, iVar93[iVar5]);
			iVar5++;
		}
		uParam1->f_77.f_275[iVar4 /*3*/].f_2 = func_558(uVar95, iVar4, 0, bVar96);
		iVar4++;
	}
	uParam1->f_356 = func_557(iVar97, "num", 0);
	iVar4 = 0;
	while (iVar4 < 5)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_356.f_1[iVar4 /*14*/][iVar5] = func_558(uVar99[iVar5], iVar4, 0, iVar102[iVar5]);
			iVar5++;
		}
		uParam1->f_356.f_1[iVar4 /*14*/].f_3 = func_552(uVar105, iVar4, 0, bVar106);
		uParam1->f_356.f_1[iVar4 /*14*/].f_4 = { func_551(uVar107, iVar4, 0f, 0f, 0f, bVar108) };
		uParam1->f_356.f_1[iVar4 /*14*/].f_7 = func_550(uVar109, iVar4, 0f, bVar110);
		uParam1->f_356.f_1[iVar4 /*14*/].f_8 = func_558(uVar111, iVar4, -1, bVar112);
		uParam1->f_356.f_1[iVar4 /*14*/].f_9 = func_558(uVar113, iVar4, -1, bVar114);
		uParam1->f_356.f_1[iVar4 /*14*/].f_10 = func_552(uVar116, iVar4, -1, bVar117);
		uParam1->f_356.f_1[iVar4 /*14*/].f_10.f_1 = func_552(uVar118, iVar4, 12, bVar119);
		uParam1->f_356.f_1[iVar4 /*14*/].f_10.f_2 = func_550(uVar120, iVar4, 1f, bVar121);
		uParam1->f_356.f_1[iVar4 /*14*/].f_10.f_3 = func_549(uVar122, iVar4, 0, bVar123);
		iVar4++;
	}
	uParam1->f_356.f_72 = func_557(iVar97, "trv", -1);
	uParam1->f_429 = func_557(iVar124, "num", 0);
	iVar4 = 0;
	while (iVar4 < 7)
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			uParam1->f_429.f_1[iVar4 /*12*/][iVar5] = func_558(uVar126[iVar5], iVar4, 0, iVar129[iVar5]);
			iVar5++;
		}
		uParam1->f_429.f_1[iVar4 /*12*/].f_3 = func_552(uVar132, iVar4, 0, bVar133);
		uParam1->f_429.f_1[iVar4 /*12*/].f_4 = { func_551(uVar134, iVar4, 0f, 0f, 0f, bVar135) };
		uParam1->f_429.f_1[iVar4 /*12*/].f_7 = func_550(uVar136, iVar4, 0f, bVar137);
		uParam1->f_429.f_1[iVar4 /*12*/].f_8 = { func_551(uVar138, iVar4, 0f, 0f, 0f, bVar139) };
		uParam1->f_429.f_1[iVar4 /*12*/].f_11 = func_558(uVar140, iVar4, -1, bVar141);
		iVar4++;
	}
	uParam1->f_596 = func_557(iVar142, "wnum", 0);
	uParam1->f_596.f_1 = func_557(iVar142, "wfak", -1);
	uParam1->f_596.f_2 = func_555(iVar142, "wblk", 250f);
	uParam1->f_599 = func_557(iVar143, "time", -1);
	uParam1->f_599.f_1 = func_556(iVar143, "disp", 0);
	uParam1->f_608 = func_557(iVar144, "num", 0);
	iVar4 = 0;
	while (iVar4 < 4)
	{
		uParam1->f_608.f_1[iVar4 /*11*/] = { func_551(uVar146, iVar4, 0f, 0f, 0f, bVar147) };
		uParam1->f_608.f_1[iVar4 /*11*/].f_3 = func_550(uVar148, iVar4, -1f, bVar149);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_608.f_1[iVar4 /*11*/].f_4[iVar5] = func_558(uVar150[iVar5], iVar4, 0, iVar152[iVar5]);
			iVar5++;
		}
		uParam1->f_608.f_1[iVar4 /*11*/].f_6 = func_550(uVar154, iVar4, 0f, bVar155);
		uParam1->f_608.f_1[iVar4 /*11*/].f_7 = func_552(uVar157, iVar4, -1, bVar158);
		uParam1->f_608.f_1[iVar4 /*11*/].f_7.f_1 = func_552(uVar159, iVar4, 12, bVar160);
		uParam1->f_608.f_1[iVar4 /*11*/].f_7.f_2 = func_550(uVar161, iVar4, 1f, bVar162);
		uParam1->f_608.f_1[iVar4 /*11*/].f_7.f_3 = func_549(uVar163, iVar4, 0, bVar164);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_654[iVar4 /*32*/] = func_558(uVar166, iVar4, 0, bVar167);
		uParam1->f_654[iVar4 /*32*/].f_1 = func_552(uVar169, iVar4, 1, bVar170);
		uParam1->f_654[iVar4 /*32*/].f_1.f_1 = func_548(uVar171, iVar4, "", bVar172);
		uParam1->f_654[iVar4 /*32*/].f_1.f_2 = func_558(uVar173, iVar4, 0, bVar174);
		uParam1->f_654[iVar4 /*32*/].f_1.f_3 = func_552(uVar175, iVar4, 5, bVar176);
		iVar5 = 0;
		while (iVar5 < 12)
		{
			uParam1->f_654[iVar4 /*32*/].f_7[iVar5 /*2*/] = func_552(uVar178[iVar5], iVar4, 0, iVar191[iVar5]);
			uParam1->f_654[iVar4 /*32*/].f_7[iVar5 /*2*/].f_1 = func_558(uVar204[iVar5], iVar4, -1, iVar217[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	uParam1->f_687 = func_557(iVar230, "num", 0);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_687.f_1[iVar4 /*7*/] = func_552(uVar232, iVar4, -1, bVar233);
		uParam1->f_687.f_1[iVar4 /*7*/].f_1 = { func_551(uVar234, iVar4, 0f, 0f, 0f, bVar235) };
		uParam1->f_687.f_1[iVar4 /*7*/].f_4 = { func_551(uVar236, iVar4, 0f, 0f, 0f, bVar237) };
		iVar4++;
	}
	uParam1->f_703 = func_557(iVar238, "num", 0);
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_703.f_1[iVar4 /*9*/][iVar5] = func_558(uVar240[iVar5], iVar4, 0, iVar242[iVar5]);
			iVar5++;
		}
		uParam1->f_703.f_1[iVar4 /*9*/].f_2 = { func_551(uVar244, iVar4, 0f, 0f, 0f, bVar245) };
		uParam1->f_703.f_1[iVar4 /*9*/].f_5 = { func_551(uVar246, iVar4, 0f, 0f, 0f, bVar247) };
		uParam1->f_703.f_1[iVar4 /*9*/].f_8 = func_550(uVar248, iVar4, 0f, bVar249);
		iVar4++;
	}
	uParam1->f_759 = func_557(iVar250, "num", 0);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_759.f_1[iVar4 /*14*/][iVar5] = func_558(uVar252[iVar5], iVar4, 0, iVar254[iVar5]);
			iVar5++;
		}
		uParam1->f_759.f_1[iVar4 /*14*/].f_2 = func_552(uVar256, iVar4, -1, bVar257);
		uParam1->f_759.f_1[iVar4 /*14*/].f_3 = func_558(uVar258, iVar4, -1, bVar259);
		uParam1->f_759.f_1[iVar4 /*14*/].f_4 = { func_551(uVar260, iVar4, 0f, 0f, 0f, bVar261) };
		uParam1->f_759.f_1[iVar4 /*14*/].f_7 = func_550(uVar262, iVar4, -1f, bVar263);
		uParam1->f_759.f_1[iVar4 /*14*/].f_8 = func_550(uVar264, iVar4, -1f, bVar265);
		uParam1->f_759.f_1[iVar4 /*14*/].f_9 = func_558(uVar266, iVar4, -1, bVar267);
		uParam1->f_759.f_1[iVar4 /*14*/].f_10 = func_552(uVar269, iVar4, -1, bVar270);
		uParam1->f_759.f_1[iVar4 /*14*/].f_10.f_1 = func_552(uVar271, iVar4, 12, bVar272);
		uParam1->f_759.f_1[iVar4 /*14*/].f_10.f_2 = func_550(uVar273, iVar4, 1f, bVar274);
		uParam1->f_759.f_1[iVar4 /*14*/].f_10.f_3 = func_549(uVar275, iVar4, 0, bVar276);
		iVar4++;
	}
	uParam1->f_789 = func_557(iVar277, "num", 0);
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_789.f_1[iVar4 /*10*/] = func_558(uVar279, iVar4, -1, bVar280);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_789.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/] = func_558(uVar282[iVar5], iVar4, -1, iVar284[iVar5]);
			uParam1->f_789.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_1 = { func_551(uVar286[iVar5], iVar4, 0f, 0f, 0f, iVar288[iVar5]) };
			uParam1->f_789.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_4 = { func_551(uVar290[iVar5], iVar4, 0f, 0f, 0f, iVar292[iVar5]) };
			uParam1->f_789.f_1[iVar4 /*10*/].f_1[iVar5 /*8*/].f_7 = func_558(uVar294[iVar5], iVar4, 2000, iVar296[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_808[iVar4 /*6*/] = func_552(uVar300, iVar4, 0, bVar301);
		uParam1->f_808[iVar4 /*6*/].f_1 = func_558(uVar302, iVar4, 0, bVar303);
		uParam1->f_808[iVar4 /*6*/].f_2 = { func_551(uVar304, iVar4, 0f, 0f, 0f, bVar305) };
		uParam1->f_808[iVar4 /*6*/].f_5 = func_550(uVar306, iVar4, 0f, bVar307);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 9)
	{
		uParam1->f_815[iVar4 /*16*/] = { func_547(uVar309, iVar4, "", bVar310) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_960[iVar4 /*9*/] = { func_546(uVar313, iVar4, "", bVar314) };
		uParam1->f_960[iVar4 /*9*/].f_8 = func_558(uVar315, iVar4, -1, bVar316);
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 1)
	{
		uParam1->f_960.f_10[iVar4 /*16*/] = { func_547(uVar318, iVar4, "", bVar319) };
		iVar4++;
	}
	iVar4 = 0;
	while (iVar4 < 2)
	{
		uParam1->f_987[iVar4 /*8*/] = { func_551(uVar321, iVar4, 0f, 0f, 0f, bVar322) };
		uParam1->f_987[iVar4 /*8*/].f_3 = func_550(uVar323, iVar4, 0f, bVar324);
		uParam1->f_987[iVar4 /*8*/].f_4 = func_558(uVar325, iVar4, -1, bVar326);
		iVar5 = 0;
		while (iVar5 < 1)
		{
			uParam1->f_987[iVar4 /*8*/].f_6[iVar5] = func_558(uVar327[iVar5], iVar4, 0, iVar329[iVar5]);
			iVar5++;
		}
		iVar4++;
	}
}

struct<8> func_546(var* uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<8> Var0;
	
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 32);
	}
	else
	{
		StringCopy(&Var0, sParam2, 32);
	}
	return Var0;
}

struct<16> func_547(var* uParam0, int iParam1, char* sParam2, bool bParam3)
{
	struct<16> Var0;
	
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		StringCopy(&Var0, DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

char* func_548(var* uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_STRING(uParam0, iParam1);
	}
	return sParam2;
}

int func_549(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_BOOL(uParam0, iParam1);
	}
	return iParam2;
}

float func_550(var* uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_FLOAT(uParam0, iParam1);
	}
	return fParam2;
}

Vector3 func_551(var* uParam0, int iParam1, struct<3> Param2, bool bParam5)
{
	if (bParam5 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_VECTOR(uParam0, iParam1);
	}
	return Param2;
}

int func_552(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

int func_553(int iParam0, char* sParam1, int iParam2)
{
	if (func_554(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 1)
	{
		return DATAFILE::DATADICT_GET_BOOL(iParam0, sParam1);
	}
	return iParam2;
}

bool func_554(int iParam0)
{
	return iParam0 != 0;
}

float func_555(int iParam0, char* sParam1, float fParam2)
{
	if (func_554(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 3)
	{
		return DATAFILE::DATADICT_GET_FLOAT(iParam0, sParam1);
	}
	return fParam2;
}

int func_556(int iParam0, char* sParam1, int iParam2)
{
	if (func_554(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_557(int iParam0, char* sParam1, int iParam2)
{
	if (func_554(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 2)
	{
		return DATAFILE::DATADICT_GET_INT(iParam0, sParam1);
	}
	return iParam2;
}

int func_558(var* uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && iParam1 < DATAFILE::DATAARRAY_GET_COUNT(uParam0))
	{
		return DATAFILE::DATAARRAY_GET_INT(uParam0, iParam1);
	}
	return iParam2;
}

struct<16> func_559(int iParam0, char* sParam1, char* sParam2)
{
	struct<16> Var0;
	
	if (func_554(iParam0) && DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1) == 4)
	{
		StringCopy(&Var0, DATAFILE::DATADICT_GET_STRING(iParam0, sParam1), 64);
	}
	else
	{
		StringCopy(&Var0, sParam2, 64);
	}
	return Var0;
}

int func_560(int iParam0, char* sParam1)
{
	if (!func_554(iParam0))
	{
		return 0;
	}
	return DATAFILE::DATADICT_GET_TYPE(iParam0, sParam1);
}

void func_561(var uParam0, int iParam1, char* sParam2)
{
	if (!func_554(iParam1))
	{
		return;
	}
	if (!func_554(*uParam0) && DATAFILE::DATADICT_GET_TYPE(iParam1, sParam2) == 6)
	{
		*uParam0 = DATAFILE::DATADICT_GET_DICT(iParam1, sParam2);
		if (!func_554(*uParam0))
		{
		}
	}
	if (!func_554(*uParam0))
	{
	}
}

void func_562()
{
	if (DATAFILE::DATAFILE_GET_FILE_DICT(0) != 0)
	{
		DATAFILE::DATAFILE_DELETE(0);
	}
}

char* func_563()
{
	return func_564(func_566(), func_565());
}

char* func_564(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return "DJ_KM_Skate_Clothing_1";
		
		case 1:
			return "DJ_KM_Pizza";
		
		case 2:
			return "DJ_KM_Chakra_Stones_1";
		
		case 3:
			return "DJ_MM_Rental_Car_1";
		
		case 4:
			return "DJ_MM_Slippers_1";
		
		case 5:
			return "DJ_PT_Equipment_1";
		
		case 6:
			return "DJ_PT_Champagne_1";
		
		default:
	}
	return "LoadedDataTest3";
}

int func_565()
{
	return Local_3199.f_525.f_1;
}

int func_566()
{
	return Local_3199.f_525;
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 275:
		case 270:
		case 276:
		case 277:
		case 273:
			return 0;
		
		default:
	}
	return 1;
}

void func_568()
{
	if (func_1204(21))
	{
		return;
	}
	func_569();
	func_527(21);
}

void func_569()
{
	switch (func_566())
	{
		case 0:
			func_1156();
			break;
		
		case 1:
			func_1094();
			break;
		
		case 2:
			func_886();
			break;
		
		case 4:
			func_836();
			break;
		
		case 3:
			func_719();
			break;
		
		case 6:
			func_658();
			break;
		
		case 5:
			func_570();
			break;
	}
}

void func_570()
{
	Local_1231.f_13 = 155281;
	Local_1231.f_3.f_1 = 155157;
	Local_1231.f_11 = 154910;
	Local_1231.f_11.f_1 = 152352;
	Local_1231.f_89.f_3.f_1 = 152294;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_89.f_3 = 152119;
	Local_1231.f_515.f_4.f_2 = 152007;
	Local_1231.f_81 = 151993;
	Local_1231.f_81.f_4 = 151981;
	Local_1231.f_81.f_3 = 151972;
	Local_1231.f_482 = 151927;
	Local_1231.f_482.f_1 = 151859;
	Local_1231.f_490.f_4 = 151849;
	Local_1231.f_490.f_3 = 151802;
	Local_1231.f_490.f_5 = 151770;
	Local_1231.f_45 = 151738;
	Local_1231.f_45.f_2.f_1 = 151698;
	Local_1231.f_45.f_2.f_2 = 151658;
	Local_1231.f_108.f_5 = 151648;
	Local_1231.f_108.f_13 = 151636;
	Local_1231.f_108.f_4 = 151625;
	Local_1231.f_108.f_27 = 151578;
	Local_1231.f_108.f_32 = 151479;
	Local_1231.f_108.f_23 = 151459;
	Local_1231.f_149.f_174 = 151318;
	Local_1231.f_149.f_134.f_13 = 151306;
	Local_1231.f_149.f_182 = 151231;
	Local_1231.f_149.f_2.f_20 = 151191;
	Local_1231.f_149.f_2.f_87.f_1 = 151181;
	Local_1231.f_149.f_2.f_87 = 150803;
	Local_1231.f_149.f_2.f_87.f_6 = 150790;
	Local_1231.f_149 = 150389;
	Local_1231.f_149.f_1 = 150343;
	Local_1231.f_476.f_1 = 150317;
	Local_1231.f_338.f_43 = 150257;
	Local_1231.f_338.f_44 = 150111;
	Local_1231.f_338.f_25 = 150098;
	Local_1231.f_60 = 150089;
}

int func_571()
{
	return 2;
}

float func_572(var uParam0)
{
	return 50f;
}

int func_573(int iParam0, var uParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_3 == joaat("pony"))
	{
		uParam1->f_66 = joaat("pony");
		StringCopy(&(uParam1->f_1), "43GSP782", 16);
		*uParam1 = 3;
		uParam1->f_5 = 16;
		uParam1->f_6 = 16;
		uParam1->f_7 = 16;
		uParam1->f_8 = 156;
		uParam1->f_97 = 1;
		uParam1->f_99 = 132;
		uParam1->f_98 = 0;
		uParam1->f_67 = 0;
		uParam1->f_69 = 1;
		uParam1->f_62 = 255;
		uParam1->f_63 = 255;
		uParam1->f_64 = 255;
		uParam1->f_74 = 255;
		uParam1->f_76 = 255;
		MISC::SET_BIT(&(uParam1->f_77), 1);
		return 1;
	}
	return 0;
}

void func_574(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
			break;
		
		case 1:
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 0, true, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 1, true, false);
			break;
	}
}

bool func_575(var uParam0, var uParam1, var uParam2)
{
	return func_576() != 0;
}

int func_576()
{
	return func_22();
}

int func_577(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
	}
	return 0;
}

void func_578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 1, 150731);
			func_583(iParam0, 1, 7);
			break;
		
		case 1:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 1, 150603);
			func_583(iParam0, 1, 19);
			func_581(iParam0, 1, 2, 150731);
			func_583(iParam0, 2, 7);
			break;
		
		case 2:
			func_583(iParam0, 0, 9);
			break;
		
		case 3:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 1, 150603);
			func_583(iParam0, 1, 16);
			func_581(iParam0, 1, 2, 150578);
			func_583(iParam0, 2, 7);
			break;
	}
}

var func_579(int iParam0, var uParam1)
{
	return (func_87(iParam0, 5) && func_88(1));
}

bool func_580(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_581(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2223.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_12;
	uVar1 = iParam2;
	Local_2223.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/] = uVar1;
	Local_2223.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_1[iVar0 /*2*/].f_1 = iParam3;
	Local_2223.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/].f_12++;
}

int func_582(int iParam0, var uParam1)
{
	return func_85(iParam0);
}

void func_583(int iParam0, int iParam1, int iParam2)
{
	Local_2223.f_232[iParam0 /*80*/].f_1[iParam1 /*13*/] = iParam2;
	Local_2223.f_232[iParam0 /*80*/]++;
}

float func_584(var uParam0)
{
	return 1000f;
}

Vector3 func_585(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return -591,0623f, -1166,539f, 21,1782f;
		
		case 1:
			return -620,3408f, -1165,117f, 21,1782f;
		
		case 2:
			return -621,4808f, -1101,907f, 21,1781f;
		
		case 3:
			return -614,5312f, -1073,422f, 21,3785f;
		
		case 4:
			return -616,4337f, -1034,042f, 20,7875f;
		
		case 5:
			return -623,31f, -996,9479f, 20,0253f;
		
		case 6:
			return -668,8128f, -1031,397f, 16,6584f;
		
		case 7:
			return -713,4483f, -1060,382f, 13,0133f;
		
		case 8:
			return -738,2045f, -1016,511f, 13,9066f;
		
		case 9:
			return -760,2473f, -978,169f, 14,644f;
		
		case 10:
			return -726,4073f, -968,7161f, 17,1713f;
		
		case 11:
			return -695,4406f, -947,1296f, 18,8838f;
		
		case 12:
			return -695,2433f, -923,0771f, 22,0752f;
		
		case 13:
			return -695,4212f, -910,3208f, 22,0774f;
		
		case 14:
			return -692,1169f, -908,2917f, 22,6719f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_586(var uParam0)
{
	return 15;
}

int func_587(var uParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[1 /*24*/]))
	{
		return 0;
	}
	return NETWORK::NET_TO_ENT(Local_3199.f_52[1 /*24*/]);
}

void func_588(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[2 /*24*/]))
	{
		return;
	}
	if (Param1.f_5 && Param1.f_0 == NETWORK::NET_TO_ENT(Local_3199.f_52[2 /*24*/]))
	{
		PED::SET_PED_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_3199.f_52[2 /*24*/]), 8, 0, 0, 0);
	}
}

char* func_589(var uParam0)
{
	return "IDJ_PT_THIEF_B";
}

void func_590(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 1, 0);
			break;
		
		case 1:
			PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
			PED::_0x0F62619393661D6E(iParam1, 1, 0);
			break;
		
		case 2:
			ENTITY::SET_ENTITY_MAX_HEALTH(iParam1, 400);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 400, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam1, false);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 1, 0, 0);
			break;
		
		case 3:
			ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
			break;
	}
}

bool func_591(var uParam0)
{
	return Local_3199.f_52[2 /*24*/].f_1 == 6;
}

void func_592(var uParam0)
{
	struct<2> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_0 = 2;
	func_593(5, &Var0);
}

void func_593(int iParam0, int iParam1)
{
	struct<4> Var0;
	
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_0 = -1351718157;
	Var0.f_1 = iLocal_3118;
	Var0.f_2 = iParam0;
	Var0.f_3 = { *iParam1 };
	SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 5, func_51(1));
}

Vector3 func_594(var uParam0)
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[2 /*24*/]))
	{
		return 0f, 0f, 0f;
	}
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_3199.f_52[2 /*24*/]), false);
}

int func_595(var uParam0)
{
	return 676;
}

char* func_596(var uParam0)
{
	return "IDJ_PT_EQ_BLIP";
}

int func_597(var uParam0)
{
	return 18;
}

char* func_598(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQb";
			}
		
		default:
	}
	return "";
}

char* func_599(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 2:
				return "IDJ_T_PT_EQ_EQa";
			}
		
		default:
	}
	return "";
}

int func_600()
{
	if (func_576() == 0)
	{
		return !func_13(&uLocal_4712, 6000, 0);
	}
	return 0;
}

char* func_601(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTEQ_A";
		
		default:
	}
	return "";
}

int func_602(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_576() == 0 && func_13(&uLocal_4712, 5000, 0));
		
		default:
	}
	return 0;
}

int func_603(var uParam0)
{
	return 158;
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_576() == 0;
			break;
		
		case 1:
			return (func_576() == 1 && func_13(&uLocal_4727, 3000, 0));
			break;
	}
	return 0;
}

char* func_605(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_DJEQ";
		
		case 1:
			return "IDJ_PT_HLP_THIE";
		
		default:
	}
	return "";
}

int func_606(var uParam0)
{
	return 1;
}

char* func_607(var uParam0)
{
	return "IDJ_PT_FOCUS";
}

bool func_608(var uParam0)
{
	return func_576() == 1;
}

Vector3 func_609()
{
	return func_610(func_611());
}

Vector3 func_610(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952863.f_1[iParam0 /*6*/];
	}
	return 0f, 0f, 0f;
}

int func_611()
{
	if (Local_1231.f_515.f_4.f_1 != 0)
	{
		Call_Loc(Local_1231.f_515.f_4.f_1);
		return StackVal;
	}
	if (iLocal_3120 != -1)
	{
		return Local_2860.f_1[Local_3783[iLocal_3120 /*115*/].f_57 /*4*/];
	}
	return 0;
}

int func_612(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_614() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_613())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_614() >= 3)
			{
				return 2;
			}
			break;
	}
	return -1;
}

int func_613()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_77.f_254)
	{
		if (func_88(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_614()
{
	return func_615();
}

int func_615()
{
	return Local_3783[iLocal_3120 /*115*/];
}

char* func_616()
{
	return "HEI4_MUSIC_STOP";
}

char* func_617()
{
	return "HEI4_FAIL";
}

char* func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_619()
{
	func_648(0, 4, 154887);
	func_647(0, 1, 1);
	func_648(1, 7, 154750);
	func_647(1, 2, 2);
	func_621(2, 3, 4, 5, 6, 154432, 154404, 152989, 154432, 1);
	func_648(6, 48, 152431);
}

void func_620()
{
}

void func_621(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam0;
	iVar1 = iParam1;
	iVar2 = iParam2;
	iVar3 = iParam3;
	if (bParam9)
	{
		iVar4 = iVar3;
		iVar5 = iVar0;
	}
	else
	{
		iVar4 = iVar0;
		iVar5 = iVar3;
	}
	func_648(iVar0, 22, iParam5);
	func_623(iVar0, iParam4, 152820);
	func_622(iVar0, iVar1);
	func_622(iVar0, iVar4);
	func_622(iVar0, iVar5);
	func_622(iVar0, iVar2);
	func_648(iVar1, 24, iParam6);
	func_623(iVar1, iParam4, 152820);
	func_622(iVar1, iVar4);
	func_622(iVar1, iVar5);
	func_622(iVar1, iVar2);
	func_648(iVar2, 25, iParam7);
	func_623(iVar2, iParam4, 152820);
	func_622(iVar2, iVar1);
	func_622(iVar2, iVar4);
	func_622(iVar2, iVar5);
	func_648(iVar3, 23, iParam8);
	func_623(iVar3, iParam4, 152820);
	func_622(iVar3, iVar1);
	func_622(iVar3, iVar4);
	func_622(iVar3, iVar5);
	func_622(iVar3, iVar2);
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2012[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_2012[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2012[iParam0 /*21*/].f_19++;
}

void func_623(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_2012[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	Local_2012[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2012[iParam0 /*21*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_2012[iParam0 /*21*/].f_19++;
}

int func_624()
{
	if (func_625(0))
	{
		return 1;
	}
	return 0;
}

int func_625(bool bParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (!func_626(iVar0, bParam0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_626(int iParam0, bool bParam1)
{
	if (func_453(iParam0, 4) || func_453(iParam0, 3))
	{
		return 1;
	}
	if (bParam1)
	{
		if (func_627(iParam0, iLocal_3121, 6) || func_627(iParam0, iLocal_3121, 9))
		{
			return 1;
		}
	}
	return 0;
}

bool func_627(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_3783[iParam1 /*115*/].f_3[iParam0 /*3*/]), iParam2);
}

void func_628()
{
	func_629("IDJ_HLPDELV_T", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_629(char* sParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (func_630(sParam0, sParam1, sParam2, bParam5, iParam3))
	{
		Global_1574747 = 13;
		Global_1574747.f_56 = iParam3;
		Global_1574747.f_57 = iParam4;
	}
}

int func_630(char* sParam0, char* sParam1, char* sParam2, bool bParam3, var uParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam1) > 63)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 63)
	{
		return 0;
	}
	if (func_640(sParam0, sParam1, sParam2) && Global_1574747.f_56 == Global_1574747.f_58)
	{
		return 0;
	}
	func_634();
	Global_1574747 = 10;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	StringCopy(&(Global_1574747.f_16), sParam1, 64);
	StringCopy(&(Global_1574747.f_32), sParam2, 64);
	Global_1574747.f_58 = uParam4;
	Global_1574747.f_56 = uParam4;
	func_633();
	func_632(bParam3);
	func_631();
	return 1;
}

void func_631()
{
	MISC::SET_BIT(&(Global_1574747.f_59), 1);
}

void func_632(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1574747.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1574747.f_59), 0);
}

void func_633()
{
	Global_1574747.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1574747.f_11 = NETWORK::GET_NETWORK_TIME();
}

void func_634()
{
	func_636();
	func_635(0);
}

void func_635(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1574747 = 20;
	StringCopy(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	if (bVar0)
	{
		Global_1574747.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1574747.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1574747.f_12), "", 16);
	StringCopy(&(Global_1574747.f_16), "", 64);
	StringCopy(&(Global_1574747.f_32), "", 64);
	Global_1574747.f_52 = 0;
	Global_1574747.f_53 = 0;
	Global_1574747.f_54 = 0;
	Global_1574747.f_55 = -1;
	Global_1574747.f_56 = 0;
	Global_1574747.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_636()
{
	if (!func_639())
	{
	}
	if (func_638())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1574747.f_12));
		func_637();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_637()
{
	switch (Global_1574747)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574747.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574747.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1574747.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574747.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1574747.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1574747.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1574747.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1574747.f_32));
			return;
		
		default:
	}
}

int func_638()
{
	if (Global_1574747 == 20)
	{
		return 0;
	}
	return 1;
}

bool func_639()
{
	if (!func_638())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1574747.f_12));
	func_637();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

bool func_640(char* sParam0, char* sParam1, char* sParam2)
{
	if (!func_638())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574747.f_12)))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574747.f_16)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam2) == MISC::GET_HASH_KEY(&(Global_1574747.f_32));
}

void func_641()
{
	func_629("IDJ_DELIVER_THE", "IDJ_PT_EQUIP", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_642()
{
	func_643("IDJ_RECOVER", "IDJ_PT_EQUIP", 18, 0);
}

void func_643(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_644(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574747 = 19;
		Global_1574747.f_56 = iParam2;
	}
}

int func_644(char* sParam0, char* sParam1, bool bParam2, var uParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (func_645(sParam0, sParam1) && Global_1574747.f_56 == Global_1574747.f_58)
	{
		return 0;
	}
	func_634();
	Global_1574747 = 3;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	StringCopy(&(Global_1574747.f_16), sParam1, 64);
	Global_1574747.f_58 = uParam3;
	Global_1574747.f_56 = uParam3;
	func_633();
	func_632(bParam2);
	func_631();
	return 1;
}

bool func_645(char* sParam0, char* sParam1)
{
	if (!func_638())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574747.f_12)))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam1) == MISC::GET_HASH_KEY(&(Global_1574747.f_16));
}

void func_646()
{
	func_643("ILH_STOP_THE", "IDJ_THIEVES", 6, 0);
}

void func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	iVar0 = Local_2012[iParam0 /*21*/].f_19;
	uVar1 = iParam1;
	uVar2 = iParam2;
	Local_2012[iParam0 /*21*/].f_1[iVar0 /*3*/] = uVar1;
	Local_2012[iParam0 /*21*/].f_1[iVar0 /*3*/].f_2 = uVar2;
	Local_2012[iParam0 /*21*/].f_19++;
}

void func_648(int iParam0, int iParam1, int iParam2)
{
	Local_2012[iParam0 /*21*/] = iParam1;
	Local_2012[iParam0 /*21*/].f_20 = iParam2;
	iLocal_3132++;
}

void func_649()
{
	func_643("ILH_GOTO_THE", "IDJ_LOC_PIRATE", 12, 0);
}

void func_650()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 7);
	func_651(1, 2, 155054);
	func_654(2, 22);
	func_653(2, 3);
	func_654(3, 24);
	func_653(3, 4);
	func_654(4, 48);
}

void func_651(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1851[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1851[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1851[iParam0 /*20*/].f_1[iVar0 /*3*/].f_1 = iParam2;
	Local_1851[iParam0 /*20*/].f_19++;
}

bool func_652()
{
	return Local_3199.f_52[2 /*24*/].f_1 == 6;
}

void func_653(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Local_1851[iParam0 /*20*/].f_19;
	uVar1 = iParam1;
	Local_1851[iParam0 /*20*/].f_1[iVar0 /*3*/] = uVar1;
	Local_1851[iParam0 /*20*/].f_19++;
}

void func_654(int iParam0, int iParam1)
{
	Local_1851[iParam0 /*20*/] = iParam1;
	iLocal_3131++;
}

void func_655()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]);
		if (((func_168(0, 6) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false)) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, true, true, false);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar0, true);
			AUDIO::SET_VEHICLE_RADIO_LOUD(iVar0, true);
			AUDIO::_0xC1805D05E6D4FE10(iVar0);
			AUDIO::SET_VEH_RADIO_STATION(iVar0, "RADIO_35_DLC_HEI4_MLR");
		}
	}
}

void func_656()
{
	Local_227.f_19 = 1;
	Local_227.f_19.f_5[0 /*13*/].f_2 = joaat("h4_prop_h4_michael_backpack");
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
	func_657(0, 24);
}

void func_657(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_356.f_1[iParam0 /*14*/]), iParam1))
	{
	}
}

void func_658()
{
	Local_1231.f_13 = 158656;
	Local_1231.f_3.f_4 = 158563;
	Local_1231.f_3.f_4.f_1 = 158484;
	Local_1231.f_11 = 158402;
	Local_1231.f_11.f_1 = 158175;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_89.f_1 = 158056;
	Local_1231.f_89 = 157989;
	Local_1231.f_515.f_4.f_2 = 157939;
	Local_1231.f_108.f_13 = 157927;
	Local_1231.f_108.f_4 = 157917;
	Local_1231.f_108.f_24 = 157904;
	Local_1231.f_108.f_35 = 157869;
	Local_1231.f_149.f_174 = 157807;
	Local_1231.f_149 = 157790;
	Local_1231.f_447.f_4 = 157704;
	Local_1231.f_447.f_3 = 157682;
	Local_1231.f_60 = 150089;
	Local_1231.f_338.f_43 = 157534;
	Local_1231.f_338.f_44 = 157398;
	Local_1231.f_338.f_47 = 157117;
	Local_1231.f_338.f_48 = 157117;
	Local_1231.f_479 = 157084;
	Local_1231.f_479.f_1 = 157061;
	Local_1231.f_3.f_1 = 156442;
	Local_1231.f_3 = 156313;
	Local_1231.f_482.f_1 = 155996;
	Local_1231.f_482 = 155912;
	Local_1231.f_490.f_4 = 155902;
	Local_1231.f_490.f_3 = 155824;
	Local_1231.f_490.f_5 = 155779;
	Local_1231.f_45 = 155735;
}

int func_659()
{
	if (func_660() == 0)
	{
		return !func_13(&uLocal_4712, 6000, 0);
	}
	return 0;
}

int func_660()
{
	return func_22();
}

char* func_661(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_PTCP_A";
		
		case 1:
			return "IDJ_TX_P_PTCP_U";
		
		default:
	}
	return "";
}

int func_662(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_660() == 0 && func_13(&uLocal_4712, 5000, 0));
		
		case 1:
			return (func_660() == 3 && func_13(&uLocal_4729, 5000, 0));
		
		default:
	}
	return 0;
}

int func_663(var uParam0)
{
	return 158;
}

char* func_664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_PT_HLP_STRT";
		
		case 1:
			return "IDJ_PT_HLP_SRCe";
		
		case 2:
			return "IDJ_PT_HLP_SRCt";
		
		case 3:
			return "IDJ_PT_HLP_TRK";
		
		case 4:
			return "IDJ_PT_HLP_SPD";
		
		default:
	}
	return "";
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_660() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_660() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_668(0))
			{
				return 1;
			}
			break;
		
		case 3:
			return (func_660() == 3 && func_13(&uLocal_4729, 5000, 0));
			break;
		
		case 4:
			return (func_660() == 3 && func_666());
			break;
	}
	return 0;
}

int func_666()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[1 /*8*/]))
	{
		return 0;
	}
	if (PED::IS_PED_IN_VEHICLE(iLocal_3119, NETWORK::NET_TO_VEH(Local_3199.f_341[1 /*8*/]), false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(NETWORK::NET_TO_ENT(Local_3199.f_341[1 /*8*/]))) > func_667())
		{
			return 1;
		}
	}
	return 0;
}

float func_667()
{
	switch (func_566())
	{
		case 6:
			return 22f;
		
		default:
	}
	return 22f;
}

bool func_668(int iParam0)
{
	return func_669(&(Local_3199.f_428), iParam0);
}

bool func_669(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 % 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_670()
{
	func_671(0);
}

void func_671(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_3783[iVar0 /*115*/].f_70 > 0 && Local_3199.f_525.f_3 > Local_3783[iVar0 /*115*/].f_105)
			{
				Local_3199.f_525.f_3 = Local_3783[iVar0 /*115*/].f_105;
			}
		}
		iVar0++;
	}
	if (Local_3199.f_525.f_3 <= 0f)
	{
		func_463(iParam0, 3);
	}
}

void func_672()
{
	func_679();
	func_673(0);
}

void func_673(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_434(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[iVar0 /*8*/]))
	{
		iVar1 = NETWORK::NET_TO_ENT(Local_3199.f_341[iVar0 /*8*/]);
		if (func_678(iVar1) && MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iVar1)) > func_667())
		{
			if (!func_677(iParam0))
			{
				return;
			}
			if (!func_675(iLocal_3118, 1))
			{
				return;
			}
			if (func_13(&uLocal_4708, 500, 0))
			{
				func_53(&uLocal_4708);
				func_674(5f);
			}
		}
		else if (func_15(&uLocal_4708))
		{
			func_53(&uLocal_4708);
		}
	}
}

void func_674(float fParam0)
{
	Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105 = (Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105 - fParam0);
	if (Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105 < 0f)
	{
		Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105 = 0f;
	}
}

int func_675(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_676(iParam0, iVar0, bParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_676(int iParam0, int iParam1, bool bParam2)
{
	if (Local_2782[iParam1 /*7*/].f_4 == iParam0)
	{
		if (bParam2)
		{
			if (func_453(iParam1, 4) || func_627(iParam1, iLocal_3121, 6))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_677(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 < 0 || iParam0 > 3) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2[iParam0]))
	{
		return 0;
	}
	if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_3199.f_2[iParam0]))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_3199.f_2[iParam0]))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]);
		fVar1 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iVar0, true));
		iVar2 = 0;
		while (iVar2 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2));
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar3, true), ENTITY::GET_ENTITY_COORDS(iVar0, true)) < fVar1)
				{
					return 0;
				}
			}
			iVar2++;
		}
	}
	return 1;
}

int func_678(int iParam0)
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

void func_679()
{
	if (Local_3199.f_525.f_3 < Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105)
	{
		Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105 = Local_3199.f_525.f_3;
	}
}

int func_680(var uParam0)
{
	return SYSTEM::ROUND(Local_3783[NETWORK::PARTICIPANT_ID_TO_INT() /*115*/].f_105);
}

bool func_681(var uParam0)
{
	return func_682(3);
}

bool func_682(int iParam0)
{
	return func_4(&(Local_3199.f_523), iParam0);
}

void func_683(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	int iVar0;
	float fVar1;
	
	if (func_168(iParam0, 14))
	{
		iVar0 = func_187(iParam0);
		if (!func_677(iVar0))
		{
			return;
		}
		if (func_15(&uLocal_4706) && !func_13(&uLocal_4706, 200, 0))
		{
			return;
		}
		else
		{
			func_53(&uLocal_4706);
			func_14(&uLocal_4706, 0, 0);
		}
		fVar1 = func_684(&uParam1);
		if (fVar1 > 0f)
		{
			func_674(fVar1);
		}
	}
}

float func_684(var uParam0)
{
	float fVar0;
	
	fVar0 = (uParam0->f_2 * 50f);
	if (fVar0 > func_686(0, 0))
	{
		if (func_685(uParam0))
		{
			if (fVar0 > func_686(1, 1))
			{
				fVar0 = func_686(1, 1);
			}
		}
		if (fVar0 > func_686(1, 0))
		{
			fVar0 = func_686(1, 0);
		}
	}
	else
	{
		fVar0 = 0f;
	}
	return fVar0;
}

int func_685(var uParam0)
{
	if (uParam0->f_6 == joaat("weapon_rammed_by_car") || uParam0->f_6 == joaat("weapon_run_over_by_car"))
	{
		return 1;
	}
	return 0;
}

float func_686(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return 20f;
		}
		else
		{
			return 30f;
		}
	}
	return 5f;
}

int func_687(int iParam0, var uParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("mule"):
			uParam1->f_66 = joaat("mule");
			StringCopy(&(uParam1->f_1), "15SBF953", 16);
			uParam1->f_5 = 111;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 6);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_688(int iParam0, int iParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("mule"):
			VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 15f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iParam1, 6);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, 0, 5, 0,4f);
			ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
			break;
		
		case joaat("bodhi2"):
			VEHICLE::SET_VEHICLE_LIGHTS(iParam1, 3);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam1, 15f);
			VEHICLE::SET_VEHICLE_DOOR_CONTROL(iParam1, 4, 5, 0,25f);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam1, 51f);
			VEHICLE::SMASH_VEHICLE_WINDOW(iParam1, 6);
			AUDIO::SET_VEH_RADIO_STATION(iParam1, "RADIO_11_TALK_02");
			break;
	}
}

Vector3 func_689(var uParam0)
{
	return Local_227.f_356.f_1[1 /*14*/].f_4;
}

int func_690(int iParam0)
{
	if (Local_2877.f_1 < (Local_227.f_759.f_1[iParam0 /*14*/].f_8 * Local_227.f_759.f_1[iParam0 /*14*/].f_8))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[1 /*8*/]))
		{
			return 0;
		}
		return ENTITY::IS_ENTITY_ON_SCREEN(NETWORK::NET_TO_ENT(Local_3199.f_341[1 /*8*/]));
	}
	return 0;
}

void func_691(int iParam0)
{
	func_583(iParam0, 0, 8);
}

void func_692(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 0, 0);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 0, 0);
			break;
	}
}

void func_693(var uParam0)
{
	func_694(17);
}

void func_694(int iParam0)
{
	if (func_17(&(Local_227.f_16), iParam0))
	{
	}
}

float func_695(var uParam0)
{
	return 25f;
}

int func_696(var uParam0)
{
	return 225;
}

char* func_697(var uParam0)
{
	return "IDJ_DELVRTRK_B";
}

Vector3 func_698()
{
	return func_699(func_611());
}

Vector3 func_699(int iParam0)
{
	if (iParam0 != 0)
	{
		return Global_1952863.f_1[iParam0 /*6*/].f_3;
	}
	return 0f, 0f, 0f;
}

int func_700(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[1 /*8*/]) && PED::IS_PED_IN_VEHICLE(iLocal_3119, NETWORK::NET_TO_VEH(Local_3199.f_341[1 /*8*/]), false));
			break;
	}
	return 0;
}

int func_701(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[1 /*8*/]) && func_702(uParam0, "bottles_loop", NETWORK::NET_TO_VEH(Local_3199.f_341[1 /*8*/]), "dlc_btl_stolen_supplies_Sounds", 0, 0));
			break;
	}
	return 0;
}

int func_702(var uParam0, char* sParam1, int iParam2, char* sParam3, bool bParam4, int iParam5)
{
	if (*uParam0 == -1)
	{
		*uParam0 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_ENTITY(*uParam0, sParam1, iParam2, sParam3, bParam4, iParam5);
		return 1;
	}
	return 0;
}

void func_703()
{
	func_648(0, 4, 158379);
	func_647(0, 1, 1);
	func_648(1, 5, 158356);
	func_647(1, 2, 2);
	func_621(2, 3, 4, 5, 6, 158333, 158305, 158277, 158254, 1);
	func_648(6, 48, 152431);
}

void func_704()
{
	func_643("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_705()
{
	func_629("IDJ_HLPDELV_T", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_706()
{
	func_629("IDJ_DELIVER_THE", "IDJ_TRUCK", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_707()
{
	func_643("IDJ_RECOVER", "IDJ_DELVRTRK", 9, 0);
}

void func_708()
{
	func_643("IDJ_MM_SEARCH", "IDJ_MM_AREA", 12, 0);
}

void func_709()
{
	func_643("ILH_GOTO", "IDJ_MM_GRAPE", 12, 0);
}

void func_710()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 5);
	func_651(1, 2, 158471);
	func_654(2, 22);
	func_653(2, 3);
	func_654(3, 24);
	func_653(3, 4);
	func_654(4, 48);
}

bool func_711()
{
	return func_668(0);
}

void func_712(var uParam0, int iParam1)
{
	if (!bLocal_3116)
	{
		return;
	}
	if (func_714(iParam1, 3))
	{
		func_713(3);
	}
}

void func_713(int iParam0)
{
	if (func_17(&(Local_3199.f_523), iParam0))
	{
	}
}

bool func_714(int iParam0, int iParam1)
{
	return func_4(&(Local_3783[iParam0 /*115*/].f_103), iParam1);
}

void func_715()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[1 /*8*/]))
	{
		return;
	}
	if (!func_682(3))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_3119, NETWORK::NET_TO_VEH(Local_3199.f_341[1 /*8*/]), false))
		{
			func_716(3);
		}
	}
}

void func_716(int iParam0)
{
	if (func_17(&(Local_3783[iLocal_3120 /*115*/].f_103), iParam0))
	{
	}
}

void func_717()
{
	func_718(0, 15);
	func_657(1, 9);
	Local_227.f_608.f_1[0 /*11*/].f_3 = 200f;
	Local_227.f_759 = 1;
	Local_227.f_759.f_1[0 /*14*/].f_4 = { Local_227.f_608.f_1[0 /*11*/] };
	Local_227.f_759.f_1[0 /*14*/].f_7 = 200f;
	Local_227.f_759.f_1[0 /*14*/].f_8 = 25f;
	Local_227.f_801[0 /*6*/] = 2;
	Local_227.f_801[0 /*6*/].f_1 = "IDJ_HUD_CMPGNE";
	Local_227.f_801[0 /*6*/].f_2 = 1000;
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
}

void func_718(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_19.f_5[iParam0 /*13*/]), iParam1))
	{
	}
}

void func_719()
{
	Local_1231.f_13 = 166817;
	Local_1231.f_3.f_1 = 165507;
	Local_1231.f_3.f_4 = 165081;
	Local_1231.f_11 = 164907;
	Local_1231.f_11.f_1 = 164101;
	Local_1231.f_89.f_3.f_1 = 164043;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_89.f_3 = 163953;
	Local_1231.f_515.f_4.f_2 = 163937;
	Local_1231.f_149.f_157.f_1 = 163926;
	Local_1231.f_149.f_157 = 163866;
	Local_1231.f_149.f_157.f_3 = 163839;
	Local_1231.f_149.f_174 = 163684;
	Local_1231.f_149.f_134.f_13 = 163652;
	Local_1231.f_149.f_134.f_4 = 163624;
	Local_1231.f_149.f_134.f_5 = 163597;
	Local_1231.f_149.f_134 = 163519;
	Local_1231.f_149.f_134.f_9 = 163493;
	Local_1231.f_149.f_175 = 163255;
	Local_1231.f_149.f_181 = 163199;
	Local_1231.f_149.f_184 = 163134;
	Local_1231.f_149.f_134.f_19 = 163097;
	Local_1231.f_149.f_126.f_1.f_5 = 163014;
	Local_1231.f_149 = 162381;
	Local_1231.f_149.f_1 = 162335;
	Local_1231.f_149.f_2.f_81 = 162326;
	Local_1231.f_149.f_2.f_81.f_3 = 162288;
	Local_1231.f_149.f_2.f_81.f_1 = 162262;
	Local_1231.f_149.f_2.f_81.f_2 = 162228;
	Local_1231.f_149.f_2.f_23 = 162219;
	Local_1231.f_149.f_2.f_23.f_1 = 162177;
	Local_1231.f_149.f_126.f_1.f_1 = 162147;
	Local_1231.f_149.f_126.f_1.f_4 = 162138;
	Local_1231.f_108.f_13 = 162126;
	Local_1231.f_108.f_4 = 162115;
	Local_1231.f_108.f_9 = 162106;
	Local_1231.f_108.f_24 = 162093;
	Local_1231.f_45 = 162039;
	Local_1231.f_515 = 161642;
	Local_1231.f_338.f_43 = 161606;
	Local_1231.f_338.f_44 = 161473;
	Local_1231.f_81 = 161429;
	Local_1231.f_81.f_3 = 161420;
	Local_1231.f_81.f_4 = 161408;
	Local_1231.f_482.f_1 = 161238;
	Local_1231.f_482 = 161180;
	Local_1231.f_490.f_4 = 161170;
	Local_1231.f_490.f_3 = 161123;
	Local_1231.f_490.f_5 = 161091;
	Local_1231.f_45.f_2.f_1 = 161051;
	Local_1231.f_45.f_2.f_2 = 161011;
	Local_1231.f_45.f_2 = 160985;
	Local_1231.f_496.f_13 = 160810;
	Local_1231.f_496.f_9 = 160798;
	Local_1231.f_496.f_12 = 159718;
	Local_1231.f_496.f_10 = 159706;
	Local_1231.f_496.f_15 = 159697;
	Local_1231.f_496.f_7 = 159688;
	Local_1231.f_496.f_6 = 159679;
	Local_1231.f_496.f_16 = 159636;
	Local_1231.f_496.f_3 = 159600;
	Local_1231.f_60 = 150089;
}

int func_720(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1;
		
		case 6:
			return 1;
		
		default:
	}
	return 0;
}

void func_721(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			func_716(6);
			break;
		
		case 5:
			func_716(7);
			break;
	}
}

int func_722()
{
	return -1;
}

int func_723(var uParam0, var uParam1)
{
	return 2;
}

int func_724(var uParam0, var uParam1)
{
	return 0;
}

char* func_725(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_726(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_735(0, iLocal_3121, 1);
		
		case 1:
			return func_714(iLocal_3121, 0);
		
		case 2:
			if ((PLAYER::IS_PLAYER_PRESSING_HORN(iLocal_3118) && !func_714(iLocal_3121, 2)) && func_735(0, iLocal_3121, 1))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
				{
					return 0;
				}
				if (!func_734() && PED::IS_PED_ON_FOOT(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/])))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 3:
			if (func_714(iLocal_3121, 2))
			{
				if (func_13(&uLocal_4720, 2000, 0))
				{
					func_53(&uLocal_4720);
					return 1;
				}
			}
			return 0;
			break;
		
		case 4:
			if (func_733() == 2 && func_731(3))
			{
				if (func_13(&uLocal_4720, 10000, 0))
				{
					func_53(&uLocal_4720);
					return 1;
				}
			}
			return 0;
			break;
		
		case 5:
			if (func_733() == 3 && func_731(4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Phone_Text_Arrive", "DLC_H4_MM_Sounds", true);
				return 1;
			}
			return 0;
			break;
		
		case 6:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
			{
				return 0;
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(NETWORK::NET_TO_ENT(Local_3199.f_341[0 /*8*/])))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
				{
					return 0;
				}
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(NETWORK::NET_TO_ENT(Local_3199.f_52[0 /*24*/]), NETWORK::NET_TO_ENT(Local_3199.f_341[0 /*8*/]), 287))
				{
					return 1;
				}
			}
			return 0;
			break;
		
		case 7:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
			{
				return 0;
			}
			return ((func_733() == 5 && PED::IS_PED_ON_FOOT(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]))) && !func_730());
			break;
		
		case 8:
			if (func_729())
			{
				if (func_13(&uLocal_4720, 2000, 0))
				{
					func_53(&uLocal_4720);
					return 1;
				}
			}
			break;
		
		case 9:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
			{
				return 0;
			}
			return VEHICLE::_GET_VEHICLE_BODY_HEALTH_2(NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]), 1000f, 1000f, 1000f, 1000f, 1000f, 1000f) < 90f;
			break;
		
		case 10:
			if (func_733() == 6 && func_731(8))
			{
				if (func_13(&uLocal_4720, 10000, 0))
				{
					func_53(&uLocal_4720);
					return 1;
				}
			}
			return 0;
			break;
		
		case 11:
			return ((func_733() == 6 && func_727()) && Local_2782[0 /*7*/].f_2 < 200f);
	}
	return 0;
}

var func_727()
{
	return (func_728() && func_729());
}

bool func_728()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
	{
		return 0;
	}
	return PED::IS_PED_IN_VEHICLE(iLocal_3119, NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]), false);
}

bool func_729()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
	{
		return 0;
	}
	return PED::IS_PED_IN_VEHICLE(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]), NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]), false);
}

bool func_730()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[1 /*24*/]))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[2 /*24*/]))
	{
		return 0;
	}
	return (!func_678(NETWORK::NET_TO_PED(Local_3199.f_52[1 /*24*/])) && !func_678(NETWORK::NET_TO_PED(Local_3199.f_52[2 /*24*/])));
}

bool func_731(int iParam0)
{
	return (func_732(iParam0) && Local_2890.f_2 != iParam0);
}

bool func_732(int iParam0)
{
	return func_669(&Local_2890, iParam0);
}

int func_733()
{
	return func_22();
}

int func_734()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3119, false))
	{
		return VEHICLE::IS_VEHICLE_SEAT_FREE(PED::GET_VEHICLE_PED_IS_IN(iLocal_3119, true), -2, true);
	}
	return 0;
}

bool func_735(int iParam0, int iParam1, int iParam2)
{
	return func_4(&(Local_3783[iParam1 /*115*/].f_16[iParam0 /*2*/]), iParam2);
}

char* func_736(var uParam0)
{
	return "HS4MOAU";
}

char* func_737(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_RCSO1";
		
		case 1:
			return "HS4MO_RCUP1";
		
		case 2:
			return "HS4MO_RCWV1";
		
		case 3:
			return "HS4MO_RCFC1";
		
		case 4:
			return "HS4MO_RCHD1";
		
		case 5:
			return "HS4MO_RCB1";
		
		case 6:
			return "HS4MO_RCCS1";
		
		case 7:
			return "HS4MO_RCRCF1";
		
		case 8:
			return "HS4MO_RCGC1";
		
		case 9:
			return "HS4MO_RCCD1";
		
		case 10:
			return "HS4MO_RCDTC1";
		
		case 11:
			return "HS4MO_RCNC1";
		
		default:
	}
	return "";
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		default:
	}
	return 1;
}

char* func_739(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMb";
			}
		
		default:
	}
	return "";
}

char* func_740(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 0:
				return "IDJ_T_MM_RC_MMa";
			}
		
		default:
	}
	return "";
}

char* func_741(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMRC_A";
		
		default:
	}
	return "";
}

int func_742(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_733() == 0 && func_13(&uLocal_4712, 5000, 0));
		
		default:
	}
	return 0;
}

int func_743(var uParam0)
{
	return 158;
}

char* func_744(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_INT";
		
		case 1:
			return "IDJ_MM_HLP_SGNL";
		
		case 2:
			return "IDJ_MM_HLP_RSX";
		
		default:
	}
	return "";
}

int func_745(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_733() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_733() == 1)
			{
				if (func_735(0, iLocal_3121, 1) && !func_682(0))
				{
					return 1;
				}
			}
			break;
		
		case 2:
			if (func_733() == 6)
			{
				if (func_728() && !func_746())
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_746()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
	{
		return 0;
	}
	return PED::IS_PED_GROUP_MEMBER(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]), PLAYER::GET_PLAYER_GROUP(iLocal_3118));
}

char* func_747(var uParam0)
{
	return "IDJ_MM_FOCUS";
}

int func_748(var uParam0)
{
	return 1;
}

bool func_749(var uParam0)
{
	return func_750() == 22;
}

int func_750()
{
	if (func_22() != -1)
	{
		return Local_1851[func_22() /*20*/];
	}
	return -1;
}

int func_751(int iParam0, var uParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("italirsx"):
			uParam1->f_66 = joaat("italirsx");
			StringCopy(&(uParam1->f_1), "05SBF291", 16);
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 35;
			uParam1->f_8 = 0;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 7;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_752(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_3 == joaat("italirsx"))
	{
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
}

int func_753()
{
	if (!func_731(8))
	{
		return 0;
	}
	if (func_429(iLocal_3121, 2))
	{
		return 0;
	}
	if (func_758() != 24 && func_758() != 25)
	{
		return 0;
	}
	if (Local_2860.f_9 != func_611())
	{
		return 0;
	}
	if (func_754())
	{
		return 0;
	}
	return 1;
}

int func_754()
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) < 1 && PLAYER::GET_PLAYER_FAKE_WANTED_LEVEL(iLocal_3118) < 1)
	{
		return 0;
	}
	if (func_757())
	{
		return 1;
	}
	if (func_756())
	{
		if (func_755(iLocal_3118, 0, 1, 0) || func_675(iLocal_3118, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_755(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if ((((iParam1 || !func_453(iVar0, 4)) && (iParam2 || !func_627(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 1))) && (iParam3 || !func_627(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 12))) && func_627(iVar0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0), 14))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_756()
{
	if (Local_1231.f_60.f_11 != 0)
	{
		Call_Loc(Local_1231.f_60.f_11);
		return StackVal;
	}
	return 1;
}

int func_757()
{
	if (Local_1231.f_60.f_10 != 0)
	{
		Call_Loc(Local_1231.f_60.f_10);
		return StackVal;
	}
	return 0;
}

int func_758()
{
	if (func_615() != -1)
	{
		return Local_2012[func_615() /*21*/];
	}
	return -1;
}

int func_759()
{
	if (func_733() == 0)
	{
		return !func_13(&uLocal_4712, 6000, 0);
	}
	if (func_733() == 2)
	{
		if (!func_682(10))
		{
			return 1;
		}
	}
	return 0;
}

float func_760(var uParam0)
{
	return 125f;
}

int func_761(var uParam0)
{
	return 1;
}

int func_762(var uParam0)
{
	return 523;
}

char* func_763(var uParam0)
{
	return "IDJ_MM_RSX_BLIP";
}

int func_764(var uParam0)
{
	return 1;
}

float func_765(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 0f;
}

Vector3 func_766(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return -272,7f, -1305,1f, 31,4f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_767(var uParam0)
{
	return 1;
}

float func_768(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15f;
		
		default:
	}
	return 7,5f;
}

int func_769(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

float func_770(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (!func_682(2))
			{
				return 1f;
			}
			break;
	}
	return 3f;
}

int func_771(var uParam0, var uParam1)
{
	return 1;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

void func_773(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 1, 162990);
			func_583(iParam0, 1, 39);
			func_581(iParam0, 1, 2, 162921);
			func_583(iParam0, 2, 0);
			break;
		
		case 1:
			func_583(iParam0, 0, 0);
			func_581(iParam0, 0, 1, 162884);
			func_583(iParam0, 1, 12);
			func_581(iParam0, 1, 2, 162869);
			func_583(iParam0, 2, 2);
			func_581(iParam0, 2, 4, 162780);
			func_583(iParam0, 4, 14);
			func_581(iParam0, 4, 5, 162667);
			func_583(iParam0, 5, 13);
			func_581(iParam0, 5, 3, 162612);
			func_583(iParam0, 3, 7);
			break;
		
		case 2:
			func_583(iParam0, 0, 0);
			func_581(iParam0, 0, 3, 162612);
			func_583(iParam0, 3, 7);
			break;
	}
}

int func_774(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_733() >= 5 && func_85(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_775(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				if (VEHICLE::_GET_VEHICLE_BODY_HEALTH_2(PED::GET_VEHICLE_PED_IS_IN(iParam1, false), 1000f, 1000f, 1000f, 1000f, 1000f, 1000f) < 85f && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(iParam1, false)) < 1f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_776(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				if (VEHICLE::_GET_VEHICLE_BODY_HEALTH_2(PED::GET_VEHICLE_PED_IS_IN(iParam1, false), 1000f, 1000f, 1000f, 1000f, 1000f, 1000f) < 85f)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_777(int iParam0, var uParam1)
{
	return func_87(iParam0, 5);
}

int func_778(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			if (func_733() == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_779(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
			{
				return 0;
			}
			return PED::IS_PED_IN_VEHICLE(iParam1, NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]), false);
			break;
	}
	return 0;
}

var func_780(var uParam0, var uParam1)
{
	return (func_87(0, 1) && func_682(0));
}

void func_781(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			if (func_733() == 1)
			{
				if (!func_714(iLocal_3121, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3119, false))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_3119, false), 10f, 1, true);
					}
				}
			}
			break;
	}
}

int func_782(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			if (func_733() > 4)
			{
				return 0;
			}
			break;
	}
	return 1;
}

void func_783(int iParam0)
{
	if (iParam0 == 0)
	{
		func_784(iParam0, 0);
	}
}

void func_784(int iParam0, int iParam1)
{
	if (func_57(iParam0, iParam1))
	{
		return;
	}
	if (func_59(iParam0) != 0)
	{
		return;
	}
	func_50(0, iParam0, iParam1);
}

int func_785(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
		case 2:
			if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_3199.f_52[iParam0 /*24*/]), false))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_786(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			if (!PED::GET_PED_CONFIG_FLAG(iParam1, 402, true))
			{
				if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[0 /*8*/]))
				{
					return;
				}
				if (PED::IS_PED_IN_VEHICLE(iParam1, NETWORK::NET_TO_VEH(Local_3199.f_341[0 /*8*/]), false))
				{
					if (func_788(Local_3199.f_52[0 /*24*/]))
					{
						PED::SET_PED_CONFIG_FLAG(iParam1, 402, true);
					}
				}
			}
			if (bLocal_3116)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
				{
					if (!func_787(PED::GET_VEHICLE_PED_IS_IN(iParam1, false)))
					{
						func_8(20);
					}
				}
			}
			break;
	}
}

int func_787(int iParam0)
{
	if (func_678(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_788(int iParam0)
{
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0) || (!NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(iParam0) && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()))
	{
		if (func_135(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_789(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_790(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_733() == 0)
			{
				return 0;
			}
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
			{
				return 0;
			}
			return !PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]), false);
			break;
	}
	return 0;
}

int func_791(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		
		default:
	}
	return 6;
}

int func_792(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 280;
		
		default:
	}
	return -1;
}

char* func_793(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_PED_BLIP";
		
		default:
	}
	return "PB_ENEMY";
}

void func_794(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 6, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 10, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 9, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 5, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam1, 1, 0, 0, false);
			PED::CLEAR_PED_PROP(iParam1, 2);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam1, false);
			break;
		
		case 2:
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 1, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 2, true);
			break;
	}
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		default:
	}
	return 0;
}

int func_796(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 2;
		
		case 3:
			return 23;
		
		case 4:
			return 35;
		
		case 5:
			return 38;
		
		default:
	}
	return 44;
}

int func_797(var uParam0)
{
	return 5000;
}

Vector3 func_798()
{
	return func_699(func_611());
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_800() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_613())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_800() >= 6)
			{
				return 2;
			}
			break;
	}
	return -1;
}

int func_800()
{
	return func_615();
}

char* func_801(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_SUSPENSE_START";
		
		case 1:
			return "HEI4_MED_INTENSITY";
		
		case 2:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_802()
{
	func_648(0, 4, 164884);
	func_647(0, 1, 1);
	func_648(1, 20, 164805);
	func_623(1, 2, 164792);
	func_648(2, 4, 164769);
	func_623(2, 1, 164755);
	func_647(2, 3, 3);
	func_648(3, 20, 164647);
	func_647(3, 4, 4);
	func_647(3, 5, 5);
	func_648(4, 4, 164624);
	func_623(4, 1, 164755);
	func_647(4, 5, 5);
	func_621(5, 6, 7, 8, 9, 164385, 164315, 164287, 164264, 1);
	func_648(9, 48, 152431);
}

void func_803()
{
	func_643("IDJ_RECOVER", "IDJ_MM_RSX_OBJ", 9, 0);
}

void func_804()
{
	func_629("IDJ_HLPDELV_T", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
}

void func_805()
{
	if (!func_729())
	{
		func_643("IDJ_MM_WAIT_RSX", "IDJ_MOODYMANN", 9, 0);
	}
	else if (func_731(8))
	{
		func_629("IDJ_DELIVER_THE", "IDJ_MM_RSX_OBJ", "IDJ_LOC_MUSIC", 1, 12, 0);
	}
	else
	{
		func_810();
	}
}

void func_806()
{
	if ((func_746() && !func_807()) && !func_730())
	{
		func_643("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_643("IDJ_MM_RCVR_SLN", "IDJ_MM_RSX_OBJ", 9, 0);
	}
}

int func_807()
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
	{
		return 0;
	}
	return func_808(iLocal_3119, NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]));
}

int func_808(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false) && PED::IS_PED_IN_ANY_VEHICLE(iParam1, false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar0 == iVar1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_809()
{
	func_643("ILH_GOTO", "IDJ_LOC_BENNYS", 12, 0);
}

void func_810()
{
	if (func_812())
	{
		func_811();
	}
}

void func_811()
{
	if (!func_638())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574747.f_9)
	{
		return;
	}
	func_634();
}

int func_812()
{
	if (!func_638())
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1574747.f_9)
	{
		return 0;
	}
	return 1;
}

bool func_813()
{
	return !func_682(1);
}

void func_814()
{
	func_643("IDJ_MM_GOTO_DTN", "IDJ_LOC_DOWN", 12, 0);
}

bool func_815()
{
	return func_682(1);
}

void func_816()
{
	if ((func_714(iLocal_3121, 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_3119, false)) && func_735(0, iLocal_3121, 1))
	{
		func_643("IDJ_MM_WAIT", "IDJ_MOODYMANN", 9, 0);
	}
	else
	{
		func_643("IDJ_COLLECT", "IDJ_MOODYMANN", 9, 0);
	}
}

void func_817()
{
	func_643("IDJ_MM_GOTO", "IDJ_MM_GOTO_LOC", 12, 0);
}

void func_818()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 20);
	func_651(1, 2, 164792);
	func_654(2, 4);
	func_651(2, 1, 164755);
	func_653(2, 3);
	func_654(3, 20);
	func_651(3, 4, 165067);
	func_654(4, 4);
	func_651(4, 1, 164755);
	func_651(4, 5, 165042);
	func_654(5, 22);
	func_653(5, 6);
	func_654(6, 24);
	func_653(6, 7);
	func_654(7, 48);
}

var func_819()
{
	return (func_3(1) || func_453(0, 7));
}

bool func_820()
{
	return func_682(11);
}

void func_821()
{
	struct<2> Var0;
	
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_52[0 /*24*/]))
	{
		return;
	}
	if (func_733() == 1)
	{
		if (func_735(0, iLocal_3121, 1))
		{
			if (PLAYER::IS_PLAYER_PRESSING_HORN(iLocal_3118) && func_734())
			{
				func_716(0);
			}
		}
	}
	if (func_807())
	{
		if (!func_682(2))
		{
			if (!func_714(iLocal_3121, 2))
			{
				func_716(2);
				Var0 = -1;
				Var0.f_1 = -1;
				Var0.f_0 = 0;
				func_593(5, &Var0);
			}
		}
		if (!func_714(iLocal_3121, 1))
		{
			func_716(1);
		}
	}
	else
	{
		func_824(1);
	}
	if (func_733() == 6)
	{
		if (func_728() && !func_746())
		{
			if (func_823(iLocal_3119, NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]), 1) <= func_768(0))
			{
				if (PLAYER::IS_PLAYER_PRESSING_HORN(iLocal_3118))
				{
					PED::REMOVE_PED_FROM_GROUP(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]));
					if (!PED::IS_PED_IN_GROUP(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/])))
					{
						PED::SET_PED_AS_GROUP_MEMBER(NETWORK::NET_TO_PED(Local_3199.f_52[0 /*24*/]), iLocal_2842);
					}
				}
			}
		}
	}
	if (bLocal_3116)
	{
		func_822(1);
	}
}

void func_822(int iParam0)
{
	if (func_157(&(Local_3199.f_523), iParam0))
	{
	}
}

float func_823(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

void func_824(int iParam0)
{
	if (func_157(&(Local_3783[iLocal_3120 /*115*/].f_103), iParam0))
	{
	}
}

void func_825()
{
	func_831();
	Stack.Push(0);
	Call_Loc(Local_1231.f_149.f_134);
	if (StackVal && !func_682(0))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_4722))
		{
			iLocal_4722 = HUD::ADD_BLIP_FOR_RADIUS(Local_227.f_77.f_1[0 /*21*/].f_3, 15f);
			func_829(&iLocal_4722, 9);
			HUD::SET_BLIP_ALPHA(iLocal_4722, 85);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_4722))
	{
		HUD::REMOVE_BLIP(&iLocal_4722);
	}
	if (func_9(func_105(iLocal_3118), 1, 1))
	{
		func_826(func_611(), !func_729());
	}
}

void func_826(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 0 || !func_827(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 18)
	{
		if (bParam1)
		{
			if (Global_1952863.f_4901[iVar0] == iParam0)
			{
				return;
			}
			if (Global_1952863.f_4901[iVar0] == 0)
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
			}
		}
		else if (Global_1952863.f_4901[iVar0] == iParam0)
		{
			Global_1952863.f_4901[iVar0] = 0;
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (iVar1 > -1)
		{
			Global_1952863.f_4901[iVar1] = iParam0;
		}
	}
}

bool func_827(int iParam0)
{
	return func_828(iParam0, PLAYER::PLAYER_ID());
}

int func_828(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 != func_73() && func_9(iParam1, 0, 1))
	{
		if (Global_1952863.f_5006.f_3 != 0)
		{
			return 1;
		}
		if (iParam0 != 0)
		{
			iVar0 = iParam1;
			if (func_80(iParam1, 1))
			{
				iVar0 = func_105(iParam1);
			}
			iVar1 = 0;
			while (iVar1 < 10)
			{
				if (Global_2681692.f_199.f_962[iVar1 /*75*/] == iVar0)
				{
					iVar2 = 0;
					while (iVar2 < 18)
					{
						if (Global_2681692.f_199.f_962[iVar1 /*75*/].f_1[iVar2] == iParam0)
						{
							return 1;
						}
						iVar2++;
					}
				}
				iVar1++;
			}
		}
	}
	return 0;
}

void func_829(int iParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		iVar0 = func_830(iParam1);
		HUD::SET_BLIP_COLOUR(*iParam0, iVar0);
	}
}

int func_830(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_831()
{
	if (!func_735(0, iLocal_3121, 1))
	{
		return;
	}
	if (PLAYER::_0x7E07C78925D5FD96(iLocal_3118))
	{
		if (func_807())
		{
			if (!func_57(0, 4))
			{
				func_784(0, 4);
			}
		}
		else if (!func_57(0, 5))
		{
			func_784(0, 5);
		}
	}
	else if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) > 0)
	{
		if (!func_57(0, 3))
		{
			func_784(0, 3);
		}
	}
	else
	{
		if (func_57(0, 3))
		{
			func_832(0, 3);
		}
		if (func_57(0, 4))
		{
			func_832(0, 4);
		}
		if (func_57(0, 5))
		{
			func_832(0, 5);
		}
	}
}

void func_832(int iParam0, int iParam1)
{
	func_157(&(Local_3070[iParam0 /*2*/]), iParam1);
}

void func_833()
{
	func_694(17);
	func_45(0, 15);
	func_45(0, 17);
	func_835(0, 0);
	func_835(0, 18);
	func_718(0, 15);
	Local_227.f_77.f_254[1 /*10*/] = -762195218;
	Local_227.f_608.f_1[0 /*11*/].f_3 = 50f;
	Local_227.f_77.f_1[0 /*21*/].f_13 = 0;
	func_834(0, 0);
	Local_227.f_77.f_1[1 /*21*/].f_7 = joaat("weapon_pistol");
	Local_227.f_77.f_1[2 /*21*/].f_7 = joaat("weapon_pistol");
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
}

void func_834(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_77.f_275[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_835(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_77.f_1[iParam0 /*21*/]), iParam1))
	{
	}
}

void func_836()
{
	Local_1231.f_13 = 169670;
	Local_1231.f_2 = 168293;
	Local_1231.f_3.f_4 = 168262;
	Local_1231.f_11 = 168209;
	Local_1231.f_11.f_1 = 168022;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_515.f_4.f_2 = 168006;
	Local_1231.f_108.f_13 = 167994;
	Local_1231.f_108.f_4 = 167982;
	Local_1231.f_77.f_1 = 167958;
	Local_1231.f_338.f_43 = 167922;
	Local_1231.f_338.f_44 = 167790;
	Local_1231.f_496.f_13 = 167745;
	Local_1231.f_496.f_9 = 167733;
	Local_1231.f_496.f_12 = 167656;
	Local_1231.f_496.f_5 = 167647;
	Local_1231.f_496.f_10 = 167635;
	Local_1231.f_496.f_11 = 167625;
	Local_1231.f_496.f_2 = 167616;
	Local_1231.f_496.f_6 = 167607;
	Local_1231.f_496.f_16 = 167578;
	Local_1231.f_482.f_1 = 167532;
	Local_1231.f_482 = 167487;
	Local_1231.f_490.f_4 = 167477;
	Local_1231.f_490.f_3 = 167430;
	Local_1231.f_490.f_5 = 167398;
	Local_1231.f_45 = 167354;
	Local_1231.f_60 = 150089;
}

int func_837()
{
	if (func_838() == 0)
	{
		return !func_13(&uLocal_4712, 6000, 0);
	}
	return 0;
}

int func_838()
{
	return func_22();
}

char* func_839(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_TX_P_MMSL_A";
		
		default:
	}
	return "";
}

int func_840(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_838() == 0 && func_13(&uLocal_4712, 5000, 0));
		
		default:
	}
	return 0;
}

int func_841(var uParam0)
{
	return 158;
}

char* func_842(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_MM_HLP_MLL";
		
		case 1:
			return "IDJ_MM_HLP_SLP";
		
		default:
	}
	return "";
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_838() == 0;
		
		case 1:
			return func_682(9);
		
		default:
	}
	return 0;
}

void func_844(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_716(5);
			break;
	}
}

int func_845()
{
	return -1;
}

int func_846(var uParam0)
{
	return 0;
}

int func_847(var uParam0)
{
	return 171;
}

char* func_848(var uParam0, var uParam1)
{
	return "HS4_MOODY";
}

int func_849(var uParam0)
{
	return 1;
}

int func_850(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_13(&uLocal_4723, 15000, 0);
		
		case 1:
			return ((func_453(0, 1) && func_731(0)) && func_13(&uLocal_4725, 7000, 0));
		
		default:
	}
	return 0;
}

char* func_851(var uParam0)
{
	return "HS4MOAU";
}

char* func_852(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HS4MO_SPU1";
		
		case 1:
			return "HS4MO_SDS1";
		
		default:
	}
	return "";
}

int func_853(int iParam0, var uParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "40DZC153", 16);
			uParam1->f_5 = 54;
			uParam1->f_6 = 0;
			uParam1->f_7 = 60;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_854(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_3 == joaat("faggio"))
	{
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
}

int func_855()
{
	if (bLocal_3116)
	{
		return func_682(9);
	}
	return 0;
}

int func_856(var uParam0)
{
	return HUD::GET_STANDARD_BLIP_ENUM_ID();
}

char* func_857(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

Vector3 func_858()
{
	return func_699(func_611());
}

void func_859()
{
	func_648(0, 4, 168186);
	func_647(0, 1, 1);
	func_621(1, 2, 3, 4, 5, 168163, 168135, 168107, 168084, 1);
	func_648(5, 48, 152431);
}

void func_860()
{
	func_643("IDJ_MM_RECOVER", "IDJ_MM_SLIP", 9, 0);
}

void func_861()
{
	func_629("IDJ_MM_HLPDELVR", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_862()
{
	func_629("IDJ_MM_DELIVER", "IDJ_MM_SLIP", "IDJ_LOC_MUSIC", 9, 12, 0);
}

void func_863()
{
	func_643("IDJ_GET_ON_THE", "IDJ_SCOOTER", 9, 0);
}

void func_864()
{
	func_643("ILH_GOTO_THE", "IDJ_LOC_MALL", 12, 0);
}

void func_865()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 22);
	func_653(1, 2);
	func_654(2, 24);
	func_653(2, 3);
	func_654(3, 48);
}

void func_866()
{
	if (func_682(9))
	{
		Local_227.f_599 = 2;
		Local_227.f_599.f_1 = 0;
	}
}

int func_867()
{
	func_868();
	return 1;
}

void func_868()
{
	if (!func_883(171, 3))
	{
		func_869(171, 3, 1);
	}
}

void func_869(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	Global_8510 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 160)
	{
		func_876();
		if (iParam1 == 4)
		{
			func_875(iParam0, 0, 1);
			func_875(iParam0, 1, 1);
			func_875(iParam0, 2, 1);
			func_874(iParam0, 0, 1);
			func_874(iParam0, 1, 1);
			func_874(iParam0, 2, 1);
		}
		else
		{
			if (func_873(iParam0, iParam1) == 1 && func_872(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_875(iParam0, iVar0, 1);
			func_874(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2810287.f_6730)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2810287.f_6729)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_77852)
			{
				if (iParam1 != 4)
				{
					if (Global_19954 != iParam1)
					{
						Global_8483[iParam1 /*4*/] = { func_871(iParam0) };
						Global_8500[iParam1] = 1;
						Global_8505[iParam1] = iParam0;
					}
					else if (iParam0 == Global_19954)
					{
					}
					else
					{
						Global_8434[1 /*6*/] = { func_871(iParam0) };
						Global_8434[1 /*6*/].f_5 = iParam1;
						func_870();
					}
				}
				else
				{
					Global_8434[1 /*6*/] = { func_871(iParam0) };
					Global_8434[1 /*6*/].f_5 = iParam1;
					func_870();
				}
			}
			else
			{
				Global_8434[1 /*6*/] = { func_871(iParam0) };
				Global_8434[1 /*6*/].f_5 = iParam1;
				func_870();
			}
		}
	}
}

void func_870()
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1918[Global_8510 /*29*/].f_7)), 64);
	if (Global_8529 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8434[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8434[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_7824, 0);
}

struct<4> func_871(int iParam0)
{
	return Global_1918[iParam0 /*29*/].f_3;
}

int func_872(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_24[iParam1];
}

int func_873(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1918[iParam0 /*29*/].f_12[iParam1];
}

void func_874(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_875(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1918[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_112915.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

void func_876()
{
	if (func_882(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112915.f_28050[0 /*29*/])
			{
				Global_19954 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112915.f_28050[1 /*29*/])
			{
				Global_19954 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_112915.f_28050[2 /*29*/])
			{
				Global_19954 = 2;
			}
			else
			{
				Global_19954 = 0;
			}
		}
	}
	else
	{
		Global_19954 = func_877();
		if (Global_19954 == 145)
		{
			Global_19954 = 3;
		}
		if (Global_77852)
		{
			Global_19954 = 3;
		}
		if (Global_19954 > 3)
		{
			Global_19954 = 3;
		}
	}
}

var func_877()
{
	func_878();
	return Global_112915.f_2363.f_539.f_4321;
}

void func_878()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_880(Global_112915.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_879(PLAYER::PLAYER_PED_ID());
			if (func_287(iVar0) && (!func_882(14) || Global_111866))
			{
				if (Global_112915.f_2363.f_539.f_4321 != iVar0 && func_287(Global_112915.f_2363.f_539.f_4321))
				{
					Global_112915.f_2363.f_539.f_4322 = Global_112915.f_2363.f_539.f_4321;
				}
				Global_112915.f_2363.f_539.f_4323 = iVar0;
				Global_112915.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_112915.f_2363.f_539.f_4321 != 145)
			{
				Global_112915.f_2363.f_539.f_4323 = Global_112915.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_112915.f_2363.f_539.f_4321 = 145;
}

int func_879(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_880(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_880(int iParam0)
{
	if (func_287(iParam0))
	{
		return func_881(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_881(int iParam0)
{
	return Global_1918[iParam0 /*29*/];
}

bool func_882(int iParam0)
{
	return Global_42596 == iParam0;
}

int func_883(int iParam0, int iParam1)
{
	if (func_873(iParam0, iParam1) == 1)
	{
		return 1;
	}
	return 0;
}

void func_884()
{
	func_694(17);
	func_657(0, 9);
	func_718(0, 6);
	func_885(0, 10);
	func_718(0, 15);
	Local_227.f_429.f_86[0 /*6*/] = 0;
	Local_227.f_429.f_86[0 /*6*/].f_1 = 2;
	Local_227.f_429.f_86[0 /*6*/].f_2 = 0;
	Local_227.f_429.f_1[0 /*12*/].f_8 = { 0f, 0f, -90f };
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
}

void func_885(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_429.f_1[iParam0 /*12*/]), iParam1))
	{
	}
}

void func_886()
{
	Local_1231.f_13 = 233503;
	Local_1231.f_2 = 233463;
	Local_1231.f_3.f_1 = 233283;
	Local_1231.f_3 = 233115;
	Local_1231.f_3.f_4 = 233055;
	Local_1231.f_3.f_4.f_1 = 233024;
	Local_1231.f_11 = 232901;
	Local_1231.f_11.f_1 = 172319;
	Local_1231.f_89.f_3.f_1 = 172248;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_89.f_3 = 172149;
	Local_1231.f_108.f_23 = 171899;
	Local_1231.f_108.f_37 = 171842;
	Local_1231.f_149.f_174 = 171817;
	Local_1231.f_149.f_182 = 171489;
	Local_1231.f_149 = 171438;
	Local_1231.f_562.f_24 = 171388;
	Local_1231.f_562.f_25 = 171317;
	Local_1231.f_562.f_13 = 171305;
	Local_1231.f_562.f_5 = 171295;
	Local_1231.f_562.f_9 = 171286;
	Local_1231.f_562.f_6 = 171273;
	Local_1231.f_562.f_4 = 171261;
	Local_1231.f_562.f_29 = 171248;
	Local_1231.f_562.f_30 = 171186;
	Local_1231.f_15.f_18 = 171126;
	Local_1231.f_482.f_1 = 170904;
	Local_1231.f_482 = 170820;
	Local_1231.f_45.f_2.f_1 = 170780;
	Local_1231.f_45.f_2.f_2 = 170740;
	Local_1231.f_496.f_13 = 170614;
	Local_1231.f_496.f_9 = 170602;
	Local_1231.f_496.f_12 = 170451;
	Local_1231.f_496.f_5 = 170442;
	Local_1231.f_496.f_10 = 170430;
	Local_1231.f_496.f_11 = 170420;
	Local_1231.f_496.f_2 = 170411;
	Local_1231.f_496.f_6 = 170402;
	Local_1231.f_479 = 170389;
	Local_1231.f_479.f_1 = 170373;
	Local_1231.f_593 = 170364;
	Local_1231.f_60 = 150089;
	Local_1231.f_60.f_10 = 170320;
}

int func_887()
{
	if (func_888() == 3)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) > 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_888()
{
	return func_22();
}

int func_889(var uParam0)
{
	return 0;
}

var func_890(var uParam0)
{
	return Local_3199.f_525.f_4;
}

bool func_891(var uParam0)
{
	return func_682(6);
}

int func_892()
{
	return -1;
}

int func_893(var uParam0)
{
	return 0;
}

int func_894(var uParam0)
{
	return 153;
}

char* func_895(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_896(var uParam0)
{
	return 1;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_750() == 24 && func_13(&uLocal_4710, 10000, 0));
		
		case 1:
			return ((func_888() == 3 && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) < 1) && func_13(&uLocal_4718, 3000, 0));
		
		case 2:
			return (func_888() == 3 && fLocal_3150 < 500f);
		
		case 3:
			return (func_888() == 3 && fLocal_3150 < 100f);
		
		default:
	}
	return 0;
}

char* func_898(var uParam0)
{
	return "HS4EDAU";
}

char* func_899(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_CSUC1";
			break;
		
		case 2:
			return "HS4ED_CSUC2";
			break;
		
		case 3:
			return "HS4ED_CSPM1";
			break;
	}
	return "";
}

char* func_900(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSb";
			}
		
		default:
	}
	return "";
}

char* func_901(var uParam0)
{
	if (*uParam0 != -1)
	{
		switch (*uParam0)
		{
			case 1:
				return "IDJ_T_PT_CS_CSa";
			}
		
		default:
	}
	return "";
}

char* func_902(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_INTR";
		
		case 1:
			return "IDJ_KM_HLP_HPPS";
		
		case 2:
			return "IDJ_KM_HLP_RCVR";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_903(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_888() == 0;
			break;
		
		case 1:
			if (func_888() == 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_888() == 1 || func_888() == 2)
			{
				return func_682(6);
			}
			break;
		
		case 3:
			if ((Local_3199.f_493 > 1 && func_905() == 3) && !func_904())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_905() == 3 && func_904())
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_904()
{
	return ((func_78(iLocal_3118) && func_682(14)) && !func_714(iLocal_3121, 9));
}

int func_905()
{
	return func_615();
}

int func_906()
{
	if (func_714(iLocal_3121, 4) && func_429(iLocal_3121, 1))
	{
		return 1;
	}
	else if (func_682(8))
	{
		return func_429(iLocal_3121, 1);
	}
	return 0;
}

void func_907(var uParam0)
{
	struct<2> Var0;
	
	Local_3783[iLocal_3120 /*115*/].f_105.f_1++;
	func_716(4);
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_0 = 1;
	func_593(5, &Var0);
}

float func_908(var uParam0)
{
	return 0,25f;
}

int func_909(var uParam0)
{
	return HUD::GET_STANDARD_BLIP_ENUM_ID();
}

float func_910(var uParam0)
{
	return 0,75f;
}

int func_911(var uParam0)
{
	return 1;
}

int func_912(var uParam0)
{
	return 18;
}

char* func_913(var uParam0)
{
	return "IDJ_KM_STNS_BLP";
}

Vector3 func_914(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_3199.f_52[func_915(iParam0) /*24*/]), false);
}

int func_915(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return 0;
	}
	return Local_3199.f_525.f_6[iParam0];
}

bool func_916(int iParam0)
{
	return (func_917() && Local_3199.f_52[func_915(iParam0) /*24*/].f_1 == 6);
}

bool func_917()
{
	return Local_3199.f_525.f_5;
}

void func_918(int iParam0)
{
	func_583(iParam0, 0, 8);
	func_581(iParam0, 0, 1, 171475);
	func_583(iParam0, 1, 7);
}

int func_919(int iParam0, var uParam1)
{
	return func_85(iParam0);
}

void func_920(var uParam0, struct<6> Param1, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)
{
	if (((bLocal_3116 && Param1.f_5) && func_924() >= 2) && !func_917())
	{
		func_921();
	}
}

void func_921()
{
	var uVar0[12];
	int iVar13;
	int iVar14;
	
	if (Local_3199.f_525.f_5)
	{
		return;
	}
	func_922(&uVar0, 12, 1);
	iVar13 = 0;
	while (iVar13 < 12)
	{
		if (iVar14 >= 5)
		{
		}
		else
		{
			if (Local_3199.f_52[uVar0[iVar13] /*24*/].f_1 != 6)
			{
				Local_3199.f_525.f_6[iVar14] = uVar0[iVar13];
				iVar14++;
			}
			iVar13++;
		}
	}
	Local_3199.f_525.f_5 = 1;
}

void func_922(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		(*uParam0)[iVar0] = iVar0;
		iVar0++;
	}
	if (bParam2)
	{
		func_923(uParam0, iParam1);
	}
}

void func_923(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 < 2)
	{
		return;
	}
	iVar0 = (iParam1 - 1);
	while (iVar0 >= 1)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0 + 1);
		func_26(uParam0[iVar0], uParam0[iVar1]);
		iVar0 = (iVar0 + -1);
	}
}

int func_924()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (Local_3199.f_52[iVar1 /*24*/].f_1 == 6)
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_925(int iParam0, int iParam1, var uParam2)
{
	func_45(iParam0, 20);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
}

int func_926(var uParam0, int iParam1)
{
	if (func_714(iParam1, 4) && func_429(iParam1, 1))
	{
		return 1;
	}
	else if (func_682(8))
	{
		return func_429(iParam1, 1);
	}
	return 0;
}

int func_927(var uParam0)
{
	return func_928();
}

int func_928()
{
	int iVar0;
	int iVar1;
	
	if (func_888() < 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_519(), -1, 0) < Local_3199.f_494)
	{
		func_929();
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (func_714(iVar1, 4) && func_429(iVar1, 1))
		{
			return 1;
		}
		else if (func_682(8))
		{
			if (func_429(iVar1, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_929()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(func_519(), -1, 0))
	{
		iVar1 = (iVar1 + Local_3783[iVar0 /*115*/].f_105.f_1);
		iVar0++;
	}
	if (iVar1 < func_930())
	{
		func_713(8);
	}
}

int func_930()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_41(iVar1, 1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_931(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_905() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_613())
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_905() >= 2)
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_905() >= 3)
			{
				return 3;
			}
			break;
	}
	return -1;
}

char* func_932(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_933()
{
	func_648(0, 4, 232878);
	func_647(0, 1, 1);
	func_648(1, 7, 232856);
	func_1074(1, 232830);
	func_647(1, 2, 2);
	func_648(2, 39, 232788);
	func_1070(2, 232729);
	func_647(2, 3, 3);
	func_648(3, 4, 172425);
	func_647(3, 4, 4);
	func_648(4, 48, 152431);
}

void func_934()
{
	if ((func_1069(func_611()) && func_714(iLocal_3121, 4)) && func_939(func_611(), &uLocal_4704, 1, 0))
	{
		func_938("IDJ_GOON_WAIT", PLAYER::GET_PLAYER_NAME(func_105(iLocal_3118)), 9, 0);
	}
	else if (func_904())
	{
		func_935("IDJ_BOSS_GOTO", 0);
	}
	else if (!func_714(iLocal_3121, 4) && !func_682(8))
	{
		func_629("IDJ_HLPDELV_T", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
	else
	{
		func_629("IDJ_DELIVER_THE", "IDJ_KM_STNS_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_935(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_936(sParam0))
	{
		return;
	}
	func_634();
	Global_1574747 = 0;
	StringCopy(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
	StringCopy(&(Global_1574747.f_12), sParam0, 16);
	func_633();
	func_632(bParam1);
	func_631();
}

bool func_936(char* sParam0)
{
	if (!func_638())
	{
		return 0;
	}
	if (Global_1574747 == 11)
	{
		return func_937(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574747.f_12));
}

bool func_937(char* sParam0)
{
	if (!func_638())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1574747.f_16));
}

void func_938(char* sParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (func_644(sParam0, sParam1, bParam3, iParam2))
	{
		Global_1574747 = 16;
		Global_1574747.f_56 = iParam2;
	}
}

bool func_939(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<27> Var7;
	int iVar34;
	struct<3> Var35;
	
	Var7 = { func_966(iParam0) };
	iVar34 = func_965(iParam0);
	Var35 = { func_956(iParam0) };
	if (iParam2 && !MISC::IS_BIT_SET(iVar34, 8))
	{
		if (MISC::IS_BIT_SET(iVar34, 9))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == joaat("avenger")) || MISC::IS_BIT_SET(iVar34, 15))
			{
				func_954(iParam0, &(Var7.f_20), &(Var7.f_23), &(Var7.f_26), bParam3);
			}
			if (bParam3)
			{
				func_954(iParam0, &(Var7.f_20), &(Var7.f_23), &(Var7.f_26), 1);
			}
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var7.f_20, Var7.f_23, Var7.f_26, false, true, 0);
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				{
					Var35 = { 1f, 1f, 2f };
				}
				if (func_953(&iParam0))
				{
					Var35 = { 2f, 2f, 2f };
				}
				func_952(iParam0, &Var0, &Var3, Var35);
			}
			else
			{
				func_951(iParam0, &Var0, &Var3, Var35);
			}
			if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, false, true, 0))
			{
				*uParam1 = 1;
				return 1;
			}
		}
	}
	if (!func_947(iParam0) || func_945())
	{
		*uParam1 = 0;
		return 0;
	}
	*uParam1 = 4;
	if (MISC::IS_BIT_SET(iVar34, 5))
	{
		func_941(iParam0, &Var0, &Var3, &fVar6, 0);
		if (MISC::IS_BIT_SET(iVar34, 4))
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 2))
			{
				func_941(iParam0, &Var0, &Var3, &fVar6, 1);
				return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 2);
			}
		}
		else
		{
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, false, true, 2);
		}
	}
	func_940(iParam0, &Var0, &Var3);
	return ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var0, Var3, false, true, 2);
}

void func_940(int iParam0, var uParam1, var uParam2)
{
	struct<27> Var0;
	
	if (iParam0 != 0)
	{
		Var0 = { func_966(iParam0) };
		*uParam1 = { Var0.f_20 };
		*uParam2 = { Var0.f_23 };
	}
}

void func_941(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4)
{
	struct<27> Var0;
	
	if (bParam4)
	{
		if (func_943(&iParam0) == 20)
		{
			func_942(iParam0, uParam1, uParam2, fParam3);
		}
	}
	else
	{
		Var0 = { func_966(iParam0) };
		*uParam1 = { Var0.f_20 };
		*uParam2 = { Var0.f_23 };
		*fParam3 = Var0.f_26;
	}
}

int func_942(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 409:
			*uParam1 = { -2267,026f, 402,2257f, 183,667f };
			*uParam2 = { -2257,724f, 380,6196f, 267,6024f };
			*uParam3 = 20f;
			return 1;
		
		case 410:
			*uParam1 = { -757,3264f, -192,9475f, 43,20822f };
			*uParam2 = { -745,3168f, -213,0097f, 128,1185f };
			*uParam3 = 18f;
			return 1;
		
		case 413:
			*uParam1 = { -410,7763f, -319,03f, 70,80331f };
			*uParam2 = { -380,264f, -340,9736f, 155,8033f };
			*uParam3 = 16f;
			return 1;
		
		case 421:
			*uParam1 = { 740,6537f, 1287,007f, 353,2967f };
			*uParam2 = { 716,8173f, 1286,363f, 439,296f };
			*uParam3 = 30f;
			return 1;
		
		case 430:
			*uParam1 = { -2595,064f, 1927,041f, 167,0463f };
			*uParam2 = { -2589,626f, 1882,5f, 250,4927f };
			*uParam3 = 22f;
			return 1;
		
		default:
	}
	return 0;
}

int func_943(int iParam0)
{
	if (func_944(iParam0))
	{
		if (*iParam0 >= 382 && *iParam0 <= 401)
		{
			return 23;
		}
		if (*iParam0 >= 402 && *iParam0 <= 431)
		{
			return 20;
		}
		if (*iParam0 >= 432 && *iParam0 <= 491)
		{
			return 15;
		}
		if (*iParam0 >= 492 && *iParam0 <= 521)
		{
			return 24;
		}
		if (*iParam0 >= 522 && *iParam0 <= 551)
		{
			return 21;
		}
		if (*iParam0 >= 552 && *iParam0 <= 584)
		{
			return 22;
		}
		if (*iParam0 >= 585 && *iParam0 <= 614)
		{
			return 16;
		}
		if (*iParam0 >= 615 && *iParam0 <= 644)
		{
			return 17;
		}
		if (*iParam0 >= 645 && *iParam0 <= 674)
		{
			return 25;
		}
	}
	return -1;
}

bool func_944(var uParam0)
{
	return (*uParam0 >= 377 && *uParam0 <= 674);
}

bool func_945()
{
	return func_946(PLAYER::PLAYER_ID(), 29);
}

bool func_946(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_11.f_5, iParam1);
}

int func_947(int iParam0)
{
	if (!func_949(iParam0))
	{
		return 0;
	}
	if (func_948())
	{
		return 0;
	}
	return 1;
}

int func_948()
{
	if (func_229(PLAYER::PLAYER_ID()) == 229 && func_227(PLAYER::PLAYER_ID()) == 26)
	{
		return 1;
	}
	return 0;
}

int func_949(int iParam0)
{
	int iVar0;
	
	switch (func_950(iParam0))
	{
		case 0:
		case 2:
		case 3:
			return 0;
		
		case 1:
		case 4:
		case 5:
		case 6:
			iVar0 = func_965(iParam0);
			return MISC::IS_BIT_SET(iVar0, 3);
		
		default:
	}
	return 0;
}

int func_950(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 376)
	{
		return 0;
	}
	if (iParam0 >= 377 && iParam0 <= 674)
	{
		return 1;
	}
	if (iParam0 >= 675 && iParam0 <= 683)
	{
		return 2;
	}
	if (iParam0 >= 684 && iParam0 <= 703)
	{
		return 3;
	}
	if (iParam0 >= 704 && iParam0 <= 713)
	{
		return 4;
	}
	if (iParam0 >= 714 && iParam0 <= 746)
	{
		return 5;
	}
	if (iParam0 >= 747 && iParam0 <= 805)
	{
		return 6;
	}
	return -1;
}

void func_951(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	
	Var0 = { func_610(iParam0) };
	fVar3 = (1f * Param3.f_0);
	fVar4 = (1f * Param3.f_1);
	fVar5 = (2f * Param3.f_2);
	*uParam1 = { Var0 - Vector(0f, fVar4, fVar3) };
	*uParam2 = { Var0 + Vector(fVar5, fVar4, fVar3) };
}

void func_952(int iParam0, var uParam1, var uParam2, struct<3> Param3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0 = { func_699(iParam0) };
	fVar3 = (5f * Param3.f_0);
	fVar4 = (5f * Param3.f_1);
	fVar5 = (2,5f * Param3.f_2);
	fVar6 = 0f;
	if (Param3.f_2 != 1f)
	{
		fVar6 = (fVar5 * 0,5f);
		fVar5 = fVar6;
	}
	*uParam1 = { Var0 - Vector(fVar6, fVar4, fVar3) };
	*uParam2 = { Var0 + Vector(fVar5, fVar4, fVar3) };
}

bool func_953(int iParam0)
{
	return (*iParam0 >= 377 && *iParam0 <= 381);
}

void func_954(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	func_955(iParam0, uParam1, uParam2, uParam3, bParam4);
}

int func_955(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (iParam0)
		{
			case 675:
				*uParam1 = { 1297,229f, 2854,667f, 46,22242f };
				*uParam2 = { 1277,379f, 2838,311f, 54,34742f };
				*uParam3 = 14,75f;
				return 1;
			
			case 676:
				*uParam1 = { 7,976243f, 2604,159f, 82,82843f };
				*uParam2 = { 30,07752f, 2618,249f, 90,95343f };
				*uParam3 = 14,75f;
				return 1;
			
			case 677:
				*uParam1 = { 2777,815f, 3928,604f, 42,66043f };
				*uParam2 = { 2759,668f, 3910,758f, 50,78543f };
				*uParam3 = 14,75f;
				return 1;
			
			case 678:
				*uParam1 = { 3419,642f, 5501,849f, 23,10643f };
				*uParam2 = { 3394,699f, 5507,827f, 31,23143f };
				*uParam3 = 14,75f;
				return 1;
			
			case 679:
				*uParam1 = { -9,453247f, 6836,305f, 12,64543f };
				*uParam2 = { 14,47614f, 6827,522f, 20,77043f };
				*uParam3 = 14,75f;
				return 1;
			
			case 680:
				*uParam1 = { -2232,366f, 2430,486f, 9,009426f };
				*uParam2 = { -2230,132f, 2405,009f, 17,13443f };
				*uParam3 = 14,75f;
				return 1;
			
			case 681:
				*uParam1 = { -9,857053f, 3314,334f, 38,45943f };
				*uParam2 = { -4,230778f, 3339,46f, 46,58443f };
				*uParam3 = 14,75f;
				return 1;
			
			case 682:
				*uParam1 = { 2064,196f, 1738,971f, 101,3424f };
				*uParam2 = { 2082,448f, 1757,641f, 109,4674f };
				*uParam3 = 14,75f;
				return 1;
			
			case 683:
				*uParam1 = { 1881,381f, 295,3014f, 161,1334f };
				*uParam2 = { 1867,705f, 273,5757f, 169,2584f };
				*uParam3 = 14,75f;
				return 1;
			
			default:
		}
		return 0;
	}
	switch (iParam0)
	{
		case 675:
			*uParam1 = { 1273,677f, 2835,732f, 44,84742f };
			*uParam2 = { 1262,887f, 2827,357f, 55,80887f };
			*uParam3 = 17,125f;
			return 1;
		
		case 676:
			*uParam1 = { 32,71862f, 2620,037f, 81,45343f };
			*uParam2 = { 43,60667f, 2626,619f, 90,93901f };
			*uParam3 = 17,125f;
			return 1;
		
		case 677:
			*uParam1 = { 2757,371f, 3908,717f, 41,28543f };
			*uParam2 = { 2749,064f, 3901,245f, 51,93591f };
			*uParam3 = 17,125f;
			return 1;
		
		case 678:
			*uParam1 = { 3392,239f, 5508,464f, 21,73143f };
			*uParam2 = { 3380,613f, 5511,087f, 31,09143f };
			*uParam3 = 17,125f;
			return 1;
		
		case 679:
			*uParam1 = { 17,18369f, 6826,096f, 11,27043f };
			*uParam2 = { 28,89165f, 6822,171f, 22,87762f };
			*uParam3 = 17,125f;
			return 1;
		
		case 680:
			*uParam1 = { -2229,61f, 2401,256f, 7,634426f };
			*uParam2 = { -2229,282f, 2387,398f, 21,65034f };
			*uParam3 = 17,125f;
			return 1;
		
		case 681:
			*uParam1 = { -3,066728f, 3343,304f, 37,08443f };
			*uParam2 = { 1,22503f, 3357,966f, 47,80353f };
			*uParam3 = 17,125f;
			return 1;
		
		case 682:
			*uParam1 = { 2084,432f, 1759,63f, 99,96742f };
			*uParam2 = { 2092,595f, 1767,434f, 110,466f };
			*uParam3 = 17,125f;
			return 1;
		
		case 683:
			*uParam1 = { 1866,002f, 271,215f, 159,7584f };
			*uParam2 = { 1859,329f, 260,6256f, 171,2149f };
			*uParam3 = 17,125f;
			return 1;
		
		default:
	}
	return 0;
}

Vector3 func_956(int iParam0)
{
	switch (func_950(iParam0))
	{
		case 0:
			return func_962(func_963(&iParam0));
		
		case 1:
			return func_961(func_943(&iParam0));
		
		case 2:
			return func_960();
		
		case 3:
			return func_959();
		
		case 5:
			return func_958();
		
		case 6:
			return func_957(iParam0);
		
		default:
	}
	return 1f, 1f, 1f;
}

Vector3 func_957(int iParam0)
{
	switch (iParam0)
	{
		case 747:
		case 748:
		case 749:
		case 750:
		case 751:
		case 752:
		case 753:
		case 754:
		case 805:
			if (func_678(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 0,5f, 0,5f, 1f;
			}
			break;
		
		case 761:
		case 762:
			if (func_678(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 3f, 3f, 4,5f;
			}
			break;
		
		case 763:
			return 100f, 100f, 200f;
			break;
		
		case 756:
			return 1f, 1f, 2f;
			break;
		
		case 771:
		case 772:
			return 1f, 1f, 2f;
			break;
	}
	return 1f, 1f, 1f;
}

Vector3 func_958()
{
	if (func_678(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		return 0,5f, 0,5f, 1f;
	}
	return 1f, 1f, 1f;
}

Vector3 func_959()
{
	return 1f, 1f, 1f;
}

Vector3 func_960()
{
	return 1f, 1f, 1f;
}

Vector3 func_961(var uParam0)
{
	struct<3> Var0;
	
	Var0 = { 1f, 1f, 1f };
	return Var0;
}

Vector3 func_962(int iParam0)
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 8:
			Var0 = { 1f, 1f, 3f };
			break;
		
		case 14:
			Var0 = { 2,5f, 2,5f, 4f };
			break;
		
		case 18:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 15:
			Var0 = { 2,2f, 2,2f, 4f };
			break;
		
		case 17:
			Var0 = { 0,75f, 0,75f, 4f };
			break;
		
		case 19:
			Var0 = { 2f, 2f, 4f };
			break;
		
		case 16:
			Var0 = { 2f, 2f, 4f };
			break;
		
		default:
			Var0 = { 1f, 1f, 1f };
			break;
	}
	return Var0;
}

int func_963(int iParam0)
{
	if (func_964(iParam0))
	{
		if (*iParam0 >= 12 && *iParam0 <= 71)
		{
			return 17;
		}
		if (*iParam0 >= 72 && *iParam0 <= 91)
		{
			return 15;
		}
		if (*iParam0 >= 92 && *iParam0 <= 156)
		{
			return 14;
		}
		if (*iParam0 >= 157 && *iParam0 <= 256)
		{
			return 16;
		}
		if (*iParam0 >= 257 && *iParam0 <= 356)
		{
			return 19;
		}
		if (*iParam0 >= 357 && *iParam0 <= 376)
		{
			return 18;
		}
	}
	return -1;
}

bool func_964(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 376);
}

var func_965(int iParam0)
{
	struct<27> Var0;
	
	Var0 = { func_966(iParam0) };
	return Var0.f_16;
}

struct<27> func_966(int iParam0)
{
	struct<27> Var0;
	
	switch (func_950(iParam0))
	{
		case 0:
			Var0 = { func_1039(iParam0) };
			break;
		
		case 1:
			Var0 = { func_1022(iParam0) };
			break;
		
		case 2:
			Var0 = { func_1016(iParam0) };
			break;
		
		case 3:
			Var0 = { func_1006(iParam0) };
			break;
		
		case 4:
			Var0 = { func_1000(iParam0) };
			break;
		
		case 5:
			Var0 = { func_992(iParam0) };
			break;
		
		case 6:
			Var0 = { func_967(iParam0) };
			break;
		
		default:
			break;
	}
	return Var0;
}

struct<27> func_967(int iParam0)
{
	struct<27> Var0;
	
	if (func_991(iParam0))
	{
		StringCopy(&(Var0.f_8), func_990(iParam0), 32);
		Var0.f_3 = func_989(iParam0);
		Var0.f_7 = func_988(iParam0);
		Var0.f_17 = func_987(iParam0);
		Var0.f_18 = 179714;
		Var0.f_19 = 179513;
		func_970(iParam0, &Var0);
		func_969(iParam0, &Var0);
		func_968(iParam0, &Var0);
	}
	return Var0;
}

void func_968(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 763:
			uParam1->f_20 = { -2484,88f, -4361,851f, -7,889073f };
			uParam1->f_23 = { 4009,877f, -3911,593f, 3001,878f };
			uParam1->f_26 = 750f;
			return;
			break;
		
		case 789:
			uParam1->f_20 = { -179,8255f, -607,1684f, 31,42449f };
			uParam1->f_23 = { -173,0034f, -609,6523f, 34,23698f };
			uParam1->f_26 = 4,0625f;
			return;
			break;
		
		case 790:
			uParam1->f_20 = { 139,0636f, -728,7686f, 32,13333f };
			uParam1->f_23 = { 141,2216f, -722,888f, 36,00834f };
			uParam1->f_26 = 3,9375f;
			return;
			break;
		
		case 791:
			uParam1->f_20 = { 42,10335f, -886,4261f, 29,22317f };
			uParam1->f_23 = { 43,72779f, -881,9918f, 32,66639f };
			uParam1->f_26 = 3,75f;
			return;
			break;
	}
	uParam1->f_20 = { 0f, 0f, 0f };
	uParam1->f_23 = { 0f, 0f, 0f };
	uParam1->f_26 = 0f;
}

void func_969(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 11);
	switch (iParam0)
	{
		case 757:
			MISC::SET_BIT(&(uParam1->f_16), 16);
			MISC::SET_BIT(&(uParam1->f_16), 8);
			break;
		
		case 763:
			MISC::SET_BIT(&(uParam1->f_16), 3);
			MISC::SET_BIT(&(uParam1->f_16), 5);
			MISC::SET_BIT(&(uParam1->f_16), 1);
			break;
		
		case 756:
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 796:
		case 798:
		case 800:
		case 802:
			MISC::SET_BIT(&(uParam1->f_16), 13);
			break;
		
		case 794:
			MISC::SET_BIT(&(uParam1->f_16), 7);
			break;
		
		case 771:
		case 772:
			MISC::CLEAR_BIT(&(uParam1->f_16), 11);
			break;
		
		case 789:
		case 790:
		case 791:
			MISC::SET_BIT(&(uParam1->f_16), 9);
			MISC::SET_BIT(&(uParam1->f_16), 15);
			break;
	}
}

void func_970(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_972(iParam0) };
	*uParam1 = { func_971(iParam0) };
}

Vector3 func_971(int iParam0)
{
	switch (iParam0)
	{
		case 805:
			return -1011,788f, -480,2999f, 38,9756f;
		
		case 747:
			return 2331,56f, 2575,972f, 45,6677f;
		
		case 748:
			return -443,3367f, 6016,453f, 30,7172f;
		
		case 749:
			return -1079,142f, -855,9941f, 4,0321f;
		
		case 750:
			return 1855,284f, 3683,246f, 33,2675f;
		
		case 751:
			return 459,2572f, -1007,858f, 27,2567f;
		
		case 752:
			return -105,4055f, 2796,867f, 52,3442f;
		
		case 753:
			return 930,3027f, -1807,612f, 30,3326f;
		
		case 754:
			return -127,9034f, -1394,535f, 28,5281f;
		
		case 762:
			return -1395,269f, -3267,321f, 12,9448f;
		
		case 756:
			return 987,5f, 79,66f, 79,99f;
		
		case 765:
			return 759,18f, -677,63f, 27,85f;
		
		case 766:
			return -147,14f, -1341,72f, 29,08f;
		
		case 767:
			return -172,07f, -33,75f, 51,23f;
		
		case 768:
			return 233,23f, -1873,42f, 25,55f;
		
		case 769:
			return 489,06f, -894,67f, 24,74f;
		
		case 795:
			return 388,3036f, -74,6683f, 67,1805f;
		
		case 797:
			return -1016,535f, -413,186f, 38,6161f;
		
		case 799:
			return -589,4908f, -707,4646f, 35,2844f;
		
		case 801:
			return -1039,083f, -756,4792f, 18,8395f;
		
		case 803:
			return 214,4743f, -1,2945f, 73,3064f;
		
		case 804:
			return -1420,127f, -239,5311f, 45,3791f;
		
		default:
	}
	return func_972(iParam0);
}

Vector3 func_972(int iParam0)
{
	switch (iParam0)
	{
		case 747:
			return 2332,839f, 2582,595f, 45,6677f;
		
		case 748:
			return -436,1613f, 6028,733f, 30,3405f;
		
		case 749:
			return -1068,84f, -851,9506f, 3,8671f;
		
		case 750:
			return 1865,898f, 3699,468f, 32,5628f;
		
		case 751:
			return 446,1463f, -1019,909f, 27,5497f;
		
		case 752:
			return -104,1688f, 2796,184f, 52,3266f;
		
		case 753:
			return 934,3446f, -1803,678f, 29,7528f;
		
		case 754:
			return -138,0878f, -1396,641f, 28,8028f;
		
		case 805:
			return -1081,882f, -501,9055f, 35,6193f;
		
		case 756:
			return 934f, -2,6f, 78f;
		
		case 755:
			return -1079,98f, -2867,023f, 12,9505f;
		
		case 758:
			return -154,8892f, -2663,216f, 5,0002f;
		
		case 759:
			return -1615,657f, 5271,33f, -0,4f;
		
		case 760:
			return 1738,386f, 3280,542f, 40,1063f;
		
		case 761:
			return -1148,742f, -3403,921f, 12,945f;
		
		case 762:
			return -1394,095f, -3263,974f, 12,9448f;
		
		case 763:
			return 1376,011f, -4400,693f, 150,6801f;
		
		case 764:
			return -1294,799f, -3539,78f, 0,1343f;
		
		case 757:
			return func_973(0f, 30,6f, -1f);
		
		case 796:
			return 360,084f, -74,7928f, 66,1459f;
		
		case 798:
			return -1031,865f, -410,4693f, 32,2732f;
		
		case 800:
			return -616,354f, -738,2424f, 26,8466f;
		
		case 802:
			return -987,0505f, -765,7468f, 14,7657f;
		
		case 803:
			return 214,4743f, -1,2945f, 73,3064f;
		
		case 804:
			return -1421,36f, -240,4189f, 45,3791f;
		
		case 765:
			return 762,16f, -677,76f, 27,7908f;
		
		case 766:
			return -147,3731f, -1343,693f, 28,8769f;
		
		case 767:
			return -169,0834f, -34,9386f, 51,4423f;
		
		case 768:
			return 235,1787f, -1874,712f, 25,4822f;
		
		case 769:
			return 492,1651f, -894,889f, 24,742f;
		
		case 770:
			return 1170,16f, -2973,49f, 4,902108f;
		
		case 771:
			return 1445,205f, 2327,525f, 72,8152f;
		
		case 772:
			return 1411,023f, 2582,441f, 36,0159f;
		
		case 792:
			return -153,3114f, -2658,146f, 5,001f;
		
		case 793:
			return 194,9886f, 2742,808f, 42,4263f;
		
		case 794:
			return 407,2454f, -983,9472f, 28,2663f;
		
		case 773:
			return -538,8397f, 486,7372f, 102,0298f;
		
		case 774:
			return -994,163f, 789,741f, 171,291f;
		
		case 775:
			return -1948,359f, 201,3107f, 85,0223f;
		
		case 776:
			return 51,8459f, 562,2281f, 179,3021f;
		
		case 777:
			return -3081,445f, 222,5399f, 13,0176f;
		
		case 778:
			return -815,6112f, -1329,625f, 4,0004f;
		
		case 779:
			return -1853,117f, -361,2698f, 48,2661f;
		
		case 780:
			return -3234,458f, 948,7831f, 12,2371f;
		
		case 781:
			return 1716,731f, 4668,851f, 42,1248f;
		
		case 782:
			return -1107,208f, -1049,329f, 1,1504f;
		
		case 783:
			return -1162,099f, -1466,775f, 3,3097f;
		
		case 784:
			return -1808,288f, -631,7379f, 10,0042f;
		
		case 785:
			return 875,6288f, -507,5239f, 56,4763f;
		
		case 786:
			return -1562,304f, -288,0245f, 47,2757f;
		
		case 787:
			return -1018,469f, -2731,378f, 12,6965f;
		
		case 788:
			return -588,9297f, 191,3239f, 70,2865f;
		
		case 789:
			return -176,8f, -608,2f, 31,4f;
		
		case 790:
			return 140,1f, -726f, 32,1f;
		
		case 791:
			return 42,9f, -884,1f, 29,3f;
		
		default:
	}
	return 0f, 0f, 0f;
}

Vector3 func_973(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (func_79(0))
	{
		iVar0 = func_975(func_74());
		if (func_678(iVar0))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Param0);
		}
		else
		{
			return func_974(757, func_74(), 0);
		}
	}
	else
	{
		iVar1 = func_975(PLAYER::PLAYER_ID());
		if (func_678(iVar1))
		{
			return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1, Param0);
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_974(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == func_73())
	{
		return 0f, 0f, 0f;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Global_1952863.f_5041[iVar0 /*2*/] == iParam0)
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (bParam2)
	{
		return Global_1893548[iParam1 /*600*/].f_557.f_16[iVar1 /*6*/];
	}
	return Global_1893548[iParam1 /*600*/].f_557.f_16[iVar1 /*6*/].f_3;
}

int func_975(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1964069[iParam0]))
		{
			return Global_1964069[iParam0];
		}
	}
	return -1;
}

void func_976(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 763:
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
		case 796:
		case 798:
		case 800:
		case 802:
			*uParam2 = 0;
			*uParam3 = 1;
			return;
			break;
		
		case 795:
		case 797:
		case 799:
		case 801:
			*uParam2 = 1;
			*uParam3 = 0;
			return;
			break;
	}
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_977(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 757:
		case 763:
		case 771:
		case 772:
		case 789:
		case 790:
		case 791:
			return 0;
			break;
		
		default:
			if (func_678(PLAYER::PLAYER_PED_ID()) && !func_986(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (func_678(iVar0) && func_978(iParam0, iVar0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_978(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (!func_985(iParam0) && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (func_678(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		if (func_984(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0))
			{
				return 0;
			}
		}
		else if (func_983(iParam0))
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BOAT(iVar0) && !VEHICLE::IS_THIS_MODEL_A_JETSKI(iVar0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_982(iParam1))
	{
		return 0;
	}
	if ((func_981(iParam1, 1) || func_980(iParam1)) || func_979(iParam1, 1))
	{
		return iParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (MISC::IS_BIT_SET(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

int func_979(int iParam0, bool bParam1)
{
	if (Global_77852)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_980(int iParam0)
{
	if ((DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("CreatedByPegasus", 2) && DECORATOR::DECOR_EXIST_ON(iParam0, "CreatedByPegasus")) && DECORATOR::DECOR_GET_BOOL(iParam0, "CreatedByPegasus"))
	{
		return 1;
	}
	return 0;
}

int func_981(int iParam0, bool bParam1)
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

int func_982(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("hauler2") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("phantom3"))
	{
		return 1;
	}
	return 0;
}

int func_983(int iParam0)
{
	switch (iParam0)
	{
		case 759:
		case 764:
			return 1;
			break;
	}
	return 0;
}

int func_984(int iParam0)
{
	switch (iParam0)
	{
		case 761:
		case 762:
		case 760:
		case 763:
			return 1;
			break;
	}
	return 0;
}

int func_985(int iParam0)
{
	switch (iParam0)
	{
		case 765:
		case 766:
		case 767:
		case 768:
		case 769:
		case 793:
		case 792:
		case 771:
		case 772:
			return 1;
			break;
	}
	return 0;
}

int func_986(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_9(iParam0, 1, 1))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
		if (TASK::GET_IS_TASK_ACTIVE(iVar1, 2))
		{
			return 1;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return 1;
			}
		}
		else
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return 1;
			}
		}
		if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iVar1))
		{
			return 1;
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1794415470) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1794415470) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_987(int iParam0)
{
	switch (iParam0)
	{
		case 761:
		case 762:
			return 20;
			break;
		
		case 773:
		case 774:
		case 775:
		case 776:
		case 777:
		case 778:
		case 779:
		case 780:
		case 781:
		case 782:
		case 783:
		case 784:
		case 785:
		case 786:
		case 787:
		case 788:
			return 27;
			break;
		
		default:
			return 28;
			break;
	}
	return 28;
}

float func_988(int iParam0)
{
	switch (iParam0)
	{
		case 748:
		case 749:
		case 747:
		case 750:
			return 5f;
			break;
		
		case 796:
		case 800:
		case 802:
		case 798:
			return 2,5f;
			break;
		
		case 770:
			return 7f;
			break;
	}
	return 10f;
}

float func_989(int iParam0)
{
	switch (iParam0)
	{
		case 795:
		case 799:
		case 801:
		case 797:
			return 0,5f;
			break;
	}
	return 5f;
}

char* func_990(int iParam0)
{
	return "GB_DELIVERY";
}

bool func_991(int iParam0)
{
	return (iParam0 >= 747 && iParam0 <= 805);
}

struct<27> func_992(int iParam0)
{
	struct<27> Var0;
	
	if (func_999(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 182615;
		Var0.f_19 = 182599;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 26;
		func_994(iParam0, &Var0);
		MISC::SET_BIT(&(Var0.f_16), 13);
		if (iParam0 == 732)
		{
			MISC::SET_BIT(&(Var0.f_16), 3);
			MISC::SET_BIT(&(Var0.f_16), 5);
			MISC::SET_BIT(&(Var0.f_16), 9);
			MISC::SET_BIT(&(Var0.f_16), 8);
			Var0.f_20 = { 717,713f, 122,6333f, 78,75452f };
			Var0.f_23 = { 663,8443f, 142,1459f, 122,0014f };
			Var0.f_26 = 60f;
			Var0.f_7 = 5f;
		}
		else if (func_993(iParam0, 1))
		{
			MISC::SET_BIT(&(Var0.f_16), 11);
		}
		else if (iParam0 == 733)
		{
			MISC::SET_BIT(&(Var0.f_16), 9);
			MISC::SET_BIT(&(Var0.f_16), 15);
			Var0.f_20 = { 1026,913f, -271,2461f, 49,62276f };
			Var0.f_23 = { 1036,819f, -267,2213f, 53,21184f };
			Var0.f_26 = 5,3125f;
		}
	}
	return Var0;
}

int func_993(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 714:
		case 715:
		case 716:
		case 717:
		case 718:
		case 719:
			return 1;
			break;
		
		case 720:
		case 721:
		case 722:
		case 723:
		case 724:
		case 725:
		case 726:
		case 727:
		case 728:
		case 729:
		case 730:
		case 731:
			return iParam1;
			break;
	}
	return 0;
}

void func_994(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_995(iParam0) };
	if (func_993(iParam0, 0))
	{
		switch (iParam0)
		{
			case 714:
				*uParam1 = { -237,12f, 6228,755f, 29,5005f };
				break;
			
			case 715:
				*uParam1 = { 1710,83f, 4760,13f, 40,0504f };
				break;
			
			case 716:
				*uParam1 = { -105,19f, -1778,3f, 27,51f };
				break;
			
			case 717:
				*uParam1 = { -617,7421f, 285,8363f, 79,6871f };
				break;
			
			case 718:
				*uParam1 = { -1287,114f, -278,0045f, 36,5935f };
				break;
			
			case 719:
				*uParam1 = { 726,7626f, -822,4685f, 22,8603f };
				break;
		}
	}
	else
	{
		*uParam1 = { uParam1->f_4 };
	}
}

Vector3 func_995(int iParam0)
{
	switch (iParam0)
	{
		case 714:
			return -239,6946f, 6231,41f, 30,5003f;
		
		case 715:
			return 1710,63f, 4755,55f, 40,97f;
		
		case 716:
			return -102,8687f, -1775,582f, 28,5124f;
		
		case 717:
			return -618,0107f, 282,3917f, 80,6787f;
		
		case 718:
			return -1288,845f, -275,3818f, 37,7781f;
		
		case 719:
			return 722,7928f, -822,6534f, 23,7156f;
		
		case 720:
			return -249,71f, 6222,79f, 30,49f;
		
		case 721:
			return 1688,938f, 4770,203f, 40,9215f;
		
		case 722:
			return -113,4865f, -1763,319f, 28,7557f;
		
		case 723:
			return -592,94f, 270,24f, 81,17f;
		
		case 724:
			return -1268,06f, -294,23f, 36,4f;
		
		case 725:
			return 751,33f, -840,9f, 24,62f;
		
		case 726:
			return -248,9815f, 6226,736f, 30,4544f;
		
		case 727:
			return 1712,496f, 4799,796f, 40,8101f;
		
		case 728:
			return -31,0365f, -1754,201f, 28,2347f;
		
		case 729:
			return -596,077f, 332,5039f, 84,1166f;
		
		case 730:
			return -1273,903f, -284,471f, 36,9529f;
		
		case 731:
			return 737,4631f, -841,6989f, 24,0383f;
		
		case 732:
			return 696,304f, 129,601f, 79,755f;
		
		case 733:
			return 1031,95f, -269,04f, 49,8512f;
		
		case 734:
			return 1742,125f, 3275,608f, 40,132f;
		
		case 735:
			return -161,4011f, -164,9205f, 42,6216f;
		
		case 736:
			return -1125,329f, 4946,633f, 219,0566f;
		
		case 742:
			return 977,4358f, 17,8086f, 79,9903f;
		
		case 743:
			return 992,6253f, 75,9125f, 79,9906f;
		
		case 744:
			return 987,3862f, 79,2873f, 79,9906f;
		
		case 745:
			return 974,0888f, 13,0281f, 80,041f;
		
		case 746:
			return 980,2654f, 22,3152f, 79,9902f;
		
		case 737:
			return 1964,725f, 3755,312f, 31,2405f;
		
		case 738:
			return -23,473f, 6456,655f, 30,4236f;
		
		case 739:
			return -1325,822f, -1149,726f, 3,398f;
		
		case 740:
			return 192,6347f, -153,5202f, 55,9168f;
		
		case 741:
			return 1066,743f, -2384,296f, 29,461f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_996(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_997(int iParam0)
{
	int iVar0;
	
	if ((((((iParam0 == 735 || iParam0 == 736) || iParam0 == 742) || iParam0 == 743) || iParam0 == 744) || iParam0 == 745) || iParam0 == 746)
	{
		return 0;
	}
	if (func_993(iParam0, 1))
	{
		if (func_678(PLAYER::PLAYER_PED_ID()) && !func_986(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_678(iVar0) && func_998(iParam0, iVar0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_998(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (func_678(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("terbyte")) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		return 0;
	}
	if (func_982(iParam1))
	{
		return 0;
	}
	if ((func_981(iParam1, 1) || func_980(iParam1)) || func_979(iParam1, 1))
	{
		return iParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (MISC::IS_BIT_SET(iVar2, 17))
			{
				return iParam2;
			}
		}
	}
	return 1;
}

bool func_999(int iParam0)
{
	return (iParam0 >= 714 && iParam0 <= 746);
}

struct<27> func_1000(int iParam0)
{
	struct<27> Var0;
	
	if (func_1005(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 183724;
		Var0.f_19 = 183708;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 25;
		func_1001(iParam0, &Var0);
		if (iParam0 == 710)
		{
			MISC::SET_BIT(&(Var0.f_16), 3);
			MISC::SET_BIT(&(Var0.f_16), 5);
			MISC::SET_BIT(&(Var0.f_16), 2);
			MISC::SET_BIT(&(Var0.f_16), 8);
			Var0.f_20 = { 939,5024f, 141,9415f, 84,5562f };
			Var0.f_23 = { 955,4819f, 160,9863f, 103,5805f };
			Var0.f_26 = 16,6875f;
			Var0.f_7 = 5f;
		}
		if (iParam0 == 711)
		{
			MISC::SET_BIT(&(Var0.f_16), 3);
			MISC::SET_BIT(&(Var0.f_16), 9);
			MISC::SET_BIT(&(Var0.f_16), 5);
			MISC::SET_BIT(&(Var0.f_16), 8);
			MISC::SET_BIT(&(Var0.f_16), 1);
			MISC::SET_BIT(&(Var0.f_16), 14);
			Var0.f_20 = { 951,1802f, 19,74426f, 120,3121f };
			Var0.f_23 = { 977,124f, 62,42398f, 159,2259f };
			Var0.f_26 = 31f;
		}
	}
	return Var0;
}

void func_1001(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1002(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_1002(int iParam0)
{
	switch (iParam0)
	{
		case 704:
			return 918,5922f, 50,5265f, 79,7648f;
		
		case 705:
			return 915,2054f, 52,5925f, 79,7648f;
		
		case 710:
			return 939,7278f, 145,0655f, 79,8304f;
		
		case 711:
			return 965,8581f, 42,3771f, 123,1199f;
		
		case 712:
			return 976,8382f, -69,818f, 73,9592f;
		
		case 713:
			return 935,5134f, 0,3663f, 77,7649f;
		
		case 706:
			return -523,206f, -1720,587f, 18,225f;
		
		case 707:
			return 273,709f, -2223,898f, 7,257f;
		
		case 708:
			return -1068,403f, 4912,794f, 211,851f;
		
		case 709:
			return -1584,666f, 2695,359f, 3,118f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1003(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1004(int iParam0)
{
	switch (iParam0)
	{
		case 704:
		case 705:
		case 713:
		case 712:
		case 711:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1005(int iParam0)
{
	return (iParam0 >= 704 && iParam0 <= 713);
}

struct<27> func_1006(int iParam0)
{
	struct<27> Var0;
	
	if (func_1015(iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 184502;
		Var0.f_19 = 184486;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 23;
		Var0.f_17 = 24;
		MISC::SET_BIT(&(Var0.f_16), 10);
		MISC::SET_BIT(&(Var0.f_16), 11);
		func_1008(iParam0, &Var0);
		if (func_1007(iParam0))
		{
			MISC::SET_BIT(&(Var0.f_16), 12);
		}
		else
		{
			MISC::SET_BIT(&(Var0.f_16), 13);
		}
	}
	return Var0;
}

bool func_1007(int iParam0)
{
	return (iParam0 >= 694 && iParam0 <= 703);
}

void func_1008(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1009(iParam0) };
	*uParam1 = { uParam1->f_4 };
}

Vector3 func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 684:
			return 729,8204f, -1291,16f, 25,2842f;
		
		case 685:
			return 333,4431f, -997,5615f, 28,1407f;
		
		case 686:
			return -164,0211f, -1296,221f, 30,0465f;
		
		case 687:
			return -22,2784f, 216,376f, 105,5677f;
		
		case 688:
			return 909,1575f, -2093,444f, 29,494f;
		
		case 689:
			return -673,6822f, -2391,013f, 12,8934f;
		
		case 690:
			return 227,6459f, -3133,413f, 4,7903f;
		
		case 691:
			return 381,5496f, 227,2289f, 102,0405f;
		
		case 692:
			return -1232,486f, -691,7514f, 22,6646f;
		
		case 693:
			return -1172,481f, -1177,258f, 4,6235f;
		
		case 694:
			return 873,6871f, -2194,648f, 29,5193f;
		
		case 695:
			return -1276,696f, -1356,844f, 3,3046f;
		
		case 696:
			return 21,1183f, 82,7228f, 73,6689f;
		
		case 697:
			return -322,2558f, -1400,917f, 30,7681f;
		
		case 698:
			return -1421,89f, -240,855f, 45,3791f;
		
		case 699:
			return 917,248f, 3567,433f, 32,7733f;
		
		case 700:
			return -107,0892f, 2795,575f, 52,2975f;
		
		case 701:
			return -230,9694f, 6350,816f, 31,426f;
		
		case 702:
			return 1374,142f, -2217,435f, 59,6957f;
		
		case 703:
			return 2508,885f, 4215,857f, 38,9267f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1010(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam2 = 1;
	*uParam3 = 1;
}

int func_1011(int iParam0)
{
	int iVar0;
	
	if (func_1007(iParam0) || func_1014(iParam0))
	{
		if (func_678(PLAYER::PLAYER_PED_ID()) && !func_986(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_678(iVar0) && func_1012(iParam0, iVar0, func_1014(iParam0)))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1012(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1))
	{
		if (func_678(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("trailersmall2"))
			{
				return 0;
			}
		}
	}
	if (((((((((iVar0 == joaat("thruster") || iVar0 == joaat("chernobog")) || iVar0 == joaat("khanjali")) || iVar0 == joaat("riot2")) || iVar0 == joaat("volatol")) || iVar0 == joaat("trailersmall2")) || iVar0 == joaat("bus")) || iVar0 == joaat("airbus")) || (iVar0 == joaat("terbyte") && func_1013(iParam0))) || ((!VEHICLE::IS_THIS_MODEL_A_CAR(iVar0) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iVar0)))
	{
		return 0;
	}
	if (func_982(iParam1))
	{
		return 0;
	}
	if ((func_981(iParam1, 1) || func_980(iParam1)) || func_979(iParam1, 1))
	{
		return uParam2;
	}
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam1, "MPBitset"))
		{
			iVar2 = DECORATOR::DECOR_GET_INT(iParam1, "MPBitset");
			if (MISC::IS_BIT_SET(iVar2, 17))
			{
				return uParam2;
			}
		}
	}
	return 1;
}

int func_1013(int iParam0)
{
	if ((iParam0 == 690 || iParam0 == 691) || iParam0 == 687)
	{
		return 1;
	}
	return 0;
}

bool func_1014(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 693);
}

bool func_1015(int iParam0)
{
	return (iParam0 >= 684 && iParam0 <= 703);
}

struct<27> func_1016(int iParam0)
{
	struct<27> Var0;
	
	if (func_1021(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 185986;
		Var0.f_19 = 185945;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		Var0.f_17 = 22;
		func_1017(iParam0, &Var0);
		MISC::SET_BIT(&(Var0.f_16), 9);
	}
	return Var0;
}

void func_1017(int iParam0, var uParam1)
{
	uParam1->f_4 = { func_1018(iParam0) };
	*uParam1 = { uParam1->f_4 };
	switch (iParam0)
	{
		case 675:
			uParam1->f_20 = { 1273,677f, 2835,732f, 44,84742f };
			uParam1->f_23 = { 1264,765f, 2828,705f, 55,94585f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 676:
			uParam1->f_20 = { 32,71862f, 2620,037f, 81,45343f };
			uParam1->f_23 = { 41,51775f, 2625,42f, 91,57298f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 677:
			uParam1->f_20 = { 2757,371f, 3908,717f, 41,28543f };
			uParam1->f_23 = { 2750,301f, 3902,29f, 52,10129f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 678:
			uParam1->f_20 = { 3392,239f, 5508,464f, 21,73143f };
			uParam1->f_23 = { 3382,523f, 5510,846f, 31,62641f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 679:
			uParam1->f_20 = { 17,18369f, 6826,096f, 11,27043f };
			uParam1->f_23 = { 26,70887f, 6822,46f, 22,73343f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 680:
			uParam1->f_20 = { -2229,61f, 2401,256f, 7,634426f };
			uParam1->f_23 = { -2229,246f, 2390,694f, 20,95616f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 681:
			uParam1->f_20 = { -3,066728f, 3343,304f, 38,14693f };
			uParam1->f_23 = { -0,032484f, 3354,439f, 45,36308f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 682:
			uParam1->f_20 = { 2084,432f, 1759,63f, 99,96742f };
			uParam1->f_23 = { 2091,107f, 1765,938f, 110,7136f };
			uParam1->f_26 = 12,4375f;
			break;
		
		case 683:
			uParam1->f_20 = { 1866,002f, 271,215f, 159,7584f };
			uParam1->f_23 = { 1860,504f, 262,6771f, 170,922f };
			uParam1->f_26 = 12,4375f;
			break;
	}
}

Vector3 func_1018(int iParam0)
{
	switch (iParam0)
	{
		case 675:
			return 1272,357f, 2834,424f, 47,9951f;
		
		case 676:
			return 35,1777f, 2621,545f, 84,4465f;
		
		case 677:
			return 2755,241f, 3906,798f, 44,2074f;
		
		case 678:
			return 3388,732f, 5509,329f, 24,78f;
		
		case 679:
			return 20,3048f, 6825,069f, 14,3348f;
		
		case 680:
			return -2229,332f, 2398,65f, 11,0724f;
		
		case 681:
			return -2,7877f, 3345,063f, 40,1563f;
		
		case 682:
			return 2086,75f, 1761,963f, 102,9603f;
		
		case 683:
			return 1864,349f, 268,5328f, 162,9432f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_1019(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 13)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 14)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1020(var uParam0)
{
	return 1;
}

bool func_1021(var uParam0)
{
	return (*uParam0 >= 675 && *uParam0 <= 683);
}

struct<27> func_1022(int iParam0)
{
	struct<27> Var0;
	int iVar27;
	int iVar28;
	
	iVar27 = func_943(&iParam0);
	if (func_944(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_DELIVERY", 32);
		Var0.f_18 = 213114;
		Var0.f_19 = 212999;
		Var0.f_3 = 2f;
		Var0.f_7 = 10f;
		if (func_953(&iParam0))
		{
			MISC::SET_BIT(&(Var0.f_16), 3);
			MISC::SET_BIT(&(Var0.f_16), 5);
			iVar28 = func_1035(iParam0);
			Var0 = { func_1034(iVar28) };
			Var0.f_4 = { func_1033(iVar28) };
			func_1032(iVar28, &(Var0.f_20), &(Var0.f_23), &(Var0.f_26));
			Var0.f_17 = 20;
		}
		else
		{
			switch (iVar27)
			{
				case 23:
					Var0.f_17 = 11;
					func_1031(iParam0, &Var0);
					break;
				
				case 20:
					Var0.f_17 = 12;
					func_1030(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 13;
					func_1029(iParam0, &Var0);
					Var0.f_7 = 7,5f;
					break;
				
				case 24:
					MISC::SET_BIT(&(Var0.f_16), 7);
					Var0.f_17 = 14;
					func_1028(iParam0, &Var0);
					break;
				
				case 21:
					Var0.f_17 = 15;
					func_1027(iParam0, &Var0);
					break;
				
				case 22:
					Var0.f_17 = 16;
					func_1026(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 17;
					func_1025(iParam0, &Var0);
					break;
				
				case 17:
					Var0.f_17 = 18;
					func_1024(iParam0, &Var0);
					break;
				
				case 25:
					Var0.f_17 = 19;
					func_1023(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1023(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 645:
			uParam1->f_4 = { -1009,399f, -1510,902f, 10,787f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1009,357f, -1510,773f, 30,78681f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 646:
			uParam1->f_4 = { 488,149f, 193,576f, 110,521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 488,3388f, 193,4493f, 130,521f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 647:
			uParam1->f_4 = { 1136,636f, -1545,09f, 47,145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1136,649f, -1545,196f, 67,14507f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 648:
			uParam1->f_4 = { 287,184f, -2430,126f, 7,042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 287,0954f, -2430,258f, 27,04158f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 649:
			uParam1->f_4 = { -1273,492f, 613,795f, 138,303f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1273,409f, 613,6357f, 158,3027f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 650:
			uParam1->f_4 = { 1152,29f, -411,709f, 73,447f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1152,219f, -411,7438f, 93,4471f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 651:
			uParam1->f_4 = { 154,71f, 1154,905f, 225,794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 154,7392f, 1154,619f, 245,7941f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 652:
			uParam1->f_4 = { -3102,653f, 405,02f, 15,265f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3102,914f, 404,9397f, 35,26507f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 653:
			uParam1->f_4 = { -1568,817f, -416,371f, 58,755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1568,9f, -416,2934f, 78,75464f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 654:
			uParam1->f_4 = { -697,74f, 167,438f, 72,242f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -697,7376f, 167,3414f, 92,24247f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 655:
			uParam1->f_4 = { -707,304f, -896,965f, 29,343f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -707,3842f, -896,7987f, 49,34295f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 656:
			uParam1->f_4 = { 129,193f, -1504,046f, 35,35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 129,2808f, -1504,016f, 55,35003f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 657:
			uParam1->f_4 = { 705,942f, -898,681f, 31,162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 706,1223f, -898,7618f, 51,16165f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 658:
			uParam1->f_4 = { -54,868f, -320,534f, 55,571f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -54,92479f, -320,5946f, 75,57126f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 659:
			uParam1->f_4 = { 960,6f, -2310,002f, 38,836f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 960,7292f, -2310,002f, 58,83584f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 660:
			uParam1->f_4 = { 2475,58f, 3442,302f, 52,942f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2475,584f, 3442,382f, 74,15777f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 661:
			uParam1->f_4 = { -71,699f, 6380,39f, 34,004f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71,58961f, 6380,449f, 55,21976f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 662:
			uParam1->f_4 = { 2576,59f, 4648,265f, 35,655f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2576,537f, 4648,233f, 56,87077f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 663:
			uParam1->f_4 = { 1383,088f, 2164,901f, 100,221f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1383,053f, 2164,877f, 121,4368f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 664:
			uParam1->f_4 = { -52,204f, 2874,061f, 57,88f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -52,19807f, 2874,119f, 79,09576f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 665:
			uParam1->f_4 = { -2606,045f, 1874,706f, 166,32f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2605,907f, 1874,733f, 187,5358f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 666:
			uParam1->f_4 = { 2232,609f, 5612,76f, 57,479f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2232,607f, 5612,829f, 78,69922f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 667:
			uParam1->f_4 = { -98,906f, 1909,688f, 196,053f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -98,8879f, 1909,77f, 217,2665f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 668:
			uParam1->f_4 = { 1338,384f, 4353,149f, 46,215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1338,347f, 4353,256f, 67,43076f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 669:
			uParam1->f_4 = { -533,217f, 4196,721f, 191,991f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -533,3099f, 4196,712f, 213,206f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 670:
			uParam1->f_4 = { -1514,534f, 1524,422f, 117,112f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1514,498f, 1524,455f, 138,3278f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 671:
			uParam1->f_4 = { 1224,78f, 2735,091f, 41,089f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1224,727f, 2735,13f, 62,30476f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 672:
			uParam1->f_4 = { 1430,944f, 6354,661f, 27,35f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1430,843f, 6354,548f, 48,56577f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 673:
			uParam1->f_4 = { -746,832f, 5579,238f, 40,596f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -746,8964f, 5579,122f, 61,8147f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
		
		case 674:
			uParam1->f_4 = { 1950,596f, 3831,224f, 38,394f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1950,513f, 3831,26f, 59,60977f };
			uParam1->f_23 = { 45f, 45f, 100f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1024(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 615:
			uParam1->f_4 = { -1129,887f, 4908,95f, 218,176f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1129,952f, 4908,959f, 367,2639f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 616:
			uParam1->f_4 = { -1278,679f, 4397,949f, 8,797f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1278,8f, 4398,199f, 157,8854f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 617:
			uParam1->f_4 = { 2472,119f, -383,714f, 108,633f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472,227f, -383,7167f, 257,6341f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 618:
			uParam1->f_4 = { 3704,91f, 3792,808f, 10,344f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3704,833f, 3792,772f, 159,3807f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 619:
			uParam1->f_4 = { 501,491f, 5604,684f, 796,915f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501,4285f, 5604,606f, 945,9148f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 620:
			uParam1->f_4 = { -324,364f, -1968,709f, 65,994f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -324,3981f, -1968,649f, 214,9936f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 621:
			uParam1->f_4 = { 1352,153f, 4355,032f, 42,72f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1352,194f, 4355,176f, 191,7198f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 622:
			uParam1->f_4 = { -188,822f, -176,633f, 84,225f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -188,8102f, -176,5466f, 233,2247f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 623:
			uParam1->f_4 = { 2327,591f, -2106,102f, 4,042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2327,514f, -2106,169f, 153,0316f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 624:
			uParam1->f_4 = { -930,626f, 6157,1f, 3,935f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -930,6824f, 6157,203f, 152,9289f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 625:
			uParam1->f_4 = { 685,825f, -744,68f, 33,968f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 685,7804f, -744,5552f, 183,0251f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 626:
			uParam1->f_4 = { -3222,702f, 835,279f, 1,389f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3222,962f, 835,3319f, 150,3925f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 627:
			uParam1->f_4 = { 3722,393f, 1525,736f, 0,188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3731,082f, 1518,727f, 154,9921f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 628:
			uParam1->f_4 = { 4343,171f, 5407,742f, 0,563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4349,43f, 5413,023f, 153,4886f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 629:
			uParam1->f_4 = { 1493,387f, 7343,342f, -0,563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1495,309f, 7349,077f, 153,3537f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 630:
			uParam1->f_4 = { 1108,552f, -3865,831f, -0,145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1108,74f, -3865,597f, 149,2532f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 631:
			uParam1->f_4 = { -2794,206f, -1340,128f, -0,857f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2794,711f, -1341,127f, 150,9005f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 632:
			uParam1->f_4 = { -3753,333f, 2421,297f, 0,134f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3753,042f, 2421,227f, 151,5792f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 633:
			uParam1->f_4 = { 2820,673f, 5970,349f, 351,4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2819,888f, 5971,666f, 498,5311f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 634:
			uParam1->f_4 = { -1207,282f, 508,525f, 104,699f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1208,541f, 508,3144f, 251,8198f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 635:
			uParam1->f_4 = { 1458,088f, 1113,121f, 115,213f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1458,243f, 1111,971f, 262,334f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 636:
			uParam1->f_4 = { 2472,171f, 3423,729f, 50,713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2472,185f, 3423,361f, 200,9512f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 637:
			uParam1->f_4 = { -57,098f, 1915,81f, 196,24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -56,97901f, 1914,767f, 343,6823f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 638:
			uParam1->f_4 = { -1747,223f, 1991,318f, 118,105f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1748,072f, 1992,806f, 265,1205f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 639:
			uParam1->f_4 = { 2480,091f, 4951,536f, 45,872f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2480,827f, 4952,609f, 193,0078f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 640:
			uParam1->f_4 = { 306,207f, 6493,011f, 30,267f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 304,8512f, 6493,137f, 177,407f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 641:
			uParam1->f_4 = { 1184,253f, -2272,983f, 31,212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1183,06f, -2273,078f, 178,3331f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 642:
			uParam1->f_4 = { 704,845f, 3122,848f, 44,728f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 704,9832f, 3121,729f, 191,8539f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 643:
			uParam1->f_4 = { 2213,413f, 1834,712f, 108,61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2214,313f, 1835,36f, 255,7564f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 644:
			uParam1->f_4 = { 1087,726f, 9,947f, 81,59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1087,425f, 8,9017f, 228,8473f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1025(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 585:
			uParam1->f_4 = { -1410,13f, -993,289f, 18,38f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1410,102f, -993,2345f, 168,3805f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 586:
			uParam1->f_4 = { -71,169f, 807,415f, 226,25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -71,13431f, 807,3287f, 376,2498f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 587:
			uParam1->f_4 = { -163,298f, -160,212f, 92,702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -163,2319f, -160,0414f, 242,7024f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 588:
			uParam1->f_4 = { 78,731f, -1587,635f, 37,559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 78,70574f, -1587,401f, 187,5587f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 589:
			uParam1->f_4 = { 1145,42f, -431,092f, 66,169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1145,483f, -431,0724f, 216,1644f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 590:
			uParam1->f_4 = { -293,618f, 2798,6f, 58,476f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -293,5615f, 2798,718f, 208,46f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 591:
			uParam1->f_4 = { -2233,786f, 222,936f, 193,612f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2234,008f, 223,1098f, 343,6117f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 592:
			uParam1->f_4 = { -211,003f, 6270,165f, 30,489f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -211,3024f, 6270,386f, 180,4893f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 593:
			uParam1->f_4 = { 501,306f, 5597,584f, 794,921f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 501,0702f, 5597,815f, 944,9088f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 594:
			uParam1->f_4 = { 2559,657f, 4288,563f, 40,59f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2559,551f, 4288,573f, 190,5903f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 595:
			uParam1->f_4 = { 2061,787f, 1876,157f, 92,147f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2061,821f, 1876,255f, 242,0961f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 596:
			uParam1->f_4 = { 1439,398f, -2123,25f, 55,758f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1439,464f, -2123,064f, 205,7386f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 597:
			uParam1->f_4 = { 536,555f, -2817,696f, 5,042f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 536,7016f, -2817,775f, 155,0421f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 598:
			uParam1->f_4 = { 1414,709f, 3812,396f, 31,285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1414,681f, 3812,424f, 181,2858f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 599:
			uParam1->f_4 = { -1224,871f, 4451,718f, 29,123f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1224,649f, 4451,727f, 179,1271f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 600:
			uParam1->f_4 = { 1942,57f, 4992,075f, 41,622f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1942,686f, 4992,245f, 191,605f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 601:
			uParam1->f_4 = { -413,839f, 1570,649f, 354,009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -413,7642f, 1570,749f, 504,0011f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 602:
			uParam1->f_4 = { -338,977f, -738,634f, 52,247f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -338,8257f, -739,0767f, 202,2467f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 603:
			uParam1->f_4 = { 2785,339f, -671,202f, 3,129f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2785,372f, -671,1329f, 153,1176f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 604:
			uParam1->f_4 = { 1597,853f, 6574,43f, 13,057f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1597,943f, 6574,682f, 163,0956f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 605:
			uParam1->f_4 = { -1788,953f, 5296,781f, 0,937f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1794,737f, 5302,018f, 156,0463f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 606:
			uParam1->f_4 = { 107,929f, 7556,932f, 0,375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 102,0676f, 7561,387f, 154,2871f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 607:
			uParam1->f_4 = { 4348,7f, 4204,648f, 0,375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 4356,096f, 4211,247f, 155,3993f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 608:
			uParam1->f_4 = { 3350,914f, 1271,106f, -0,375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3344,999f, 1277,366f, 155,4821f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 609:
			uParam1->f_4 = { 25,182f, -3666,942f, 1,312f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 32,64173f, -3669,944f, 155,9386f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 610:
			uParam1->f_4 = { -3462,223f, 1513,8f, 0,938f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3470,701f, 1519,476f, 155,7491f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 611:
			uParam1->f_4 = { 3123,25f, 6765,652f, 0,563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3127,177f, 6770,722f, 155,9512f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 612:
			uParam1->f_4 = { 3666,045f, -1481,32f, 1,125f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3664,705f, -1489,47f, 155,7794f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 613:
			uParam1->f_4 = { -2261,479f, -1643,832f, 0,375f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2246,73f, -1646,456f, 155,4379f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 614:
			uParam1->f_4 = { 2602,581f, -2480,521f, 0,188f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2592,321f, -2481,46f, 156,4927f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1026(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 6);
	switch (iParam0)
	{
		case 552:
			uParam1->f_4 = { -228,69f, -2445,7f, 19f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -228,4485f, -2445,367f, 16,0014f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 553:
			uParam1->f_4 = { 617,286f, -840,587f, 24,072f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 617,3474f, -840,5027f, 21,92936f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 554:
			uParam1->f_4 = { 2908,728f, 770,107f, 35,121f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2908,175f, 769,7324f, 33,86459f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		
		case 555:
			uParam1->f_4 = { -180,058f, 2863,623f, 37,528f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -180,1334f, 2863,537f, 37,45629f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 556:
			uParam1->f_4 = { -1414,163f, 2636,951f, 8,005f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1413,618f, 2636,493f, 7,268405f };
			uParam1->f_23 = { 25f, 25f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 557:
			uParam1->f_4 = { -2665,451f, 2595,696f, 6,008f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2665,38f, 2595,291f, 5,917889f };
			uParam1->f_23 = { 25f, 25f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 558:
			uParam1->f_4 = { -1955,164f, 4579,263f, 16,212f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1954,963f, 4579,154f, 13,93992f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 559:
			uParam1->f_4 = { -509,557f, 4421,524f, 44,4f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510,9154f, 4421,009f, 39,48253f };
			uParam1->f_23 = { 25f, 25f, 13f };
			uParam1->f_26 = 0f;
			break;
		
		case 560:
			uParam1->f_4 = { 806,034f, -2635,465f, 15,293f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806,7756f, -2636,127f, 4,788301f };
			uParam1->f_23 = { 25f, 25f, 19f };
			uParam1->f_26 = 0f;
			break;
		
		case 561:
			uParam1->f_4 = { 2265,854f, 2036,017f, 142,197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2265,952f, 2036,054f, 139,336f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 562:
			uParam1->f_4 = { 1659,95f, -1638,865f, 125,283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1659,896f, -1638,868f, 122,2527f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 563:
			uParam1->f_4 = { -1850,943f, -334,037f, 70,237f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1850,938f, -334,012f, 67,08746f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 564:
			uParam1->f_4 = { 1976,216f, 717,231f, 178,613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1976,275f, 717,4149f, 175,2972f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 565:
			uParam1->f_4 = { -24,043f, 668,69f, 211,003f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -23,55385f, 668,9614f, 202,5266f };
			uParam1->f_23 = { 25f, 25f, 18f };
			uParam1->f_26 = 0f;
			break;
		
		case 566:
			uParam1->f_4 = { -211,001f, -1800,318f, 14,044f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -210,7738f, -1800,152f, 11,55491f };
			uParam1->f_23 = { 25f, 25f, 12f };
			uParam1->f_26 = 0f;
			break;
		
		case 567:
			uParam1->f_4 = { 321,856f, 2214,761f, 87,77f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 321,9139f, 2214,874f, 85,22589f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 568:
			uParam1->f_4 = { 1973,514f, 5042,104f, 51,505f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1973,453f, 5042,029f, 49,96577f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 569:
			uParam1->f_4 = { 2025,132f, 2941,179f, 56,555f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2025,186f, 2941,275f, 55,59736f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 570:
			uParam1->f_4 = { 77,001f, 7075,894f, 13,25f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 76,95587f, 7075,936f, 10,97238f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 571:
			uParam1->f_4 = { 3857,717f, 4362,673f, 17,503f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857,716f, 4362,641f, 15,64045f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 572:
			uParam1->f_4 = { 2920,751f, 5314,043f, 109,404f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2920,73f, 5314,069f, 106,1341f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 573:
			uParam1->f_4 = { 201,446f, -725,152f, 60,002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 201,3546f, -725,2289f, 57,07697f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 574:
			uParam1->f_4 = { 714,262f, 4115,009f, 45,006f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 714,308f, 4115,063f, 43,81426f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 575:
			uParam1->f_4 = { 1090,173f, 61,733f, 92,059f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1090,208f, 61,79512f, 89,89091f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 576:
			uParam1->f_4 = { -2823,096f, 1423,129f, 109,982f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2823,114f, 1423,143f, 108,8084f };
			uParam1->f_23 = { 25f, 25f, 9f };
			uParam1->f_26 = 0f;
			break;
		
		case 577:
			uParam1->f_4 = { -1373,553f, 5352,695f, 14,957f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1373,512f, 5352,809f, 13,16294f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 578:
			uParam1->f_4 = { -1350,463f, -1434,643f, 17,118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1350,43f, -1434,647f, 14,32419f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 579:
			uParam1->f_4 = { 2471,126f, 3763,668f, 55,025f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2471,111f, 3763,623f, 52,04755f };
			uParam1->f_23 = { 25f, 25f, 11,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 580:
			uParam1->f_4 = { -967,126f, -974,166f, 15,002f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -967,1616f, -974,1507f, 12,86518f };
			uParam1->f_23 = { 25f, 25f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 581:
			uParam1->f_4 = { 626,714f, 623,564f, 142,166f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 626,7075f, 623,6097f, 138,911f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 582:
			uParam1->f_4 = { -1038,206f, 929,886f, 182,009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1038,277f, 929,9075f, 178,7169f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 583:
			uParam1->f_4 = { -1186,123f, 38,309f, 65f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1186,143f, 38,23398f, 62,72668f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
		
		case 584:
			uParam1->f_4 = { 1441,211f, 6346,602f, 37,018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1441,137f, 6346,373f, 33,95491f };
			uParam1->f_23 = { 25f, 25f, 11f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1027(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 522:
			uParam1->f_4 = { 1628,253f, -1885,011f, 104,244f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1628,259f, -1885,124f, 249,2359f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 523:
			uParam1->f_4 = { 2663,699f, 1395,744f, 23,461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2663,73f, 1395,77f, 168,4647f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 524:
			uParam1->f_4 = { -681,022f, 5798,669f, 16,331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -680,9479f, 5798,407f, 161,331f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 525:
			uParam1->f_4 = { -1046,675f, -997,832f, 8,618f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1046,516f, -997,7623f, 153,6183f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 526:
			uParam1->f_4 = { 2361,193f, 2563,87f, 50,653f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2361,377f, 2563,77f, 195,6504f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 527:
			uParam1->f_4 = { 2228,439f, 5595,11f, 53,047f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2228,511f, 5594,973f, 198,0431f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 528:
			uParam1->f_4 = { 1041,293f, -2980,383f, 4,901f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1041,385f, -2980,493f, 149,901f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 529:
			uParam1->f_4 = { -2975,953f, 728,386f, 28,34f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2975,98f, 728,3309f, 173,3399f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 530:
			uParam1->f_4 = { 1564,093f, 3572,587f, 32,745f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1564,143f, 3572,576f, 177,7401f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 531:
			uParam1->f_4 = { -1376,622f, -1398,935f, 4,628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1376,795f, -1398,847f, 150,8438f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 532:
			uParam1->f_4 = { -1833,113f, 2154,464f, 114,646f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1833,026f, 2154,511f, 260,8618f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 533:
			uParam1->f_4 = { 1730,572f, 4856,538f, 39,628f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1730,67f, 4856,528f, 185,8422f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 534:
			uParam1->f_4 = { 418,192f, -1331,322f, 45,054f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 418,2052f, -1331,248f, 191,2698f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 535:
			uParam1->f_4 = { 248,522f, 3107,336f, 44,924f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 248,511f, 3107,332f, 190,9334f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 536:
			uParam1->f_4 = { 3294,076f, 5188,679f, 17,416f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3294,17f, 5188,587f, 163,4254f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 537:
			uParam1->f_4 = { -987,05f, 4397,283f, 14,945f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -986,8815f, 4396,998f, 159,8712f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 538:
			uParam1->f_4 = { 2702,994f, 3503,466f, 60,526f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2703,048f, 3503,433f, 205,5258f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 539:
			uParam1->f_4 = { 985,286f, -2244,75f, 29,557f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 985,3023f, -2244,744f, 174,5568f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 540:
			uParam1->f_4 = { 2257,649f, 5157,199f, 56,825f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2257,498f, 5157,228f, 201,8318f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 541:
			uParam1->f_4 = { -1057,081f, 834,838f, 165,729f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1057,117f, 834,9001f, 310,7293f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 542:
			uParam1->f_4 = { 473,819f, -2589,012f, 13,461f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 473,68f, -2588,864f, 158,461f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 543:
			uParam1->f_4 = { 69,555f, 6526,386f, 30,576f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 69,5831f, 6526,563f, 176,7918f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 544:
			uParam1->f_4 = { 1390,892f, 2172,039f, 100,532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1390,97f, 2171,999f, 246,7478f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 545:
			uParam1->f_4 = { -238,29f, -1530,307f, 30,486f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -238,3365f, -1530,406f, 176,7018f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 546:
			uParam1->f_4 = { 1350,858f, 6372,605f, 32,21f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1350,847f, 6372,572f, 178,4258f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 547:
			uParam1->f_4 = { -289,799f, 2526,061f, 73,613f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -289,8188f, 2526,115f, 219,8288f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 548:
			uParam1->f_4 = { 384,79f, -1798,908f, 32,015f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 384,7624f, -1798,774f, 178,2308f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 549:
			uParam1->f_4 = { 1300,635f, 6611,277f, 1,215f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1300,758f, 6611,332f, 147,4308f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 550:
			uParam1->f_4 = { 2688,698f, 2878f, 35,041f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2688,731f, 2878,051f, 181,2568f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
		
		case 551:
			uParam1->f_4 = { -482,302f, -428,943f, 56,24f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -482,3047f, -428,8116f, 202,4558f };
			uParam1->f_23 = { 80f, 80f, 300f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1028(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	switch (iParam0)
	{
		case 492:
			uParam1->f_4 = { 1349,434f, -2211,201f, 59,185f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1349,434f, -2211,201f, 59,185f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 493:
			uParam1->f_4 = { 244,666f, -3086,762f, 4,634f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 244,666f, -3086,762f, 4,634f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 494:
			uParam1->f_4 = { 374,023f, -1845,642f, 26,707f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 374,023f, -1845,642f, 26,707f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 495:
			uParam1->f_4 = { 2566,534f, -678,942f, 53,169f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2566,534f, -678,942f, 53,169f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 496:
			uParam1->f_4 = { 1147,377f, -1479,249f, 33,685f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1147,377f, -1479,249f, 33,685f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 497:
			uParam1->f_4 = { -1204,087f, -1340,333f, 3,726f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1204,087f, -1340,333f, 3,726f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 498:
			uParam1->f_4 = { 736,9614f, -328,0111f, 49,2329f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 736,9614f, -328,0111f, 49,2329f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 499:
			uParam1->f_4 = { 1025,344f, 955,4961f, 221,172f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1025,344f, 955,4961f, 221,172f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 500:
			uParam1->f_4 = { 298,837f, 16,626f, 82,075f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 298,837f, 16,626f, 82,075f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 501:
			uParam1->f_4 = { -301,376f, -1106,58f, 22,026f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -301,376f, -1106,58f, 22,026f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 502:
			uParam1->f_4 = { 1321,417f, -725,513f, 64,579f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1321,417f, -725,513f, 64,579f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 503:
			uParam1->f_4 = { 2611,826f, 469,9974f, 104,681f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2611,826f, 469,9974f, 104,681f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 504:
			uParam1->f_4 = { -808,094f, -396,25f, 36,031f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -808,094f, -396,25f, 36,031f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 505:
			uParam1->f_4 = { 150,6398f, 758,6245f, 208,3275f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 150,6398f, 758,6245f, 208,3275f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 506:
			uParam1->f_4 = { -1619,563f, 391,341f, 85,697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1619,563f, 391,341f, 85,697f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 507:
			uParam1->f_4 = { 1756,945f, 6395,202f, 35,4139f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1756,945f, 6395,202f, 35,4139f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 508:
			uParam1->f_4 = { 56,7549f, 6521,598f, 30,4565f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56,7549f, 6521,598f, 30,4565f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 509:
			uParam1->f_4 = { -596,026f, 5753,056f, 34,011f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -596,026f, 5753,056f, 34,011f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 510:
			uParam1->f_4 = { -2259,771f, 4341,076f, 42,849f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2259,771f, 4341,076f, 42,849f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 511:
			uParam1->f_4 = { 135,126f, 4447,888f, 79,167f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 135,126f, 4447,888f, 79,167f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 512:
			uParam1->f_4 = { 1440,967f, 4470,13f, 48,483f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1440,967f, 4470,13f, 48,483f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 513:
			uParam1->f_4 = { 1963,212f, 5083,114f, 39,6153f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1963,212f, 5083,114f, 39,6153f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 514:
			uParam1->f_4 = { 2679,76f, 4341,263f, 44,796f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2679,76f, 4341,263f, 44,796f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 515:
			uParam1->f_4 = { 2183,006f, 3399,342f, 44,527f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2183,006f, 3399,342f, 44,527f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 516:
			uParam1->f_4 = { 1472,324f, 3658,755f, 33,285f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1472,324f, 3658,755f, 33,285f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 517:
			uParam1->f_4 = { 1275,338f, 2629,966f, 36,708f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1275,338f, 2629,966f, 36,708f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 518:
			uParam1->f_4 = { 170,01f, 3214,749f, 41,299f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 170,01f, 3214,749f, 41,299f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 519:
			uParam1->f_4 = { -1700,283f, 2371,03f, 48,2861f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1700,283f, 2371,03f, 48,2861f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 520:
			uParam1->f_4 = { -281,741f, 1958,118f, 162,362f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -281,741f, 1958,118f, 162,362f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
		
		case 521:
			uParam1->f_4 = { 2513,363f, 1969,448f, 18,888f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2513,363f, 1969,448f, 18,888f };
			uParam1->f_23 = { 10f, 10f, 20f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1029(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 8);
	switch (iParam0)
	{
		case 432:
			uParam1->f_4 = { 930,938f, -2985,865f, 4,902f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 930,9051f, -2985,834f, 7,117765f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 433:
			uParam1->f_4 = { 686,271f, 577,686f, 129,462f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 683,8532f, 571,3344f, 126,4614f };
			uParam1->f_23 = { 687,7781f, 581,9451f, 138,4614f };
			uParam1->f_26 = 26f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		
		case 434:
			uParam1->f_4 = { -383,939f, -2672,466f, 5,001f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -375,7137f, -2665,313f, 2,000296f };
			uParam1->f_23 = { -389,1924f, -2679,025f, 16,00022f };
			uParam1->f_26 = 14f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		
		case 435:
			uParam1->f_4 = { -529,086f, -1684,222f, 18,162f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -529,1872f, -1684,504f, 24,37777f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 436:
			uParam1->f_4 = { -971,197f, -1305,371f, 19,805f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -971,147f, -1305,277f, 26,02388f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 437:
			uParam1->f_4 = { -1479,12f, -663,178f, 27,944f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1479,093f, -663,1809f, 30,15976f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 438:
			uParam1->f_4 = { -606,75f, -127,3f, 38,009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -606,7186f, -127,3883f, 42,22477f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 439:
			uParam1->f_4 = { -489,128f, 187,43f, 82,163f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -489,0805f, 188,4146f, 84,66271f };
			uParam1->f_23 = { 9f, 9f, 7,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 440:
			uParam1->f_4 = { -121,642f, -1000,841f, 53,264f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -121,5962f, -1000,928f, 59,47977f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 441:
			uParam1->f_4 = { -477,012f, -1048,3f, 28,111f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -476,2034f, -1048,321f, 33,15062f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 442:
			uParam1->f_4 = { -2210,614f, 201,99f, 173,602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2210,535f, 202,004f, 177,8178f };
			uParam1->f_23 = { 8f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 443:
			uParam1->f_4 = { -3266,001f, 955,427f, 7,353f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3265,769f, 956,6714f, 8,852164f };
			uParam1->f_23 = { 4f, 5f, 4,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 444:
			uParam1->f_4 = { 203,223f, 1198,412f, 230,291f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 204,1984f, 1198,68f, 232,2904f };
			uParam1->f_23 = { 6f, 5f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 445:
			uParam1->f_4 = { 1129,031f, -2074,754f, 30,009f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1128,883f, -2074,139f, 32,11232f };
			uParam1->f_23 = { 8f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 446:
			uParam1->f_4 = { 710,051f, -1221,815f, 23,662f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 709,9984f, -1221,838f, 31,87777f };
			uParam1->f_23 = { 12f, 12f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 447:
			uParam1->f_4 = { -773,23f, -1044,829f, 22,103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -772,9905f, -1045,433f, 25,03213f };
			uParam1->f_23 = { 8f, 8f, 5,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 448:
			uParam1->f_4 = { -945,851f, -1422,691f, 6,68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -945,8654f, -1422,655f, 9,895765f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 449:
			uParam1->f_4 = { -1680,96f, -1144,234f, 12,018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1680,959f, -1144,148f, 16,23376f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 450:
			uParam1->f_4 = { -1500,022f, -333,221f, 44,9f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1500,08f, -333,2999f, 49,11576f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 451:
			uParam1->f_4 = { -1860,242f, 222,527f, 83,294f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1861,147f, 221,5836f, 84,88553f };
			uParam1->f_23 = { 10f, 10f, 4,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 452:
			uParam1->f_4 = { 413,116f, -29,235f, 113,545f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 413,6682f, -29,54296f, 120,6307f };
			uParam1->f_23 = { 12f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 453:
			uParam1->f_4 = { 34,83f, -383,45f, 63,806f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 35,54145f, -383,3248f, 67,84561f };
			uParam1->f_23 = { 7,5f, 7,5f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 454:
			uParam1->f_4 = { 255,416f, -710,354f, 43,686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 255,4533f, -710,2729f, 53,90176f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 455:
			uParam1->f_4 = { 592,18f, -507,294f, 23,749f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592,2883f, -507,1213f, 27,96477f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 456:
			uParam1->f_4 = { 1076,132f, -685,856f, 56,644f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1076,657f, -686,3031f, 60,68362f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 457:
			uParam1->f_4 = { 471,317f, -2645,512f, 4,712f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 471,1914f, -2645,628f, 7,927763f };
			uParam1->f_23 = { 8f, 8f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 458:
			uParam1->f_4 = { -129,316f, -2223,401f, 6,812f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -129,3752f, -2223,397f, 11,02777f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 459:
			uParam1->f_4 = { -89,978f, -1619,276f, 28,561f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -90,02207f, -1619,194f, 31,77677f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 460:
			uParam1->f_4 = { 276,008f, -1094,465f, 51,577f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 276,0785f, -1094,377f, 59,79276f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 461:
			uParam1->f_4 = { -549,746f, -790,459f, 28,327f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -549,791f, -790,4379f, 34,54276f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 462:
			uParam1->f_4 = { -822,68f, -595,052f, 36,197f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -823,3206f, -595,4732f, 41,19666f };
			uParam1->f_23 = { 8f, 8f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 463:
			uParam1->f_4 = { -1220,762f, -498,094f, 30,3f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1220,795f, -498,2372f, 35,50819f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 464:
			uParam1->f_4 = { -178,672f, 53,382f, 66,702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -177,8781f, 53,51821f, 69,70059f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 465:
			uParam1->f_4 = { 852,861f, -1902,551f, 36,09f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 852,8772f, -1902,478f, 42,80576f };
			uParam1->f_23 = { 10f, 10f, 8,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 466:
			uParam1->f_4 = { -510,353f, -2030,173f, 11,433f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -510,2602f, -2029,906f, 17,69487f };
			uParam1->f_23 = { 6f, 6f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 467:
			uParam1->f_4 = { 62,658f, -814,916f, 50,886f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 62,39498f, -815,689f, 57,88592f };
			uParam1->f_23 = { 8f, 8f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 468:
			uParam1->f_4 = { -325,831f, -595,941f, 32,559f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -325,953f, -595,9745f, 37,77476f };
			uParam1->f_23 = { 8f, 8f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 469:
			uParam1->f_4 = { 1083,071f, -231,408f, 56,415f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1078,683f, -239,1982f, 53,72866f };
			uParam1->f_23 = { 1089,179f, -221,7898f, 67,01202f };
			uParam1->f_26 = 11f;
			MISC::SET_BIT(&(uParam1->f_16), 5);
			break;
		
		case 470:
			uParam1->f_4 = { 210,413f, -3323,262f, 4,794f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 210,3148f, -3323,42f, 9,009765f };
			uParam1->f_23 = { 10f, 10f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 471:
			uParam1->f_4 = { -1275,779f, 140,19f, 57,33f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1275,382f, 139,8815f, 61,54577f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 472:
			uParam1->f_4 = { 1306,26f, -1114,417f, 38,5697f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1306,246f, -1114,322f, 42,7855f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 473:
			uParam1->f_4 = { 1430,655f, -965,071f, 46,799f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1431,873f, -967,0405f, 49,8205f };
			uParam1->f_23 = { 8f, 8f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 474:
			uParam1->f_4 = { 939,319f, -2368,1f, 29,532f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939,37f, -2368,138f, 32,24776f };
			uParam1->f_23 = { 10f, 10f, 4,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 475:
			uParam1->f_4 = { -466,422f, -902,717f, 37,689f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -464,9896f, -901,9402f, 41,18874f };
			uParam1->f_23 = { 6f, 6f, 4,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 476:
			uParam1->f_4 = { -3106,299f, 1226,45f, 9,702f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3106,248f, 1226,497f, 14,41776f };
			uParam1->f_23 = { 10f, 10f, 4,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 477:
			uParam1->f_4 = { 593,029f, -2094,036f, 4,753f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 592,5204f, -2093,164f, 7,95219f };
			uParam1->f_23 = { 6f, 9f, 4,2f };
			uParam1->f_26 = 0f;
			break;
		
		case 478:
			uParam1->f_4 = { -153,31f, -1098,898f, 12,118f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -153,3793f, -1098,834f, 22,33376f };
			uParam1->f_23 = { 7f, 7f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 479:
			uParam1->f_4 = { -45,0454f, -343,4405f, 42,8071f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -45,01437f, -343,3614f, 49,02287f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 480:
			uParam1->f_4 = { -891,383f, -1259,071f, 19,875f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -891,2989f, -1258,869f, 28,09076f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 481:
			uParam1->f_4 = { -423,703f, -330,012f, 41,222f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -423,746f, -330,0201f, 51,37157f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 482:
			uParam1->f_4 = { 730,988f, -2650,476f, 5,178f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 731,4402f, -2650,377f, 7,383765f };
			uParam1->f_23 = { 8f, 8f, 4f };
			uParam1->f_26 = 0f;
			break;
		
		case 483:
			uParam1->f_4 = { 900,184f, -1436,454f, 11,174f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 899,5982f, -1435,845f, 18,16083f };
			uParam1->f_23 = { 6f, 6f, 10f };
			uParam1->f_26 = 0f;
			break;
		
		case 484:
			uParam1->f_4 = { -136,243f, -943,827f, 113,252f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -136,9158f, -946,3685f, 116,1366f };
			uParam1->f_23 = { 6f, 6f, 6f };
			uParam1->f_26 = 0f;
			break;
		
		case 485:
			uParam1->f_4 = { -1468,573f, -176,102f, 47,82f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1468,538f, -176,3f, 53,03576f };
			uParam1->f_23 = { 10f, 10f, 7f };
			uParam1->f_26 = 0f;
			break;
		
		case 486:
			uParam1->f_4 = { 472,426f, -850,549f, 25,315f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 472,5545f, -850,2525f, 28,51157f };
			uParam1->f_23 = { 10f, 10f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 487:
			uParam1->f_4 = { 692,847f, -1009,201f, 21,774f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 692,7442f, -1009,966f, 23,76004f };
			uParam1->f_23 = { 9f, 9f, 5f };
			uParam1->f_26 = 0f;
			break;
		
		case 488:
			uParam1->f_4 = { 2523,03f, -191,997f, 74,313f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2523,234f, -191,9221f, 79,00169f };
			uParam1->f_23 = { 6f, 6f, 6,5f };
			uParam1->f_26 = 0f;
			break;
		
		case 489:
			uParam1->f_4 = { 837,865f, -844,449f, 25,336f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 837,7624f, -844,5037f, 31,55177f };
			uParam1->f_23 = { 10f, 10f, 8f };
			uParam1->f_26 = 0f;
			break;
		
		case 490:
			uParam1->f_4 = { -119,004f, -1470,729f, 32,822f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -118,999f, -1470,701f, 34,92577f };
			uParam1->f_23 = { 10f, 10f, 4f };
			uParam1->f_26 = 0f;
			break;
		
		case 491:
			uParam1->f_4 = { 10,9498f, 57,9502f, 70,8541f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 10,98904f, 58,02048f, 78,86353f };
			uParam1->f_23 = { 10f, 10f, 10f };
			uParam1->f_26 = 0f;
			break;
	}
}

void func_1030(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 402:
			uParam1->f_4 = { -1256,478f, -834,671f, 64,331f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1260,381f, -827,6134f, 64,13916f };
			uParam1->f_23 = { -1238,341f, -860,1589f, 145,1225f };
			uParam1->f_26 = 17f;
			break;
		
		case 403:
			uParam1->f_4 = { 228,338f, -3185,367f, 39,469f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 230,0216f, -3137,969f, 37,16509f };
			uParam1->f_23 = { 230,2049f, -3248,131f, 119,6029f };
			uParam1->f_26 = 67f;
			break;
		
		case 404:
			uParam1->f_4 = { -147,57f, -1279,328f, 46,898f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -122,0623f, -1274,618f, 44,34243f };
			uParam1->f_23 = { -173,7991f, -1275,016f, 126,8981f };
			uParam1->f_26 = 35f;
			break;
		
		case 405:
			uParam1->f_4 = { 910,37f, -1681,356f, 50,132f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 941,9596f, -1687,26f, 36,06182f };
			uParam1->f_23 = { 881,2831f, -1681,78f, 126,1416f };
			uParam1->f_26 = 30f;
			break;
		
		case 406:
			uParam1->f_4 = { 934,263f, -938,137f, 58,092f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 927,3521f, -914,6846f, 53,09032f };
			uParam1->f_23 = { 927,3652f, -980,6048f, 138,0957f };
			uParam1->f_26 = 55f;
			break;
		
		case 407:
			uParam1->f_4 = { 84,206f, -350,93f, 66,202f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 56,1851f, -333,0296f, 61,14438f };
			uParam1->f_23 = { 96,68251f, -347,6448f, 146,1444f };
			uParam1->f_26 = 30f;
			break;
		
		case 408:
			uParam1->f_4 = { -1575,921f, 214,739f, 73,338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1596,797f, 198,9028f, 68,83855f };
			uParam1->f_23 = { -1556,021f, 217,9655f, 153,8386f };
			uParam1->f_26 = 39f;
			break;
		
		case 409:
			uParam1->f_4 = { -2262,532f, 368,693f, 187,602f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2261,236f, 353,3083f, 183,667f };
			uParam1->f_23 = { -2272,48f, 378,9598f, 267,6024f };
			uParam1->f_26 = 30f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		
		case 410:
			uParam1->f_4 = { -743,213f, -221,389f, 47,519f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -759,4615f, -226,511f, 43,11855f };
			uParam1->f_23 = { -733,8257f, -215,8577f, 128,1186f };
			uParam1->f_26 = 23f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		
		case 411:
			uParam1->f_4 = { 40,7f, -1777,083f, 46,7f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 33,93224f, -1787,518f, 41,51208f };
			uParam1->f_23 = { 80,86339f, -1730,699f, 126,7003f };
			uParam1->f_26 = 27f;
			break;
		
		case 412:
			uParam1->f_4 = { 847,553f, -2523,74f, 39,525f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 806,3157f, -2519,168f, 36,5355f };
			uParam1->f_23 = { 881,936f, -2524,729f, 127,2971f };
			uParam1->f_26 = 25f;
			break;
		
		case 413:
			uParam1->f_4 = { -398,9756f, -343,3768f, 69,9677f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -416,5431f, -346,0821f, 71,05437f };
			uParam1->f_23 = { -375,17f, -351,4191f, 155,8033f };
			uParam1->f_26 = 25f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		
		case 414:
			uParam1->f_4 = { 77,9442f, -922,8723f, 84,2884f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 107,6461f, -933,997f, 44,6149f };
			uParam1->f_23 = { 54,39706f, -914,7451f, 166,6149f };
			uParam1->f_26 = 85f;
			break;
		
		case 415:
			uParam1->f_4 = { 185,776f, 255,676f, 140,478f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 179,0235f, 227,5602f, 135,9282f };
			uParam1->f_23 = { 200,9801f, 288,2397f, 220,9282f };
			uParam1->f_26 = 28f;
			break;
		
		case 416:
			uParam1->f_4 = { 1240,408f, -2994,69f, 11,164f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1240,566f, -3002,224f, 3,319258f };
			uParam1->f_23 = { 1240,273f, -2950,456f, 88,31926f };
			uParam1->f_26 = 27f;
			break;
		
		case 417:
			uParam1->f_4 = { -137,675f, 6176,477f, 39,165f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -149,8223f, 6160,892f, 35,82255f };
			uParam1->f_23 = { -115,8774f, 6195,789f, 121,9215f };
			uParam1->f_26 = 32f;
			break;
		
		case 418:
			uParam1->f_4 = { 2740,51f, 3474,729f, 72,704f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2722,111f, 3442,816f, 66,5176f };
			uParam1->f_23 = { 2751,01f, 3512,019f, 152,5181f };
			uParam1->f_26 = 27f;
			break;
		
		case 419:
			uParam1->f_4 = { 1710,586f, 4779,984f, 46,585f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1711,055f, 4760,765f, 41,41178f };
			uParam1->f_23 = { 1711,034f, 4790,055f, 127,4129f };
			uParam1->f_26 = 30f;
			break;
		
		case 420:
			uParam1->f_4 = { 590,234f, 2763,851f, 50,145f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 598,3928f, 2744,509f, 44,43517f };
			uParam1->f_23 = { 595,8835f, 2782,835f, 127,9985f };
			uParam1->f_26 = 52f;
			break;
		
		case 421:
			uParam1->f_4 = { 734,51f, 1292,156f, 359,296f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 739,7446f, 1288,609f, 353,2967f };
			uParam1->f_23 = { 769,9889f, 1287,509f, 439,2967f };
			uParam1->f_26 = 55f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		
		case 422:
			uParam1->f_4 = { -1111,574f, 2704,87f, 22,841f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1123,027f, 2693,358f, 17,49279f };
			uParam1->f_23 = { -1098,112f, 2716,403f, 102,4839f };
			uParam1->f_26 = 22f;
			break;
		
		case 423:
			uParam1->f_4 = { 1518,644f, 3578,375f, 41,0232f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1542,941f, 3591,818f, 35,10985f };
			uParam1->f_23 = { 1506,198f, 3570,45f, 121,1119f };
			uParam1->f_26 = 18f;
			break;
		
		case 424:
			uParam1->f_4 = { -1594,487f, 763,167f, 188,194f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1613,787f, 760,4377f, 182,2431f };
			uParam1->f_23 = { -1563,257f, 784,1996f, 275,9496f };
			uParam1->f_26 = 45f;
			break;
		
		case 425:
			uParam1->f_4 = { 250,021f, 3610,677f, 32,931f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 239,7506f, 3564,669f, 27,76138f };
			uParam1->f_23 = { 249,5125f, 3627,261f, 112,5437f };
			uParam1->f_26 = 48f;
			break;
		
		case 426:
			uParam1->f_4 = { 156,196f, 7353,579f, 10,521f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 137,4374f, 7337,537f, 2,219269f };
			uParam1->f_23 = { 177,069f, 7369,922f, 90,69885f };
			uParam1->f_26 = 48f;
			break;
		
		case 427:
			uParam1->f_4 = { 2936,501f, 777,473f, 25,68f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2904,622f, 760,8602f, 12,97041f };
			uParam1->f_23 = { 2959f, 809,2928f, 102,5311f };
			uParam1->f_26 = 48f;
			break;
		
		case 428:
			uParam1->f_4 = { 3623,009f, 5676,726f, 6,772f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3596,06f, 5674,643f, 1,261269f };
			uParam1->f_23 = { 3674,869f, 5651,38f, 102,2014f };
			uParam1->f_26 = 39,25f;
			break;
		
		case 429:
			uParam1->f_4 = { 2373,838f, 6615,34f, 1,1413f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2385,575f, 6643,938f, -11,1034f };
			uParam1->f_23 = { 2372,584f, 6580,026f, 87,70878f };
			uParam1->f_26 = 60f;
			break;
		
		case 430:
			uParam1->f_4 = { -2589,942f, 1884,457f, 170,4919f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2597,961f, 1873,451f, 165,6799f };
			uParam1->f_23 = { -2576,077f, 1892,283f, 250,493f };
			uParam1->f_26 = 20f;
			MISC::SET_BIT(&(uParam1->f_16), 4);
			break;
		
		case 431:
			uParam1->f_4 = { -494,282f, 5289,946f, 79,61f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -512,1506f, 5246,959f, 74,31995f };
			uParam1->f_23 = { -486,8627f, 5314,746f, 166,4803f };
			uParam1->f_26 = 35f;
			break;
	}
}

void func_1031(int iParam0, var uParam1)
{
	MISC::SET_BIT(&(uParam1->f_16), 3);
	MISC::SET_BIT(&(uParam1->f_16), 5);
	switch (iParam0)
	{
		case 382:
			uParam1->f_4 = { 874,777f, 2344,294f, 50,686f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 861,0251f, 2349,384f, 49,64794f };
			uParam1->f_23 = { 881,1734f, 2349,657f, 70,6908f };
			uParam1->f_26 = 30f;
			break;
		
		case 383:
			uParam1->f_4 = { -7,204f, 6199,675f, 38,755f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3,588748f, 6194,031f, 30,69162f };
			uParam1->f_23 = { -18,89411f, 6213,56f, 70,39188f };
			uParam1->f_26 = 45f;
			break;
		
		case 384:
			uParam1->f_4 = { 1991,296f, 5002,771f, 40,41f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1982,497f, 5013,054f, 37,34918f };
			uParam1->f_23 = { 2002,317f, 4990,892f, 70,40779f };
			uParam1->f_26 = 40f;
			break;
		
		case 385:
			uParam1->f_4 = { 1787,863f, 3397,899f, 39,721f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1779,74f, 3394,033f, 36,23817f };
			uParam1->f_23 = { 1803,401f, 3407,283f, 69,5711f };
			uParam1->f_26 = 40f;
			break;
		
		case 386:
			uParam1->f_4 = { -2022,113f, 561,086f, 106,95f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2024,853f, 543,6421f, 106,1676f };
			uParam1->f_23 = { -2018,602f, 575,4886f, 139,3349f };
			uParam1->f_26 = 32f;
			break;
		
		case 387:
			uParam1->f_4 = { 3848,949f, 4749,052f, 4,2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3857,233f, 4736,315f, 2,018371f };
			uParam1->f_23 = { 3841,512f, 4761,041f, 30,14906f };
			uParam1->f_26 = 25f;
			break;
		
		case 388:
			uParam1->f_4 = { 942,1198f, 6940,537f, 4,2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 939,619f, 6925,514f, 1,983978f };
			uParam1->f_23 = { 944,592f, 6954,486f, 29,81213f };
			uParam1->f_26 = 25f;
			break;
		
		case 389:
			uParam1->f_4 = { -757,7433f, 6175,542f, 4,1283f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -771,9074f, 6176,819f, 2,186861f };
			uParam1->f_23 = { -743,0279f, 6174,761f, 30,68049f };
			uParam1->f_26 = 25f;
			break;
		
		case 390:
			uParam1->f_4 = { -1807,144f, 5279,726f, 4,2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -1812,923f, 5266,89f, 2,169169f };
			uParam1->f_23 = { -1800,996f, 5293,814f, 30,28967f };
			uParam1->f_26 = 25f;
			break;
		
		case 391:
			uParam1->f_4 = { -3414,893f, 1565,538f, 4,2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -3428,292f, 1561,292f, 2,13642f };
			uParam1->f_23 = { -3400,509f, 1570,362f, 30,36943f };
			uParam1->f_26 = 25f;
			break;
		
		case 392:
			uParam1->f_4 = { -347,548f, -2421,686f, 1,652f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -359,1149f, -2435,098f, -1,131242f };
			uParam1->f_23 = { -336,0713f, -2407,629f, 26,86958f };
			uParam1->f_26 = 9f;
			break;
		
		case 393:
			uParam1->f_4 = { 1043,372f, -2881,166f, 18,018f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1024,188f, -2880,972f, 15,03582f };
			uParam1->f_23 = { 1063,541f, -2881,016f, 43,03582f };
			uParam1->f_26 = 30f;
			break;
		
		case 394:
			uParam1->f_4 = { 924,896f, -1240,747f, 24,524f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 932,9946f, -1260,574f, 22,68546f };
			uParam1->f_23 = { 912,2214f, -1232,266f, 49,51196f };
			uParam1->f_26 = 30f;
			break;
		
		case 395:
			uParam1->f_4 = { -451,996f, -918,816f, 46,985f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -451,6511f, -935,5438f, 43,98464f };
			uParam1->f_23 = { -452,4876f, -897,9177f, 71,98894f };
			uParam1->f_26 = 25f;
			break;
		
		case 396:
			uParam1->f_4 = { 1147,597f, 124,969f, 80,967f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 1133,214f, 100,1685f, 77,02354f };
			uParam1->f_23 = { 1163,711f, 149,8149f, 104,8858f };
			uParam1->f_26 = 60f;
			break;
		
		case 397:
			uParam1->f_4 = { 673,841f, 1285,48f, 362,103f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 675,8716f, 1288,757f, 356,296f };
			uParam1->f_23 = { 676,0979f, 1276,26f, 384,296f };
			uParam1->f_26 = 30f;
			break;
		
		case 398:
			uParam1->f_4 = { -2316,168f, -1328,555f, 4,2995f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { -2322,772f, -1342,042f, 2,358489f };
			uParam1->f_23 = { -2309,929f, -1315,937f, 30,41694f };
			uParam1->f_26 = 25f;
			break;
		
		case 399:
			uParam1->f_4 = { 2288,262f, -2547,099f, -24,1587f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 2278,695f, -2557,841f, 2,410532f };
			uParam1->f_23 = { 2298,015f, -2536,507f, 30,3815f };
			uParam1->f_26 = 25f;
			break;
		
		case 400:
			uParam1->f_4 = { 3107,64f, 822,0205f, -5,6705f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3117,857f, 811,9422f, 2,199003f };
			uParam1->f_23 = { 3097,107f, 831,8228f, 30,35834f };
			uParam1->f_26 = 25f;
			break;
		
		case 401:
			uParam1->f_4 = { 3430,34f, 2275,244f, -21,7691f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_20 = { 3422,722f, 2263,081f, 2,113419f };
			uParam1->f_23 = { 3438,165f, 2287,443f, 30,34889f };
			uParam1->f_26 = 25f;
			break;
	}
}

void func_1032(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 1:
			*uParam1 = { -1132,019f, -3481,439f, 36,94393f };
			*uParam2 = { -1227,921f, -3426,592f, 136,8073f };
			*uParam3 = 100f;
			break;
		
		case 2:
			*uParam1 = { -1381,35f, -3303,02f, 29,99623f };
			*uParam2 = { -1434,088f, -3272,819f, 130,9934f };
			*uParam3 = 45f;
			break;
		
		case 3:
			*uParam1 = { -2019,949f, 3159,68f, 48,58803f };
			*uParam2 = { -1979,777f, 3229,238f, 156,5891f };
			*uParam3 = 70f;
			break;
		
		case 4:
			*uParam1 = { -1876,744f, 3111,081f, 43,71916f };
			*uParam2 = { -1850,549f, 3156,451f, 148,7225f };
			*uParam3 = 33f;
			break;
		
		case 5:
			*uParam1 = { -2468,442f, 3278,073f, 43,7138f };
			*uParam2 = { -2442,203f, 3323,376f, 148,7309f };
			*uParam3 = 33f;
			break;
	}
}

Vector3 func_1033(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1148,628f, -3403,893f, 12,945f };
			break;
		
		case 2:
			Var0 = { -1391,453f, -3259,564f, 12,9448f };
			break;
		
		case 3:
			Var0 = { -2025,203f, 3150,572f, 31,8103f };
			break;
		
		case 4:
			Var0 = { -1881,584f, 3102,007f, 31,8103f };
			break;
		
		case 5:
			Var0 = { -2473,68f, 3267,99f, 31,8461f };
			break;
	}
	return Var0;
}

Vector3 func_1034(int iParam0)
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 1:
			Var0 = { -1152,431f, -3410,42f, 12,945f };
			break;
		
		case 2:
			Var0 = { -1395,358f, -3266,353f, 12,9448f };
			break;
		
		case 3:
			Var0 = { -2020,971f, 3157,293f, 31,8103f };
			break;
		
		case 4:
			Var0 = { -1877,766f, 3108,921f, 31,8103f };
			break;
		
		case 5:
			Var0 = { -2469,717f, 3275,254f, 31,8325f };
			break;
	}
	return Var0;
}

int func_1035(var uParam0)
{
	return func_387(func_1036(&uParam0));
}

int func_1036(var uParam0)
{
	if ((func_953(uParam0) || *uParam0 == 761) || *uParam0 == 762)
	{
		switch (*uParam0)
		{
			case 377:
				return 83;
			
			case 378:
				return 84;
			
			case 379:
				return 85;
			
			case 380:
				return 86;
			
			case 381:
				return 87;
			
			case 761:
				return 83;
			
			case 762:
				return 84;
			}
		
		default:
	}
	return -1;
}

void func_1037(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 4)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (((((((iParam1 == 6 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1038(int iParam0)
{
	switch (func_943(&iParam0))
	{
		case 24:
			return 1;
		
		default:
	}
	if (func_953(&iParam0))
	{
		return 1;
	}
	return 0;
}

struct<27> func_1039(int iParam0)
{
	struct<27> Var0;
	int iVar27;
	int iVar28;
	
	iVar27 = func_963(&iParam0);
	if (func_964(&iParam0))
	{
		StringCopy(&(Var0.f_8), "GB_GUNRUNNING_DELIVERY", 32);
		Var0.f_18 = 232598;
		Var0.f_19 = 232548;
		Var0.f_3 = 5f;
		Var0.f_7 = 10f;
		if (func_1066(&iParam0))
		{
			Var0 = { Global_1946934.f_1010[func_1065(&iParam0) /*3*/] };
			Var0.f_4 = { func_1061(func_1063(iParam0), 0) };
			iVar28 = PLAYER::PLAYER_PED_ID();
			switch (func_1049(&iVar28))
			{
				case 4:
					Var0.f_17 = 2;
					func_1049(&iVar28);
					break;
				
				case 1:
					Var0.f_17 = 1;
					break;
				
				case 3:
					Var0.f_17 = 3;
					if (func_1048(&iVar28) || func_1046(&iVar28))
					{
						Var0.f_17 = 4;
					}
					break;
			}
		}
		else
		{
			switch (iVar27)
			{
				case 17:
					Var0.f_17 = 5;
					func_1045(iParam0, &Var0);
					break;
				
				case 18:
					Var0.f_17 = 6;
					func_1044(iParam0, &Var0);
					Var0.f_7 = 15f;
					break;
				
				case 15:
					Var0.f_17 = 7;
					func_1043(iParam0, &Var0);
					Var0.f_7 = 7,5f;
					break;
				
				case 14:
					Var0.f_17 = 10;
					func_1042(iParam0, &Var0);
					break;
				
				case 16:
					Var0.f_17 = 8;
					func_1041(iParam0, &Var0);
					break;
				
				case 19:
					Var0.f_17 = 9;
					func_1040(iParam0, &Var0);
					break;
				}
			}
	}
	return Var0;
}

void func_1040(int iParam0, var uParam1)
{
	if (iParam0 > 256)
	{
		switch (iParam0)
		{
			case 307:
				uParam1->f_4 = { -115,4032f, 1416,123f, 294,134f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 308:
				uParam1->f_4 = { 156,6951f, 703,3265f, 207,1029f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 309:
				uParam1->f_4 = { 2538,239f, -199,7805f, 72,551f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 310:
				uParam1->f_4 = { 659,4763f, -491,1226f, 14,688f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 311:
				uParam1->f_4 = { 1411,413f, 1051,715f, 113,3343f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 312:
				uParam1->f_4 = { -583,498f, -1453,726f, 9,2096f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 313:
				uParam1->f_4 = { 1582,181f, -2009,475f, 92,7024f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 314:
				uParam1->f_4 = { 1563,969f, -2677,09f, 36,8862f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 315:
				uParam1->f_4 = { 1110,337f, -3080,767f, 4,8473f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 316:
				uParam1->f_4 = { 369,0472f, -2431,285f, 5,0417f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 317:
				uParam1->f_4 = { -758,4178f, -2595,934f, 12,8285f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 318:
				uParam1->f_4 = { 732,8478f, -1518,746f, 18,7068f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 319:
				uParam1->f_4 = { -815,6332f, -1819,319f, 27,6752f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 320:
				uParam1->f_4 = { 1234,662f, -2689,25f, 1,4614f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 321:
				uParam1->f_4 = { 271,8187f, -2501,891f, 5,4403f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 322:
				uParam1->f_4 = { 395,6607f, 32,3907f, 90,4966f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 323:
				uParam1->f_4 = { -1049,013f, -89,9484f, 42,5869f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 324:
				uParam1->f_4 = { 1345,963f, -1025,396f, 38,9002f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 325:
				uParam1->f_4 = { -1630,345f, -1124,862f, 1,0889f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 326:
				uParam1->f_4 = { 5,3001f, -1102,714f, 37,152f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 327:
				uParam1->f_4 = { 613,4843f, -1108,784f, 9,1824f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 328:
				uParam1->f_4 = { -350,6446f, -1188,939f, 21,9375f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 329:
				uParam1->f_4 = { 2486,714f, -1989,521f, 66,1648f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 330:
				uParam1->f_4 = { 610,8346f, -2850,166f, 2,095f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 331:
				uParam1->f_4 = { 508,5753f, -2309,013f, 4,9173f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 332:
				uParam1->f_4 = { 865,9128f, 831,9396f, 167,0572f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 333:
				uParam1->f_4 = { 438,3826f, 790,9186f, 193,4617f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 334:
				uParam1->f_4 = { 2174,23f, 129,0715f, 227,4601f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 335:
				uParam1->f_4 = { -430,7544f, -566,5062f, 26,6955f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 336:
				uParam1->f_4 = { 820,8608f, -487,1843f, 29,3492f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 337:
				uParam1->f_4 = { -927,1212f, -754,834f, 18,7713f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 338:
				uParam1->f_4 = { 2826,007f, -744,9128f, 16,3986f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 339:
				uParam1->f_4 = { -347,0302f, -1714,736f, 0,1588f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 340:
				uParam1->f_4 = { 1165,333f, -2217,156f, 29,818f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 341:
				uParam1->f_4 = { 732,7329f, -724,3032f, 25,5982f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 342:
				uParam1->f_4 = { -534,8953f, -893,4067f, 23,3456f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 343:
				uParam1->f_4 = { -1483,8f, -1478,867f, 1,5746f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 344:
				uParam1->f_4 = { 660,1437f, -1662,937f, 8,7057f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 345:
				uParam1->f_4 = { 756,9075f, -2560,279f, 9,1108f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 346:
				uParam1->f_4 = { -688,3148f, -2474,599f, 12,8285f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 347:
				uParam1->f_4 = { -344,8739f, 1373,627f, 339,4823f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 348:
				uParam1->f_4 = { 679,5253f, 1213,034f, 323,3946f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 349:
				uParam1->f_4 = { 402,2882f, 1033,397f, 236,317f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 350:
				uParam1->f_4 = { 1994,461f, 497,7719f, 162,3902f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 351:
				uParam1->f_4 = { -71,2453f, 184,6311f, 86,3855f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			
			case 352:
				uParam1->f_4 = { -423,4632f, 865,8475f, 233,0571f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 353:
				uParam1->f_4 = { -1040,682f, 918,1884f, 168,968f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 354:
				uParam1->f_4 = { -1540,535f, 332,4937f, 84,6292f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 355:
				uParam1->f_4 = { -1984,656f, -248,1744f, 33,4115f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 356:
				uParam1->f_4 = { -359,8619f, -92,1446f, 44,662f };
				*uParam1 = { uParam1->f_4 };
				uParam1->f_7 = 15f;
				break;
			}
	}
	switch (iParam0)
	{
		case 257:
			uParam1->f_4 = { 2347,526f, 5563,68f, 38,5584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 258:
			uParam1->f_4 = { 2732,712f, 5221,74f, 50,1412f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 259:
			uParam1->f_4 = { -203,4516f, 4426,908f, 45,1766f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 260:
			uParam1->f_4 = { 1402,941f, 2107,932f, 104,4429f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 261:
			uParam1->f_4 = { 1913,308f, 3726,871f, 31,4625f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 262:
			uParam1->f_4 = { 77,0293f, 7077,308f, 0,9681f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 263:
			uParam1->f_4 = { 1468,96f, 4947,473f, 75,1823f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 264:
			uParam1->f_4 = { -126,1526f, 3546,554f, 55,0922f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 265:
			uParam1->f_4 = { 1063,111f, 3275,501f, 36,6055f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 266:
			uParam1->f_4 = { -509,5927f, 5242,972f, 79,304f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 267:
			uParam1->f_4 = { 2351,059f, 5001,8f, 41,7707f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 268:
			uParam1->f_4 = { 1824,454f, 4733,53f, 32,5693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 269:
			uParam1->f_4 = { -1844,69f, 4556,438f, 4,9786f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 270:
			uParam1->f_4 = { -1376,324f, 4413,688f, 28,537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 271:
			uParam1->f_4 = { -18,1656f, 6261,238f, 30,2358f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 272:
			uParam1->f_4 = { 570,2625f, 4177,667f, 37,1188f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 273:
			uParam1->f_4 = { -445,1836f, 4015,951f, 80,0153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 274:
			uParam1->f_4 = { 1440,298f, 2804,806f, 51,8026f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 275:
			uParam1->f_4 = { -2103,897f, 2473,496f, 0,5534f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 276:
			uParam1->f_4 = { -80,3433f, 1879,382f, 196,2338f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 277:
			uParam1->f_4 = { -494,58f, 5547,659f, 72,4075f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 278:
			uParam1->f_4 = { 1262,87f, 4384,995f, 43,9866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 279:
			uParam1->f_4 = { 825,5037f, 2137,788f, 51,2936f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 280:
			uParam1->f_4 = { -2911,529f, 1592,034f, 28,2507f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 281:
			uParam1->f_4 = { -1658,676f, 3045,86f, 30,8135f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 282:
			uParam1->f_4 = { 813,8033f, 6638,829f, 1,0195f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 283:
			uParam1->f_4 = { 143,9241f, 6317,533f, 30,474f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 284:
			uParam1->f_4 = { -291,3325f, 6303,275f, 30,4923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 285:
			uParam1->f_4 = { -575,9571f, 5846,869f, 28,8116f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 286:
			uParam1->f_4 = { 2515,608f, 4962,869f, 43,5619f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 287:
			uParam1->f_4 = { 2900,887f, 4637,51f, 47,5426f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 288:
			uParam1->f_4 = { 1993,716f, 3934,452f, 31,23f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 289:
			uParam1->f_4 = { 124,3457f, 3004,625f, 47,3517f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 290:
			uParam1->f_4 = { 754,0544f, 2336,919f, 49,0994f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 291:
			uParam1->f_4 = { 2746,92f, 1444,504f, 23,4889f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 292:
			uParam1->f_4 = { 1550,989f, 6543,894f, 21,4149f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 293:
			uParam1->f_4 = { 993,5634f, 6403,824f, 28,4137f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 294:
			uParam1->f_4 = { 1623,713f, 3783,464f, 33,652f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 295:
			uParam1->f_4 = { 2623,721f, 1971,464f, 29,141f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 296:
			uParam1->f_4 = { 2899,761f, 4382,502f, 49,3713f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 297:
			uParam1->f_4 = { 2581,925f, 5608,749f, 59,9163f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 298:
			uParam1->f_4 = { 2236,698f, 4785,659f, 39,1814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 299:
			uParam1->f_4 = { 1158,342f, 4584,417f, 73,9566f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 300:
			uParam1->f_4 = { 1495,8f, 4599,003f, 50,9645f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 301:
			uParam1->f_4 = { 1988,47f, 3033,79f, 46,0563f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
		
		case 302:
			uParam1->f_4 = { -1640,253f, 4581,037f, 41,8798f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 303:
			uParam1->f_4 = { 2607,227f, 4441,909f, 39,0584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 304:
			uParam1->f_4 = { -1204,787f, 4448,327f, 30,2424f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 305:
			uParam1->f_4 = { -2302,336f, 4116,885f, 27,3913f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 306:
			uParam1->f_4 = { 468,1049f, 3546,374f, 32,2386f };
			*uParam1 = { uParam1->f_4 };
			uParam1->f_7 = 15f;
			break;
	}
	if (((((((((((((((((((iParam0 != 261 && iParam0 != 266) && iParam0 != 271) && iParam0 != 276) && iParam0 != 281) && iParam0 != 286) && iParam0 != 291) && iParam0 != 296) && iParam0 != 301) && iParam0 != 306) && iParam0 != 311) && iParam0 != 316) && iParam0 != 321) && iParam0 != 326) && iParam0 != 331) && iParam0 != 336) && iParam0 != 341) && iParam0 != 346) && iParam0 != 351) && iParam0 != 356)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_1041(int iParam0, var uParam1)
{
	if (iParam0 > 156)
	{
		switch (iParam0)
		{
			case 207:
				uParam1->f_4 = { -2191,674f, 904,894f, 228,613f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 208:
				uParam1->f_4 = { -2512,552f, 761,624f, 300,404f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 209:
				uParam1->f_4 = { -2554,847f, 279,211f, 184,89f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 210:
				uParam1->f_4 = { -2267,61f, -26,611f, 111,309f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 211:
				uParam1->f_4 = { -1705,979f, -82,071f, 79,054f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 212:
				uParam1->f_4 = { 2581,854f, -775,529f, 84,981f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 213:
				uParam1->f_4 = { 2155,905f, -1111,007f, 172,283f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 214:
				uParam1->f_4 = { 2048,335f, -1619,833f, 234,082f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 215:
				uParam1->f_4 = { 1880,627f, -1864,139f, 192,18f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 216:
				uParam1->f_4 = { 1827,189f, -2349,425f, 146,409f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 217:
				uParam1->f_4 = { 1893,68f, -885,746f, 117,794f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 218:
				uParam1->f_4 = { 1495,998f, -1275,113f, 121,534f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 219:
				uParam1->f_4 = { 1269,73f, -941,188f, 77,584f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 220:
				uParam1->f_4 = { 1582,159f, -635,642f, 147,727f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 221:
				uParam1->f_4 = { 1841,793f, -237,63f, 293,53f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 222:
				uParam1->f_4 = { 2216,092f, 246,356f, 258,916f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 223:
				uParam1->f_4 = { 2205,155f, 591,884f, 261,37f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 224:
				uParam1->f_4 = { 2089,61f, 971,773f, 213,314f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 225:
				uParam1->f_4 = { 1885,172f, 997,583f, 274,815f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 226:
				uParam1->f_4 = { 1830,645f, 1496,993f, 119,015f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 227:
				uParam1->f_4 = { 1050,058f, 1020,909f, 249,595f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 228:
				uParam1->f_4 = { 1311,87f, 720,812f, 85,503f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 229:
				uParam1->f_4 = { 1619,17f, 450,971f, 250,382f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 230:
				uParam1->f_4 = { 1589,916f, 95,761f, 209,272f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 231:
				uParam1->f_4 = { 1169,067f, -147,911f, 55,814f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 232:
				uParam1->f_4 = { 980,968f, 716,382f, 192,186f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 233:
				uParam1->f_4 = { 822,654f, 1314,468f, 362,31f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 234:
				uParam1->f_4 = { 358,749f, 1186,109f, 266,835f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 235:
				uParam1->f_4 = { 409,162f, 712,279f, 196,507f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 236:
				uParam1->f_4 = { 568,269f, 431,24f, 171,505f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 237:
				uParam1->f_4 = { 442,851f, 1711,104f, 258,1f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 238:
				uParam1->f_4 = { 489,231f, 1446,313f, 350,169f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 239:
				uParam1->f_4 = { -39,039f, 1563,259f, 297,352f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 240:
				uParam1->f_4 = { -96,733f, 1265,517f, 302,811f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 241:
				uParam1->f_4 = { 186,677f, 1038,29f, 243,259f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 242:
				uParam1->f_4 = { 125,427f, 1435,429f, 261,481f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 243:
				uParam1->f_4 = { -471,373f, 1525,389f, 390,228f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 244:
				uParam1->f_4 = { -891,67f, 1297,359f, 300,137f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 245:
				uParam1->f_4 = { -1022,612f, 1641,04f, 258,438f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 246:
				uParam1->f_4 = { -1363,53f, 1662,061f, 176,57f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 247:
				uParam1->f_4 = { -1135,81f, 1901,406f, 175,34f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 248:
				uParam1->f_4 = { -1043,954f, 1592,751f, 265,3f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 249:
				uParam1->f_4 = { -1289,223f, 1127,897f, 280,162f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 250:
				uParam1->f_4 = { -1547,309f, 724,521f, 202,398f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 251:
				uParam1->f_4 = { -1766,17f, 613,099f, 179,457f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 252:
				uParam1->f_4 = { -1616,113f, 794,88f, 184,868f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 253:
				uParam1->f_4 = { -1948,807f, 1081,29f, 256,194f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 254:
				uParam1->f_4 = { -2354,82f, 1293,149f, 330,953f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 255:
				uParam1->f_4 = { -1947,759f, 1503,9f, 269,274f };
				*uParam1 = { uParam1->f_4 };
				break;
			
			case 256:
				uParam1->f_4 = { -1736,649f, 1771,232f, 197,702f };
				*uParam1 = { uParam1->f_4 };
				break;
			}
	}
	switch (iParam0)
	{
		case 157:
			uParam1->f_4 = { 2166,96f, 5773,108f, 176,947f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 158:
			uParam1->f_4 = { 1794,606f, 5805,495f, 334,124f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 159:
			uParam1->f_4 = { 1311,736f, 5810,9f, 471,065f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 160:
			uParam1->f_4 = { 803,115f, 5696,31f, 696,74f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 161:
			uParam1->f_4 = { 505,028f, 5524,13f, 775,336f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 162:
			uParam1->f_4 = { 2678,877f, 2657,504f, 81,457f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 163:
			uParam1->f_4 = { 2950,072f, 2508,028f, 163,35f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 164:
			uParam1->f_4 = { 2802,67f, 2057,809f, 123,411f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 165:
			uParam1->f_4 = { 2383,232f, 1815,577f, 90,89f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 166:
			uParam1->f_4 = { 2119,979f, 1718,67f, 100,1659f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 167:
			uParam1->f_4 = { 2985,565f, 4871,652f, 126,073f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 168:
			uParam1->f_4 = { 3193,98f, 4728,654f, 191,278f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 169:
			uParam1->f_4 = { 3443,923f, 4200,008f, 239,302f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 170:
			uParam1->f_4 = { 3090,46f, 3505,364f, 122,488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 171:
			uParam1->f_4 = { 2956,266f, 3130,24f, 170,545f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 172:
			uParam1->f_4 = { -114,5166f, 4366,305f, 66,5739f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 173:
			uParam1->f_4 = { -389,1314f, 4714,173f, 262,0202f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 174:
			uParam1->f_4 = { -927,3663f, 4830,777f, 308,1317f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 175:
			uParam1->f_4 = { -947,983f, 4616,67f, 238,343f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 176:
			uParam1->f_4 = { -1193,135f, 4791,787f, 219,39f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 177:
			uParam1->f_4 = { -547,3558f, 3063,189f, 41,6977f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 178:
			uParam1->f_4 = { -788,8897f, 3439,263f, 163,2574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 179:
			uParam1->f_4 = { -693,747f, 3633,733f, 290,969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 180:
			uParam1->f_4 = { -524,5084f, 3545,819f, 235,8375f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 181:
			uParam1->f_4 = { -299,48f, 3403,149f, 143,3759f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 182:
			uParam1->f_4 = { -757,9035f, 3107,519f, 87,9309f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 183:
			uParam1->f_4 = { -936,9541f, 3343,828f, 214,99f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 184:
			uParam1->f_4 = { -976,6102f, 3827,846f, 428,4182f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 185:
			uParam1->f_4 = { -1172,518f, 3833,279f, 483,9537f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 186:
			uParam1->f_4 = { -1296,6f, 3683,431f, 425,8118f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 187:
			uParam1->f_4 = { 1806,788f, 6509,859f, 69,7009f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 188:
			uParam1->f_4 = { 2136,818f, 6427,576f, 153,6458f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 189:
			uParam1->f_4 = { 2412,896f, 6475,143f, 72,3587f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 190:
			uParam1->f_4 = { 2827,761f, 5967,506f, 350,351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 191:
			uParam1->f_4 = { 3061,18f, 5557,61f, 195,6185f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 192:
			uParam1->f_4 = { 2626,258f, 3660,501f, 100,4183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 193:
			uParam1->f_4 = { 1727,974f, 3046,818f, 58,9817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 194:
			uParam1->f_4 = { 537,097f, 3362,167f, 98,3086f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 195:
			uParam1->f_4 = { -314,4719f, 3789,605f, 67,1712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 196:
			uParam1->f_4 = { -544,3684f, 4198,801f, 191,2337f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 197:
			uParam1->f_4 = { -1634,461f, 1987,978f, 114,3933f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 198:
			uParam1->f_4 = { -1946,999f, 1558,013f, 268,019f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 199:
			uParam1->f_4 = { -2367,749f, 1294,907f, 331,8613f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 200:
			uParam1->f_4 = { -2725,23f, 1248,93f, 132,6765f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 201:
			uParam1->f_4 = { -3247,449f, 1246,809f, 1,6992f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 202:
			uParam1->f_4 = { 2487,351f, 5210,566f, 70,7697f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 203:
			uParam1->f_4 = { 2153,843f, 5382,093f, 164,5574f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 204:
			uParam1->f_4 = { 1663,681f, 5156,728f, 152,0881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 205:
			uParam1->f_4 = { 1398,803f, 5181,02f, 224,986f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 206:
			uParam1->f_4 = { 862,0489f, 5172,775f, 456,8228f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if (((((((((((((((((((iParam0 != 161 && iParam0 != 166) && iParam0 != 171) && iParam0 != 176) && iParam0 != 181) && iParam0 != 186) && iParam0 != 191) && iParam0 != 196) && iParam0 != 201) && iParam0 != 206) && iParam0 != 211) && iParam0 != 216) && iParam0 != 221) && iParam0 != 226) && iParam0 != 231) && iParam0 != 236) && iParam0 != 241) && iParam0 != 246) && iParam0 != 251) && iParam0 != 256)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_1042(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 92:
			uParam1->f_4 = { 2875,468f, 2806,367f, 53,7213f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 93:
			uParam1->f_4 = { 1052,251f, 2670,066f, 38,551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 94:
			uParam1->f_4 = { -833,729f, 1714,583f, 191,577f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 95:
			uParam1->f_4 = { -2653,676f, 2422,161f, 3,925f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 96:
			uParam1->f_4 = { -3048,342f, 602,2847f, 6,2691f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 97:
			uParam1->f_4 = { 1068,72f, 3588,034f, 30,602f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 98:
			uParam1->f_4 = { 138,118f, 3119,263f, 41,636f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 99:
			uParam1->f_4 = { -1285,809f, 2593,409f, 11,3524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 100:
			uParam1->f_4 = { -2417,672f, 4110,082f, 17,934f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 101:
			uParam1->f_4 = { -292,009f, 6130,332f, 30,501f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 102:
			uParam1->f_4 = { -140,7524f, 6356,994f, 30,4906f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 103:
			uParam1->f_4 = { 1449,218f, 6579,69f, 11,894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 104:
			uParam1->f_4 = { 2399,676f, 4911,915f, 41,464f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 105:
			uParam1->f_4 = { 1706,076f, 3872,908f, 33,904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 106:
			uParam1->f_4 = { 435,271f, 3522,796f, 32,626f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 107:
			uParam1->f_4 = { 1187,571f, 6561,227f, 1,997f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 108:
			uParam1->f_4 = { 2486,772f, 4816,758f, 33,768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 109:
			uParam1->f_4 = { 1488,547f, 3701,168f, 33,382f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 110:
			uParam1->f_4 = { 1522,554f, 1669,512f, 109,698f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 111:
			uParam1->f_4 = { 2309,18f, 2518,352f, 45,667f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 112:
			uParam1->f_4 = { 1095,315f, 2109,932f, 52,42f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 113:
			uParam1->f_4 = { 1376,68f, 3599,511f, 33,881f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 114:
			uParam1->f_4 = { 2952,854f, 4253,191f, 52,768f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 115:
			uParam1->f_4 = { 2263,006f, 5612,513f, 53,817f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 116:
			uParam1->f_4 = { 1465,186f, 6356f, 22,836f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 117:
			uParam1->f_4 = { 1929,979f, 4642,605f, 39,444f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 118:
			uParam1->f_4 = { 1803,659f, 3731,653f, 32,819f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 119:
			uParam1->f_4 = { 1034,936f, 2514,938f, 45,828f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 120:
			uParam1->f_4 = { 1215,731f, 1819,276f, 77,957f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 121:
			uParam1->f_4 = { 2700,918f, 1559,111f, 23,527f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 122:
			uParam1->f_4 = { 186,915f, 3056,921f, 41,959f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 123:
			uParam1->f_4 = { -124,3542f, 1883,494f, 196,7805f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 124:
			uParam1->f_4 = { 1433,62f, 1182,607f, 113,194f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 125:
			uParam1->f_4 = { 2077,199f, 2340,758f, 93,3144f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 126:
			uParam1->f_4 = { 2869,919f, 4711,485f, 47,8156f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 127:
			uParam1->f_4 = { -3196,817f, 962,4005f, 17,1183f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 128:
			uParam1->f_4 = { -3043,259f, 133,9678f, 10,6028f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 129:
			uParam1->f_4 = { -1657,024f, -224,0322f, 54,0132f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 130:
			uParam1->f_4 = { -1065,002f, -1443,479f, 4,4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 131:
			uParam1->f_4 = { 37,752f, -1608,548f, 28,357f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 132:
			uParam1->f_4 = { -1174,63f, -735,4771f, 19,2095f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 133:
			uParam1->f_4 = { -1336,968f, -1297,628f, 3,838f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 134:
			uParam1->f_4 = { 372,931f, -2132,614f, 15,2837f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 135:
			uParam1->f_4 = { 164,893f, -981,952f, 29,092f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 136:
			uParam1->f_4 = { -633,342f, -71,931f, 39,44f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 137:
			uParam1->f_4 = { -3109,526f, 221,046f, 5,814f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 138:
			uParam1->f_4 = { -1917,599f, 629,539f, 124,01f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 139:
			uParam1->f_4 = { -1291,788f, -268,334f, 38,298f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 140:
			uParam1->f_4 = { -97,476f, 91,144f, 70,777f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 141:
			uParam1->f_4 = { 860,49f, -916,962f, 24,923f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 142:
			uParam1->f_4 = { 1359,713f, 1147,29f, 113,3128f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 143:
			uParam1->f_4 = { 643,5014f, 195,1281f, 95,1524f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 144:
			uParam1->f_4 = { 477,2894f, -1158,148f, 28,2918f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 145:
			uParam1->f_4 = { 12,1334f, -1742,4f, 28,3029f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 146:
			uParam1->f_4 = { 946,0427f, -2185,876f, 29,5616f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 147:
			uParam1->f_4 = { -672,3598f, -1823,936f, 27,8611f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 148:
			uParam1->f_4 = { 18,1799f, -2485,081f, 5,0068f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 149:
			uParam1->f_4 = { 1096,543f, -3142,269f, 4,9008f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 150:
			uParam1->f_4 = { 1129,265f, -2382,284f, 30,2488f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 151:
			uParam1->f_4 = { 1735,333f, -1431,009f, 111,637f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 152:
			uParam1->f_4 = { 313,451f, -2022,135f, 19,4894f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 153:
			uParam1->f_4 = { 1142,636f, -2511,395f, 32,2916f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 154:
			uParam1->f_4 = { 1687,536f, -1583,242f, 111,5227f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 155:
			uParam1->f_4 = { 1374,894f, -739,6987f, 66,2329f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 156:
			uParam1->f_4 = { 1902,062f, 418,819f, 162,108f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
	if ((((((((((((iParam0 != 96 && iParam0 != 101) && iParam0 != 106) && iParam0 != 111) && iParam0 != 116) && iParam0 != 121) && iParam0 != 126) && iParam0 != 131) && iParam0 != 136) && iParam0 != 141) && iParam0 != 146) && iParam0 != 151) && iParam0 != 156)
	{
		MISC::SET_BIT(&(uParam1->f_16), 2);
	}
}

void func_1043(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 72:
			uParam1->f_4 = { -227,4169f, 2062,385f, 138,4856f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 73:
			uParam1->f_4 = { 2772,322f, 2845,964f, 34,8882f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 74:
			uParam1->f_4 = { 2989,183f, 3466,004f, 70,351f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 75:
			uParam1->f_4 = { -2666,346f, 3455,672f, 14,1713f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 76:
			uParam1->f_4 = { 1492,691f, 3579,083f, 34,2291f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 77:
			uParam1->f_4 = { -2379,711f, 4278,755f, 9,1551f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 78:
			uParam1->f_4 = { 2500,738f, 4294,372f, 38,1973f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case joaat("mpsv_lp0_31"):
			uParam1->f_4 = { -1848,626f, 4419,534f, 48,1508f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 80:
			uParam1->f_4 = { -1566,002f, 4485,896f, 20,2007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 81:
			uParam1->f_4 = { -386,5953f, 6380,837f, 13,0622f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 82:
			uParam1->f_4 = { 1186,324f, -3241,427f, 5,0288f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 83:
			uParam1->f_4 = { 210,987f, -3127,62f, 4,7903f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 84:
			uParam1->f_4 = { 302,8576f, -2857,04f, 5,0245f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 85:
			uParam1->f_4 = { 1635,403f, -2370,956f, 92,9864f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 86:
			uParam1->f_4 = { 853,4637f, -2437,818f, 26,9939f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 87:
			uParam1->f_4 = { -1226,498f, -2393,574f, 12,9452f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		
		case 88:
			uParam1->f_4 = { 900,6783f, -1736,104f, 29,4254f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 89:
			uParam1->f_4 = { 1737,746f, -1534,781f, 111,6664f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 90:
			uParam1->f_4 = { 485,929f, -1394,48f, 28,2951f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 91:
			uParam1->f_4 = { -146,8984f, -1347,38f, 28,6772f };
			*uParam1 = { uParam1->f_4 };
			break;
			break;
	}
}

void func_1044(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 367:
			uParam1->f_4 = { -725,8421f, -2213,141f, 5,003f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 368:
			uParam1->f_4 = { -315,874f, -2552,008f, 5,0006f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 369:
			uParam1->f_4 = { 144,4716f, -2807,349f, 5,0002f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 370:
			uParam1->f_4 = { 1142,307f, -3277,464f, 4,9007f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 371:
			uParam1->f_4 = { 791,4049f, -2482,021f, 19,9127f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 372:
			uParam1->f_4 = { -34,7159f, -2418,303f, 5f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 373:
			uParam1->f_4 = { -947,4313f, -3531,936f, 13,0788f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		
		case 374:
			uParam1->f_4 = { 1482,078f, -2436,562f, 65,2259f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 375:
			uParam1->f_4 = { 821,9077f, -2937,065f, 4,9042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 376:
			uParam1->f_4 = { -1157,331f, -2885,625f, 12,9456f };
			*uParam1 = { uParam1->f_4 };
			MISC::SET_BIT(&(uParam1->f_16), 0);
			break;
		
		case 357:
			uParam1->f_4 = { -2884,53f, 3492,161f, 8,2728f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 358:
			uParam1->f_4 = { 1840,318f, 1813,824f, 66,5145f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 359:
			uParam1->f_4 = { 2074,879f, 4605,449f, 34,5385f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 360:
			uParam1->f_4 = { 2801,846f, 4749,39f, 45,4179f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 361:
			uParam1->f_4 = { 2766,352f, 1700,96f, 23,7017f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 362:
			uParam1->f_4 = { -1543,172f, 2856,046f, 30,1456f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 363:
			uParam1->f_4 = { -3131f, 1284,291f, 19,8153f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 364:
			uParam1->f_4 = { -564,372f, 6363,489f, 2,2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 365:
			uParam1->f_4 = { 754,9817f, 6609,063f, 1,3558f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 366:
			uParam1->f_4 = { 1026,274f, 4338,423f, 40,0694f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

void func_1045(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 12:
			uParam1->f_4 = { 17,2985f, 6579,499f, 31,3584f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 13:
			uParam1->f_4 = { 408,3282f, 6611,388f, 26,876f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 14:
			uParam1->f_4 = { 21,6079f, 6516,493f, 30,4948f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 15:
			uParam1->f_4 = { -206,043f, 6455,797f, 30,1761f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 16:
			uParam1->f_4 = { -225,5175f, 6436,706f, 30,1974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 17:
			uParam1->f_4 = { -128,7701f, 6342,206f, 30,4904f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 18:
			uParam1->f_4 = { -353,8975f, 6334,597f, 28,8339f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 19:
			uParam1->f_4 = { -315,1533f, 6312,473f, 31,3387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 20:
			uParam1->f_4 = { -433,5699f, 6260,372f, 29,2542f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 21:
			uParam1->f_4 = { -258,5444f, 6223,631f, 30,4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 22:
			uParam1->f_4 = { -274,8564f, 6170,648f, 30,4898f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 23:
			uParam1->f_4 = { -441,0088f, 6144,66f, 30,4783f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 24:
			uParam1->f_4 = { 2244,295f, 5175,046f, 59,1204f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 25:
			uParam1->f_4 = { 2011,648f, 4969,727f, 40,5599f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 26:
			uParam1->f_4 = { 2309,9f, 4753,106f, 36,0693f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 27:
			uParam1->f_4 = { -1351,068f, 4844,388f, 136,8821f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 28:
			uParam1->f_4 = { 1679,104f, 4653,37f, 42,3712f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 29:
			uParam1->f_4 = { 1712,925f, 4747,414f, 40,9356f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 30:
			uParam1->f_4 = { 2936,587f, 4487,754f, 46,8833f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 31:
			uParam1->f_4 = { 1881,445f, 3761,149f, 31,9154f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 32:
			uParam1->f_4 = { 1891,136f, 3711,45f, 31,8388f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 33:
			uParam1->f_4 = { 923,1298f, 3646,537f, 31,5969f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 34:
			uParam1->f_4 = { 1360,123f, 3599,097f, 33,8908f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 35:
			uParam1->f_4 = { 436,2162f, 3550,248f, 32,2386f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 36:
			uParam1->f_4 = { -2235,781f, 3475,785f, 29,33f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 37:
			uParam1->f_4 = { 1206,722f, 2716,476f, 37,0042f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 38:
			uParam1->f_4 = { 994,0612f, 2656,839f, 39,1282f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 39:
			uParam1->f_4 = { 2864,118f, 1473,196f, 23,5583f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 40:
			uParam1->f_4 = { 1775,074f, 3652,844f, 33,3731f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 41:
			uParam1->f_4 = { -258,8979f, 6251,875f, 30,4892f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 42:
			uParam1->f_4 = { -2001,644f, 454,9861f, 101,4866f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 43:
			uParam1->f_4 = { -181,7756f, 319,9248f, 96,7999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 44:
			uParam1->f_4 = { -152,1834f, 201,6567f, 89,9091f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 45:
			uParam1->f_4 = { -1935,115f, 183,2173f, 83,5954f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 46:
			uParam1->f_4 = { 351,9804f, 21,8583f, 84,4991f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 47:
			uParam1->f_4 = { 195,2451f, -157,1152f, 55,6824f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 48:
			uParam1->f_4 = { -1490,21f, -203,8835f, 49,3974f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 49:
			uParam1->f_4 = { 941,5977f, -247,444f, 67,5999f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 50:
			uParam1->f_4 = { -531,7662f, -43,3292f, 41,4131f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 51:
			uParam1->f_4 = { -1308,971f, -410,3486f, 33,557f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 52:
			uParam1->f_4 = { 914,3543f, -489,5208f, 58,0344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 53:
			uParam1->f_4 = { 1242,42f, -578,4505f, 68,4043f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 54:
			uParam1->f_4 = { -1273,175f, -607,2695f, 25,484f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 55:
			uParam1->f_4 = { 322,7755f, -683,6807f, 28,3018f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 56:
			uParam1->f_4 = { 916,045f, -641,1888f, 56,8682f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 57:
			uParam1->f_4 = { -1360,594f, -780,0303f, 18,7525f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 58:
			uParam1->f_4 = { -617,1512f, -784,4778f, 24,1344f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 59:
			uParam1->f_4 = { -1364,377f, -898,3317f, 11,4705f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 60:
			uParam1->f_4 = { -1440,974f, -871,7243f, 9,9175f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 61:
			uParam1->f_4 = { 450,0986f, -934,5388f, 27,58f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 62:
			uParam1->f_4 = { 1135,143f, -974,3087f, 45,5844f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 63:
			uParam1->f_4 = { -1327,618f, -1027,488f, 6,7181f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 64:
			uParam1->f_4 = { -600,9597f, -1091,987f, 21,1781f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 65:
			uParam1->f_4 = { -1248,995f, -1211,936f, 6,1084f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 66:
			uParam1->f_4 = { -1097,926f, -1505,146f, 3,6901f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 67:
			uParam1->f_4 = { 1318,131f, -1663,014f, 50,2364f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 68:
			uParam1->f_4 = { 267,6798f, -1721,867f, 28,2842f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 69:
			uParam1->f_4 = { 954,9901f, -2004,117f, 29,2387f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 70:
			uParam1->f_4 = { 1003,837f, -2364,251f, 29,5096f };
			*uParam1 = { uParam1->f_4 };
			break;
		
		case 71:
			uParam1->f_4 = { -694,7249f, -2453,918f, 12,8718f };
			*uParam1 = { uParam1->f_4 };
			break;
	}
}

int func_1046(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_HELI(*iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(*iParam0, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_1047(&iVar0))
		{
			iVar1 = VEHICLE::_GET_ENTITY_ATTACHED_TO_CARGOBOB(iVar0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1047(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (((ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob") || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob2")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob3")) || ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("cargobob4"))
	{
		return 1;
	}
	return 0;
}

int func_1048(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(*iParam0, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
			{
				iVar1 = ENTITY::GET_ENTITY_ATTACHED_TO(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					iVar2 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2) && func_1047(&iVar2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_1049(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
	{
		if (!func_1050(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam0), PED::GET_VEHICLE_PED_IS_IN(*iParam0, true)))
		{
			return 4;
		}
		else if (PED::IS_PED_IN_ANY_BOAT(*iParam0))
		{
			return 2;
		}
		else if (PED::IS_PED_IN_ANY_HELI(*iParam0))
		{
			return 3;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(*iParam0, false))
		{
			return 1;
		}
		return 0;
	}
	return 4;
}

int func_1050(int iParam0, int iParam1)
{
	if (func_678(iParam1) && func_9(iParam0, 1, 1))
	{
		if (func_1056(iParam0))
		{
			if (func_1055(iParam0, 1))
			{
				if ((func_80(iParam0, 1) && func_1053(iParam1) != func_105(iParam0)) || func_1051(iParam1, iParam0))
				{
					return 0;
				}
			}
			else if (func_1051(iParam1, iParam0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_1051(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (!func_80(PLAYER::PLAYER_ID(), 1))
	{
		if (iParam1 != func_73())
		{
			iVar0 = iParam1;
		}
		else
		{
			return 0;
		}
	}
	if (func_678(iParam0))
	{
		iVar1 = func_1052(iParam0, 1, 0, 1);
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (MISC::IS_BIT_SET(iVar1, iVar2))
			{
				if (func_9(PLAYER::INT_TO_PLAYERINDEX(iVar2), 0, 1))
				{
					if (func_80(PLAYER::INT_TO_PLAYERINDEX(iVar2), 1) && !func_104(iVar0, PLAYER::INT_TO_PLAYERINDEX(iVar2)))
					{
						return 1;
					}
				}
			}
			iVar2++;
		}
	}
	return 0;
}

int func_1052(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_9(iVar3, 1, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar3), bParam3))
			{
				if (!PLAYER::_0x690A61A6D13583F6(iVar3))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar3), bParam3);
					if (iVar2 == iParam0)
					{
						if (PLAYER::GET_PLAYER_TEAM(iVar3) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
						{
							if (iVar3 != PLAYER::PLAYER_ID() || iParam1)
							{
								MISC::SET_BIT(&uVar0, iVar1);
							}
						}
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_1053(int iParam0)
{
	int iVar0;
	
	if (!func_981(iParam0, 1))
	{
		return func_73();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_1054(iVar0, 0, 1, 0);
}

int func_1054(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_9(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_9(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_73();
}

int func_1055(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_9(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (func_981(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1056(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	
	if (func_1060(iParam0))
	{
		Var0 = { func_1058(iParam0, -1, 0) };
		if (func_472(Var0))
		{
			iVar2 = func_473(Var0);
			if (func_1057(iVar2))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1057(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<27> Var4;
	var uVar31[26];
	
	iVar0 = 27;
	iVar1 = 27;
	iVar2 = 26;
	iVar3 = 26;
	if (iVar0 != iVar1)
	{
		return 0;
	}
	if (iVar3 != iVar2)
	{
	}
	Var4 = 26;
	Var4.f_2 = 1;
	Var4.f_3 = 1;
	Var4.f_4 = 1;
	Var4.f_5 = 1;
	Var4.f_6 = 1;
	Var4.f_7 = 1;
	Var4.f_8 = 1;
	Var4.f_9 = 1;
	Var4.f_10 = 1;
	Var4.f_11 = 1;
	Var4.f_12 = 1;
	Var4.f_13 = 1;
	Var4.f_14 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_17 = 1;
	Var4.f_18 = 1;
	Var4.f_19 = 1;
	Var4.f_20 = 1;
	Var4.f_21 = 1;
	Var4.f_22 = 1;
	Var4.f_23 = 1;
	Var4.f_24 = 1;
	Var4.f_25 = 1;
	Var4.f_26 = 1;
	MISC::_COPY_MEMORY(&uVar31, &Var4, 27);
	return uVar31[iParam0];
}

struct<2> func_1058(int iParam0, int iParam1, bool bParam2)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	
	Var0.f_1 = -1;
	if (!func_1060(iParam0))
	{
		return Var0;
	}
	if ((func_9(iParam0, 0, 1) && iParam1 > -2) && iParam1 < 5)
	{
		if (iParam1 == -1)
		{
			iVar2 = 0;
			while (iVar2 < 5)
			{
				if ((func_472(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar2 /*2*/]) && func_476(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar2 /*2*/])) && (!bParam2 || !func_1059(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar2 /*2*/])))
				{
					return Global_1893548[iParam0 /*600*/].f_557.f_1[iVar2 /*2*/];
				}
				iVar2++;
			}
		}
		else
		{
			iVar3 = iParam1;
			if (func_472(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar3 /*2*/]) && func_476(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar3 /*2*/]))
			{
				return Global_1893548[iParam0 /*600*/].f_557.f_1[iVar3 /*2*/];
			}
		}
	}
	return Var0;
}

int func_1059(struct<2> Param0)
{
	if (func_472(Param0))
	{
		if (func_471(Param0) == 2 || func_470(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_12, Param0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1060(int iParam0)
{
	if (iParam0 != func_73() && func_9(iParam0, 0, 1))
	{
		return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_557, 0);
	}
	return 0;
}

Vector3 func_1061(int iParam0, int iParam1)
{
	struct<3> Var0[2];
	
	Var0[0 /*3*/] = { 0f, 0f, 0f };
	Var0[1 /*3*/] = { 0f, 0f, 0f };
	if (!func_1062(iParam0))
	{
		return Var0[0 /*3*/];
	}
	switch (iParam0)
	{
		case 1:
			Var0[0 /*3*/] = { 46,57f, 6298,997f, 30,2003f };
			break;
		
		case 2:
			Var0[0 /*3*/] = { 405,3243f, 6493,409f, 26,71f };
			break;
		
		case 3:
			Var0[0 /*3*/] = { 58,64f, 6469,08f, 30,3094f };
			break;
		
		case 4:
			Var0[0 /*3*/] = { -441,42f, 6144,01f, 30,44f };
			break;
		
		case 5:
			Var0[0 /*3*/] = { -179,1551f, 6317,944f, 30,2184f };
			break;
		
		case 6:
			Var0[0 /*3*/] = { 1453,143f, -1686,121f, 64,9563f };
			break;
		
		case 7:
			Var0[0 /*3*/] = { 114,6697f, 164,4655f, 103,4672f };
			break;
		
		case 8:
			Var0[0 /*3*/] = { -1464,77f, -390,1486f, 37,3017f };
			break;
		
		case 9:
			Var0[0 /*3*/] = { -1172,126f, -1390,925f, 3,7783f };
			break;
		
		case 10:
			Var0[0 /*3*/] = { 311,3521f, -760,6975f, 28,0504f };
			Var0[1 /*3*/] = { 307,7254f, -699,9282f, 28,3096f };
			break;
		
		case 11:
			Var0[0 /*3*/] = { 208,0649f, 2456,774f, 54,8342f };
			break;
		
		case 12:
			Var0[0 /*3*/] = { 2878,758f, 4459,61f, 47,3484f };
			break;
		
		case 13:
			Var0[0 /*3*/] = { 376,971f, 3590,405f, 32,2221f };
			break;
		
		case 14:
			Var0[0 /*3*/] = { 646,3618f, 2792,016f, 40,6392f };
			break;
		
		case 15:
			Var0[0 /*3*/] = { 1642,669f, 4839,135f, 40,9704f };
			break;
		
		case 16:
			Var0[0 /*3*/] = { 1189,591f, -3098,619f, 4,7346f };
			break;
		
		case 17:
			Var0[0 /*3*/] = { 140,2878f, -2477,946f, 4,94f };
			break;
		
		case 18:
			Var0[0 /*3*/] = { -256,8373f, -2586,215f, 4,9106f };
			break;
		
		case 19:
			Var0[0 /*3*/] = { 666,0431f, -2672,718f, 4,9612f };
			break;
		
		case 20:
			Var0[0 /*3*/] = { -337,6264f, -2769,627f, 3,944f };
			break;
		
		case 21:
			Var0[0 /*3*/] = { 494,0037f, 3015,448f, 40,0526f };
			break;
		
		case 22:
			Var0[0 /*3*/] = { 849,5273f, 3023,794f, 40,2763f };
			break;
		
		case 23:
			Var0[0 /*3*/] = { 40,4676f, 2928,654f, 54,7342f };
			break;
		
		case 24:
			Var0[0 /*3*/] = { 1572,055f, 2224,068f, 77,3731f };
			break;
		
		case 25:
			Var0[0 /*3*/] = { 2107,983f, 3324,722f, 44,3713f };
			break;
		
		case 26:
			Var0[0 /*3*/] = { 2488,974f, 3164,124f, 48,0622f };
			break;
		
		case 27:
			Var0[0 /*3*/] = { 1798,893f, 4705,239f, 38,955f };
			break;
		
		case 28:
			Var0[0 /*3*/] = { -753,681f, 5944,054f, 18,8012f };
			break;
		
		case 29:
			Var0[0 /*3*/] = { -388,6984f, 4338,543f, 55,1304f };
			break;
		
		case 30:
			Var0[0 /*3*/] = { -3029,436f, 3334,414f, 9,0759f };
			break;
		
		case 31:
			Var0[0 /*3*/] = { -3155,589f, 1376,788f, 16,0949f };
			break;
	}
	if (iParam1 && !func_219(Var0[1 /*3*/], 0f, 0f, 0f, 0))
	{
		return Var0[1 /*3*/];
	}
	return Var0[0 /*3*/];
}

int func_1062(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_1063(var uParam0)
{
	return func_1064(func_1065(&uParam0));
}

int func_1064(int iParam0)
{
	switch (iParam0)
	{
		case 22:
			return 1;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 3;
			break;
		
		case 25:
			return 4;
			break;
		
		case 26:
			return 5;
			break;
		
		case 27:
			return 6;
			break;
		
		case 28:
			return 7;
			break;
		
		case 29:
			return 8;
			break;
		
		case 30:
			return 9;
			break;
		
		case 31:
			return 10;
			break;
		
		case 32:
			return 11;
			break;
		
		case 33:
			return 12;
			break;
		
		case 34:
			return 13;
			break;
		
		case 35:
			return 14;
			break;
		
		case 36:
			return 15;
			break;
		
		case 37:
			return 16;
			break;
		
		case 38:
			return 17;
			break;
		
		case 39:
			return 18;
			break;
		
		case 40:
			return 19;
			break;
		
		case 41:
			return 20;
			break;
		
		case 70:
			return 21;
			break;
		
		case 71:
			return 22;
			break;
		
		case 72:
			return 23;
			break;
		
		case 73:
			return 24;
			break;
		
		case 74:
			return 25;
			break;
		
		case 75:
			return 26;
			break;
		
		case 76:
			return 27;
			break;
		
		case 77:
			return 28;
			break;
		
		case 78:
			return 29;
			break;
		
		case joaat("mpsv_lp0_31"):
			return 30;
			break;
		
		case 80:
			return 31;
			break;
	}
	return 0;
}

int func_1065(var uParam0)
{
	if (func_1066(uParam0))
	{
		switch (*uParam0)
		{
			case 1:
				return 70;
			
			case 2:
				return 71;
			
			case 3:
				return 72;
			
			case 4:
				return 73;
			
			case 5:
				return 74;
			
			case 6:
				return 75;
			
			case 7:
				return 76;
			
			case 8:
				return 77;
			
			case 9:
				return 78;
			
			case 10:
				return 79;
			
			case 11:
				return 80;
			}
		
		default:
	}
	return -1;
}

bool func_1066(var uParam0)
{
	return (*uParam0 >= 1 && *uParam0 <= 11);
}

void func_1067(var uParam0, int iParam1, var uParam2, var uParam3)
{
	if (iParam1 == 2)
	{
		*uParam2 = 0;
		*uParam3 = 1;
	}
	else if (iParam1 == 3 || iParam1 == 1)
	{
		*uParam2 = 1;
		*uParam3 = 1;
	}
}

int func_1068(int iParam0)
{
	if ((func_963(&iParam0) == 14 || func_963(&iParam0) == 15) || func_963(&iParam0) == 19)
	{
		return 0;
	}
	return 1;
}

int func_1069(int iParam0)
{
	int iVar0;
	
	if (iParam0 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 18)
		{
			if (Global_1952863.f_4901[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_1070(int iParam0, int iParam1)
{
	Local_2012[iParam0 /*21*/].f_18 = iParam1;
}

void func_1071()
{
	func_1072(0f, 0f, 0f, 1, 0);
}

void func_1072(struct<3> Param0, int iParam3, int iParam4)
{
	Global_2667222.f_45.f_49 = { Param0 };
	Global_2667222.f_45.f_52 = iParam3;
	Global_2667222.f_45.f_53 = iParam4;
}

void func_1073()
{
	func_643("IDJ_RECOVER", "IDJ_KM_STNS_OBJ", 18, 0);
}

void func_1074(int iParam0, int iParam1)
{
	Local_2012[iParam0 /*21*/].f_17 = iParam1;
}

void func_1075()
{
	func_1072(Local_227.f_608.f_1[0 /*11*/], 1, 0);
}

void func_1076()
{
	func_643("ILH_TKE_OUT", "IDJ_THIEVES", 6, 0);
}

void func_1077()
{
	func_643("ILH_GOTO_THE", "IDJ_LOC_TR_PARK", 12, 0);
}

void func_1078()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 7);
	func_651(1, 2, 233011);
	func_654(2, 39);
	func_651(2, 3, 232998);
	func_654(3, 4);
	func_651(3, 4, 232977);
	func_654(4, 48);
}

int func_1079()
{
	if (func_625(0))
	{
		return 1;
	}
	return 0;
}

bool func_1080()
{
	return func_682(5);
}

bool func_1081()
{
	return func_682(4);
}

void func_1082(var uParam0, int iParam1)
{
	if (bLocal_3116)
	{
		if (func_714(iParam1, 9))
		{
			func_713(14);
		}
	}
}

void func_1083()
{
	if (func_939(func_611(), &uLocal_4704, 1, 0))
	{
		func_716(9);
	}
	else
	{
		func_824(9);
	}
	if (bLocal_3116)
	{
		if (func_682(14))
		{
			func_822(14);
		}
	}
}

void func_1084()
{
	if (!func_682(6))
	{
		if (func_1085() > 0)
		{
			func_713(6);
		}
	}
	if (!func_682(7))
	{
		if (func_1085() >= 4)
		{
			func_69(2, 0, 3000);
			func_713(7);
		}
	}
	if (!func_682(4))
	{
		if (func_1085() == 5)
		{
			func_713(4);
		}
	}
	if (!func_682(5))
	{
		Local_3199.f_525.f_4 = func_930();
		if (Local_3199.f_525.f_4 == 5)
		{
			func_713(5);
		}
	}
}

int func_1085()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_41(iVar1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1086()
{
	func_1087();
}

void func_1087()
{
	if (!func_9(func_105(iLocal_3118), 1, 1))
	{
		return;
	}
	func_826(func_611(), MISC::GET_DISTANCE_BETWEEN_COORDS(func_100(func_105(iLocal_3118)), func_1088(), true) > 100f);
}

Vector3 func_1088()
{
	if (Local_1231.f_515.f_4.f_2 != 0)
	{
		Call_Loc(Local_1231.f_515.f_4.f_2);
		return StackVal, StackVal, StackVal;
	}
	return func_1089(func_611());
}

Vector3 func_1089(int iParam0)
{
	struct<3> Var0;
	
	if (bLocal_3115 && PED::IS_PED_IN_ANY_VEHICLE(iLocal_3119, false))
	{
		Var0 = { func_699(iParam0) };
		if (!func_33(Var0))
		{
			return Var0;
		}
	}
	return func_610(iParam0);
}

int func_1090()
{
	func_1091();
	return 1;
}

void func_1091()
{
	if (!func_883(153, 3))
	{
		func_869(153, 3, 1);
	}
}

void func_1092()
{
	int iVar0;
	
	func_1093(1, 0);
	Local_227.f_687 = 1;
	Local_227.f_77.f_254[0 /*10*/].f_1[0] = 0;
	Local_227.f_77.f_254[0 /*10*/].f_1[1] = 1;
	Local_227.f_77.f_254[0 /*10*/].f_1[2] = 2;
	Local_227.f_77.f_254[0 /*10*/].f_1[3] = 3;
	Local_227.f_77.f_254[0 /*10*/].f_1[4] = 4;
	Local_227.f_77.f_254[0 /*10*/].f_1[5] = 5;
	Local_227.f_77.f_1[2 /*21*/].f_7 = joaat("weapon_dbshotgun");
	Local_227.f_77.f_1[4 /*21*/].f_7 = joaat("weapon_flaregun");
	Local_227.f_534 = 5;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Local_227.f_534.f_1[iVar0 /*12*/] = joaat("h4_prop_battle_chakrastones_01a");
		Local_227.f_534.f_1[iVar0 /*12*/].f_5 = { 0f, 0f, 90f };
		iVar0++;
	}
	Local_227.f_19 = 1;
	Local_227.f_19.f_5[0 /*13*/].f_11 = 1;
	Local_227.f_19.f_5[0 /*13*/].f_3 = { Local_227.f_608.f_1[1 /*11*/] };
	Local_227.f_19.f_5[0 /*13*/].f_2 = joaat("prop_drug_package");
	func_718(0, 6);
	Local_227.f_608.f_1[1 /*11*/].f_6 = 1400f;
	Local_227.f_801[0 /*6*/] = 1;
	Local_227.f_801[0 /*6*/].f_1 = "IDJ_HUD_STONES";
	Local_227.f_801[0 /*6*/].f_2 = 5;
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
}

void func_1093(int iParam0, int iParam1)
{
	if (func_17(&(Local_227.f_608.f_1[iParam0 /*11*/].f_4), iParam1))
	{
	}
}

void func_1094()
{
	Local_1231.f_13 = 236808;
	Local_1231.f_2 = 236795;
	Local_1231.f_3.f_1 = 236783;
	Local_1231.f_3.f_4 = 236700;
	Local_1231.f_3.f_4.f_1 = 236669;
	Local_1231.f_11 = 236616;
	Local_1231.f_11.f_1 = 236356;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_108.f_13 = 236344;
	Local_1231.f_108.f_5 = 236334;
	Local_1231.f_108.f_4 = 236322;
	Local_1231.f_77.f_1 = 236298;
	Local_1231.f_515.f_2 = 236279;
	Local_1231.f_149.f_157.f_1 = 236268;
	Local_1231.f_149.f_157 = 236229;
	Local_1231.f_149.f_157.f_3 = 236220;
	Local_1231.f_149.f_174 = 236126;
	Local_1231.f_149 = 235702;
	Local_1231.f_149.f_2.f_75 = 235623;
	Local_1231.f_149.f_2.f_23 = 235613;
	Local_1231.f_149.f_2.f_23.f_1 = 235355;
	Local_1231.f_149.f_2.f_23.f_14 = 235346;
	Local_1231.f_149.f_126.f_1 = 235337;
	Local_1231.f_149.f_126.f_1.f_5 = 235300;
	Local_1231.f_149.f_126.f_1.f_4 = 235291;
	Local_1231.f_149.f_126.f_1.f_1 = 235278;
	Local_1231.f_338.f_43 = 235242;
	Local_1231.f_338.f_44 = 235087;
	Local_1231.f_81 = 235072;
	Local_1231.f_81.f_3 = 235063;
	Local_1231.f_81.f_4 = 235051;
	Local_1231.f_81.f_1 = 235023;
	Local_1231.f_482.f_1 = 234853;
	Local_1231.f_482 = 234769;
	Local_1231.f_490.f_4 = 234759;
	Local_1231.f_490.f_3 = 234742;
	Local_1231.f_490.f_5 = 234710;
	Local_1231.f_496.f_13 = 234616;
	Local_1231.f_496.f_9 = 234604;
	Local_1231.f_496.f_12 = 234521;
	Local_1231.f_496.f_5 = 234512;
	Local_1231.f_496.f_10 = 234500;
	Local_1231.f_496.f_11 = 234490;
	Local_1231.f_496.f_2 = 234481;
	Local_1231.f_496.f_6 = 234472;
	Local_1231.f_496.f_16 = 234442;
	Local_1231.f_60 = 150089;
}

void func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_716(8);
			break;
	}
}

int func_1096()
{
	return -1;
}

int func_1097(var uParam0)
{
	return 0;
}

int func_1098(var uParam0)
{
	return 153;
}

char* func_1099(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1100(var uParam0)
{
	return 1;
}

int func_1101(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_750() == 24 && func_13(&uLocal_4710, 10000, 0));
		
		case 1:
			return (func_750() == 24 && Local_2782[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1102(var uParam0)
{
	return "HS4EDAU";
}

char* func_1103(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_PPM1";
			break;
	}
	return "";
}

char* func_1104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_TXT_PIZ";
		
		default:
	}
	return "";
}

bool func_1105(var uParam0)
{
	return fLocal_3150 < 500f;
}

int func_1106(var uParam0)
{
	return 153;
}

char* func_1107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_PZT";
		
		case 1:
			return "IDJ_KM_HLP_DVR";
		
		case 2:
			return "IDJ_KM_HLP_CHS";
		
		case 3:
			return "IDJ_KM_HLP_BSD";
		
		case 4:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1108(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1110() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (fLocal_3150 < 500f)
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1110() == 1)
			{
				return 1;
			}
			break;
		
		case 3:
			if (func_1109() == 3 && !func_904())
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_1109() == 3 && func_904())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1109()
{
	return func_615();
}

int func_1110()
{
	return func_22();
}

int func_1111(var uParam0)
{
	if (!func_13(&uLocal_4716, 3000, 0))
	{
		return 1;
	}
	return 0;
}

char* func_1112(var uParam0)
{
	return "IDJ_PZ_FOCUS";
}

int func_1113(var uParam0)
{
	return 1;
}

bool func_1114(var uParam0)
{
	return func_750() == 22;
}

int func_1115(int iParam0, var uParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("faggio"):
			uParam1->f_66 = joaat("faggio");
			StringCopy(&(uParam1->f_1), "P1ZZ4", 16);
			*uParam1 = 3;
			uParam1->f_5 = 28;
			uParam1->f_6 = 53;
			uParam1->f_7 = 28;
			uParam1->f_8 = 1;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_69 = 6;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			uParam1->f_9[11] = 4;
			uParam1->f_9[22] = 1;
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1116(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_3 == joaat("faggio"))
	{
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
}

float func_1117(var uParam0)
{
	return 15f;
}

int func_1118(var uParam0)
{
	return 1;
}

void func_1119(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_115())
		{
			func_784(iParam0, 1);
		}
		else
		{
			func_784(iParam0, 2);
		}
	}
}

int func_1120(var uParam0)
{
	return 1;
}

int func_1121()
{
	return 1;
}

Vector3 func_1122(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return 298,2737f, 161,3832f, 103,104f;
		
		case 1:
			return 272,7557f, 158,9814f, 103,4403f;
		
		case 2:
			return 257,2968f, 115,6647f, 99,1878f;
		
		case 3:
			return 236,3171f, 57,1677f, 84,4952f;
		
		case 4:
			return 226,4263f, 49,2641f, 83,0705f;
		
		case 5:
			return 181,252f, 65,1596f, 82,545f;
		
		case 6:
			return 163,1799f, 80,2115f, 83,6059f;
		
		case 7:
			return 144,3906f, 84,8557f, 82,6487f;
		
		case 8:
			return 29,5628f, 124,5115f, 83,8743f;
		
		case 9:
			return -15,8644f, 137,0026f, 86,693f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_1123(var uParam0)
{
	return 10;
}

int func_1124(int iParam0)
{
	if (Local_227.f_77.f_1[iParam0 /*21*/].f_8 != -1)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[Local_227.f_77.f_1[iParam0 /*21*/].f_8 /*8*/]))
		{
			return NETWORK::NET_TO_VEH(Local_3199.f_341[Local_227.f_77.f_1[iParam0 /*21*/].f_8 /*8*/]);
		}
	}
	return -1;
}

void func_1125(int iParam0)
{
	func_583(iParam0, 0, 8);
	func_581(iParam0, 0, 1, 236113);
	func_583(iParam0, 1, 12);
	func_581(iParam0, 1, 2, 236098);
	func_581(iParam0, 1, 3, 236084);
	func_583(iParam0, 3, 7);
	func_581(iParam0, 3, 2, 235804);
	func_583(iParam0, 2, 2);
	func_581(iParam0, 2, 3, 236084);
}

int func_1126(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_PED_TASK_COMBAT_TARGET(iParam1, 1)))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, false);
		func_1129(iParam0);
		func_1127(iParam0);
		return 1;
	}
	return 0;
}

void func_1127(int iParam0)
{
	func_1128(iParam0, 8);
	func_1128(iParam0, 1);
	func_1128(iParam0, 11);
	func_1128(iParam0, 10);
	func_1128(iParam0, 9);
	func_1128(iParam0, 7);
	func_1128(iParam0, 0);
}

void func_1128(int iParam0, int iParam1)
{
	if (func_157(&(Local_3783[iLocal_3121 /*115*/].f_16[iParam0 /*2*/]), iParam1))
	{
	}
}

void func_1129(int iParam0)
{
	func_1131(Local_227.f_77.f_1[iParam0 /*21*/].f_14);
	func_1130(iParam0, 11);
	func_1130(iParam0, 1);
	func_1130(iParam0, 14);
	func_1130(iParam0, 13);
	func_1130(iParam0, 12);
	func_1130(iParam0, 10);
	func_1130(iParam0, 0);
}

void func_1130(int iParam0, int iParam1)
{
	if (func_157(&(Local_3199.f_52[iParam0 /*24*/].f_3), iParam1))
	{
	}
}

void func_1131(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_3199.f_418, iParam0))
	{
		MISC::CLEAR_BIT(&(Local_3199.f_418), iParam0);
	}
}

int func_1132(int iParam0, var uParam1)
{
	return func_85(iParam0);
}

bool func_1133(int iParam0, var uParam1)
{
	return func_87(iParam0, 5);
}

bool func_1134(var uParam0, var uParam1)
{
	return func_3(1);
}

void func_1135(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 8, 1, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam1, 0, 0, 0, false);
			ENTITY::SET_ENTITY_HEALTH(iParam1, 300, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			break;
	}
}

int func_1136(var uParam0)
{
	return 1;
}

int func_1137(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			return 11;
		
		case 2:
			return 17;
		
		default:
	}
	return 44;
}

int func_1138(var uParam0)
{
	return 5000;
}

bool func_1139(var uParam0)
{
	return Local_2860.f_10 > 1400f;
}

int func_1140()
{
	if (bLocal_3116)
	{
		return func_682(13);
	}
	return 0;
}

int func_1141(var uParam0)
{
	return HUD::GET_STANDARD_BLIP_ENUM_ID();
}

int func_1142(var uParam0)
{
	return 9;
}

char* func_1143(var uParam0)
{
	return "IDJ_SCTR_BLIP";
}

void func_1144()
{
	func_648(0, 4, 236593);
	func_647(0, 1, 1);
	func_621(1, 2, 3, 4, 5, 236570, 236488, 236441, 236418, 1);
	func_648(5, 48, 152431);
}

void func_1145()
{
	func_643("IDJ_RECOVER", "IDJ_SCOOTER", 9, 0);
}

void func_1146()
{
	if (func_904())
	{
		func_935("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_629("IDJ_HLPDELV_T", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1147()
{
	if (func_1069(func_611()) && func_939(func_611(), &uLocal_4704, 1, 0))
	{
		func_938("IDJ_GOON_WAIT", PLAYER::GET_PLAYER_NAME(func_105(iLocal_3118)), 9, 0);
	}
	else
	{
		func_629("IDJ_DELIVER_THE", "IDJ_KM_PZA_OBJ", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1148()
{
	func_643("ILH_STEAL", "IDJ_SCOOTER", 9, 0);
}

void func_1149()
{
	func_643("ILH_GOTO_THE", "IDJ_LOC_PZTS", 12, 0);
}

void func_1150()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 22);
	func_653(1, 2);
	func_654(2, 24);
	func_653(2, 3);
	func_654(3, 48);
}

void func_1151(var uParam0, int iParam1)
{
	if (bLocal_3116)
	{
		if (func_714(iParam1, 9))
		{
			func_713(14);
		}
	}
}

void func_1152()
{
	if (func_682(13))
	{
		Local_227.f_599 = 5;
		Local_227.f_599.f_1 = 0;
	}
	if (func_939(func_611(), &uLocal_4704, 1, 0))
	{
		func_716(9);
	}
	else
	{
		func_824(9);
	}
	if (bLocal_3116)
	{
		if (func_682(14))
		{
			func_822(14);
		}
	}
}

void func_1153()
{
	func_1087();
}

int func_1154()
{
	func_1091();
	return 1;
}

void func_1155()
{
	func_694(17);
	func_657(0, 9);
	func_718(0, 6);
	func_885(0, 10);
	func_885(0, 26);
	func_657(0, 14);
	Local_227.f_77.f_1[0 /*21*/].f_13 = 0;
	Local_227.f_429.f_86[0 /*6*/] = 0;
	Local_227.f_429.f_86[0 /*6*/].f_1 = 2;
	Local_227.f_429.f_86[0 /*6*/].f_2 = 0;
	Local_227.f_429.f_1[0 /*12*/].f_8 = { 0f, 0f, -90f };
}

void func_1156()
{
	Local_1231.f_13 = 239160;
	Local_1231.f_2 = 239147;
	Local_1231.f_3.f_1 = 239102;
	Local_1231.f_3 = 239060;
	Local_1231.f_3.f_4 = 239000;
	Local_1231.f_3.f_4.f_1 = 238969;
	Local_1231.f_11 = 238916;
	Local_1231.f_11.f_1 = 238660;
	Local_1231.f_89.f_3.f_1 = 238589;
	Local_1231.f_89.f_3.f_3 = 152282;
	Local_1231.f_89.f_3.f_2 = 152270;
	Local_1231.f_89.f_3 = 238442;
	Local_1231.f_108.f_13 = 238430;
	Local_1231.f_108.f_5 = 238420;
	Local_1231.f_108.f_4 = 238410;
	Local_1231.f_108.f_24 = 238397;
	Local_1231.f_108.f_35 = 238383;
	Local_1231.f_515.f_2 = 236279;
	Local_1231.f_149.f_174 = 238211;
	Local_1231.f_149 = 238009;
	Local_1231.f_149.f_1 = 237939;
	Local_1231.f_482.f_1 = 237815;
	Local_1231.f_482 = 237757;
	Local_1231.f_496.f_13 = 237663;
	Local_1231.f_496.f_9 = 237651;
	Local_1231.f_496.f_12 = 237568;
	Local_1231.f_496.f_5 = 237559;
	Local_1231.f_496.f_10 = 237547;
	Local_1231.f_496.f_11 = 237537;
	Local_1231.f_496.f_2 = 237528;
	Local_1231.f_496.f_6 = 237519;
	Local_1231.f_60 = 150089;
	Local_1231.f_338.f_43 = 237466;
	Local_1231.f_338.f_44 = 237315;
}

int func_1157(int iParam0, var uParam1)
{
	switch (Local_227.f_356.f_1[iParam0 /*14*/].f_3)
	{
		case joaat("paradise"):
			uParam1->f_66 = joaat("paradise");
			StringCopy(&(uParam1->f_1), "24OXS365", 16);
			*uParam1 = 3;
			uParam1->f_5 = 2;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
			uParam1->f_97 = 1;
			uParam1->f_99 = 132;
			uParam1->f_98 = 0;
			uParam1->f_67 = 1;
			uParam1->f_69 = 1;
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
			uParam1->f_74 = 255;
			uParam1->f_76 = 255;
			MISC::SET_BIT(&(uParam1->f_77), 0);
			break;
		
		default:
			return 0;
	}
	return 1;
}

void func_1158(int iParam0, int iParam1)
{
	if (Local_227.f_356.f_1[iParam0 /*14*/].f_3 == joaat("paradise"))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iParam1, 2, true);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iParam1, 3, true, false);
		ENTITY::_0xD7B80E7C3BEFC396(iParam1, true);
	}
}

int func_1159()
{
	return -1;
}

int func_1160(var uParam0)
{
	return 0;
}

int func_1161(var uParam0)
{
	return 153;
}

char* func_1162(var uParam0, var uParam1)
{
	return "BTL_DAVE";
}

int func_1163(var uParam0)
{
	return 1;
}

int func_1164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return (func_750() == 24 && func_13(&uLocal_4710, 10000, 0));
		
		case 1:
			return (func_750() == 24 && Local_2782[0 /*7*/].f_2 < 100f);
		
		default:
	}
	return 0;
}

char* func_1165(var uParam0)
{
	return "HS4EDAU";
}

char* func_1166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
			{
				case 0:
					return "HS4ED_GUC1";
				
				case 1:
					return "HS4ED_GUC2";
				
				case 2:
					return "HS4ED_GUC3";
				
				default:
			}
			break;
		
		case 1:
			return "HS4ED_SCPM1";
			break;
	}
	return "";
}

char* func_1167(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "IDJ_KM_HLP_SKT";
		
		case 1:
			return "IDJ_KM_HLP_BSD";
		
		case 2:
			return "IDJ_KM_HLP_BSL";
		
		default:
	}
	return "";
}

int func_1168(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (func_1170() == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_1169() == 3 && !func_904())
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_1169() == 3 && func_904())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1169()
{
	return func_615();
}

int func_1170()
{
	return func_22();
}

int func_1171(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 5:
		case 6:
			return 0;
		
		case 3:
		case 4:
			return 1;
		
		case 2:
			return 2;
		
		default:
	}
	return 0;
}

void func_1172(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 1, 238168);
			func_583(iParam0, 1, 7);
			break;
		
		case 1:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 2, 238154);
			func_583(iParam0, 2, 10);
			break;
		
		case 2:
			func_583(iParam0, 0, 8);
			func_581(iParam0, 0, 3, 238140);
			func_583(iParam0, 3, 11);
			break;
	}
}

int func_1173(int iParam0, var uParam1)
{
	return func_85(iParam0);
}

int func_1174(int iParam0, var uParam1)
{
	return func_85(iParam0);
}

var func_1175(int iParam0, var uParam1)
{
	return (func_85(iParam0) || (func_168(0, 10) && func_13(&uLocal_4714, 2000, 0)));
}

void func_1176(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 0, 1, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			break;
		
		case 1:
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 0, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 3, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam1, 4, 1, 2, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			break;
		
		case 2:
			PED::_0x0F62619393661D6E(iParam1, 1, 0);
			break;
		
		case 5:
		case 6:
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 46, true);
			break;
	}
}

void func_1177(var uParam0)
{
	func_694(17);
}

float func_1178(var uParam0)
{
	return 25f;
}

int func_1179(var uParam0)
{
	return 225;
}

int func_1180(var uParam0)
{
	return 9;
}

char* func_1181(var uParam0)
{
	return "IDJ_SKTE_BLIP";
}

int func_1182(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			if (func_1169() >= 0)
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_613() || PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) > 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_714(iLocal_3121, 10) && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) == 0)
			{
				return 2;
			}
			break;
		
		case 2:
			if (func_1169() >= 2 && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) == 0)
			{
				return 3;
			}
			break;
	}
	return -1;
}

char* func_1183(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HEI4_DELIVERING_START";
		
		case 1:
			return "HEI4_GUNFIGHT";
		
		case 2:
			return "HEI4_SUSPENSE";
		
		case 3:
			return "HEI4_DELIVERING";
		
		default:
	}
	return "";
}

void func_1184()
{
	func_648(0, 4, 238893);
	func_647(0, 1, 1);
	func_621(1, 2, 3, 4, 5, 238870, 238792, 238745, 238722, 1);
	func_648(5, 48, 152431);
}

void func_1185()
{
	func_643("IDJ_RECOVER", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1186()
{
	if (func_904())
	{
		func_935("IDJ_BOSS_GOTO", 0);
	}
	else
	{
		func_629("IDJ_HLPDELV_T", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1187()
{
	if (func_1069(func_611()) && func_714(iLocal_3121, 9))
	{
		func_938("IDJ_GOON_WAIT", PLAYER::GET_PLAYER_NAME(func_105(iLocal_3118)), 9, 0);
	}
	else
	{
		func_629("IDJ_DELIVER_THE", "IDJ_KM_MERCH", "IDJ_LOC_LSIA", 1, 12, 0);
	}
}

void func_1188()
{
	func_643("ILH_STEAL", "IDJ_SKTE_MRCHV", 9, 0);
}

void func_1189()
{
	func_643("ILH_GOTO", "IDJ_LOC_SKATE", 12, 0);
}

void func_1190()
{
	func_654(0, 4);
	func_653(0, 1);
	func_654(1, 22);
	func_653(1, 2);
	func_654(2, 24);
	func_653(2, 3);
	func_654(3, 48);
}

void func_1191(var uParam0, int iParam1)
{
	if (bLocal_3116)
	{
		if (func_714(iParam1, 9))
		{
			func_713(14);
		}
	}
}

void func_1192()
{
	if (func_939(func_611(), &uLocal_4704, 1, 0))
	{
		func_716(9);
	}
	else
	{
		func_824(9);
	}
	if (bLocal_3116)
	{
		if (func_682(14))
		{
			func_822(14);
		}
	}
}

void func_1193()
{
	if (func_613() && !func_682(12))
	{
		func_69(2, 0, 3000);
		func_713(12);
	}
}

void func_1194()
{
	func_1087();
	if (!func_714(iLocal_3121, 10) && PLAYER::GET_PLAYER_WANTED_LEVEL(iLocal_3118) > 0)
	{
		func_716(10);
	}
}

int func_1195()
{
	func_1091();
	return 1;
}

void func_1196()
{
	func_718(0, 15);
	func_657(0, 9);
	func_885(2, 10);
	func_885(2, 26);
	Local_227.f_429.f_86[0 /*6*/] = 2;
	Local_227.f_429.f_86[0 /*6*/].f_1 = 2;
	Local_227.f_429.f_86[0 /*6*/].f_2 = 0;
	Local_227.f_429.f_86[0 /*6*/].f_3 = { 0f, -2f, -0,42f };
	Local_227.f_429.f_1[2 /*12*/].f_8 = { 0f, 0f, 25f };
	Local_227.f_599 = 30;
	Local_227.f_599.f_1 = 2;
}

void func_1197()
{
}

int func_1198(var uParam0, var uParam1)
{
	Local_3199.f_525 = uParam0;
	Local_3199.f_525.f_1 = uParam1;
	Local_3199.f_525.f_2 = func_1199(Local_3199.f_525);
	switch (Local_3199.f_525)
	{
		case 6:
			Local_3199.f_525.f_3 = 1000f;
			break;
	}
	return 1;
}

int func_1199(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		default:
	}
	return -1;
}

int func_1200()
{
	return func_1201();
}

int func_1201()
{
	return Global_2810287.f_5193.f_345;
}

int func_1202()
{
	return func_1203();
}

int func_1203()
{
	return Global_2810287.f_5193.f_344;
}

bool func_1204(int iParam0)
{
	return func_4(&uLocal_3133, iParam0);
}

void func_1205()
{
	if (Local_1231.f_3.f_2.f_1 != 0)
	{
		Call_Loc(Local_1231.f_3.f_2.f_1);
	}
	if (Local_1231.f_97.f_6 != 0)
	{
		Call_Loc(Local_1231.f_97.f_6);
		if (StackVal)
		{
			return;
		}
	}
	if (func_1614())
	{
		return;
	}
	if (func_1204(46))
	{
		return;
	}
	func_1483();
	func_1476();
	func_1472();
	func_1320();
	func_1209();
	func_1206();
}

void func_1206()
{
	if (!func_1204(30))
	{
		if (Local_1231.f_86 != 0)
		{
			Call_Loc(Local_1231.f_86);
			func_1207(StackVal);
		}
		func_527(30);
	}
}

void func_1207(int iParam0)
{
	if (iParam0 == -1 || iParam0 == 55)
	{
		return;
	}
	func_1208(iParam0);
}

void func_1208(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2810287.f_5193.f_35[iVar0]), iVar1);
}

void func_1209()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_429(iLocal_3121, 0))
	{
		return;
	}
	if (!func_1319(0))
	{
		if (func_1204(11))
		{
			func_1318(func_566(), &iVar0, &iVar1);
		}
		if (iVar0 > 0)
		{
			func_1313(iVar0);
		}
		if (iVar1 > 0)
		{
			if (Local_227.f_605.f_1)
			{
				func_1312();
			}
			func_1266(0, iLocal_3119, "", -875716015, 1626430110, iVar1, 1, -1, 0, 0, 0);
		}
		Local_2843.f_5 = (Local_2843.f_5 + iVar0);
		Local_2843.f_6 = (Local_2843.f_6 + iVar1);
		if (func_78(iLocal_3118))
		{
			if (func_1204(11))
			{
				if (!func_1264(func_566()))
				{
					func_1260(func_566());
					Global_1945347.f_16 = MISC::GET_HASH_KEY(func_1257(func_566()));
				}
			}
		}
		func_1256(0);
	}
	if (func_1204(11))
	{
		iVar2 = func_1255(func_566());
		if (iVar2 > 0)
		{
			if (func_1211(iVar2, &uLocal_4705))
			{
				Global_1945347.f_15 = (Global_1945347.f_15 + iVar2);
				func_1210(0);
			}
		}
		else
		{
			func_1210(0);
		}
	}
	else
	{
		func_1210(0);
	}
}

void func_1210(int iParam0)
{
	if (func_17(&(Local_3783[iLocal_3120 /*115*/].f_1), iParam0))
	{
	}
}

bool func_1211(int iParam0, var uParam1)
{
	return func_1212(iParam0, 11, uParam1, -1, -1);
}

int func_1212(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_1254(iParam1))
	{
	}
	else
	{
		iVar0 = func_1253();
		iVar1 = (Global_262145.f_26834 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_1251();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_1234(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_1253() - Global_1966290);
			func_1233(iVar4, 1);
			func_1231();
			func_1230();
			Global_1966290 = (Global_1966290 + iVar4);
			if (iParam1 == 0)
			{
				func_1223(iVar4);
				Global_2725175 = 1;
			}
			else if (iParam1 == 3)
			{
				func_1216(iVar4);
				if (iVar4 >= Global_262145.f_26842)
				{
					Global_2725174 = 1;
				}
				else if (iVar4 >= Global_262145.f_26841)
				{
					Global_2725175 = 1;
				}
			}
			Var5.f_0 = func_1215(iParam1);
			Var5.f_1 = func_1214(iParam1, iParam3, iParam4);
			if (func_1213(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1966290;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_1214(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_1215(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_1216(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1222();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_1220();
	if (iVar0 == 0)
	{
		func_1219();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26836)
	{
		func_1218();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_26838)
	{
		func_1217(joaat("mpply_casino_chips_won_gd"), Global_262145.f_26838);
		func_1218();
		Global_2725175 = 1;
	}
	else
	{
		func_1217(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_1217(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

void func_1218()
{
	func_1219();
}

void func_1219()
{
	func_1217(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_1220()
{
	return func_1221(joaat("mpply_casino_chips_won_gd"));
}

int func_1221(int iParam0)
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

int func_1222()
{
	return func_1221(joaat("mpply_casino_chips_wontim"));
}

void func_1223(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_1229();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_1228();
	if (iVar0 == 0)
	{
		func_1227();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_26835)
	{
		func_1226();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_1224()
	{
		func_1217(joaat("mpply_casino_chips_pur_gd"), func_1224());
		func_1226();
	}
	else
	{
		func_1217(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_1224()
{
	if (func_1225(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26630;
	}
	return Global_262145.f_26629;
}

int func_1225(int iParam0)
{
	if (iParam0 != func_73())
	{
		return Global_1853128[iParam0 /*888*/].f_267.f_379 != 0;
	}
	return 0;
}

void func_1226()
{
	func_1227();
}

void func_1227()
{
	func_1217(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_1228()
{
	return func_1221(joaat("mpply_casino_chips_pur_gd"));
}

int func_1229()
{
	return func_1221(joaat("mpply_casino_chips_purtim"));
}

void func_1230()
{
	if (MISC::IS_BIT_SET(Global_1966363, 6))
	{
		MISC::SET_BIT(&Global_1966363, 9);
		func_18(&Global_1966366, 0, 0);
	}
}

void func_1231()
{
	if (func_1232())
	{
		MISC::SET_BIT(&Global_1966363, 1);
	}
}

bool func_1232()
{
	return (MISC::IS_BIT_SET(Global_1966363, 6) || MISC::IS_BIT_SET(Global_1966363, 5));
}

void func_1233(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1966363, 6);
	Global_1966364 = iParam0;
	Global_1966365 = iParam1;
}

bool func_1234(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_1213(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_275())
	{
		if (*uParam0 == 0)
		{
			if (func_1250() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_1215(iParam1);
			iVar5 = -22148635;
			if (func_1254(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_1246(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_1246(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_1242())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_1241(func_1250()))
			{
				if (func_1240(func_1250()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_1239(func_1250()));
					if (func_1254(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_1235(func_1250());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_1254(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

void func_1235(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_275())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_1238(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4528329[iParam0 /*85*/].f_66);
		}
		func_1236(&(Global_4528329[iParam0 /*85*/]));
	}
}

void func_1236(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_1237(&(uParam0->f_14));
	func_1237(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_1237(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_1238(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_1239(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66;
	}
	return -1;
}

int func_1240(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_1241(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4528329[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_1242()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_275())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_1250();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_98()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_1245(Global_4528329[iVar2 /*85*/].f_66.f_6, Global_4528329[iVar2 /*85*/].f_66.f_4, Global_4528329[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4529831 = 1;
			}
			return 0;
		}
		if (Global_2726388)
		{
			if (Global_4528329[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4528329[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_1239(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4528329[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4528329[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4528329[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4528329[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4528329[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_1243(Global_4528329[iVar2 /*85*/], iVar2);
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	return 0;
}

void func_1243(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = -1141953949;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_70(Var0.f_1);
	if ((Global_262145.f_23844 && !Global_262145.f_23845) && !Global_262145.f_23846)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_1244();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar36);
	}
}

void func_1244()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_1245(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_1246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_275())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_98()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_1250();
	if (iVar1 == -1)
	{
		if (!func_1248(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_1247(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4528329[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4528329[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4528329[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_1247(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_1248(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_275())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_98()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4528329[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4528329[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_1249(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_1249(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4528329[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_275())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4528329[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4528329[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4528329[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4528329[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4528329[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4528329[iVar0 /*85*/].f_66 = iParam0;
			Global_4528329[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4528329[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4528329[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4528329[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4528329[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4528329[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4528329[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4529816 = 0;
			if (bParam6)
			{
				Global_4528329[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_1243(Global_4528329[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1250()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_1239(iVar0) != 2147483647)
		{
			if (func_1238(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1251()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_1224() - func_1228());
	iVar1 = (Global_262145.f_26834 - func_1253());
	iVar2 = func_1252();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_1252()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1224();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_1253()
{
	return func_207(8250, -1, 0);
}

int func_1254(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

int func_1255(int iParam0)
{
	if (!func_78(iLocal_3118))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 3:
		case 4:
			return Global_262145.f_29814;
		
		case 5:
		case 6:
			return Global_262145.f_29813;
		
		default:
	}
	return 0;
}

void func_1256(int iParam0)
{
	if (func_17(&uLocal_3144, iParam0))
	{
	}
}

char* func_1257(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_1258())
			{
				return "CLO_H4F_DECL_51";
			}
			else
			{
				return "CLO_H4M_DECL_51";
			}
			break;
		
		case 3:
		case 4:
			if (func_1258())
			{
				return "CLO_H4F_DECL_53";
			}
			else
			{
				return "CLO_H4M_DECL_53";
			}
			break;
		
		case 5:
		case 6:
			if (func_1258())
			{
				return "CLO_H4F_DECL_54";
			}
			else
			{
				return "CLO_H4M_DECL_54";
			}
			break;
	}
	return "";
}

bool func_1258()
{
	return func_1259(PLAYER::PLAYER_ID());
}

int func_1259(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

void func_1260(int iParam0)
{
	func_1262(func_1263(iParam0), 1, -1);
	func_1261(func_1257(iParam0));
}

int func_1261(char* sParam0)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU("CLOTHES_UNLOCK", 7, sParam0, 1);
	return iVar0;
}

void func_1262(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_98();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_1263(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 30635;
			break;
		
		case 3:
		case 4:
			return 30636;
			break;
		
		case 5:
		case 6:
			return 30637;
			break;
	}
	return 30635;
}

bool func_1264(int iParam0)
{
	return func_1265(func_1263(iParam0), -1);
}

bool func_1265(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = func_98();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_1266(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_1267(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_1267(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_1277(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_1273(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_1268(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_1268(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	struct<3> Var0;
	
	Var0 = { func_1271(iParam0, 1) };
	if (iParam0 == func_1270(PLAYER::PLAYER_PED_ID()))
	{
		func_1269(1);
	}
	func_1273(Var0, iParam1, 0, sParam2, iParam3);
}

void func_1269(int iParam0)
{
	Global_2703656.f_1582 = iParam0;
}

int func_1270(int iParam0)
{
	return iParam0;
}

Vector3 func_1271(int iParam0, bool bParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var3 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_1272(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0,2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar6 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar6 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar6 = Var3.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var10);
	if (bParam1)
	{
		fVar13 = (Var10.f_2 + 0,18f);
	}
	else
	{
		fVar13 = (Var7.f_2 + 0,18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar6, 0f, 0f, fVar13) };
	return Var0;
}

int func_1272(int iParam0)
{
	return iParam0;
}

void func_1273(struct<3> Param0, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (iParam3 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703656.f_981[iVar0 /*30*/].f_6 == 0 || Global_2703656.f_981[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703656.f_981[iVar1 /*30*/] = { Param0 };
			Global_2703656.f_981[iVar1 /*30*/].f_6 = 1;
			Global_2703656.f_981[iVar1 /*30*/].f_4 = func_1276(Global_2703656.f_981[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703656.f_981[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703656.f_981[iVar1 /*30*/].f_3 = iParam3;
			Global_2703656.f_981[iVar1 /*30*/].f_8 = iParam4;
			Global_2703656.f_981[iVar1 /*30*/].f_9 = func_1275();
			Global_2703656.f_981[iVar1 /*30*/].f_10 = func_1274();
			StringCopy(&(Global_2703656.f_981[iVar1 /*30*/].f_22), sParam5, 16);
			Global_2703656.f_981[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam6);
		}
	}
}

int func_1274()
{
	if (Global_2703656.f_1582)
	{
		Global_2703656.f_1582 = 0;
		return 1;
	}
	Global_2703656.f_1582 = 0;
	return 0;
}

var func_1275()
{
	var uVar0;
	
	uVar0 = Global_2703656.f_1584;
	Global_2703656.f_1584 = 1;
	return uVar0;
}

float func_1276(struct<3> Param0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam3 = 0,402f;
		*uParam4 = 0,476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam3 = 0,212f;
		*uParam4 = 0,286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0,402f - 0,212f));
	fVar3 = (fVar1 * (0,476f - 0,286f));
	*uParam3 = (fVar2 + 0,212f);
	*uParam4 = (fVar3 + 0,286f);
	return fVar1;
}

var func_1277(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_1278(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_1278(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_1311(PLAYER::PLAYER_ID()) || func_1310(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9893 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9893;
		}
	}
	else if (func_1308() || func_1306(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23050 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_23050;
		}
	}
	else if (Global_262145.f_6892 > 20000)
	{
		iVar2 = 20000;
	}
	else
	{
		iVar2 = Global_262145.f_6892;
	}
	if (func_1305(sParam2))
	{
	}
	if (func_1304())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_1302(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_1301(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_1299(0, &iVar1);
					break;
				
				case 3:
					func_1299(1, &iVar1);
					break;
				
				case 1:
					func_1297(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957924)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_1295(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_1286((func_1294(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_2 != -1)
				{
					func_1295(1166, iVar1, -1);
				}
				func_1281(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_1279((func_1280(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_1279((func_1280(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_1279(int iParam0)
{
	if (func_1304())
	{
		Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_5 = iParam0;
		func_1217(joaat("mpply_globalxp"), iParam0);
	}
}

int func_1280(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_9(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_1221(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_5;
			}
		}
		else
		{
			return func_1221(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_1281(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_106(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_1284(func_1285(&Var0));
			if (iVar13 == 0)
			{
				func_1283(&Global_1655483, iParam0);
				func_1282(joaat("mpply_crew_local_xp_0"), Global_1655483);
			}
			else if (iVar13 == 1)
			{
				func_1283(&Global_1655484, iParam0);
				func_1282(joaat("mpply_crew_local_xp_1"), Global_1655484);
			}
			else if (iVar13 == 2)
			{
				func_1283(&Global_1655485, iParam0);
				func_1282(joaat("mpply_crew_local_xp_2"), Global_1655485);
			}
			else if (iVar13 == 3)
			{
				func_1283(&Global_1655486, iParam0);
				func_1282(joaat("mpply_crew_local_xp_3"), Global_1655486);
			}
			else if (iVar13 == 4)
			{
				func_1283(&Global_1655487, iParam0);
				func_1282(joaat("mpply_crew_local_xp_4"), Global_1655487);
			}
		}
	}
}

void func_1282(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1655478 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1655480 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1655481 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1655482 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1655483 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1655484 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1655485 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1655486 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1655487 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1655488 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1655489 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1655490 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1655491 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1655492 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1655493 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1655494 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_1283(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_1284(int iParam0)
{
	if (iParam0 == Global_1655478)
	{
		return 0;
	}
	else if (iParam0 == Global_1655479)
	{
		return 1;
	}
	else if (iParam0 == Global_1655480)
	{
		return 2;
	}
	else if (iParam0 == Global_1655481)
	{
		return 3;
	}
	else if (iParam0 == Global_1655482)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_1285(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725166;
		}
	}
	return Global_2725166;
}

void func_1286(int iParam0, int iParam1, int iParam2)
{
	if (func_1304())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9861 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1655628[func_208(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1655628[func_208(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9860 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_423(PLAYER::PLAYER_ID()))
		{
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_1 = iParam0;
			Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_205.f_6 = func_1292(iParam0, 1);
		}
		func_1291(640, iParam0, -1, 1);
		func_1290(641, func_1292(iParam0, 1), -1, 1, 0);
		Global_1655628[func_208(-1)] = iParam0;
		func_1287(-1109644434, 7, 0);
	}
}

void func_1287(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_1289(iParam1, iParam2))
	{
		iVar0 = func_1288();
		Global_2725118[iVar0] = iParam1;
		Global_2725129[iVar0] = iParam0;
	}
}

int func_1288()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725118[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1289(int iParam0, var uParam1)
{
	if (Global_1575034)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575046) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_1290(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2821895[iParam0 /*3*/][func_208(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_1291(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2821895[iParam0 /*3*/][func_208(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1655556[func_208(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1655562[func_208(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1655568[func_208(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1655574[func_208(iParam2)] = iParam1;
			break;
		
		case 8728:
			Global_1655580[func_208(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1655526[func_208(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1655532[func_208(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1655538[func_208(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1655544[func_208(iParam2)] = iParam1;
			break;
		
		case 8730:
			Global_1655550[func_208(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1655496[func_208(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1655502[func_208(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1655508[func_208(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1655514[func_208(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1655520[func_208(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1655586[func_208(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1655592[func_208(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1655598[func_208(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1655604[func_208(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1655610[func_208(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1655616[func_208(iParam2)] = iParam1;
			break;
		
		case 7235:
			Global_1655622[func_208(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1655628[func_208(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1655634[func_208(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2863282[0 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2863282[1 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 2931:
			Global_2863282[2 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2863282[3 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 10890:
			Global_2863443[func_208(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1655640[func_208(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1655646[func_208(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1655652[func_208(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1655658[func_208(iParam2)] = iParam1;
			break;
		
		case 9537:
			Global_1655664[func_208(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1655670[func_208(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2863361[0 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2863361[1 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2863361[2 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2863361[3 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2863361[4 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2863446[0 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2863446[1 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2863446[2 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2863446[3 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2863446[4 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2863462[0 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2863462[1 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2863462[2 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2863462[3 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2863462[4 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2863361[5 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_2863282[4 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2863478[func_208(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2863487[func_208(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2863481[func_208(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2863490[func_208(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2863484[func_208(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2863493[func_208(iParam2)] = iParam1;
			break;
		
		case 3691:
			Global_2863496[func_208(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2863361[6 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2863282[5 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3236:
			Global_2863361[7 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_2863282[6 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2863361[8 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2863282[7 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2863361[9 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2863282[8 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2863361[10 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2863282[9 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2863361[11 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2863282[10 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2863361[12 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2863282[11 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2863361[13 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2863282[12 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2863361[14 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2863282[13 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2863361[15 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2863282[14 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2863361[16 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2863282[15 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2863361[17 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2863282[16 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_2863282[17 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_2863282[18 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 7289:
			Global_2863282[19 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8012:
			Global_2863282[20 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2863499[func_208(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2863502[func_208(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2863505[func_208(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2863508[func_208(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2863511[func_208(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2863514[func_208(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2863517[func_208(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2863520[func_208(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2863523[func_208(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2863526[func_208(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2863529[func_208(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2863532[func_208(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2863535[func_208(iParam2)] = iParam1;
			break;
		
		case 8904:
			Global_2863538[func_208(iParam2)] = iParam1;
			break;
		
		case 8536:
			Global_2863282[21 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2863361[23 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2863282[22 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8984:
			Global_2863361[24 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2863282[23 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 9623:
			Global_2863282[24 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		case 9912:
			Global_2863282[25 /*3*/][func_208(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_1292(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_1293(iParam0, 0);
}

int func_1293(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_294328[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_294328[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_1294(int iParam0)
{
	if (Global_1574629.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1655628[func_208(-1)];
			}
			else if (func_423(iParam0))
			{
				return Global_1853128[iParam0 /*888*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1655628[func_208(-1)];
	}
	return 0;
}

void func_1295(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_207(iParam0, func_208(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_1296(iParam0))
	{
		func_1290(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_1291(iParam0, iVar0, iParam2, 1);
	}
}

int func_1296(int iParam0)
{
	if (Global_1655477)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8728:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8730:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8732:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8734:
			case 1304:
			case 7235:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8733:
			case 9537:
			case 1237:
			case 1878:
			case 2269:
			case 2931:
			case 3060:
			case 10890:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3234:
			case 3236:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3229:
			case 3223:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3691:
			case 3232:
			case 3231:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 4028:
			case 4027:
			case 4031:
			case 4030:
			case 6112:
			case 6111:
			case 6170:
			case 6169:
			case 6535:
			case 6534:
			case 6548:
			case 6547:
			case 6561:
			case 6560:
			case 6564:
			case 6563:
			case 6567:
			case 6566:
			case 7285:
			case 7287:
			case 7289:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8904:
			case 8012:
			case 8536:
			case 8979:
			case 8981:
			case 8982:
			case 8984:
			case 9623:
			case 9912:
				return 1;
				break;
			}
	}
	return 0;
}

void func_1297(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_331(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_107(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_1298(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_1298(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_1298(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_1299(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_9(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_107(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_9(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_1300(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_107(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_1298(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_1298(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_1300(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_100(iParam0), func_100(iParam1));
	return 0f;
}

int func_1301(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_1298(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_1302(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_1294(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_1294(PLAYER::PLAYER_ID());
		}
	}
	if (func_1303(8000, 0, 0) > 0)
	{
		if (func_1303(8000, 0, 0) < (iParam0 + func_1294(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_1303(8000, 0, 0) - func_1294(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_1303(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_294328[iParam0];
}

int func_1304()
{
	return 1;
}

int func_1305(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_1306(int iParam0)
{
	return func_1307(func_229(iParam0));
}

int func_1307(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1308()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_101();
	}
	return func_1309(Global_4718592.f_86750);
}

int func_1309(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5011[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1310(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 2;
}

bool func_1311(int iParam0)
{
	return Global_2689156[iParam0 /*453*/].f_119 == 7;
}

void func_1312()
{
	Global_2726775 = 1;
}

void func_1313(int iParam0)
{
	int iVar0;
	
	if (func_275())
	{
		func_1314(-1029672338, iParam0, &iVar0, 0, 1, 0);
		Global_4528329[iVar0 /*85*/].f_66.f_1 = iParam0;
		Global_4528329[iVar0 /*85*/].f_66.f_16 = func_566();
	}
	else
	{
		MONEY::_0xE2BB399D90942091(iParam0, func_566());
	}
}

void func_1314(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_275())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_1315(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_1315(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
			if (iParam1 > 0 || Global_262145.f_28023)
			{
				func_1315(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
			func_1315(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_1315(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_275())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_98()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4529831 = 1;
			return 0;
		}
		if (Global_2726388)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4529832 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4528329[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_1249(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4528329[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4528329[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4529816 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4529830 = 1;
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4529833 = iParam4;
			Global_4529835 = iParam3;
			Global_4529836 = 1;
			Global_4529834 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_1317(1, iParam4);
			Global_4529830 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_1316(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_1316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_1235(iParam0);
	}
}

void func_1317(int iParam0, int iParam1)
{
	Global_2727573 = iParam1;
	Global_2727572 = iParam0;
}

void func_1318(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			if (func_78(iLocal_3118))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29807);
				*uParam2 = (*uParam2 + Global_262145.f_29815);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29810);
			}
			break;
		
		case 3:
		case 4:
			if (func_78(iLocal_3118))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29809);
				*uParam2 = (*uParam2 + Global_262145.f_29817);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29811);
			}
			break;
		
		case 5:
		case 6:
			if (func_78(iLocal_3118))
			{
				*uParam1 = (*uParam1 + Global_262145.f_29808);
				*uParam2 = (*uParam2 + Global_262145.f_29816);
			}
			else
			{
				*uParam1 = (*uParam1 + Global_262145.f_29812);
			}
			break;
	}
}

bool func_1319(int iParam0)
{
	return func_4(&uLocal_3144, iParam0);
}

void func_1320()
{
	if (!func_1204(8))
	{
		if (func_1470())
		{
			if (func_1400(0, 1, 1) && func_1394())
			{
				func_1321();
				func_527(8);
			}
		}
		else
		{
			func_527(8);
		}
	}
}

void func_1321()
{
	switch (func_502())
	{
		case 20:
			if (func_566() == 3)
			{
				func_1389(89, func_1393(), func_1391(), func_1390(), -1, -1, -1082130432, 0, 1, 2, 0);
				return;
			}
			break;
		
		case 12:
			func_1388(88, "CSH_STOVER_T", "CSH_FAIL_NOP", 1, -1, 2, 1, 0);
			return;
			break;
		
		case 2:
			return;
			break;
	}
	if (func_1385())
	{
		if (func_1384())
		{
			func_1373(100, func_1382(), func_1381(), func_1379(1, 1, 0), 0, -1, func_1375(), func_1374(), 1, 2, 0);
		}
		else
		{
			func_1323(100, func_1375(), func_1381(), func_1382(), 1, -1, -1082130432, 2);
		}
	}
	else if (func_1204(11))
	{
		func_1389(100, func_1379(1, 1, 0), func_1322(), func_1382(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
	else
	{
		func_1389(89, func_1393(), func_1391(), func_1390(), -1, -1, -1082130432, 0, 1, 2, 0);
	}
}

char* func_1322()
{
	switch (func_566())
	{
		case 0:
		case 1:
		case 3:
		case 5:
		case 6:
			return "IDJ_DELIVERED";
		
		case 4:
			return "IDJ_DELIVERED_P";
		
		case 2:
			return "IDJ_RECOVERED_P";
		
		default:
	}
	return "CSH_STPASSVC_S";
}

int func_1323(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1372(iParam0, &Var0, iParam1, sParam2, sParam3);
	Var0.f_71 = iParam4;
	Var0.f_6 = iParam5;
	Var0.f_7 = iParam6;
	Var0.f_72 = iParam7;
	return func_1324(&Var0);
}

int func_1324(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2703656.f_2736)
		{
			return 0;
		}
	}
	func_1340(uParam0, uParam0->f_17);
	func_1337(uParam0);
	if (func_101())
	{
		func_1337(uParam0);
	}
	if (func_1336(uParam0->f_1))
	{
		func_1329();
		if (Global_2703656.f_2414[0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[0 /*80*/] = { *uParam0 };
			if (func_1328(uParam0->f_69, 8192))
			{
				Global_1932198 = 1;
			}
			return 1;
		}
		if (((Global_2703656.f_2414[0 /*80*/].f_1 == 13 || Global_2703656.f_2414[0 /*80*/].f_1 == 53) || Global_2703656.f_2414[0 /*80*/].f_1 == 54) || Global_2703656.f_2414[0 /*80*/].f_1 == 58)
		{
			Global_2703656.f_2414[0 /*80*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2703656.f_2414[iVar0 + 1 /*80*/] = { Global_2703656.f_2414[iVar0 /*80*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2703656.f_2414[1 /*80*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2703656.f_2414[iVar0 /*80*/].f_2 == 0)
		{
			Global_2703656.f_2414[iVar0 /*80*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_1329();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				func_1326(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 2);
				Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86 && !func_1328(uParam0->f_69, 128))
			{
				if (func_1325(Global_2703656.f_2414[iVar0 /*80*/].f_1))
				{
					Global_2703656.f_2414[iVar0 /*80*/].f_2 = 5;
					func_1326(&(Global_2703656.f_2414[iVar0 /*80*/].f_69), 1);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1325(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
		case 110:
			return 1;
		
		default:
	}
	return 0;
}

void func_1326(var uParam0, int iParam1)
{
	func_1327(uParam0, iParam1);
}

void func_1327(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_1328(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_1329()
{
	bool bVar0;
	
	if (Global_2703656.f_2737)
	{
		return;
	}
	if (!Global_78120)
	{
		Global_78120 = 1;
		bVar0 = true;
	}
	func_1330();
	if (bVar0)
	{
		Global_78120 = 0;
	}
}

void func_1330()
{
	Global_2703656.f_2738 = 0;
	Global_2703656.f_2738.f_582 = 0;
	func_1334(&(Global_2703656.f_2738.f_1));
	Global_2703656.f_2738.f_1.f_1 = 0;
	func_1331(&(Global_2703656.f_2738.f_1), 1);
}

void func_1331(var uParam0, int iParam1)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if ((uParam0->f_566 || iParam1) && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_568)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_568 = 0;
	}
	if (!Global_78120)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_78121)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_1333(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_1332(0);
}

void func_1332(int iParam0)
{
	Global_78112 = iParam0;
	Global_78113 = iParam0;
}

bool func_1333(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_78100, 0);
}

void func_1334(var uParam0)
{
	func_1335(uParam0);
	uParam0->f_574 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_571 = 0;
	uParam0->f_573 = 0;
}

void func_1335(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_572 = 0f;
	uParam0->f_562 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_563 = 0f;
	uParam0->f_564 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_567 = 0;
	uParam0->f_576 = 0;
	uParam0->f_568 = 0;
	uParam0->f_569 = 0;
	uParam0->f_570 = 0;
	*uParam0 = 0,1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_578 = 0;
	uParam0->f_579 = 0;
	uParam0->f_577 = 1f;
}

int func_1336(int iParam0)
{
	if (((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105) || iParam0 == 110)
	{
		return 1;
	}
	return 0;
}

void func_1337(var uParam0)
{
	if (func_1339(uParam0->f_1))
	{
		uParam0->f_72 = func_1338();
	}
}

int func_1338()
{
	return 21;
}

int func_1339(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_1340(var uParam0, int iParam1)
{
	if (func_1339(uParam0->f_1))
	{
		uParam0->f_73 = 1;
	}
	if (iParam1 == func_73() || !func_9(iParam1, 0, 1))
	{
		return;
	}
	if (func_1325(uParam0->f_1))
	{
		if (uParam0->f_71 == 1)
		{
			uParam0->f_73 = func_1341(iParam1, -2, 0, 0, 0);
		}
	}
}

int func_1341(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_335(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_81475[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_335(PLAYER::PLAYER_ID()) || (func_1371() && func_1370())) && !MISC::IS_BIT_SET(Global_2810287.f_4659, 31)) && !bParam4)
	{
		iVar1 = func_1369();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_9(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_81475[iParam1] != -1)
							{
								return func_1367(iParam1, iParam0, 0);
							}
							else
							{
								return func_1353(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_1353(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_81475[iParam1] != -1)
				{
					return func_1367(iParam1, iParam0, 0);
				}
				else
				{
					return func_1342(0, -1, 0);
				}
			}
			else
			{
				return func_1342(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_81475[iParam1] != -1)
		{
			return func_1367(iParam1, iParam0, 0);
		}
		else
		{
			return func_1353(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_1353(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_1342(bool bParam0, int iParam1, bool bParam2)
{
	return func_1343(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_1343(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_1352() || (func_1351() && func_1349())) && Global_1655683.f_1)
	{
		if (bParam1)
		{
			return func_1348(iParam2, iVar0);
		}
		else
		{
			return func_1348(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_331(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_1347(1);
				}
				else
				{
					return func_1347(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4718592.f_4, 20))
			{
				return func_1344(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_1344(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_1347(1);
	}
	return func_1347(0);
}

int func_1344(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_1346(iParam0, iParam1, iParam3);
	if (func_1345(Global_4718592.f_86750, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_1345(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_138117 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9277[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1346(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_331(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_1347(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_1348(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_1346(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_1349()
{
	if (func_1350())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4718592.f_142301, 4);
}

bool func_1350()
{
	return MISC::IS_BIT_SET(Global_4718592.f_131903, 12);
}

bool func_1351()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4718592.f_142301, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4718592.f_142301, 0) || Global_1923663) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_1352()
{
	if (func_1350() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_1353(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1853128[PLAYER::PLAYER_ID() /*888*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1853128[iVar2 /*888*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_1359())
			{
				iVar3 = func_1358(iParam0);
				if (!iVar3 == -1)
				{
					return func_1356(iVar3);
				}
			}
			if ((func_1355(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)) || ((func_331(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4718592.f_15, 23)) && !MISC::IS_BIT_SET(Global_4718592.f_15, 18)))
			{
				return func_1347(1);
			}
			else if (MISC::IS_BIT_SET(Global_4718592.f_15, 26))
			{
				return func_1354(1);
			}
			else
			{
				return func_1343(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836580 || Global_1836571) || Global_1853128[iParam0 /*888*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836580 == 1 && Global_1836590 == 0))
			{
				return func_1347(1);
			}
			else
			{
				return func_1343(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836575 && Global_1836066.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_1358(iParam0);
	if (!iVar4 == -1)
	{
		return func_1356(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_1354(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_1355(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_1356(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_1357(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_1357(int iParam0)
{
	return Global_2680195.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_1358(int iParam0)
{
	if (!iParam0 == func_73())
	{
		if (func_80(iParam0, 1))
		{
			return Global_2680195.f_818.f_11[func_105(iParam0)];
		}
	}
	return -1;
}

int func_1359()
{
	if ((((((func_404() || func_1366()) || func_101()) || func_1365()) || func_1364()) || func_1362()) || func_1360())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4718592.f_36, 1))
	{
		return 1;
	}
	return 0;
}

int func_1360()
{
	return func_1361(Global_4718592.f_86750);
}

int func_1361(int iParam0)
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

int func_1362()
{
	return func_1363(Global_4718592.f_86750);
}

int func_1363(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30684[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_1364()
{
	return Global_2714627.f_24;
}

var func_1365()
{
	return Global_2714627.f_21;
}

var func_1366()
{
	return Global_2714627.f_18;
}

int func_1367(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058064.f_14[iParam0];
	if (func_1359())
	{
		iVar2 = func_1358(iParam1);
		if (!iVar2 == -1)
		{
			return func_1356(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4718592.f_594[iParam0 /*17044*/].f_7447[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_73())
	{
		if (Global_4718592.f_81475[iParam0] != -1 && Global_4718592.f_81475[iParam0] <= 4)
		{
			if (Global_4718592.f_81475[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_81475[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_81475[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_81475[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4718592.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_81475[iParam0];
			}
		}
		else
		{
			iVar0 = func_1343(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_21, 13))
		{
			iVar0 = func_1368(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4718592.f_15, 26) && !func_331(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_1354(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_1368(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_138274;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_138275;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_138276;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_138277;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

var func_1369()
{
	return Global_2621446.f_2;
}

bool func_1370()
{
	return MISC::IS_BIT_SET(Global_2621446, 4);
}

bool func_1371()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 14);
}

void func_1372(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_17 = func_73();
	uParam1->f_18 = func_73();
	uParam1->f_19 = func_73();
	uParam1->f_20 = func_73();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_21), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_16 = 1;
	uParam1->f_3 = iParam2;
	uParam1->f_71 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 1;
	uParam1->f_76 = 0;
	uParam1->f_77 = 0;
	uParam1->f_73 = 0;
	StringCopy(&(uParam1->f_25), "", 64);
	StringCopy(&(uParam1->f_41), "", 64);
}

int func_1373(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1372(iParam0, &Var0, iParam6, sParam2, sParam1);
	StringCopy(&(Var0.f_57), sParam3, 16);
	StringCopy(&(Var0.f_61), sParam4, 16);
	Var0.f_6 = iParam5;
	Var0.f_4 = uParam7;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1326(&(Var0.f_69), iParam10);
	}
	return func_1324(&Var0);
}

int func_1374()
{
	return func_28();
}

int func_1375()
{
	return func_1376(iLocal_3118);
}

int func_1376(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_453(iVar0, 4) && func_1377(iParam0, iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1377(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_186(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (func_80(iParam0, 1) && !func_84(21))
	{
		return func_1378(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(func_105(iParam0));
	}
	return func_1378(iVar0) == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam0);
}

int func_1378(int iParam0)
{
	return Local_3199.f_562.f_1[iParam0 /*5*/].f_4;
}

char* func_1379(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0)
	{
		if (bParam1)
		{
			if (bParam2)
			{
				switch (func_1380())
				{
					case 0:
						return "IDJ_SKTE_MRCH";
					
					case 1:
						return "IDJ_KM_PIZZA";
					
					case 2:
						return "IDJ_KM_STONES";
					
					case 4:
						return "IDJ_MM_SLIP";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE";
					
					case 5:
						return "IDJ_PT_EQUIP";
					
					default:
				}
			}
			else
			{
				switch (func_1380())
				{
					case 0:
						return "IDJ_SKTE_MRCH_B";
					
					case 1:
						return "IDJ_KM_PIZZA_B";
					
					case 2:
						return "IDJ_KM_STONES_B";
					
					case 4:
						return "IDJ_MM_SLIP_B";
					
					case 3:
						return "IDJ_MM_RENTAL";
					
					case 6:
						return "IDJ_CHAMPAGNE_B";
					
					case 5:
						return "IDJ_PT_EQUIP_B";
					}
				
				default:
			}
		}
		else
		{
			switch (func_1380())
			{
				case 0:
					return "IDJ_SKTE_MRCH_B";
				
				case 1:
					return "IDJ_KM_PIZZA_B";
				
				case 2:
					return "IDJ_KM_STONES_B";
				
				case 4:
					return "IDJ_MM_SLIP";
				
				case 3:
					return "IDJ_MM_RENTAL";
				
				case 6:
					return "IDJ_DELVRTRK_B";
				
				case 5:
					return "IDJ_PT_EQUIP_B";
				}
			
			default:
		}
	}
	else
	{
		switch (func_1380())
		{
			case 0:
				return "IDJ_SKTE_MRCH";
			
			case 1:
				return "IDJ_KM_PIZZA";
			
			case 2:
				return "IDJ_KM_STONES";
			
			case 4:
				return "IDJ_MM_SLIP";
			
			case 3:
				return "IDJ_MM_RENTAL";
			
			case 6:
				return "IDJ_DELVRTRK";
			
			case 5:
				return "IDJ_PT_EQUIP";
			}
		
		default:
	}
	return "SMTYPE_MIXED";
}

int func_1380()
{
	return Local_3199.f_525.f_2;
}

char* func_1381()
{
	return "";
}

char* func_1382()
{
	return func_1383();
}

char* func_1383()
{
	switch (func_566())
	{
		case 0:
		case 1:
		case 2:
			return "IDJ_KM_BM_TITLE";
		
		case 3:
		case 4:
			return "IDJ_MM_BM_TITLE";
		
		case 5:
		case 6:
			return "IDJ_PT_BM_TITLE";
		
		default:
	}
	return "IDJ_BM_TITLE";
}

int func_1384()
{
	switch (func_566())
	{
		case 7:
			return 1;
		
		default:
	}
	return 0;
}

bool func_1385()
{
	if (Local_1231.f_97.f_1 != 0)
	{
		Call_Loc(Local_1231.f_97.f_1);
		return StackVal;
	}
	if (!func_455())
	{
		return 0;
	}
	if (func_1387() && func_1376(iLocal_3118) < func_28())
	{
		return 1;
	}
	return (func_1386(iLocal_3118) && !func_1387());
}

int func_1386(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (func_453(iVar0, 4) && func_1377(iParam0, iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1387()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_227.f_19)
	{
		if (!func_453(iVar0, 4))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_1388(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1372(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_71 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_72 = iParam5;
	Var0.f_16 = iParam6;
	if (iParam7 != 0)
	{
		func_1326(&(Var0.f_69), iParam7);
	}
	return func_1324(&Var0);
}

int func_1389(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10)
{
	struct<80> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_16 = 1;
	Var0.f_71 = 1;
	Var0.f_72 = 2;
	Var0.f_79 = -1;
	func_1372(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_57), sParam1, 16);
	StringCopy(&(Var0.f_61), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_71 = iParam8;
	Var0.f_72 = iParam9;
	if (iParam10 != 0)
	{
		func_1326(&(Var0.f_69), iParam10);
	}
	return func_1324(&Var0);
}

char* func_1390()
{
	return "IDJ_BM_F";
}

char* func_1391()
{
	switch (func_566())
	{
		case 0:
		case 1:
		case 5:
		case 6:
			return "IDJ_FAIL_DLVR";
		
		case 4:
			return "IDJ_FAIL_DLVR_P";
		
		case 3:
			return "IDJ_FAIL_RCVR";
		
		case 2:
			return "IDJ_FAIL_RCVR_P";
		
		default:
	}
	if (func_1392())
	{
		return "CSH_FAIL_NDa";
	}
	return "CSH_FAIL_NDb";
}

int func_1392()
{
	switch (func_566())
	{
		case 0:
			return 1;
		
		case 1:
			return 1;
		
		case 2:
			return 0;
		
		case 4:
			return 0;
		
		case 3:
			return 1;
		
		case 6:
			return 1;
		
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_1393()
{
	return func_1379(1, 1, 1);
}

bool func_1394()
{
	return (func_1396() || func_1395());
}

int func_1395()
{
	return 0;
}

bool func_1396()
{
	return (func_429(iLocal_3121, 3) || func_1397(iLocal_3118));
}

bool func_1397(int iParam0)
{
	return func_1398(iParam0);
}

bool func_1398(int iParam0)
{
	return func_1399(iParam0, 20);
}

bool func_1399(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_11.f_4, iParam1);
}

bool func_1400(int iParam0, int iParam1, int iParam2)
{
	return ((!func_1462() && !func_1461()) && func_1401((iParam0 && func_1460()), 1, func_1459(), 0));
}

int func_1401(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_946(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_1458(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (func_1458(PLAYER::PLAYER_ID(), 25))
	{
		return 0;
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
		{
			return 0;
		}
	}
	if (!func_1457(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (bParam0)
	{
		if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		{
			return 0;
		}
	}
	if (func_1456(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1455())
	{
		return 0;
	}
	if (func_1454())
	{
		return 0;
	}
	if (func_1453())
	{
		return 0;
	}
	if (func_1452())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_333(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_1450())
	{
		return 0;
	}
	if (func_1458(PLAYER::PLAYER_ID(), 0) || func_1458(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_1458(PLAYER::PLAYER_ID(), 12) || func_1458(PLAYER::PLAYER_ID(), 14)) || func_1458(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_1447(PLAYER::PLAYER_ID(), 0, -1))
	{
		if (!func_1411())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (func_212())
		{
			return 0;
		}
	}
	if (Global_1932192)
	{
		return 0;
	}
	if (func_1410(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1409())
	{
		return 0;
	}
	if (func_1408(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if ((func_385(PLAYER::PLAYER_ID()) && func_382(PLAYER::PLAYER_ID()) == 123) && !bParam3)
	{
		return 0;
	}
	if (func_1407())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_28, 4))
	{
		return 0;
	}
	if (func_1406(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_1405(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_1398(PLAYER::PLAYER_ID()))
	{
		if (func_1404(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_1402())
	{
		return 0;
	}
	return 1;
}

bool func_1402()
{
	return func_1403() == 1;
}

int func_1403()
{
	return Global_1973362;
}

int func_1404(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1890187[iVar0 /*105*/].f_77.f_27 != 0;
	}
	return 0;
}

int func_1405(int iParam0)
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

int func_1406(int iParam0)
{
	if (Global_2689156[iParam0 /*453*/].f_270.f_4 != 0 || Global_2689156[iParam0 /*453*/].f_270.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_1407()
{
	return Global_1946934.f_4583 != -1;
}

int func_1408(int iParam0)
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

int func_1409()
{
	if (Global_4516656.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_1410(int iParam0)
{
	if (!func_9(iParam0, 0, 1))
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_887, 2);
}

int func_1411()
{
	int iVar0;
	
	iVar0 = func_229(PLAYER::PLAYER_ID());
	if (((func_1446(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_267.f_30) || func_1445(PLAYER::PLAYER_ID())) || func_1444(PLAYER::PLAYER_ID())) || func_1439(PLAYER::PLAYER_ID()))
	{
		if (((iVar0 == 167 || iVar0 == 168) || iVar0 == 178) || iVar0 == 188)
		{
			return 1;
		}
	}
	if (func_1438(PLAYER::PLAYER_ID()))
	{
		if (func_1437(iVar0) || func_1436(iVar0))
		{
			return 1;
		}
	}
	if (func_1435(PLAYER::PLAYER_ID()))
	{
		if (func_1436(iVar0))
		{
			return 1;
		}
	}
	if (func_1434(PLAYER::PLAYER_ID()))
	{
		if (func_1433(iVar0))
		{
			return 1;
		}
	}
	if (func_1432(PLAYER::PLAYER_ID()))
	{
		if (func_1431(iVar0))
		{
			return 1;
		}
	}
	if (func_1430(PLAYER::PLAYER_ID()))
	{
		if (func_1307(iVar0))
		{
			return 1;
		}
	}
	if (func_1429(PLAYER::PLAYER_ID()))
	{
		if (func_1428(iVar0))
		{
			return 1;
		}
	}
	if (func_386(PLAYER::PLAYER_ID(), 0))
	{
		if (func_1427(iVar0))
		{
			if (func_1425(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (func_1424(PLAYER::PLAYER_ID()))
	{
		if (func_1423(iVar0))
		{
			return 1;
		}
		if (func_1422(iVar0))
		{
			return 1;
		}
		if (func_1421())
		{
			return 1;
		}
	}
	if (func_1420(PLAYER::PLAYER_ID()))
	{
		if (func_1419())
		{
			return 1;
		}
	}
	if (func_1418(PLAYER::PLAYER_ID()))
	{
		if (func_1422(iVar0))
		{
			return 1;
		}
	}
	if (func_240(PLAYER::PLAYER_ID()))
	{
		if (func_1417(iVar0))
		{
			return 1;
		}
	}
	if (func_1416(PLAYER::PLAYER_ID()))
	{
		if (func_1415(iVar0))
		{
			return 1;
		}
	}
	if (func_1414(PLAYER::PLAYER_ID()))
	{
		if (func_1413(iVar0) || func_1412(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_1412(int iParam0)
{
	switch (iParam0)
	{
		case 263:
			return 1;
		
		default:
	}
	return 0;
}

int func_1413(int iParam0)
{
	switch (iParam0)
	{
		case 264:
			return 1;
		
		default:
	}
	return 0;
}

int func_1414(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 24;
			}
		}
	}
	return 0;
}

int func_1415(int iParam0)
{
	switch (iParam0)
	{
		case 276:
			return 1;
		
		default:
	}
	return 0;
}

int func_1416(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 23;
			}
		}
	}
	return 0;
}

int func_1417(int iParam0)
{
	switch (iParam0)
	{
		case 271:
			return 1;
		
		default:
	}
	return 0;
}

int func_1418(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1 && Global_2689156[iParam0 /*453*/].f_319.f_9 != func_73())
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 20;
			}
		}
	}
	return 0;
}

bool func_1419()
{
	return Global_2810287.f_6720;
}

int func_1420(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 16;
			}
		}
	}
	return 0;
}

bool func_1421()
{
	return Global_2810287.f_6719;
}

int func_1422(int iParam0)
{
	switch (iParam0)
	{
		case 256:
			return 1;
		
		default:
	}
	return 0;
}

int func_1423(int iParam0)
{
	switch (iParam0)
	{
		case 158:
			return 1;
		
		default:
	}
	return 0;
}

int func_1424(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_1425(int iParam0)
{
	if (func_1426(iParam0) != func_73())
	{
		return func_1426(iParam0) == func_105(iParam0);
	}
	return 0;
}

int func_1426(int iParam0)
{
	return Global_1893548[iParam0 /*600*/].f_11.f_35;
}

int func_1427(int iParam0)
{
	switch (iParam0)
	{
		case 241:
		case 248:
		case 242:
		case 244:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return 0;
}

int func_1428(int iParam0)
{
	switch (iParam0)
	{
		case 237:
		case 238:
		case 249:
		case 250:
			return 1;
		
		default:
	}
	return 0;
}

int func_1429(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 11;
			}
		}
	}
	return 0;
}

int func_1430(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 9;
			}
		}
	}
	return 0;
}

int func_1431(int iParam0)
{
	switch (iParam0)
	{
		case 229:
		case 230:
			return 1;
		
		default:
	}
	return 0;
}

int func_1432(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 7;
			}
		}
	}
	return 0;
}

int func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 225:
		case 226:
		case 227:
			return 1;
		
		default:
	}
	return 0;
}

int func_1434(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 4;
			}
		}
	}
	return 0;
}

int func_1435(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 2;
			}
		}
	}
	return 0;
}

int func_1436(int iParam0)
{
	switch (iParam0)
	{
		case 190:
		case 191:
		case 192:
			return 1;
		
		default:
	}
	return 0;
}

int func_1437(int iParam0)
{
	switch (iParam0)
	{
		case 180:
		case 183:
		case 185:
		case 186:
		case 182:
		case 195:
		case 197:
		case 198:
		case 207:
		case 208:
		case 209:
			return 1;
		
		default:
	}
	return 0;
}

int func_1438(int iParam0)
{
	if (func_398(Global_1853128[iParam0 /*888*/].f_267.f_30, -1))
	{
		return 1;
	}
	return 0;
}

int func_1439(int iParam0)
{
	if (func_1440(Global_1853128[iParam0 /*888*/].f_267.f_30, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_1440(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2)
	{
		return func_1441(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_1441(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

bool func_1441(int iParam0, bool bParam1)
{
	if (Global_1852964 != func_73())
	{
		if (!func_1443(Global_1852964))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1852964)
			{
				if (MISC::IS_BIT_SET(Global_2689156[Global_1852964 /*453*/].f_199, 24) || func_1442(Global_1852964))
				{
					return 1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_199, 24);
}

int func_1442(int iParam0)
{
	if (iParam0 != func_73())
	{
		return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_199, 9);
	}
	return 0;
}

int func_1443(int iParam0)
{
	if (iParam0 != func_73())
	{
		return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_361, 2);
	}
	return 0;
}

int func_1444(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 1;
			}
		}
	}
	return 0;
}

int func_1445(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
			{
				return func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) == 0;
			}
		}
	}
	return 0;
}

int func_1446(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_1447(int iParam0, bool bParam1, int iParam2)
{
	if (Global_1853128[iParam0 /*888*/].f_267.f_30 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_28, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (Global_2689156[iParam0 /*453*/].f_319.f_6 != -1)
	{
		if (iParam2 == -1 || func_241(Global_2689156[iParam0 /*453*/].f_319.f_6) != iParam2)
		{
			if (bParam1)
			{
				return func_1448(iParam0) == iParam0;
			}
			return 1;
		}
	}
	return 0;
}

int func_1448(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_73())
	{
		return iParam0;
	}
	if (func_1449(iParam0) != -1)
	{
		iVar0 = func_241(func_1449(iParam0));
		if ((iVar0 == 2 || iVar0 == 1) || iVar0 == 0)
		{
			if (func_80(iParam0, 0))
			{
				return func_105(iParam0);
			}
			return iParam0;
		}
		else if (iVar0 == 3)
		{
			return func_73();
		}
		return Global_2689156[iParam0 /*453*/].f_319.f_9;
	}
	return func_73();
}

int func_1449(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_9(iParam0, 1, 1))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
		else if (((Global_1575046 || Global_2667222.f_2678) && iParam0 == PLAYER::PLAYER_ID()) && func_9(iParam0, 1, 0))
		{
			return Global_2689156[iParam0 /*453*/].f_319.f_6;
		}
	}
	return -1;
}

int func_1450()
{
	if (func_1451() == 0)
	{
		return 1;
	}
	return 0;
}

int func_1451()
{
	return Global_1574629.f_18;
}

bool func_1452()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_192 != 0;
}

bool func_1453()
{
	return Global_1575046;
}

bool func_1454()
{
	return Global_1853128[PLAYER::PLAYER_ID() /*888*/] == 5;
}

bool func_1455()
{
	return MISC::IS_BIT_SET(Global_1853128[PLAYER::PLAYER_ID() /*888*/].f_36.f_18, 0);
}

int func_1456(int iParam0)
{
	if (func_332(iParam0, 1, 0))
	{
		if (Global_1853128[iParam0 /*888*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1457(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_139, 22);
}

bool func_1458(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_217, iParam1);
}

bool func_1459()
{
	if (Local_1231.f_45.f_5 != 0)
	{
		Call_Loc(Local_1231.f_45.f_5);
		return StackVal;
	}
	if (func_1421())
	{
		return 0;
	}
	return !func_1204(3);
}

bool func_1460()
{
	return !func_1614();
}

int func_1461()
{
	return 0;
}

int func_1462()
{
	if ((func_1399(PLAYER::PLAYER_ID(), 21) || func_1399(PLAYER::PLAYER_ID(), 22)) || func_1468())
	{
		return 1;
	}
	if (func_1464())
	{
		func_1463(22);
		return 1;
	}
	return 0;
}

void func_1463(int iParam0)
{
	MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_4), iParam0);
}

int func_1464()
{
	if (func_228(PLAYER::PLAYER_ID(), 0))
	{
		if (((func_1467() && !func_1466()) || func_1458(PLAYER::PLAYER_ID(), 21)) || func_1458(PLAYER::PLAYER_ID(), 25))
		{
			return 1;
		}
		else
		{
			func_1465(27);
		}
	}
	return 0;
}

void func_1465(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_4), iParam0);
}

bool func_1466()
{
	return Global_1574580.f_1;
}

bool func_1467()
{
	return Global_1574580;
}

bool func_1468()
{
	return func_1469(424, -1);
}

int func_1469(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2860375[iParam0 /*3*/][func_208(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_1470()
{
	if (func_502() == 2 && func_1471(Local_3129.f_0) != 3)
	{
		return 0;
	}
	if (func_1204(11))
	{
		if (func_84(24) || func_84(23))
		{
			return 0;
		}
	}
	return 1;
}

int func_1471(int iParam0)
{
	switch (iParam0)
	{
		case 153:
		case 154:
		case 155:
		case 162:
		case 160:
		case 163:
		case 167:
		case 168:
		case 169:
		case 171:
		case 172:
		case 178:
		case 190:
		case 191:
		case 192:
		case 189:
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 225:
		case 226:
		case 227:
		case 229:
		case 230:
		case 233:
		case 237:
		case 238:
		case 239:
		case 240:
		case 249:
		case 250:
		case 243:
		case 158:
		case 181:
		case 256:
		case 258:
		case 262:
		case 263:
		case 264:
		case 271:
		case 277:
			return 0;
		
		case 276:
			return 3;
		
		case 152:
		case 159:
		case 142:
		case 164:
		case 157:
		case 166:
		case 170:
		case 173:
		case 180:
		case 183:
		case 185:
		case 182:
		case 186:
		case 197:
		case 200:
		case 201:
		case 198:
		case 195:
		case 207:
		case 208:
		case 209:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 241:
		case 242:
		case 244:
		case 248:
			return 1;
		
		case 148:
		case 179:
			return 2;
		
		default:
	}
	return -1;
}

void func_1472()
{
	int iVar0;
	
	if (func_429(iLocal_3121, 25))
	{
		return;
	}
	if (func_1474())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_449())
	{
		if (Local_3199.f_562.f_1[iVar0 /*5*/].f_1 != -1)
		{
			func_1473(Local_3199.f_562.f_1[iVar0 /*5*/]);
		}
		iVar0++;
	}
	func_1210(25);
}

void func_1473(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1952863.f_4858[iVar0 /*2*/].f_1 == -1)
		{
			Global_1952863.f_4858[iVar0 /*2*/] = { Param0 };
			MISC::SET_BIT(&Global_1952863, 1);
			return;
		}
		iVar0++;
	}
	if (!MISC::IS_BIT_SET(Global_1952863, 1))
	{
		MISC::SET_BIT(&Global_1952863, 1);
	}
}

bool func_1474()
{
	return func_1475(PLAYER::PLAYER_ID());
}

int func_1475(int iParam0)
{
	if (iParam0 != func_73())
	{
		if (func_472(Global_1893548[iParam0 /*600*/].f_557.f_12) || MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_557, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_1476()
{
	char* sVar0;
	
	if (func_1204(11))
	{
		sVar0 = func_1481();
	}
	else
	{
		sVar0 = func_1479();
	}
	if (iLocal_3104 != -1)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
		}
	}
	func_1477(0);
}

void func_1477(bool bParam0)
{
	if (bParam0)
	{
		if (!func_1204(34))
		{
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", true);
			func_527(34);
		}
	}
	else if (func_1204(34))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", false);
		func_1478(34);
	}
}

void func_1478(int iParam0)
{
	if (func_157(&uLocal_3133, iParam0))
	{
	}
}

var func_1479()
{
	if (Local_1231.f_89.f_3.f_3 != 0)
	{
		Call_Loc(Local_1231.f_89.f_3.f_3);
		return StackVal;
	}
	return func_1480();
}

char* func_1480()
{
	return "";
}

var func_1481()
{
	if (Local_1231.f_89.f_3.f_2 != 0)
	{
		Call_Loc(Local_1231.f_89.f_3.f_2);
		return StackVal;
	}
	return func_1482();
}

char* func_1482()
{
	return "";
}

void func_1483()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar5 = -1;
	iVar4 = 0;
	while (iVar4 < Local_227.f_19)
	{
		func_1613(iVar4);
		bVar0 = NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2[iVar4]);
		if (bVar0)
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_3199.f_2[iVar4]);
			bVar1 = ENTITY::IS_ENTITY_DEAD(iVar3, false);
			if (Local_1231.f_108.f_34 != 0)
			{
				Stack.Push(iVar4);
				Stack.Push(iVar3);
				Stack.Push(bVar1);
				Call_Loc(Local_1231.f_108.f_34);
			}
			if (!bVar1)
			{
				func_1608(iVar4, iVar3);
				func_1607(iVar4, iVar3);
				func_1586(iVar4, iVar3, &bVar2, &iVar5);
				func_1581(iVar4, iVar3);
				func_1568(iVar4, iVar3, bVar2);
				func_1563(iVar4, iVar3);
			}
			func_1561(iVar4);
			func_1548(iVar4, Local_2860.f_11);
			func_1530(iVar4);
		}
		else
		{
			Local_2782[iVar4 /*7*/].f_1 = 99999f;
			Local_2782[iVar4 /*7*/].f_2 = 99999f;
			Local_2782[iVar4 /*7*/].f_3 = 99999f;
		}
		func_1521(iVar4, bVar0);
		iVar4++;
	}
	if (bVar2)
	{
		func_1520(1);
	}
	else
	{
		func_1516(0, 0);
		func_1520(0);
	}
	func_1507();
	func_1485();
	iLocal_3155++;
	if (iLocal_3155 >= func_28())
	{
		iLocal_3155 = 0;
		func_1484();
	}
}

void func_1484()
{
	if (func_13(&(Local_2782.f_33), 5000, 0) && Local_2782.f_35)
	{
		func_53(&(Local_2782.f_33));
		Local_2782.f_35 = 0;
	}
}

void func_1485()
{
	struct<3> Var0;
	bool bVar3;
	int iVar4;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2[iLocal_3155]))
	{
		iVar4 = NETWORK::NET_TO_ENT(Local_3199.f_2[iLocal_3155]);
		bVar3 = ENTITY::IS_ENTITY_DEAD(iVar4, false);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false) };
		if (!bVar3)
		{
			func_1505(iLocal_3155, Var0);
			if (func_13(&(Local_2782.f_33), 5000, 0))
			{
				if (iLocal_3155 == 0)
				{
					Local_2782.f_35 = 1;
				}
				func_1486(iLocal_3155, iVar4, Var0);
			}
		}
	}
}

void func_1486(int iParam0, int iParam1, struct<3> Param2)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	
	iVar0 = func_1503(Param2, 6, -1, 0, 1, -1);
	Var1 = { func_1492(iVar0, 0) };
	iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var1, func_1488(iVar0));
	iVar5 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam1);
	if (iVar4 != 0 && iVar4 == iVar5)
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam1))
		{
			return;
		}
		if (!func_788(Local_3199.f_2[iParam0]))
		{
			return;
		}
		if (func_1487(iVar0, &Var1, &fVar6))
		{
			Var1 = { Var1.f_0, Var1.f_1, (Var1.f_2 + 5f) };
			ENTITY::SET_ENTITY_COORDS(iParam1, Var1, true, false, false, true);
			if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
			{
				OBJECT::_PLACE_OBJECT_ON_GROUND_PROPERLY_2(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			}
			ENTITY::SET_ENTITY_HEADING(iParam1, fVar6);
			INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam1);
		}
	}
}

bool func_1487(int iParam0, var uParam1, var uParam2)
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829,842f, -191,7454f, 36,4386f };
			*uParam2 = 29,5061f;
			break;
		
		case 1:
			*uParam1 = { 129,8484f, -1716,528f, 28,0702f };
			*uParam2 = 50,3483f;
			break;
		
		case 2:
			*uParam1 = { -1296,913f, -1120,999f, 5,3951f };
			*uParam2 = 0,9933f;
			break;
		
		case 3:
			*uParam1 = { 1938,028f, 3718,736f, 31,3154f };
			*uParam2 = 118,2305f;
			break;
		
		case 4:
			*uParam1 = { 1197,866f, -469,3809f, 65,0885f };
			*uParam2 = 346,4477f;
			break;
		
		case 5:
			*uParam1 = { -32,2161f, -135,8212f, 56,0532f };
			*uParam2 = 186,0052f;
			break;
		
		case 6:
			*uParam1 = { -287,7696f, 6238,081f, 30,2902f };
			*uParam2 = 316,1349f;
			break;
		
		case 7:
			*uParam1 = { 99,2876f, -1395,16f, 28,2759f };
			*uParam2 = 320,2739f;
			break;
		
		case 8:
			*uParam1 = { 1679,445f, 4819,056f, 41,0035f };
			*uParam2 = 4,6192f;
			break;
		
		case 9:
			*uParam1 = { 411,3063f, -809,1863f, 28,1554f };
			*uParam2 = 1,8972f;
			break;
		
		case 10:
			*uParam1 = { -1088,054f, 2699,167f, 19,2748f };
			*uParam2 = 129,7382f;
			break;
		
		case 11:
			*uParam1 = { 1194,163f, 2695,644f, 36,9225f };
			*uParam2 = 1,1454f;
			break;
		
		case 12:
			*uParam1 = { -821,2829f, -1088,027f, 10,0499f };
			*uParam2 = 120,5883f;
			break;
		
		case 13:
			*uParam1 = { -3,3416f, 6521,303f, 30,2961f };
			*uParam2 = 316,4451f;
			break;
		
		case 14:
			*uParam1 = { -1208,417f, -785,9635f, 16,0139f };
			*uParam2 = 36,3181f;
			break;
		
		case 15:
			*uParam1 = { 623,1845f, 2739,191f, 40,9588f };
			*uParam2 = 3,5411f;
			break;
		
		case 16:
			*uParam1 = { 130,9555f, -198,2084f, 53,41f };
			*uParam2 = 251,3506f;
			break;
		
		case 17:
			*uParam1 = { -3164,065f, 1067,317f, 19,6778f };
			*uParam2 = 101,2229f;
			break;
		
		case 18:
			*uParam1 = { -713,2797f, -174,2767f, 35,8962f };
			*uParam2 = 29,8138f;
			break;
		
		case 19:
			*uParam1 = { -147,0616f, -306,4322f, 37,7912f };
			*uParam2 = 160,4526f;
			break;
		
		case 20:
			*uParam1 = { -1461,355f, -230,6092f, 48,3064f };
			*uParam2 = 318,7851f;
			break;
		
		case 21:
			*uParam1 = { -1347,739f, -1278,573f, 3,8952f };
			*uParam2 = 17,9365f;
			break;
		
		case 22:
			*uParam1 = { 325,6833f, 164,3263f, 102,4425f };
			*uParam2 = 68,6407f;
			break;
		
		case 23:
			*uParam1 = { 1858,774f, 3742,393f, 32,0779f };
			*uParam2 = 301,2329f;
			break;
		
		case 24:
			*uParam1 = { -286,3272f, 6202,802f, 30,3323f };
			*uParam2 = 225,1334f;
			break;
		
		case 25:
			*uParam1 = { -1161,596f, -1417,7f, 3,712f };
			*uParam2 = 246,9161f;
			break;
		
		case 26:
			*uParam1 = { 1308,952f, -1660,611f, 50,2362f };
			*uParam2 = 163,5456f;
			break;
		
		case 27:
			*uParam1 = { -3161,585f, 1074,214f, 19,6847f };
			*uParam2 = 98,6092f;
			break;
		
		case 28:
			*uParam1 = { 28,423f, -1110,814f, 28,2848f };
			*uParam2 = 85,2495f;
			break;
		
		case 29:
			*uParam1 = { 1704,966f, 3749,709f, 33,0188f };
			*uParam2 = 45,6778f;
			break;
		
		case 30:
			*uParam1 = { 223,949f, -38,7894f, 68,6483f };
			*uParam2 = 159,4265f;
			break;
		
		case 31:
			*uParam1 = { 837,7854f, -1017,963f, 26,3045f };
			*uParam2 = 181,0445f;
			break;
		
		case 32:
			*uParam1 = { -313,1914f, 6093,351f, 30,4625f };
			*uParam2 = 315,8405f;
			break;
		
		case 33:
			*uParam1 = { -663,4631f, -952,8069f, 20,3143f };
			*uParam2 = 92,6796f;
			break;
		
		case 34:
			*uParam1 = { -1323,06f, -392,8577f, 35,4596f };
			*uParam2 = 210,7398f;
			break;
		
		case 35:
			*uParam1 = { -1106,102f, 2684,35f, 18,0953f };
			*uParam2 = 127,0383f;
			break;
		
		case 36:
			*uParam1 = { -3157,932f, 1081,309f, 19,6953f };
			*uParam2 = 100,2942f;
			break;
		
		case 37:
			*uParam1 = { 2562,882f, 312,8641f, 107,4612f };
			*uParam2 = 179,205f;
			break;
		
		case 38:
			*uParam1 = { 822,48f, -2142,875f, 27,8496f };
			*uParam2 = 355,0598f;
			break;
		
		case 39:
			*uParam1 = { -1137,053f, -1993,916f, 12,1677f };
			*uParam2 = 43,1213f;
			break;
		
		case 40:
			*uParam1 = { 717,8107f, -1084,081f, 21,3094f };
			*uParam2 = 93,2649f;
			break;
		
		case 41:
			*uParam1 = { -387,6789f, -128,2568f, 37,6796f };
			*uParam2 = 119,1085f;
			break;
		
		case 42:
			*uParam1 = { 117,8835f, 6599,415f, 31,0134f };
			*uParam2 = 90,7225f;
			break;
		
		case 43:
			*uParam1 = { 1201,709f, 2664,813f, 36,8102f };
			*uParam2 = 133,9002f;
			break;
		
		case 44:
			*uParam1 = { -200,1521f, -1297,502f, 30,296f };
			*uParam2 = 269,0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_219(*uParam1, 0f, 0f, 0f, 0);
}

char* func_1488(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_1489(Global_102098);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
		
		case 54:
			return "tr_tuner_car_meet";
			break;
		
		case 55:
			return "tr_tuner_car_meet";
			break;
		
		case 56:
			return "sf_dlc_office_sec";
			break;
		
		case 57:
			return "sf_dlc_studio_sec";
			break;
	}
	return "";
}

char* func_1489(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_1490() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		case 18:
			return "tr_tuner_car_meet";
			break;
		
		case 19:
			return "tr_tuner_mod_garage";
			break;
		
		case 20:
			return "sf_dlc_garage_sec";
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

int func_1490()
{
	return func_1491(PLAYER::PLAYER_ID());
}

int func_1491(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2689156[iParam0 /*453*/].f_319.f_3, 28, 31);
}

Vector3 func_1492(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821,9946f, -187,1776f, 36,5689f;
			break;
		
		case 1:
			return 133,5702f, -1710,918f, 28,2916f;
			break;
		
		case 2:
			return -1287,082f, -1116,558f, 5,9901f;
			break;
		
		case 3:
			return 1933,119f, 3726,079f, 31,8444f;
			break;
		
		case 4:
			return 1208,333f, -470,917f, 65,208f;
			break;
		
		case 5:
			return -30,7448f, -148,4921f, 56,0765f;
			break;
		
		case 6:
			return -280,8165f, 6231,771f, 30,6955f;
			break;
		
		case 7:
			return 80,665f, -1391,669f, 28,3761f;
			break;
		
		case 8:
			return 1687,881f, 4820,55f, 41,0096f;
			break;
		
		case 9:
			return 419,531f, -807,5787f, 28,4896f;
			break;
		
		case 10:
			return -1094,049f, 2704,171f, 18,0873f;
			break;
		
		case 11:
			return 1197,972f, 2704,22f, 37,1572f;
			break;
		
		case 12:
			return -818,6218f, -1077,533f, 10,3282f;
			break;
		
		case 13:
			return -0,2361f, 6516,045f, 30,8684f;
			break;
		
		case 14:
			return -1199,809f, -776,6886f, 16,3237f;
			break;
		
		case 15:
			return 618,1857f, 2752,567f, 41,0881f;
			break;
		
		case 16:
			return 126,6853f, -212,5027f, 53,5578f;
			break;
		
		case 17:
			return -3168,966f, 1055,287f, 19,8632f;
			break;
		
		case 18:
			return -715,3598f, -155,7742f, 36,4105f;
			break;
		
		case 19:
			return -158,2199f, -304,9663f, 38,735f;
			break;
		
		case 20:
			return -1455,005f, -233,1862f, 48,7936f;
			break;
		
		case 21:
			return -1335,973f, -1278,555f, 3,8598f;
			break;
		
		case 22:
			return 321,6098f, 179,4165f, 102,5865f;
			break;
		
		case 23:
			return 1861,685f, 3750,08f, 32,0318f;
			break;
		
		case 24:
			return -290,1603f, 6199,095f, 30,4871f;
			break;
		
		case 25:
			return -1153,948f, -1425,019f, 3,9544f;
			break;
		
		case 26:
			return 1322,455f, -1651,125f, 51,1885f;
			break;
		
		case 27:
			return -3169,42f, 1074,727f, 19,8343f;
			break;
		
		case 28:
			return 17,6804f, -1114,288f, 28,797f;
			break;
		
		case 29:
			return 1697,979f, 3753,2f, 33,7053f;
			break;
		
		case 30:
			return 245,2711f, -45,8126f, 68,941f;
			break;
		
		case 31:
			return 844,1248f, -1025,571f, 27,1948f;
			break;
		
		case 32:
			return -325,8904f, 6077,026f, 30,4548f;
			break;
		
		case 33:
			return -664,2178f, -943,3646f, 20,8292f;
			break;
		
		case 34:
			return -1313,948f, -390,9637f, 35,592f;
			break;
		
		case 35:
			return -1111,238f, 2688,463f, 17,6131f;
			break;
		
		case 36:
			return -3165,231f, 1082,855f, 19,8438f;
			break;
		
		case 37:
			return 2569,612f, 302,576f, 107,7349f;
			break;
		
		case 38:
			return 811,8699f, -2149,102f, 28,6363f;
			break;
		
		case 39:
			return -1147,314f, -1992,434f, 12,1803f;
			break;
		
		case 40:
			return 724,524f, -1089,081f, 21,1692f;
			break;
		
		case 41:
			return -354,5272f, -135,4011f, 38,185f;
			break;
		
		case 42:
			return 113,2615f, 6624,28f, 30,7871f;
			break;
		
		case 43:
			return 1174,707f, 2644,45f, 36,7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211,5f, -1324,2f, 30,296f;
			}
			else
			{
				return -205,6654f, -1311,113f, 30,296f;
			}
			break;
		
		case 45:
			return func_1502(Global_102098);
			break;
		
		case 46:
			if (Global_1852965 != func_73())
			{
				if (func_1501(Global_1852965))
				{
					return func_1494(2, 2);
				}
				else if (func_1493(Global_1852965))
				{
					return func_1494(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510,1f, 4749,5f, -69f;
			break;
		
		case 48:
			return -1422,197f, -3015,803f, -79,1603f;
			break;
		
		case 49:
			return 203,0799f, 5200,189f, -89,6f;
			break;
		
		case 52:
			return 2714,547f, -354,2701f, -55,1867f;
			break;
		
		case 50:
			return Global_1966296;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
		
		case 54:
			return -2159,901f, 1075,213f, -25,36174f;
			break;
		
		case 55:
			return -2194,123f, 1103,805f, -24,2451f;
			break;
		
		case 56:
			switch (Global_2689156[PLAYER::PLAYER_ID() /*453*/].f_319.f_6)
			{
				case 155:
					return 379,4285f, -53,6067f, 111,7088f;
					break;
				
				case 156:
					return -1029,166f, -426,3766f, 72,2069f;
					break;
				
				case 157:
					return -581,9924f, -721,3945f, 121,3509f;
					break;
				
				case 158:
					return -1013,718f, -768,3539f, 69,4942f;
					break;
			}
			return 1000000f, 1000000f, 1000000f;
			break;
		
		case 57:
			return -1010f, -70f, -100f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_1493(int iParam0)
{
	if (iParam0 != func_73())
	{
		if ((MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 0) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 1)) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1494(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1852965 != func_73())
	{
		if (iParam1 == 3)
		{
			if (func_1495(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1853128[Global_1852965 /*888*/].f_267.f_269, 4))
			{
				if (func_1495(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1853128[Global_1852965 /*888*/].f_267.f_269, 5))
			{
				if (func_1495(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_1495(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_1500(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_1500(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_1498(iParam0) };
	}
	else
	{
		Var12 = { func_1497(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_1496(Var18, -Var0.f_3.f_2) };
	Var18 = { func_1496(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_1496(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.f_0 = ((Param0.f_0 * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.f_0 * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_1497(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 1:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 2:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 3:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 4:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 5:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 6:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 7:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 8:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
	}
	return Var0;
}

struct<6> func_1498(int iParam0)
{
	return func_1499(iParam0);
}

struct<6> func_1499(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105,22f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104,105f, -3013,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105,22f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104,105f, -3005,985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011,925f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38,125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103,213f, -3013,483f, -39,03f };
			Var0.f_3 = { 0f, 0f, 31,32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101,408f, -3012,32f, -38,45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103,037f, -3012,318f, -39,99874f };
			break;
		
		case 7:
			Var0 = { 1105,645f, -3012,04f, -39,542f };
			Var0.f_3 = { 0f, 0f, -86,04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104,063f, -3012,368f, -39,99875f };
			break;
		
		case 9:
			Var0 = { 1105,665f, -3012,334f, -38,50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102,504f, -3012,35f, -39,341f };
			Var0.f_3 = { 0f, 0f, -96,48f };
			break;
		
		case 11:
			Var0 = { 1102,928f, -3012,693f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102,942f, -3011,315f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101,994f, -3012,878f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103,152f, -3013,032f, -38,24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102,465f, -3009,515f, -39,341f };
			Var0.f_3 = { 0f, 0f, -12,96f };
			break;
		
		case 14:
			Var0 = { 1102,917f, -3009,525f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102,922f, -3010,887f, -37,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101,682f, -3009,227f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102,453f, -3008,51f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104,684f, -3009,561f, -39,341f };
			Var0.f_3 = { 0f, 0f, 169,56f };
			break;
		
		case 17:
			Var0 = { 1104,34f, -3008,698f, -39,99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104,344f, -3009,618f, -37,98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105,459f, -3009,793f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104,783f, -3010,433f, -38,2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104,025f, -3007,316f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103,562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102,1f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 115,92f };
			break;
		
		case 24:
			Var0 = { 1105,05f, -3010,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -103,32f };
			break;
		
		case 25:
			Var0 = { 1105,05f, -3008,75f, -39,35f };
			Var0.f_3 = { 0f, 0f, -77,76f };
			break;
		
		case 26:
			Var0 = { 1102,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105,05f, -3012,653f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105,05f, -3011,717f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102,1f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, 102,96f };
			break;
		
		case 31:
			Var0 = { 1105,05f, -3002,1f, -39,35f };
			Var0.f_3 = { 0f, 0f, -101,88f };
			break;
		
		case 32:
			Var0 = { 1105,05f, -3000,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -81,36f };
			break;
		
		case 33:
			Var0 = { 1102,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105,05f, -3004,541f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105,05f, -3003,592f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102,1f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, 103,32f };
			break;
		
		case 38:
			Var0 = { 1105,05f, -2994,2f, -39,35f };
			Var0.f_3 = { 0f, 0f, -109,8f };
			break;
		
		case 39:
			Var0 = { 1105,05f, -2992,65f, -39,35f };
			Var0.f_3 = { 0f, 0f, -84,96f };
			break;
		
		case 40:
			Var0 = { 1102,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105,05f, -2996,501f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105,05f, -2995,582f, -39,35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011,9f, -39,95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38,115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105,174f, -3004,16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105,175f, -3005,818f, -37,91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106,6f, -3000,847f, -39,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106,601f, -3002,171f, -37,89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101,95f, -3011,9f, -39,2f };
			Var0.f_3 = { 0f, 0f, 49,5f };
			break;
		
		case 52:
			Var0 = { 1101,95f, -3010f, -39,2f };
			Var0.f_3 = { 0f, 0f, 130,32f };
			break;
		
		case 53:
			Var0 = { 1105,16f, -3009,06f, -39,2f };
			Var0.f_3 = { 0f, 0f, -44,64f };
			break;
		
		case 54:
			Var0 = { 1102,476f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008,508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103,593f, -3008,27f, -39,9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103,565f, -3014f, -39,988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103,565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103,55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103,55f, -3013,762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103,55f, -3006,186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103,6f, -3013,933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_1500(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103,562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103,562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103,562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_1501(int iParam0)
{
	if (iParam0 != func_73())
	{
		if ((MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 3) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 4)) || MISC::IS_BIT_SET(Global_1853128[iParam0 /*888*/].f_267.f_269, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_1502(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974,9542f, -3000,091f, -35f;
			break;
		
		case 6:
			return -1586,36f, -566,6f, 106,17f;
			break;
		
		case 7:
			return -1389,87f, -465,17f, 82,68f;
			break;
		
		case 8:
			return -145,81f, -590,2f, 171,13f;
			break;
		
		case 9:
			return -62,49f, -823,55f, 288,74f;
			break;
		
		case 4:
			return 1102,515f, -3158,888f, -38,5186f;
			break;
		
		case 5:
			return 1005,861f, -3156,162f, -39,907f;
			break;
		
		case 10:
			return 1103,562f, -3000f, -40f;
			break;
		
		case 11:
			return 938,3077f, -3196,112f, -100f;
			break;
		
		case 12:
			return -1266,802f, -3014,836f, -49,4895f;
			break;
		
		case 13:
			return 520,0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345,0041f, 4842,001f, -59,9997f;
			break;
		
		case 15:
			return -1604,664f, -3012,583f, -79,9999f;
			break;
		
		case 16:
			return -1421,015f, -3012,587f, -80f;
			break;
		
		case 17:
			if (func_1490() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		case 18:
			return -2000f, 1250f, 50f;
			break;
		
		case 19:
			return -1350f, 160f, -100f;
			break;
		
		case 20:
			return -1070f, -70f, -100f;
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_1503(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 57)
	{
		if (iParam3 == 6 || iParam3 == func_211(iVar0))
		{
			if (!bParam5 || func_1504(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_1492(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1)) && (iParam6 || iVar0 != 21)) && iVar0 != iParam7)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

int func_1504(int iParam0)
{
	return func_206(iParam0, 0, 0);
}

void func_1505(int iParam0, struct<3> Param1)
{
	Local_2782[iParam0 /*7*/].f_1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_3122, func_1506(iParam0));
	Local_2782[iParam0 /*7*/].f_2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, func_1088(), func_1506(iParam0));
	Local_2782[iParam0 /*7*/].f_3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Local_227.f_19.f_5[iParam0 /*13*/].f_3, func_1506(iParam0));
}

int func_1506(int iParam0)
{
	if (Local_1231.f_108.f_29 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_29);
	}
	return 1;
}

void func_1507()
{
	if (func_675(iLocal_3118, 1) && func_1515())
	{
		if (func_1511())
		{
			if (!func_1204(35))
			{
				func_1509(func_1510(), -1);
				func_527(35);
			}
		}
	}
	else
	{
		if (func_1204(35))
		{
			func_1478(35);
		}
		if (func_1508(func_1510()))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

bool func_1508(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_1509(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

char* func_1510()
{
	return "BHH_HELD";
}

int func_1511()
{
	if (((((((((!func_1514() && !func_1513()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !HUD::IS_RADAR_HIDDEN()) && bLocal_3115) && !func_1512()) && func_1204(9)) && !CAM::IS_SCREEN_FADED_OUT()) && !CAM::IS_SCREEN_FADING_OUT()) && !CAM::IS_SCREEN_FADING_IN())
	{
		return 1;
	}
	return 0;
}

bool func_1512()
{
	return Global_2703656.f_2414[0 /*80*/].f_1 != 0;
}

bool func_1513()
{
	return Global_75021;
}

bool func_1514()
{
	return MISC::GET_GAME_TIMER() <= Global_22830.f_6135 + 100;
}

int func_1515()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_28())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2[iVar0]))
		{
			if (iLocal_3156[iVar0] != iLocal_3121)
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(Local_3199.f_2[iVar0])))
				{
					if (Local_2782[iVar0 /*7*/].f_1 < 2f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1516(bool bParam0, int iParam1)
{
	if (!func_184())
	{
		return;
	}
	if (bParam0)
	{
		if (func_453(iParam1, 32))
		{
			func_1519(24);
		}
		func_1518(Local_227.f_19.f_5[iParam1 /*13*/].f_2);
	}
	else
	{
		func_1517(24);
		func_1518(0);
	}
}

void func_1517(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_6), iParam0);
}

void func_1518(int iParam0)
{
	if (Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_179 != iParam0)
	{
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_179 = iParam0;
	}
}

void func_1519(int iParam0)
{
	MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_6), iParam0);
}

void func_1520(bool bParam0)
{
	if (bParam0)
	{
		func_1519(22);
		func_1519(23);
	}
	else
	{
		func_1517(22);
		func_1517(23);
	}
}

void func_1521(int iParam0, bool bParam1)
{
	if (!func_1529(iParam0))
	{
		return;
	}
	if (bParam1 && func_788(Local_3199.f_2[iParam0]))
	{
		func_1528(&(Local_3199.f_2[iParam0]));
	}
	func_1523(iParam0);
	func_1522(iParam0);
}

void func_1522(int iParam0)
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2.f_42[iParam0]) && func_788(Local_3199.f_2.f_42[iParam0]))
	{
		func_1528(&(Local_3199.f_2.f_42[iParam0]));
		func_140(&(Local_3199.f_2.f_42[iParam0]));
	}
}

void func_1523(int iParam0)
{
	int iVar0;
	
	if (!func_453(iParam0, 4) || !func_1525(iParam0))
	{
		return;
	}
	iVar0 = func_1524(iParam0);
	if (!func_84(33) && ENTITY::IS_ENTITY_ATTACHED(NETWORK::NET_TO_ENT(func_1524(iParam0))))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_ENT(func_1524(iParam0)), true, true);
	}
	if (func_84(11))
	{
		if (!NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_ENT(func_1524(iParam0))))
		{
			NETWORK::NETWORK_FADE_OUT_ENTITY(NETWORK::NET_TO_ENT(func_1524(iParam0)), true, true);
		}
		if (!ENTITY::IS_ENTITY_VISIBLE(NETWORK::NET_TO_ENT(func_1524(iParam0))))
		{
			func_1528(&iVar0);
		}
	}
	else if (func_84(12))
	{
		func_140(&iVar0);
	}
	else if (!func_84(32))
	{
		func_1528(&iVar0);
	}
}

int func_1524(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (!func_461(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_434(iParam0);
	switch (func_435())
	{
		case 2:
			return Local_3199.f_341[iVar1 /*8*/];
		
		case 1:
			return Local_3199.f_52[iVar1 /*24*/];
		
		default:
	}
	return uVar0;
}

int func_1525(int iParam0)
{
	if (!func_461(iParam0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(func_1524(iParam0)))
	{
		return 0;
	}
	if ((func_453(iParam0, 35) || func_453(iParam0, 36)) || func_453(iParam0, 37))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(func_1524(iParam0)), false))
	{
		return 0;
	}
	switch (func_435())
	{
		case 2:
			if (func_1526(func_1527(iParam0), 0, 1))
			{
				return 0;
			}
			break;
	}
	if (!func_788(func_1524(iParam0)))
	{
		return 0;
	}
	return 1;
}

int func_1526(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, (iVar0 - 1), false))
			{
				iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, (iVar0 - 1), false);
				if (bParam1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (!bParam2 && func_104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
							{
							}
							else
							{
								return 1;
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						if (!bParam2 && func_104(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2), PLAYER::PLAYER_ID()))
						{
						}
						else
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1527(int iParam0)
{
	var uVar0;
	int iVar1;
	
	iVar1 = func_1524(iParam0);
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar1))
	{
		return NETWORK::NET_TO_VEH(iVar1);
	}
	return uVar0;
}

void func_1528(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0))
		{
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

int func_1529(int iParam0)
{
	if ((((func_453(iParam0, 19) || (func_453(iParam0, 3) && func_13(&(Local_3199.f_2.f_5[iParam0 /*2*/]), 6000, 0))) || func_453(iParam0, 4)) || func_453(iParam0, 25)) || func_453(iParam0, 33))
	{
		return (func_453(iParam0, 4) || func_453(iParam0, 3));
	}
	return 0;
}

void func_1530(int iParam0)
{
	if (func_1546(iParam0))
	{
		func_1532(iParam0);
	}
	else
	{
		func_1531(iParam0);
	}
}

void func_1531(int iParam0)
{
	if (HUD::DOES_BLIP_EXIST(Local_2782[iParam0 /*7*/]))
	{
		HUD::REMOVE_BLIP(&(Local_2782[iParam0 /*7*/]));
	}
}

void func_1532(int iParam0)
{
	if (!HUD::DOES_BLIP_EXIST(Local_2782[iParam0 /*7*/]))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_2[iParam0]))
		{
			Local_2782[iParam0 /*7*/] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]));
			if (func_1543(func_1544(iParam0)))
			{
				HUD::SET_BLIP_SPRITE(Local_2782[iParam0 /*7*/], func_1544(iParam0));
			}
			HUD::SET_BLIP_SCALE(Local_2782[iParam0 /*7*/], func_1541(iParam0));
			HUD::SET_BLIP_COLOUR(Local_2782[iParam0 /*7*/], func_1539(iParam0, 0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2782[iParam0 /*7*/], func_1537(iParam0));
			HUD::SET_BLIP_PRIORITY(Local_2782[iParam0 /*7*/], 12);
			if (func_1536(iParam0))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(Local_2782[iParam0 /*7*/], true);
			}
			if (!func_627(iParam0, iLocal_3121, 46))
			{
				func_1535(&(Local_2782[iParam0 /*7*/]), 1);
				func_1534(iParam0, 46);
			}
		}
	}
	else
	{
		HUD::SET_BLIP_COLOUR(Local_2782[iParam0 /*7*/], func_1539(iParam0, 0));
		if (HUD::GET_BLIP_SPRITE(Local_2782[iParam0 /*7*/]) != func_1544(iParam0) && func_1543(func_1544(iParam0)))
		{
			HUD::SET_BLIP_SPRITE(Local_2782[iParam0 /*7*/], func_1544(iParam0));
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2782[iParam0 /*7*/], func_1537(iParam0));
		}
		if (HUD::GET_BLIP_COLOUR(Local_2782[iParam0 /*7*/]) != func_1539(iParam0, 0))
		{
			HUD::SET_BLIP_COLOUR(Local_2782[iParam0 /*7*/], func_1539(iParam0, 0));
		}
		if (func_434(iParam0) > -1 && func_435() == 2)
		{
			if (func_1533(iParam0))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_3199.f_341[func_434(iParam0) /*8*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_ENT(Local_3199.f_341[func_434(iParam0) /*8*/]), false))
				{
					HUD::SET_BLIP_ROTATION(Local_2782[iParam0 /*7*/], SYSTEM::ROUND(ENTITY::GET_ENTITY_HEADING(NETWORK::NET_TO_ENT(Local_3199.f_341[func_434(iParam0) /*8*/]))));
				}
			}
		}
	}
}

int func_1533(int iParam0)
{
	if (Local_1231.f_108.f_18 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_18);
		return StackVal;
	}
	return 0;
}

void func_1534(int iParam0, int iParam1)
{
	if (func_17(&(Local_3783[iLocal_3120 /*115*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

void func_1535(int iParam0, bool bParam1)
{
	HUD::SET_BLIP_FLASHES(*iParam0, true);
	HUD::SET_BLIP_FLASH_INTERVAL(*iParam0, 250);
	HUD::SET_BLIP_FLASH_TIMER(*iParam0, 7000);
	if (bParam1)
	{
		HUD::FLASH_MINIMAP_DISPLAY();
	}
}

bool func_1536(int iParam0)
{
	if (Local_1231.f_108.f_14 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_14);
		return StackVal;
	}
	return Local_227.f_19.f_1.f_3;
}

var func_1537(int iParam0)
{
	if (Local_1231.f_108.f_13 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_13);
		return StackVal;
	}
	return func_1538();
}

char* func_1538()
{
	return "FMC_BLIP_ME";
}

int func_1539(int iParam0, bool bParam1)
{
	if (Local_1231.f_108.f_5 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_5);
		return func_830(StackVal);
	}
	if (!bParam1)
	{
		if (func_627(iParam0, iLocal_3121, 12))
		{
			return 1;
		}
	}
	else if (func_758() == 23 && func_627(iParam0, iLocal_3121, 12))
	{
		return 1;
	}
	if (!bParam1 && Local_2782[iParam0 /*7*/].f_4 != func_73())
	{
		return func_830(func_1540(Local_2782[iParam0 /*7*/].f_4));
	}
	if (func_460(iParam0))
	{
		if (!func_84(7))
		{
			return 57;
		}
	}
	return 2;
}

int func_1540(int iParam0)
{
	int iVar0;
	
	iVar0 = func_1358(iParam0);
	if (iVar0 != -1)
	{
		return func_1356(iVar0);
	}
	return 1;
}

var func_1541(int iParam0)
{
	if (Local_1231.f_108.f_6 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_6);
		return StackVal;
	}
	return func_1542();
}

var func_1542()
{
	return Local_227.f_19.f_1.f_2;
}

int func_1543(int iParam0)
{
	switch (iParam0)
	{
		case -1:
		case 32:
			return 0;
		
		default:
	}
	return 1;
}

int func_1544(int iParam0)
{
	if (Local_1231.f_108.f_4 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_4);
		return StackVal;
	}
	if (Local_227.f_19.f_1 != -1)
	{
		return Local_227.f_19.f_1;
	}
	return func_1545();
}

int func_1545()
{
	return 478;
}

int func_1546(int iParam0)
{
	if (!bLocal_3128)
	{
		return 0;
	}
	if (func_626(iParam0, 1))
	{
		return 0;
	}
	if (Local_2782[iParam0 /*7*/].f_4 != func_73() && func_435() != 1)
	{
		return 0;
	}
	if (func_496(iParam0, 10) && !func_453(iParam0, 7))
	{
		return 0;
	}
	if (func_627(iParam0, iLocal_3121, 14))
	{
		return 0;
	}
	if ((func_496(iParam0, 16) && func_453(iParam0, 23)) && !func_429(iLocal_3121, 2))
	{
		return 0;
	}
	if (func_453(iParam0, 23) && func_1547(iLocal_3118))
	{
		return 0;
	}
	if (func_453(iParam0, 29) && func_453(iParam0, 40))
	{
		return 0;
	}
	if (func_754())
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_108);
	return StackVal;
}

int func_1547(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 9) && !(MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 7))) || ((MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 6) && !MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 7)) && !MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_71.f_2, 9)))
	{
		return 1;
	}
	return 0;
}

void func_1548(int iParam0, int iParam1)
{
	if (Local_2782[iParam0 /*7*/].f_4 == iLocal_3118)
	{
		if (iParam1 != 5)
		{
			if (!func_1559(func_186(iParam0)))
			{
				func_1557(func_186(iParam0));
				if (Local_1231.f_108.f_32 != 0)
				{
					Stack.Push(iParam0);
					Call_Loc(Local_1231.f_108.f_32);
				}
			}
		}
	}
	else if (iParam1 != 0)
	{
		if ((!Global_1952863.f_4851 && !func_1556(iLocal_3118)) && !func_1474())
		{
			if (func_1559(func_186(iParam0)))
			{
				func_1549(func_186(iParam0));
			}
		}
	}
}

void func_1549(int iParam0)
{
	if (!func_1553(iParam0))
	{
		return;
	}
	func_1550(Local_3199.f_562.f_1[iParam0 /*5*/]);
}

void func_1550(struct<2> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_472(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/]) && func_470(Param0, Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/].f_1 = -1;
		}
		else
		{
			iVar0++;
		}
	}
	if (func_1552(PLAYER::PLAYER_ID()) <= 0)
	{
		MISC::CLEAR_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557), 0);
		func_1551();
	}
}

void func_1551()
{
	Global_1952863.f_5006.f_3 = 0;
	Global_1952863.f_5006 = -1;
	Global_1952863.f_5006.f_2 = -1000;
}

int func_1552(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != func_73())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (func_472(Global_1893548[iParam0 /*600*/].f_557.f_1[iVar0 /*2*/]))
			{
				iVar1++;
			}
			iVar0++;
		}
	}
	return iVar1;
}

int func_1553(int iParam0)
{
	if ((iParam0 == -1 || func_1555(iParam0) == -1) || func_1554(iParam0) == -1)
	{
		return 0;
	}
	return func_472(Local_3199.f_562.f_1[iParam0 /*5*/]);
}

int func_1554(int iParam0)
{
	return Local_3199.f_562.f_1[iParam0 /*5*/].f_3;
}

int func_1555(int iParam0)
{
	return Local_3199.f_562.f_1[iParam0 /*5*/].f_2;
}

int func_1556(int iParam0)
{
	bool bVar0;
	
	if (iParam0 != func_73() && (func_9(iParam0, 1, 1) || Global_2667222.f_2678))
	{
		bVar0 = MISC::IS_BIT_SET(Global_2689156[iParam0 /*453*/].f_319, 1);
		return bVar0;
	}
	return 0;
}

void func_1557(int iParam0)
{
	if (!func_1553(iParam0))
	{
		return;
	}
	func_1558(Local_3199.f_562.f_1[iParam0 /*5*/]);
}

void func_1558(struct<2> Param0)
{
	int iVar0;
	
	if (!func_472(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_472(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/] = { Param0 };
		}
		else
		{
			iVar0++;
		}
	}
	MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557), 0);
	func_468(Param0, "FREEMODE_DELIVERY_SET_LOCAL_PLAYER_IN_POSSESSION_OF_DELIVERABLE");
}

int func_1559(int iParam0)
{
	if (!func_1553(iParam0))
	{
		return 0;
	}
	return func_1560(Local_3199.f_562.f_1[iParam0 /*5*/]);
}

int func_1560(struct<2> Param0)
{
	int iVar0;
	
	if (!func_472(Param0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_472(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/]) && func_470(Param0, Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_557.f_1[iVar0 /*2*/]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_1561(int iParam0)
{
	if (iLocal_3156[iParam0] != func_1562())
	{
		if (uLocal_3161[iParam0] != iLocal_3156[iParam0])
		{
			uLocal_3161[iParam0] = iLocal_3156[iParam0];
		}
	}
}

int func_1562()
{
	return -1;
}

void func_1563(int iParam0, int iParam1)
{
	bool bVar0;
	struct<3> Var1;
	
	if (!func_496(iParam0, 15))
	{
		return;
	}
	bVar0 = false;
	if (Local_2782[iParam0 /*7*/].f_1 < func_1567(iParam0))
	{
		bVar0 = true;
		if (func_1566(iParam0) && !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_3119, iParam1, 287))
		{
			bVar0 = false;
		}
		if (func_1565(iParam0) != -1f)
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
			if (MISC::ABSF((Var1.f_2 - Local_3122.f_2)) > func_1565(iParam0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (Local_1231.f_108.f_35 != 0)
		{
			if (!func_627(iParam0, iLocal_3121, 35))
			{
				Stack.Push(iParam0);
				Call_Loc(Local_1231.f_108.f_35);
			}
		}
		func_1534(iParam0, 35);
		func_1534(iParam0, 0);
	}
	else
	{
		func_1564(iParam0, 0);
	}
}

void func_1564(int iParam0, int iParam1)
{
	if (func_157(&(Local_3783[iLocal_3120 /*115*/].f_3[iParam0 /*3*/]), iParam1))
	{
	}
}

float func_1565(int iParam0)
{
	if (Local_1231.f_108.f_26 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_26);
		return StackVal;
	}
	return -1f;
}

int func_1566(int iParam0)
{
	if (Local_1231.f_108.f_25 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_25);
		return StackVal;
	}
	return 0;
}

float func_1567(int iParam0)
{
	if (Local_1231.f_108.f_24 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_24);
		return StackVal;
	}
	if (func_460(iParam0))
	{
		return 50f;
	}
	return 15f;
}

void func_1568(int iParam0, int iParam1, bool bParam2)
{
	if (!func_184())
	{
		return;
	}
	if (!func_453(iParam0, 32) && !func_627(iParam0, iLocal_3121, 24))
	{
		if (func_1577(iParam0))
		{
			if (func_788(Local_3199.f_2[iParam0]))
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, false);
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_3199.f_2[iParam0], true);
				OBJECT::_0xAA059C615DE9DD03(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true);
				func_1575(Local_3129.f_0, 0, 0);
				func_1534(iParam0, 24);
			}
		}
	}
	else
	{
		func_1569(iParam1, &(Local_2782[iParam0 /*7*/].f_5), func_1574(iParam0), iParam0);
	}
	if (bParam2)
	{
		func_1516(bParam2, iParam0);
	}
}

void func_1569(int iParam0, var uParam1, bool bParam2, int iParam3)
{
	if (PLAYER::PLAYER_ID() == func_10())
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !bParam2) && !func_1573())
		{
			if (func_13(uParam1, 1000, 0))
			{
				func_1572(ENTITY::GET_ENTITY_COORDS(iParam0, true), iParam3);
				func_53(uParam1);
			}
		}
		else
		{
			func_1570(iParam3);
		}
	}
}

void func_1570(int iParam0)
{
	if (!func_219(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_151[iParam0 /*3*/], func_1571(), 0))
	{
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_151[iParam0 /*3*/] = { func_1571() };
	}
	if (!func_219(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_126[iParam0 /*3*/], func_1571(), 0))
	{
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_126[iParam0 /*3*/] = { func_1571() };
	}
}

Vector3 func_1571()
{
	struct<3> Var0;
	
	return Var0;
}

void func_1572(struct<3> Param0, int iParam3)
{
	if (!func_219(Param0, Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_151[iParam3 /*3*/], 0))
	{
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_126[iParam3 /*3*/] = { Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_151[iParam3 /*3*/] };
		Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_11.f_151[iParam3 /*3*/] = { Param0 };
	}
}

int func_1573()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_2810287.f_4629, 2))
	{
		if (func_80(PLAYER::PLAYER_ID(), 1))
		{
			iVar0 = func_105(PLAYER::PLAYER_ID());
			if (iVar0 != func_73())
			{
				if (Global_2689156[iVar0 /*453*/].f_209)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1574(int iParam0)
{
	if ((func_453(iParam0, 3) || func_453(iParam0, 4)) || Local_2782[iParam0 /*7*/].f_4 != func_73())
	{
		return 1;
	}
	return 0;
}

void func_1575(int iParam0, bool bParam1, bool bParam2)
{
	struct<14> Var0;
	int iVar14;
	
	Var0.f_2 = -1678006840;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = func_74();
	Var0.f_4 = iParam0;
	if (bParam1)
	{
		iVar14 = func_70(PLAYER::PLAYER_ID());
	}
	else if (bParam2)
	{
		iVar14 = func_72(1);
	}
	else
	{
		iVar14 = func_203(1, 1);
	}
	func_1576(Var0, iVar14);
}

void func_1576(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0.f_0 = 677240627;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Param0, 14, iParam14);
	}
}

int func_1577(int iParam0)
{
	if (!func_1580(iParam0))
	{
		return 0;
	}
	Stack.Push(iParam0);
	Call_Loc(Local_1231.f_108.f_39);
	if (!StackVal)
	{
		return 0;
	}
	if (func_13(&(Local_3199.f_2.f_48), func_1578(), 0))
	{
		return 1;
	}
	return 0;
}

int func_1578()
{
	if (Local_1231.f_108.f_39.f_1 != 0)
	{
		Call_Loc(Local_1231.f_108.f_39.f_1);
		return StackVal;
	}
	return func_1579();
}

int func_1579()
{
	return 20000;
}

bool func_1580(int iParam0)
{
	return func_453(iParam0, 1);
}

void func_1581(int iParam0, int iParam1)
{
	if (func_453(iParam0, 29) || !func_1585(iParam0))
	{
		return;
	}
	func_1582(iParam1, iParam0);
}

void func_1582(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	
	if (ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		fVar0 = func_1584(iParam1);
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			fVar1 = 0,5f;
			fVar0 = 1f;
		}
		HUD::GET_HUD_COLOUR(18, &iVar2, &iVar3, &iVar4, &uVar5);
		func_1583(iParam0, iVar2, iVar3, iVar4, fVar0, fVar1, 0, 1, 0, 0);
	}
}

void func_1583(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar11 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (!PED::IS_PED_INJURED(iVar11))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar11, false) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(iVar11, false))))
			{
				iParam0 = PED::GET_VEHICLE_PED_IS_IN(iVar11, false);
			}
		}
	}
	fVar9 = 0,5f;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	MISC::GET_MODEL_DIMENSIONS(iVar10, &Var0, &Var3);
	fVar12 = ((Var3.f_2 - Var0.f_2) / 2f);
	fVar13 = (Var3.f_2 - fVar12);
	if (fVar9 <= (fVar13 + 0,1f))
	{
		fVar9 = ((fVar13 + fParam4) - 0,1f);
	}
	switch (iVar10)
	{
		case joaat("seven70"):
		case joaat("raptor"):
		case joaat("issi3"):
		case joaat("comet3"):
		case joaat("specter2"):
		case joaat("hermes"):
		case joaat("dominator3"):
		case joaat("jugular"):
		case joaat("remus"):
		case joaat("tailgater2"):
		case joaat("mesa3"):
			fVar9 = (fVar9 + 0,25f);
			break;
		
		case joaat("insurgent2"):
			fVar9 = (fVar9 + 0,75f);
			break;
	}
	fVar9 = (fVar9 + fParam5);
	fVar14 = 0f;
	if (bParam6)
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) - Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
		fVar14 = 180f;
	}
	else
	{
		Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
	}
	if (iVar10 == joaat("imp_prop_impexp_boxpile_02"))
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), -1,45f, 0,5f, 0f) + Vector((((Var3.f_2 - Var0.f_2) / 2f) + fVar9), 0f, 0f) };
	}
	else if (iVar10 == joaat("tr_prop_tr_break_dev_01a"))
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, -0,3f, (Var3.f_2 + 0,17f)) };
	}
	if (fParam9 != 0f)
	{
		Var6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), ENTITY::GET_ENTITY_HEADING(iParam0), 0f, fParam9, Var3.f_2) };
	}
	GRAPHICS::DRAW_MARKER(2, Var6, 0f, 0f, 0f, 180f, fVar14, fParam8, fParam4, fParam4, fParam4, iParam1, iParam2, iParam3, 100, true, bParam7, 2, false, 0, 0, false);
}

float func_1584(var uParam0)
{
	if (Local_1231.f_108.f_20 != 0)
	{
		Stack.Push(uParam0);
		Call_Loc(Local_1231.f_108.f_20);
		return StackVal;
	}
	return 0,3f;
}

int func_1585(int iParam0)
{
	switch (func_566())
	{
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

void func_1586(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (func_496(iParam0, 9) || Local_1231.f_108.f_38 != 0)
	{
		Stack.Push(iParam0);
		Call_Loc(Local_1231.f_108.f_38);
		if (StackVal)
		{
			if (!func_453(iParam0, 31))
			{
				if (func_788(Local_3199.f_2[iParam0]))
				{
					func_491(iParam0, 0, 0);
					func_1534(iParam0, 22);
				}
			}
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		iVar0 = ENTITY::GET_ENTITY_ATTACHED_TO(iParam1);
		if (iVar0 != -1)
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
					if (iVar2 == iLocal_3118)
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_3199.f_2[iParam0]))
						{
							OBJECT::_HIDE_PICKUP(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), false);
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_3199.f_2[iParam0]), false);
							func_1534(iParam0, 1);
							if (!func_453(iParam0, 1))
							{
								func_1534(iParam0, 18);
							}
							*uParam2 = 1;
							func_1594();
							*iParam3 = iParam0;
						}
					}
					else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
					{
						func_1534(iParam0, 12);
					}
				}
				else if (!PED::IS_PED_INJURED(iVar1))
				{
					if (PED::IS_PED_IN_GROUP(iVar1))
					{
						if (PED::IS_PED_GROUP_MEMBER(iVar1, iLocal_2842))
						{
							func_1534(iParam0, 1);
							if (!func_453(iParam0, 1))
							{
								func_1534(iParam0, 18);
							}
							*uParam2 = 1;
							func_1594();
							*iParam3 = iParam0;
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(iVar1, false) == iLocal_3125)
					{
						func_1534(iParam0, 14);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				iVar3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar3, false) && !func_1593())
				{
					iVar4 = func_434(iParam0);
					if (!func_1592(Local_227.f_356.f_1[iVar4 /*14*/].f_3) || ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar0))
					{
						if (!func_1592(iLocal_3126))
						{
							func_1534(iParam0, 21);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_3119, false))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(iLocal_3119, false) == iVar3)
								{
									if (func_1591(iLocal_3119, 0) == -1)
									{
										func_1534(iParam0, 1);
										if (!func_453(iParam0, 1))
										{
											func_1534(iParam0, 18);
											func_1594();
										}
										*uParam2 = 1;
										func_1594();
										*iParam3 = iParam0;
									}
									func_1534(iParam0, 14);
								}
								else
								{
									func_1590(iVar3, iParam0, uParam2, iParam3);
								}
							}
						}
					}
				}
				else if (func_502() == 0)
				{
					func_1587(iParam0);
				}
			}
		}
	}
}

void func_1587(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (func_788(Local_3199.f_2[iParam0]))
	{
		ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true, true);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true, false);
		ENTITY::SET_ENTITY_VISIBLE(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true, false);
		func_1589(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]));
		func_1534(iParam0, 45);
		Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), true) };
		Var3 = { OBJECT::GET_SAFE_PICKUP_COORDS(Var0, 1,2f, 1,5f) };
		if (Var3.f_0 == Var0.f_0 && Var3.f_1 == Var0.f_1)
		{
			iVar6 = func_434(iParam0);
			if (iVar6 != -1)
			{
				iVar7 = Local_3199.f_341[iVar6 /*8*/];
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iVar7))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(iVar7), false) };
				}
			}
		}
		fVar8 = func_1588(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0])));
		Var3.f_2 = (Var3.f_2 + (fVar8 * 0,5f));
		ENTITY::SET_ENTITY_COORDS(NETWORK::NET_TO_OBJ(Local_3199.f_2[iParam0]), Var3, true, false, false, true);
	}
}

float func_1588(int iParam0)
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_304(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	return MISC::ABSF((Var0.f_2 - Var3.f_2));
}

void func_1589(int iParam0)
{
	OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iParam0, true);
	PHYSICS::ACTIVATE_PHYSICS(iParam0);
	OBJECT::_0x4C134B4DF76025D0(iParam0, true);
}

void func_1590(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (((ENTITY::DOES_ENTITY_EXIST(iLocal_3125) && func_1591(iLocal_3119, 0) == -1) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iParam0, iLocal_3125)) && ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_3125))
		{
			func_1534(iParam1, 1);
			if (!func_453(iParam1, 1))
			{
				func_1534(iParam1, 18);
			}
			*uParam2 = 1;
			func_1594();
			*uParam3 = iParam1;
		}
	}
}

int func_1591(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_1592(int iParam0)
{
	switch (iParam0)
	{
		case joaat("trailerlarge"):
		case joaat("trailersmall2"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("armytrailer2"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("tr2"):
			return 1;
		
		default:
	}
	return 0;
}

int func_1593()
{
	return 0;
}

void func_1594()
{
	if (!bLocal_3127)
	{
		return;
	}
	if (!func_1397(iLocal_3118))
	{
		func_1595(0);
	}
}

void func_1595(int iParam0)
{
	if (!func_1398(PLAYER::PLAYER_ID()))
	{
		if (iParam0 || func_1601(PLAYER::PLAYER_ID()) != 0)
		{
			func_1463(20);
			func_1597(func_1599());
			if (func_1596(PLAYER::PLAYER_ID()))
			{
				if (!MISC::IS_BIT_SET(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_1, 8))
				{
					MISC::SET_BIT(&(Global_1893548[PLAYER::PLAYER_ID() /*600*/].f_1), 8);
				}
			}
		}
	}
}

int func_1596(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1893548[iVar0 /*600*/] != -1;
	}
	return 0;
}

void func_1597(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8828)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_1598() /*5559*/].f_675.f_4239[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574732.f_1[iVar0] == -1)
			{
				Global_1574732.f_1[iVar0] = iParam0;
				Global_1574732 = 1;
				return;
			}
		}
		iVar0++;
	}
}

int func_1598()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_1599()
{
	int iVar0;
	
	iVar0 = func_229(PLAYER::PLAYER_ID());
	if (func_1471(iVar0) == 0 || func_1471(iVar0) == 3)
	{
		return -1;
	}
	if (func_1600(iVar0))
	{
		return 65;
	}
	if (func_1437(iVar0))
	{
		return 66;
	}
	if (func_1427(iVar0))
	{
		return 63;
	}
	return 64;
}

int func_1600(int iParam0)
{
	switch (iParam0)
	{
		case 179:
		case 201:
		case 200:
		case 148:
			return 1;
		
		default:
	}
	return 0;
}

int func_1601(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	
	iVar0 = 2;
	bVar1 = ((func_1596(iParam0) && !func_1606(iParam0)) && !MISC::IS_BIT_SET(Global_1893548[iParam0 /*600*/].f_1, 8));
	bVar2 = func_1398(iParam0);
	uVar3 = func_1467();
	bVar4 = func_1462();
	{
	}
	{
	}