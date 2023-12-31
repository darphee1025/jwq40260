#ifndef __TYPE_H__
#define __TYPE_H__

#define REG32(_register_) (*(volatile unsigned int *)(_register_))
#define REG8(_register_)  (*(volatile unsigned char *)(_register_))

#endif

/************************** Constant Definitions *****************************/
#ifndef __SYSTEM_REG_H__
#define __SYSTEM_REG_H__

#define SYSTEM_REG_BASEADDR 0x0
#define M_FLAG_ADDR         (SYSTEM_REG_BASEADDR + 0x0)
#define M_MODE_ADDR         (SYSTEM_REG_BASEADDR + 0x1)
#define M_REG_CTRL1_ADDR    (SYSTEM_REG_BASEADDR + 0x2)
#define M_REG_CTRL2_ADDR    (SYSTEM_REG_BASEADDR + 0x3)
#define M_AMUX_ADDR         (SYSTEM_REG_BASEADDR + 0x4)
#define M_CLOCK_ADDR        (SYSTEM_REG_BASEADDR + 0x5)
#define M_INT_MASK1_ADDR    (SYSTEM_REG_BASEADDR + 0x6)
#define M_INT_MASK2_ADDR    (SYSTEM_REG_BASEADDR + 0x7)
#define M_FLAG1_ADDR        (SYSTEM_REG_BASEADDR + 0x8)
#define M_FLAG2_ADDR        (SYSTEM_REG_BASEADDR + 0x8)
#define M_VMON_REGX_ADDR    (SYSTEM_REG_BASEADDR + 0xA)
#define M_LVB1_SVS_ADDR     (SYSTEM_REG_BASEADDR + 0xB)
#define M_MEMORY0_ADDR      (SYSTEM_REG_BASEADDR + 0x23)
#define M_MEMORY1_ADDR      (SYSTEM_REG_BASEADDR + 0x24)
#define M_DEVICE_ADDR       (SYSTEM_REG_BASEADDR + 0x25)
#define FS_GRL_FLAGS_REGISTER_ADDR (SYSTEM_REG_BASEADDR + 0x40)
#define FS_I_OVUV_SAFE_REACTION1_ADDR (SYSTEM_REG_BASEADDR + 0x41)
#define FS_I_OVUV_SAFE_REACTION2_ADDR (SYSTEM_REG_BASEADDR + 0x43)
#define FS_I_WD_CFG_ADDR    (SYSTEM_REG_BASEADDR + 0x45)
#define FS_I_SAFE_INPUTS_ADDR (SYSTEM_REG_BASEADDR + 0x47)
#define FS_I_FSSM_ADDR      (SYSTEM_REG_BASEADDR + 0x49)
#define FS_I_SVS_ADDR       (SYSTEM_REG_BASEADDR + 0x4B)
#define FS_WD_WINDOW_ADDR   (SYSTEM_REG_BASEADDR + 0x4D)
#define FS_WD_SEED_ADDR     (SYSTEM_REG_BASEADDR + 0x4F)
#define FS_WD_ANSWER_ADDR   (SYSTEM_REG_BASEADDR + 0x50)
#define FS_OVUVREG_STATUS_ADDR (SYSTEM_REG_BASEADDR + 0x51)
#define FS_RELEASE_FS0B_ADDR (SYSTEM_REG_BASEADDR + 0x52)
#define FS_SAFE_IOS_ADDR    (SYSTEM_REG_BASEADDR + 0x53)
#define FS_DIAG_SAFETY_ADDR (SYSTEM_REG_BASEADDR + 0x54)
#define FS_INTB_MASK_ADDR   (SYSTEM_REG_BASEADDR + 0x55)
#define FS_STATES_ADDR      (SYSTEM_REG_BASEADDR + 0x56)

#endif
