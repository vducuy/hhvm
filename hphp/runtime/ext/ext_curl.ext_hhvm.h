/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
namespace HPHP {

TypedValue* fh_curl_init(TypedValue* _rv, Value* url) asm("_ZN4HPHP11f_curl_initERKNS_6StringE");

TypedValue* fh_curl_copy_handle(TypedValue* _rv, Value* ch) asm("_ZN4HPHP18f_curl_copy_handleERKNS_6ObjectE");

TypedValue* fh_curl_version(TypedValue* _rv, int uversion) asm("_ZN4HPHP14f_curl_versionEi");

bool fh_curl_setopt(Value* ch, int option, TypedValue* value) asm("_ZN4HPHP13f_curl_setoptERKNS_6ObjectEiRKNS_7VariantE");

bool fh_curl_setopt_array(Value* ch, Value* options) asm("_ZN4HPHP19f_curl_setopt_arrayERKNS_6ObjectERKNS_5ArrayE");

TypedValue* fh_fb_curl_getopt(TypedValue* _rv, Value* ch, int opt) asm("_ZN4HPHP16f_fb_curl_getoptERKNS_6ObjectEi");

TypedValue* fh_curl_exec(TypedValue* _rv, Value* ch) asm("_ZN4HPHP11f_curl_execERKNS_6ObjectE");

TypedValue* fh_curl_getinfo(TypedValue* _rv, Value* ch, int opt) asm("_ZN4HPHP14f_curl_getinfoERKNS_6ObjectEi");

TypedValue* fh_curl_errno(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_errnoERKNS_6ObjectE");

TypedValue* fh_curl_error(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_errorERKNS_6ObjectE");

TypedValue* fh_curl_close(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_closeERKNS_6ObjectE");

Value* fh_curl_multi_init(Value* _rv) asm("_ZN4HPHP17f_curl_multi_initEv");

TypedValue* fh_curl_multi_add_handle(TypedValue* _rv, Value* mh, Value* ch) asm("_ZN4HPHP23f_curl_multi_add_handleERKNS_6ObjectES2_");

TypedValue* fh_curl_multi_remove_handle(TypedValue* _rv, Value* mh, Value* ch) asm("_ZN4HPHP26f_curl_multi_remove_handleERKNS_6ObjectES2_");

TypedValue* fh_curl_multi_exec(TypedValue* _rv, Value* mh, TypedValue* still_running) asm("_ZN4HPHP17f_curl_multi_execERKNS_6ObjectERKNS_14VRefParamValueE");

TypedValue* fh_curl_multi_select(TypedValue* _rv, Value* mh, double timeout) asm("_ZN4HPHP19f_curl_multi_selectERKNS_6ObjectEd");

TypedValue* fh_curl_multi_getcontent(TypedValue* _rv, Value* ch) asm("_ZN4HPHP23f_curl_multi_getcontentERKNS_6ObjectE");

TypedValue* fh_fb_curl_multi_fdset(TypedValue* _rv, Value* mh, TypedValue* read_fd_set, TypedValue* write_fd_set, TypedValue* exc_fd_set, TypedValue* max_fd) asm("_ZN4HPHP21f_fb_curl_multi_fdsetERKNS_6ObjectERKNS_14VRefParamValueES5_S5_S5_");

TypedValue* fh_curl_multi_info_read(TypedValue* _rv, Value* mh, TypedValue* msgs_in_queue) asm("_ZN4HPHP22f_curl_multi_info_readERKNS_6ObjectERKNS_14VRefParamValueE");

TypedValue* fh_curl_multi_close(TypedValue* _rv, Value* mh) asm("_ZN4HPHP18f_curl_multi_closeERKNS_6ObjectE");

void fh_evhttp_set_cache(Value* address, int max_conn, int port) asm("_ZN4HPHP18f_evhttp_set_cacheERKNS_6StringEii");

TypedValue* fh_evhttp_get(TypedValue* _rv, Value* url, Value* headers, int timeout) asm("_ZN4HPHP12f_evhttp_getERKNS_6StringERKNS_5ArrayEi");

TypedValue* fh_evhttp_post(TypedValue* _rv, Value* url, Value* data, Value* headers, int timeout) asm("_ZN4HPHP13f_evhttp_postERKNS_6StringES2_RKNS_5ArrayEi");

TypedValue* fh_evhttp_async_get(TypedValue* _rv, Value* url, Value* headers, int timeout) asm("_ZN4HPHP18f_evhttp_async_getERKNS_6StringERKNS_5ArrayEi");

TypedValue* fh_evhttp_async_post(TypedValue* _rv, Value* url, Value* data, Value* headers, int timeout) asm("_ZN4HPHP19f_evhttp_async_postERKNS_6StringES2_RKNS_5ArrayEi");

TypedValue* fh_evhttp_recv(TypedValue* _rv, Value* handle) asm("_ZN4HPHP13f_evhttp_recvERKNS_6ObjectE");

} // namespace HPHP
