// MNetworkVarNames = "int32 m_vecInitialHeroKillBitmask"
// MNetworkVarNames = "int32 m_vecInGameHeroKillBitmask"
class C_DOTA_Unit_Hero_SkeletonKing : public C_DOTA_BaseNPC_Hero
{
	int32 m_nSkeletonWarriors;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnSKArcanaProgressChanged"
	int32[5] m_vecInitialHeroKillBitmask;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnSKArcanaProgressChanged"
	int32[5] m_vecInGameHeroKillBitmask;
};
