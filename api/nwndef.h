#ifndef _NWNDEF_H_
#define _NWNDEF_H_
#include"custom/nwndef_custom.h"
#include "../typedef.h"
class CNWSCreature;
class CNWSPlaceable;
class CNWSObject;
class CNWSModule;
class CNWSTrigger;
class CNWSWaypoint;
class CNWSEncounter;
class CNWSPlayerTURD;
class CNWSSoundObject;
class CNWSAreaOfEffectObject;
class CNWSArea;
class CNWSDoor;
class CNWSItem;
class CNWSStore;
class CNWSCombatRound;
class CNWSMessage;
class CExoLinkedListInternal;
template <class T>
class CExoLinkedList;
class CExoBaseInternal;
class CNWSPlayer;
class CExoResFile;
class CExoEncapsulatedFile;
class CExoResourceImageFile;
class CCodeBaseInternal;
class CCodeBase;
class CServerExoApp;
class CServerExoAppInternal;
class CNetLayerPlayerInfo;
class CGameObjectArray;
class CNWSCombatAttackData;
class CResGFF;
class CExoKeyTable;
class CNWSTile;
class CExoResMan;
class CGameSpyServer;
class CServerAIMaster;
class CNWSCreatureStats;
class CNWLevelStats;
class CExoMemman;
class CObjectLookupTable;
class CObjectTableManager;
class CNWSBarter;
class CItemRepository;
class CNWSDialog;
class CNWSPlayerLastUpdateObject;
class CNWSCreatureStats_ClassInfo;
class CNWSFaction;
class CNetworkProfiler;
class CNWSExpressionList;
class CServerAIList;
class CNWTileData;
class CERFFile;
class CConnectionLib;
class CExoStringList;
class CNWArea;
class CExoLocString;
class CExoLocStringInternal;
class CScriptCompiler;
class CNetLayerWindow;
class CVirtualMachineStack;
template <class T>
class CExoArrayList;
class CWorldTimer;
class CExoAliasList;
class CExoRandInternal;
class CExoAliasListInternal;
class CExoNetInternal;
class CExoNet;
class CNWSItemPropertyHandler;
class CExoString;
class CGameObject;
class CNWSClient;
class CNWSDungeonMaster;
class CNWSSysAdmin;
class CExoDebugInternal;
class CExoDebug;
class CExoFileThread;
class CBWCBlowFish;
class CNetLayerInternal;
class CDUtil;
class CRes;
class CExoNetExtendableBuffer;
class CExoNetFrameBuffer;
class CGameSpyClient;
class CNWTileSurfaceMesh;
class CExoBase;
class CNetLayer;
class CVirtualMachineCache;
class CNWSExpression;
class CNWSPlayerLUOInventory;
class CTwoDimArrays;
class CTlkTable;
class CNWCCMessageData;
class CNWCreatureStatsUpdate;
class CNWMessage;
class CNWTileSetManager;
class CNWPlaceMeshManager;
class CMemRecord;
class CNWSPlayerStoreGUI;
class CNWRules;
class CNWSPlayerCharSheetGUI;
class CPathfindInformation;
class CGameEffect;
class CNWVirtualMachineCommands;
class CResSET;
class CScriptEvent;
class CScriptLocation;
class CScriptTalent;
class CResTGA;
class CResRef;
class CFactionManager;
class CAppManager;
class CVirtualMachineDebuggerInstance;
class CVirtualMachine;
class CBWCMD5;
class CNWSScriptVarTable;
class CVirtualMachineDebugLoader;
class CNWSJournal;
class CExoEncrypt;
class CExoCriticalSection;
class CExoCriticalSectionInternal;
class CExoFile;
class CScriptCompilerIdListEntry;
class CNWTileSurfaceMeshHashTableEntry;
class CServerInfo;
class CMstNetLayer;
class CRes2DA;
class CNWTile;
class CNWSInventory;
class CExoPackedFile;
class CNWClass;
class CNWItem;
class CNWBaseItemArray;
class C2DA;
class CBWCBlowFishState;
class CNWRace;
class CNWTileSet;
class CResDWK;
class CVirtualMachineFile;
class CNWFeat;
class CNWSkill;
class CNWDomain;
class CResLTR;
class CExoTimers;
class CExoTimersInternal;
class CNWBaseItem;
class CLoopingVisualEffect;
class CNWDoorSurfaceMesh;
class CResNCS;
class CResNDB;
class CResNSS;
class CExoFileInternal;
class CResPWK;
class CNWSAmbientSound;
class CNWNameGen;
class CNWSpell;
class CNWSpellArray;
class CExoRand;
class CERFString;
class CResWOK;
class CResGFFFieldIDHash;
class CNWSEffectListHandler;
class CLastUpdateObject;
class CServerAIBodyBagInfo;
class CCombatInformation;
class CNWSSpellScriptData;
class CNWSCombatRoundAction;
class CNWSForcedAction;
class CServerAIEventNode;
class CScriptSourceFile;
class CNWPlaceableSurfaceMesh;
class Vector;
class CTlkFile;
class CExoIniInternal;
class CExoIni;
class CERFKey;
class CERFRes;
class CNWSPlayerContainerGUI;
class CNWSPlayerInventoryGUI;
class Plane;
class MS_RSAVLong;
class CBWCBlowFishBlock;
class CNWSExpressionNode;
class CNWSObjectActionNode;
class CNetLayerSessionInfo;
class CGameEffectApplierRemover;
class CNWTileSurfaceMeshAABBNode;
class CItemPropertyApplierRemover;
class CVirtualMachineCmdImplementer;
class CResARE;
class CResIFO;
class CNWSRules;
class CStoreCustomer;
class CNWSStats_Spell;
class MS_RSAPrivateKey;
class MS_RSAVLong_value;
class CCombatInformationNode;
class CNWSStats_SpellLikeAbility;
class CPathfindInfoIntraTileSuccessors;
class CExtendedServerInfo;
class MS_RSAPublicKey;
class Matrix;
struct CServerExoAppConfig;
struct CNWSCreatureAppearanceInfo;
struct CResStruct;
struct CNWSActionNode;
struct CExoLinkedListNode;
struct ExoLocString_st;
struct CGameObjectArrayElement;
struct CVirtualMachineCommand;
struct CNWSVector;
struct CActionParam;
struct CNWModule;
struct CAppManager_ModuleInfo;
struct CVirtualMachineScript;
template<typename RES> struct CResHelper;
struct CKeyTableEntry;
struct CDialogEntry;
struct CDialogReply;
struct CDialogEntryReply;
struct CDialogReplyEntry;
struct CActionParams;
struct CNWSScriptVar;
struct CNWItemProperty;
struct CNWSQuickbarButton;
struct CNWVisibilityNode;
struct CEncounterListEntry;
struct CNWSSoundObjectTimeOfDay;
struct CNWSAreaGridSuccessors;
struct CNWSPlayerLUOSortedObjectList;
struct CLastUpdatePartyObject;
struct CLinuxFileKey;
struct CNWSPlayerLUOInventoryItem;
struct CKeyTableInfo;
struct CNWSDialogPlayer;
struct CLinuxFileSection;
struct NWAreaExpansion_st;
struct NWModuleCutScene_st;
struct NWPlayerListItem_st;
struct NWModuleExpansion_st;
struct EncapsulatedResListEntry_st;
struct SCodeBaseData;
struct SRecord;
struct CResGFFField;
struct CResList;
struct CResGFFStruct;
struct CBaseExoApp;
struct CScriptParseTreeNode;
struct NWPlayerCharacterList_st;
struct CNWSTagNode;
struct CNWSPVPEntry;
struct SJournalEntry;
struct SGameSpyRoomEntry;
struct CWorldJournalEntry;
struct CNWSInvitationDetails;
struct CNWSPersonalReputation;
struct CNetLayerPlayerCDKeyInfo;
struct CNWSPlayerJournalQuestUpdates;
struct NWPlayerCharacterListClass_st;
struct CFileInfo;
struct CScriptLog;
struct CSpell_Add;
struct SMstKeyEntry;
struct CSpell_Delete;
struct SMstNameEntry;
struct SMstBuddyEntry;
struct SSubNetProfile;
struct SMstDigiDistInfo;
struct CEffectIconObject;
struct CFeatUseListEntry;
struct CNWCAreaOfEffectObject;
struct CNWCArea;
struct CNWCCreature;
struct CNWCDoor;
struct CNWCItem;
struct CNWCModule;
struct CNWCObject;
struct CNWCPlaceable;
struct CNWCProjectile;
struct CNWCSoundObject;
struct CNWCStore;
struct CNWCTrigger;
struct PEERBool;
struct RoomType;
struct PEERJoinResult;
struct MessageType;
struct STR_RES;
struct CTlkTableToken;
struct CNWTilePathNode;
struct CVirtualMachineDebuggingContext;
struct Quaternion;

#include "vptr.h"

#endif
