#include <orbis/_types/rtc.h>

typedef struct OrbisNpTrophyDetails {
	size_t  size;			 	// this needs to be set with sizeof(OrbisNpTrophyDetails) or any function that calls with this data will return a error
	int32_t TRPID;				// Trophy ID, 0-XXXX
	int32_t Unk00;				// Unkown data
	int32_t Unk01;				// Unkown data
	bool HiddenFromView;		// this determans if you can see the trophy before its unlocked
	char Unk02[3];				// Unkown data
	char TrophyName[128];		// Trophy Name, EX: "UNLOCK ME"
	char TrophyDetails[1024];	// Description, EX: "This is what needs to be unlocked"
} OrbisNpTrophyDetails;

typedef struct OrbisNpTrophyData {
	size_t size;				// this needs to be set with sizeof(OrbisNpTrophyDetails) or any function that calls with this data will return a error
	int32_t TRPID;				// Trophy ID, 0-XX for loarge scope trophy sets
	bool IsUnlocked;			// flag that tells if the trophy is locked or unlocked
	char Unk00[3];				// Unkown 
	OrbisRtcTick Timecode;		// time when the Trophy was unlocked
} OrbisNpTrophyData;
	