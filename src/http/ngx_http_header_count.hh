#ifndef _NGX_HTTP_HEADER_COUNT_H_INCLUDED_
#define _NGX_HTTP_HEADER_COUNT_H_INCLUDED_

typedef struct {
    ngx_uint_t count;
} ngx_http_header_count_t;

typedef struct {
    ngx_uint_t max_headers;
} ngx_http_header_count_conf_t;

extern ngx_module_t  ngx_http_header_count_module;

#endif /* _NGX_HTTP_HEADER_COUNT_H_INCLUDED_ */
