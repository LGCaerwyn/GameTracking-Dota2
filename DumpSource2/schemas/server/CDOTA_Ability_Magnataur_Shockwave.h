class CDOTA_Ability_Magnataur_Shockwave : public CDOTABaseAbility
{
	ParticleIndex_t m_nFXIndex;
	int32 m_nReturnDamagePct;
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitList;
	CUtlVector< CHandle< CBaseEntity > > hAlreadyHitListReturning;
};
