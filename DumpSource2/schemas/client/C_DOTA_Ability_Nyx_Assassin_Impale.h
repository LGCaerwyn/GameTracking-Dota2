class C_DOTA_Ability_Nyx_Assassin_Impale : public C_DOTABaseAbility
{
	CUtlVector< CHandle< C_BaseEntity > > hAlreadyHitList;
	float32 width;
	float32 duration;
	float32 length;
	float32 speed;
	Vector vOriginalCast;
};
