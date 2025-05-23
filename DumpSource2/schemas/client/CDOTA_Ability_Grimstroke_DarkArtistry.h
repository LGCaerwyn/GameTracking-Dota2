class CDOTA_Ability_Grimstroke_DarkArtistry : public C_DOTABaseAbility
{
	Vector m_vCastDir;
	Vector m_vVectorTargetEndpoint;
	Vector m_vStartLoc;
	Vector m_vCursorPosition;
	Vector m_vVectorCastTargetDirection;
	bool vector_stroke;
	float32 m_fTimeRemaining;
	bool m_bHasDoneInitialTurn;
	bool m_bReachedFinalVelocity;
	int32 vector_distance_to_start_force_turning;
	float32 vector_acceptable_radian_to_snap_velocity;
	int32 vector_deg_turn_max;
	bool m_bClockwise;
	GameTime_t m_fStartTime;
	float32 m_fTotalTime;
	int32 m_nProjectileID;
	Vector m_vProjectileDir;
	ParticleIndex_t m_nFXIndex;
	ParticleIndex_t m_nFXIndexB;
	int32 m_nTargetsHit;
	int32 m_nHeroesHit;
	int32 m_nVisibleHeroesHit;
	float32 m_fDmgMultiplierTalent;
	float32 projectile_speed;
	float32 slow_duration;
	float32 start_radius;
	float32 end_radius;
	float32 damage;
	float32 bonus_damage_per_target;
	float32 vector_deg_turn_divisor;
	float32 vision_duration;
	ParticleIndex_t m_nCurvePathPreviewFXIndex;
};
