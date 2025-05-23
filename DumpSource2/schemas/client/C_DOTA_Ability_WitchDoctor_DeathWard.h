// MNetworkVarNames = "CHandle< CBaseEntity> m_hWard"
class C_DOTA_Ability_WitchDoctor_DeathWard : public C_DOTABaseAbility
{
	// MNetworkEnable
	CHandle< C_BaseEntity > m_hWard;
	int32 bonus_accuracy;
	int32 m_iDamage;
	int32 m_iBounceRadius;
	int32 m_iProjectileSpeed;
	GameTime_t m_fWardExpireTime;
	ParticleIndex_t m_nFXIndex;
	CUtlVector< sBounceInfo > m_BounceInfo;
};
