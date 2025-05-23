// MNetworkVarNames = "bool m_bIsCurrentlyChanneling"
// MNetworkVarNames = "float m_flChannelCycle"
class CDOTA_BaseNPC_Creature : public CDOTA_BaseNPC_Creep
{
	bool m_bInitialized;
	bool m_bCreatureCanRespawn;
	bool m_bUsesGestureBasedAttackAnimation;
	bool m_bIsHybridFlyer;
	bool m_bRequiresReachingEndPath;
	bool m_bAggroOwnerOnDamage;
	bool m_bReceivedAggroOnDamageOrder;
	CUtlVector< CreatureStateData_t > m_vCreatureStates;
	char* m_pszDefaultState;
	char* m_pszCurrentState;
	int32 m_nHPGain;
	int32 m_nManaGain;
	float32 m_flHPRegenGain;
	float32 m_flManaRegenGain;
	int32 m_nDamageGain;
	float32 m_flArmorGain;
	float32 m_flMagicResistGain;
	float32 m_flDisableResistGain;
	float32 m_flAttackTimeGain;
	int32 m_nMoveSpeedGain;
	int32 m_nBountyGain;
	int32 m_nXPGain;
	int32 m_nPermanentDesire;
	int32 m_nCreatureDesire;
	int32 m_nCurrentCastBehavior;
	int32 m_nEconItemGroup;
	bool m_bIsBuildingAggressive;
	bool m_bIsHeroAggressive;
	bool m_bDisableClumpingBehavior;
	float32 m_flDisableResistance;
	float32 m_flUltimateDisableResistance;
	bool m_bHasOffensiveAbility;
	CUtlVector< CreatureAbilityData_t > m_vOffensiveAbilities;
	bool m_bHasDefensiveAbility;
	CUtlVector< CreatureAbilityData_t > m_vDefensiveAbilities;
	bool m_bHasEscapeAbility;
	CUtlVector< CreatureAbilityData_t > m_vEscapeAbilities;
	CDOTABaseAbility* m_pLastUsedAbility;
	Vector m_vDesiredCastLocation;
	CDOTA_BaseNPC* m_pDesiredNPCTarget;
	CDOTA_BaseNPC* m_pEscortTarget;
	Vector m_vLastDamageSource;
	bool m_bIsChampion;
	CUtlVector< ItemDropData_t* > m_vItemDropData;
	CUtlVector< WearableData_t > m_vecAttachWearableItemDefs;
	GameTime_t m_flRespawnTime;
	// MNetworkEnable
	bool m_bIsCurrentlyChanneling;
	// MNetworkEnable
	float32 m_flChannelCycle;
};
