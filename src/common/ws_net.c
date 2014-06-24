#include "ws_net.h"

ws_int_t ws_net_ptocidr(const ws_str_t * addr, ws_cidr_t *cidr){
    ws_int_t sep_pos;
    ws_uint_t mask;

    for(sep_pos = 0; sep_pos < addr->len; sep_pos++){
        if(addr->data[sep_pos] == '/')
            break;
    }
    
    if(sep_pos == addr->len)
        return -1;

    addr->data[sep_pos] = '\0';
    cidr->addr = inet_addr((char *)addr->data);
    addr->data[sep_pos] = '/';
    if(cidr->addr == INADDR_NONE)
        return -1;

    mask = atoi(&addr->data[sep_pos + 1], addr->len - (sep_pos + 1));
    if(mask == 0){
        addr->mask = 0;
        return 0;
    }

    addr->mask = htonl((ngx_uint_t) (0 - (1 << (32 - m))));
    return 0;
}

