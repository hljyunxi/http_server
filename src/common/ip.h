#ifndef __UTIL_IP_H__
#define __UTIL_IP_H__

typedef struct {
    in_addr_t ip;
    in_addr_t mask;
} ngx_cidr_t;

ngx_int_t  ngx_ptocidr(const char * );
#endif
