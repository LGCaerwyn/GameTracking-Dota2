class C_DOTA_Ability_Tusk_IceShards : public C_DOTABaseAbility
{
	int32 m_iProjectile;
	float32 shard_width;
	float32 shard_damage;
	int32 shard_count;
	float32 shard_speed;
	float32 shard_duration;
	float32 shard_angle_step;
	float32 shard_distance;
	Vector m_vSpawnOrigin;
	Vector m_vDirection;
	CUtlVector< CHandle< C_BaseEntity > > m_vecShards;
};
