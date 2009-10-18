typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int   u32;

#define DRC_TCACHE_SIZE         (512*1024)

extern u8 tcache[DRC_TCACHE_SIZE];

void drc_cmn_init(void);
void drc_cmn_cleanup(void);

