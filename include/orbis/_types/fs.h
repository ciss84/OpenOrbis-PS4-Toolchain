#pragma once
#include <dirent.h>
#include <sys/uio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <limits.h>
#include <sys/mman.h>

#define ORBIS_KERNEL_NAME_MAX        NAME_MAX
#define ORBIS_KERNEL_PATH_MAX        PATH_MAX
#define ORBIS_KERNEL_IOV_MAX         IOV_MAX
#define ORBIS_KERNEL_MAXNAMLEN       255

#define ORBIS_KERNEL_O_RDONLY        O_RDONLY
#define ORBIS_KERNEL_O_WRONLY        O_WRONLY 
#define ORBIS_KERNEL_O_RDWR          O_RDWR
#define ORBIS_KERNEL_O_NONBLOCK      O_NONBLOCK
#define ORBIS_KERNEL_O_APPEND        O_APPEND
#define ORBIS_KERNEL_O_CREAT         O_CREAT
#define ORBIS_KERNEL_O_TRUNC         O_TRUNC
#define ORBIS_KERNEL_O_EXCL          O_EXCL
#define ORBIS_KERNEL_O_DIRECT        O_DIRECT
#define ORBIS_KERNEL_O_FSYNC         0x0080 
#define ORBIS_KERNEL_O_SYNC          O_SYNC
#define ORBIS_KERNEL_O_DSYNC         O_DSYNC
#define ORBIS_KERNEL_O_DIRECTORY     O_DIRECTORY

#define ORBIS_KERNEL_S_IFMT          S_IFMT
#define ORBIS_KERNEL_S_IFDIR         S_IFDIR
#define ORBIS_KERNEL_S_IFREG         S_IFREG

#define ORBIS_KERNEL_S_IRUSR         (S_IRUSR | S_IRGRP | S_IROTH | S_IXUSR | \
				    S_IXGRP | S_IXOTH)
#define ORBIS_KERNEL_S_IWUSR         (S_IWUSR | S_IWGRP | S_IWOTH | S_IXUSR | \
				    S_IXGRP | S_IXOTH)
#define ORBIS_KERNEL_S_IXUSR         (S_IXUSR | S_IXGRP | S_IXOTH)
#define ORBIS_KERNEL_S_IRWXU         (ORBIS_KERNEL_S_IRUSR | ORBIS_KERNEL_S_IWUSR)

#define ORBIS_KERNEL_S_IRWU          (ORBIS_KERNEL_S_IRUSR | ORBIS_KERNEL_S_IWUSR)
/* 00777, R/W */
#define ORBIS_KERNEL_S_IRU           (ORBIS_KERNEL_S_IRUSR)
/* 00555, R */

#define ORBIS_KERNEL_S_INONE         0000000

#define ORBIS_KERNEL_S_ISDIR(m)      S_ISDIR(m)
#define ORBIS_KERNEL_S_ISREG(m)      S_ISREG(m)

/* for OrbisKernelFcntl() */
#define ORBIS_KERNEL_F_GETFL         F_GETFL
#define ORBIS_KERNEL_F_SETFL         F_SETFL

/* for OrbisKernelLseek() */
#define ORBIS_KERNEL_SEEK_SET        SEEK_SET 
#define ORBIS_KERNEL_SEEK_CUR        SEEK_CUR
#define ORBIS_KERNEL_SEEK_END        SEEK_END

/* for OrbisKernelMmap() */
#define ORBIS_KERNEL_MAP_NOCORE      MAP_NOCORE
#define ORBIS_KERNEL_MAP_NOSYNC      MAP_NOSYNC
#define ORBIS_KERNEL_MAP_PREFAULT_READ MAP_PREFAULT_READ
#define ORBIS_KERNEL_MAP_PRIVATE     MAP_PRIVATE
#define ORBIS_KERNEL_MAP_SHARED      MAP_SHARED

/* for OrbisKernelDirent */
#define ORBIS_KERNEL_DT_UNKNOWN      DT_UNKNOWN
#define ORBIS_KERNEL_DT_DIR          DT_DIR
#define ORBIS_KERNEL_DT_REG          DT_REG

/* for OrbisKernelSetCompress */
#define ORBIS_KERNEL_COMPRESS_FILE_MAGIC (0x43534650)
#define ORBIS_KERNEL_SET_COMPRESS_FILE            (1)
#define ORBIS_KERNEL_SET_REGULAR_FILE             (0)

/* for OrbisKernelLwfsSetAttribute */
#define ORBIS_KERNEL_LWFS_DISABLE (0)
#define ORBIS_KERNEL_LWFS_ENABLE  (1)

/* for OrbisKernelLwfsLseek */
#define ORBIS_KERNEL_LWFS_SEEK_SET		(0)
#define ORBIS_KERNEL_LWFS_SEEK_CUR		(1)
#define ORBIS_KERNEL_LWFS_SEEK_END		(2)
#define ORBIS_KERNEL_LWFS_SEEK_DATAEND	(3)

typedef struct iovec OrbisKernelIovec;
typedef struct stat OrbisKernelStat;
typedef struct dirent OrbisKernelDirent;
typedef mode_t OrbisKernelMode;