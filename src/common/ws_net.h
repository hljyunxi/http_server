#ifndef __UTIL_NET_H__
#define __UTIL_NET_H__

typedef struct {
    in_addr_t addr;
    in_addr_t mask;
} ws_cidr_t;

size_t ws_sock_ntop();

size_t ws_inet_ntop();

ws_int_t net_ptocidr(const char * addr, ws_cidr_t * cidr);

#endif /* end of __UTIL_NET_H__ */
