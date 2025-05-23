// MNetworkVarNames = "HSequence m_hSequence"
// MNetworkVarNames = "GameTime_t m_flSeqStartTime"
// MNetworkVarNames = "float m_flSeqFixedCycle"
// MNetworkVarNames = "AnimLoopMode_t m_nAnimLoopMode"
class CBaseAnimGraphController : public CSkeletonAnimationController
{
	bool m_bSequenceFinished;
	float32 m_flSoundSyncTime;
	uint32 m_nActiveIKChainMask;
	// MNetworkEnable
	// MNetworkSerializer = "minusone"
	// MNetworkChangeCallback = "OnNetworkedSequenceChanged"
	// MNetworkPriority = 32
	HSequence m_hSequence;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnNetworkedAnimationChanged"
	// MNetworkPriority = 32
	GameTime_t m_flSeqStartTime;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnNetworkedAnimationChanged"
	// MNetworkPriority = 32
	float32 m_flSeqFixedCycle;
	// MNetworkEnable
	// MNetworkChangeCallback = "OnNetworkedAnimationChanged"
	// MNetworkPriority = 32
	AnimLoopMode_t m_nAnimLoopMode;
	// MNetworkEnable
	// MNetworkBitCount = 10
	// MNetworkMinValue = 0.000000
	// MNetworkMaxValue = 5.000000
	// MNetworkEncodeFlags = 8
	// MNetworkPriority = 32
	// MNetworkChangeCallback = "OnNetworkedAnimationChanged"
	CNetworkedQuantizedFloat m_flPlaybackRate;
	SequenceFinishNotifyState_t m_nNotifyState;
	bool m_bNetworkedAnimationInputsChanged;
	bool m_bNetworkedSequenceChanged;
	bool m_bLastUpdateSkipped;
	GameTime_t m_flPrevAnimUpdateTime;
};
