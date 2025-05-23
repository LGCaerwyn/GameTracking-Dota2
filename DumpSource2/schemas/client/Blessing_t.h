// MGetKV3ClassDefaults (UNKNOWN FOR PARSER)
// MVDataOutlinerIconExpr = "'tools/images/common/icon_node_generic.png'"
class Blessing_t
{
	// MVDataUniqueMonotonicInt = "m_nNextBlessingID"
	// MPropertyAttributeEditor = "locked_int()"
	BlessingID_t nID;
	// MPropertyAttributeEditor = "VDataNodePicker(//m_mapBlessingTypes/*)"
	CUtlString BlessingType;
	// MPropertyDescription = "fragment cost"
	int32 nCost;
	// MPropertyDescription = "number of grants of action to give"
	int32 nValue;
	// MPropertyDescription = "can you unlock this node without owning any connected nodes?"
	bool bStartNode;
	Vector2D vecPos;
	// MPropertyAttributeRange = "0 10"
	float32 flSize;
	// MPropertyDescription = "node color"
	Color color;
};
