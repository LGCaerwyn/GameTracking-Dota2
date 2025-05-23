class CDOTA_Ability_Magnataur_Skewer : public CDOTABaseAbility
{
	float32 skewer_radius;
	float32 skewer_speed;
	float32 tree_radius;
	float32 tree_hit_damage;
	float32 cliff_hit_damage;
	int32 terrain_hit_increase_pct;
	float32 terrain_hit_cooldown;
	int32 m_nProjectileID;
	int32 m_nVisibleTargetCount;
	CUtlVector< CHandle< CBaseEntity > > m_hEnemiesSkewered;
	GameTime_t m_flLastTerrainObstructionHitTime;
	int32 m_nTargetsHit;
};
