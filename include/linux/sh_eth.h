#ifndef __ASM_SH_ETH_H__
#define __ASM_SH_ETH_H__

#include <linux/phy.h>

enum {EDMAC_LITTLE_ENDIAN, EDMAC_BIG_ENDIAN};

struct sh_eth_plat_data {
	int phy;
	int phy_irq;
	int edmac_endian;
	phy_interface_t phy_interface;
	void (*set_mdio_gate)(void *addr);

	unsigned char mac_addr[6];
	unsigned no_ether_link:1;
	unsigned ether_link_active_low:1;
	unsigned needs_init:1;
};

#endif
