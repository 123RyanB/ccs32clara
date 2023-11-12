/* Interface header for Connection Manager */
#include <stdint.h>
/* Global Defines */

#define CONNLEVEL_100_APPL_RUNNING 100
#define CONNLEVEL_80_TCP_RUNNING 80
#define CONNLEVEL_50_SDP_DONE 50
#define CONNLEVEL_20_TWO_MODEMS_FOUND 20
#define CONNLEVEL_15_SLAC_ONGOING 15
#define CONNLEVEL_10_ONE_MODEM_FOUND 10
#define CONNLEVEL_5_ETH_LINK_PRESENT 5

/* Global Variables */

/* Global Functions */

/* ConnectionManager */
#ifdef __cplusplus
extern "C" {
#endif

extern void connMgr_Mainfunction(void);
extern uint8_t connMgr_getConnectionLevel(void);
extern void connMgr_ModemFinderOk(uint8_t numberOfFoundModems);
extern void connMgr_SlacOk(void);
extern void connMgr_SdpOk(void);
extern void connMgr_TcpOk(void);
extern void connMgr_ApplOk(uint8_t timeout_in_seconds);

#ifdef __cplusplus
}
#endif
