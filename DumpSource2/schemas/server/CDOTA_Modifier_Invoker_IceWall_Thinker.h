class CDOTA_Modifier_Invoker_IceWall_Thinker : public CDOTA_Buff
{
	float32 damage_per_second;
	int32 num_wall_elements;
	float32 wall_element_spacing;
	float32 wall_element_radius;
	float32 bonus_wall_radius;
	float32 spell_amp;
	float32 spell_lifesteal;
	Vector m_vWallDir;
	bool m_bGrantedGem;
	ParticleIndex_t m_nParticleIndex;
	ParticleIndex_t m_nParticleIndex2;
};
