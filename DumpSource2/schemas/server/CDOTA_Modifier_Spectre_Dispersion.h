class CDOTA_Modifier_Spectre_Dispersion : public CDOTA_Buff
{
	int32 damage_reflection_pct;
	float32 min_radius;
	float32 max_radius;
	int32 activation_bonus_pct;
	GameTime_t m_flLastDispersionPulseEffectTime;
	float32 m_fDamageCounter;
	float32 m_fLastTime;
};
