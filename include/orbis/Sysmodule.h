#ifndef _SCE_SYS_MODULE_H_
#define _SCE_SYS_MODULE_H_

#include "_types/sysmodule.h"

#include <stdint.h>

#ifdef __cplusplus 
extern "C" {
#endif

#define SCE_SYSMODULE_INTERNAL_SYS_CORE 0x80000004
#define SCE_SYSMODULE_INTERNAL_NETCTL 0x80000009
#define SCE_SYSMODULE_INTERNAL_HTTP 0x8000000A
#define SCE_SYSMODULE_INTERNAL_SSL 0x8000000B
#define SCE_SYSMODULE_INTERNAL_NP_COMMON 0x8000000C
#define SCE_SYSMODULE_INTERNAL_SYSTEM_SERVICE 0x80000010
#define SCE_SYSMODULE_INTERNAL_USER_SERVICE 0x80000011
#define SCE_SYSMODULE_INTERNAL_APPINSTUTIL 0x80000014
#define SCE_SYSMODULE_INTERNAL_NET 0x8000001C
#define SCE_SYSMODULE_INTERNAL_IPMI 0x8000001D
#define SCE_SYSMODULE_INTERNAL_VIDEO_OUT 0x80000022
#define SCE_SYSMODULE_INTERNAL_SYSUTIL 0x80000026
#define SCE_SYSMODULE_INTERNAL_COMMON_DIALOG 0x80000018
#define SCE_SYSMODULE_INTERNAL_BGFT 0x8000002A
#define SCE_SYSMODULE_INTERNAL_PRECOMPILED_SHADERS 0x80000064
#define SCE_SYSMODULE_INTERNAL_PAD 0x80000024
#define SCE_SYSMODULE_INTERNAL_REGMGR 0x8000001F
 
/**
  * Sysmodule function to test if a module is loaded or not.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int sceSysmoduleIsLoaded(uint16_t id);

/**
  * Sysmodule function to load a module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int sceSysmoduleLoadModule(uint16_t id);

/**
  * Sysmodule function to unload a module.
  * @param id is the internal module id. see list of module ids.
  * @return 0 = Success/Valid or Negatives values are error codes.
  */
int sceSysmoduleUnloadModule(uint16_t id);
 
// Undocumented Function... Need to reverse
void sceSysmoduleGetModuleHandleInternal();
// Undocumented Function... Need to reverse
void sceSysmoduleIsLoadedInternal();
// Undocumented Function... Need to reverse
void sceSysmoduleLoadModuleByNameInternal();
// Undocumented Function... Need to reverse
uint32_t sceSysmoduleLoadModuleInternal(uint32_t);
// Undocumented Function... Need to reverse
void sceSysmoduleLoadModuleInternalWithArg();
// Undocumented Function... Need to reverse
void sceSysmodulePreloadModuleForLibkernel();
// Undocumented Function... Need to reverse
void sceSysmoduleUnloadModuleByNameInternal();
// Undocumented Function... Need to reverse
int sceSysmoduleUnloadModuleInternal(uint32_t id);
// Undocumented Function... Need to reverse
void sceSysmoduleUnloadModuleInternalWithArg();

#ifdef __cplusplus
}
#endif
#endif

