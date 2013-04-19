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

#include "runtime/ext_hhvm/ext_hhvm.h"
#include "runtime/base/builtin_functions.h"
#include "runtime/base/array/array_init.h"
#include "runtime/ext/ext.h"
#include "runtime/vm/class.h"
#include "runtime/vm/runtime.h"
#include <exception>

namespace HPHP {

bool fh_apc_store(Value* key, TypedValue* var, long ttl, long cache_id) asm("_ZN4HPHP11f_apc_storeERKNS_6StringERKNS_7VariantEll");

void fg1_apc_store(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_store(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_store(&args[-0].m_data, (args-1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_store(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_store(&args[-0].m_data, (args-1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_store(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_store", count, 2, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_add(Value* key, TypedValue* var, long ttl, long cache_id) asm("_ZN4HPHP9f_apc_addERKNS_6StringERKNS_7VariantEll");

void fg1_apc_add(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_add(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_add(&args[-0].m_data, (args-1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_add(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_add(&args[-0].m_data, (args-1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_add(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_add", count, 2, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_fetch(TypedValue* _rv, TypedValue* key, TypedValue* success, long cache_id) asm("_ZN4HPHP11f_apc_fetchERKNS_7VariantERKNS_14VRefParamValueEl");

void fg1_apc_fetch(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_fetch(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-2);
  VRefParamValue defVal1 = uninit_null();
  fh_apc_fetch(rv, (args-0), (count > 1) ? (args-1) : (TypedValue*)(&defVal1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_fetch(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64)) {
      VRefParamValue defVal1 = uninit_null();
      fh_apc_fetch(rv, (args-0), (count > 1) ? (args-1) : (TypedValue*)(&defVal1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_fetch(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_fetch", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_delete(TypedValue* _rv, TypedValue* key, long cache_id) asm("_ZN4HPHP12f_apc_deleteERKNS_7VariantEl");

void fg1_apc_delete(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_delete(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-1);
  fh_apc_delete(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_delete(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfInt64)) {
      fh_apc_delete(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_delete(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_delete", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_clear_cache(long cache_id) asm("_ZN4HPHP17f_apc_clear_cacheEl");

void fg1_apc_clear_cache(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_clear_cache(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-0);
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_clear_cache((count > 0) ? (long)(args[-0].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_clear_cache(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 1) {
    if ((count <= 0 || (args - 0)->m_type == KindOfInt64)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_clear_cache((count > 0) ? (long)(args[-0].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_clear_cache(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("apc_clear_cache", 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_inc(TypedValue* _rv, Value* key, long step, TypedValue* success, long cache_id) asm("_ZN4HPHP9f_apc_incERKNS_6StringElRKNS_14VRefParamValueEl");

void fg1_apc_inc(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_inc(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
  case 2:
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  VRefParamValue defVal2 = uninit_null();
  fh_apc_inc(rv, &args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(1), (count > 2) ? (args-2) : (TypedValue*)(&defVal2), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_inc(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      VRefParamValue defVal2 = uninit_null();
      fh_apc_inc(rv, &args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(1), (count > 2) ? (args-2) : (TypedValue*)(&defVal2), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_inc(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_inc", count, 1, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_dec(TypedValue* _rv, Value* key, long step, TypedValue* success, long cache_id) asm("_ZN4HPHP9f_apc_decERKNS_6StringElRKNS_14VRefParamValueEl");

void fg1_apc_dec(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_dec(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
  case 2:
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  VRefParamValue defVal2 = uninit_null();
  fh_apc_dec(rv, &args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(1), (count > 2) ? (args-2) : (TypedValue*)(&defVal2), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_dec(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      VRefParamValue defVal2 = uninit_null();
      fh_apc_dec(rv, &args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(1), (count > 2) ? (args-2) : (TypedValue*)(&defVal2), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_dec(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_dec", count, 1, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_cas(Value* key, long old_cas, long new_cas, long cache_id) asm("_ZN4HPHP9f_apc_casERKNS_6StringElll");

void fg1_apc_cas(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_cas(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    break;
  }
  if ((args-2)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-2);
  }
  if ((args-1)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-1);
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_cas(&args[-0].m_data, (long)(args[-1].m_data.num), (long)(args[-2].m_data.num), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_cas(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 3 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (args - 2)->m_type == KindOfInt64 &&
        (args - 1)->m_type == KindOfInt64 &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_cas(&args[-0].m_data, (long)(args[-1].m_data.num), (long)(args[-2].m_data.num), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_cas(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_cas", count, 3, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_exists(TypedValue* _rv, TypedValue* key, long cache_id) asm("_ZN4HPHP12f_apc_existsERKNS_7VariantEl");

void fg1_apc_exists(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_exists(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-1);
  fh_apc_exists(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_exists(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfInt64)) {
      fh_apc_exists(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_exists(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_exists", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_cache_info(TypedValue* _rv, long cache_id, bool limited) asm("_ZN4HPHP16f_apc_cache_infoElb");

void fg1_apc_cache_info(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_cache_info(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 2
    if ((args-1)->m_type != KindOfBoolean) {
      tvCastToBooleanInPlace(args-1);
    }
  case 1:
    if ((args-0)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-0);
    }
  case 0:
    break;
  }
  fh_apc_cache_info(rv, (count > 0) ? (long)(args[-0].m_data.num) : (long)(0), (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(false));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_cache_info(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfBoolean) &&
        (count <= 0 || (args - 0)->m_type == KindOfInt64)) {
      fh_apc_cache_info(rv, (count > 0) ? (long)(args[-0].m_data.num) : (long)(0), (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(false));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_cache_info(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("apc_cache_info", 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

Value* fh_apc_sma_info(Value* _rv, bool limited) asm("_ZN4HPHP14f_apc_sma_infoEb");

void fg1_apc_sma_info(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_sma_info(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToBooleanInPlace(args-0);
  rv->m_type = KindOfArray;
  fh_apc_sma_info(&(rv->m_data), (count > 0) ? (bool)(args[-0].m_data.num) : (bool)(false));
  if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_sma_info(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 1) {
    if ((count <= 0 || (args - 0)->m_type == KindOfBoolean)) {
      rv->m_type = KindOfArray;
      fh_apc_sma_info(&(rv->m_data), (count > 0) ? (bool)(args[-0].m_data.num) : (bool)(false));
      if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
    } else {
      fg1_apc_sma_info(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("apc_sma_info", 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_define_constants(Value* key, Value* constants, bool case_sensitive, long cache_id) asm("_ZN4HPHP22f_apc_define_constantsERKNS_6StringES2_bl");

void fg1_apc_define_constants(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_define_constants(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfBoolean) {
      tvCastToBooleanInPlace(args-2);
    }
  case 2:
    break;
  }
  if (!IS_STRING_TYPE((args-1)->m_type)) {
    tvCastToStringInPlace(args-1);
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_define_constants(&args[-0].m_data, &args[-1].m_data, (count > 2) ? (bool)(args[-2].m_data.num) : (bool)(true), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_define_constants(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfBoolean) &&
        IS_STRING_TYPE((args - 1)->m_type) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_define_constants(&args[-0].m_data, &args[-1].m_data, (count > 2) ? (bool)(args[-2].m_data.num) : (bool)(true), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_define_constants(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_define_constants", count, 2, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_load_constants(Value* key, bool case_sensitive, long cache_id) asm("_ZN4HPHP20f_apc_load_constantsERKNS_6StringEbl");

void fg1_apc_load_constants(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_load_constants(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfBoolean) {
      tvCastToBooleanInPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_load_constants(&args[-0].m_data, (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(true), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_load_constants(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfBoolean) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_load_constants(&args[-0].m_data, (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(true), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_load_constants(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_load_constants", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_compile_file(Value* filename, bool atomic, long cache_id) asm("_ZN4HPHP18f_apc_compile_fileERKNS_6StringEbl");

void fg1_apc_compile_file(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_compile_file(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfBoolean) {
      tvCastToBooleanInPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_compile_file(&args[-0].m_data, (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(true), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_compile_file(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfBoolean) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_compile_file(&args[-0].m_data, (count > 1) ? (bool)(args[-1].m_data.num) : (bool)(true), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_compile_file(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_compile_file", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

Value* fh_apc_filehits(Value* _rv) asm("_ZN4HPHP14f_apc_filehitsEv");

TypedValue* fg_apc_filehits(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 0) {
    rv->m_type = KindOfArray;
    fh_apc_filehits(&(rv->m_data));
    if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
  } else {
    throw_toomany_arguments_nr("apc_filehits", 0, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 0);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_delete_file(TypedValue* _rv, TypedValue* keys, long cache_id) asm("_ZN4HPHP17f_apc_delete_fileERKNS_7VariantEl");

void fg1_apc_delete_file(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_delete_file(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-1);
  fh_apc_delete_file(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_delete_file(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfInt64)) {
      fh_apc_delete_file(rv, (args-0), (count > 1) ? (long)(args[-1].m_data.num) : (long)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_delete_file(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_delete_file", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_bin_dump(TypedValue* _rv, long cache_id, TypedValue* filter) asm("_ZN4HPHP14f_apc_bin_dumpElRKNS_7VariantE");

void fg1_apc_bin_dump(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_bin_dump(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-0);
  fh_apc_bin_dump(rv, (count > 0) ? (long)(args[-0].m_data.num) : (long)(0), (count > 1) ? (args-1) : (TypedValue*)(&null_variant));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_bin_dump(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 2) {
    if ((count <= 0 || (args - 0)->m_type == KindOfInt64)) {
      fh_apc_bin_dump(rv, (count > 0) ? (long)(args[-0].m_data.num) : (long)(0), (count > 1) ? (args-1) : (TypedValue*)(&null_variant));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_bin_dump(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("apc_bin_dump", 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_bin_load(Value* data, long flags, long cache_id) asm("_ZN4HPHP14f_apc_bin_loadERKNS_6StringEll");

void fg1_apc_bin_load(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_bin_load(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_apc_bin_load(&args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(0), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_bin_load(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_apc_bin_load(&args[-0].m_data, (count > 1) ? (long)(args[-1].m_data.num) : (long)(0), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_bin_load(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_bin_load", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_apc_bin_dumpfile(TypedValue* _rv, long cache_id, TypedValue* filter, Value* filename, long flags, Value* context) asm("_ZN4HPHP18f_apc_bin_dumpfileElRKNS_7VariantERKNS_6StringElRKNS_6ObjectE");

void fg1_apc_bin_dumpfile(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_bin_dumpfile(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 5
    if ((args-4)->m_type != KindOfObject) {
      tvCastToObjectInPlace(args-4);
    }
  case 4:
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    break;
  }
  if (!IS_STRING_TYPE((args-2)->m_type)) {
    tvCastToStringInPlace(args-2);
  }
  if ((args-0)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-0);
  }
  Object defVal4 = uninit_null();
  fh_apc_bin_dumpfile(rv, (long)(args[-0].m_data.num), (args-1), &args[-2].m_data, (count > 3) ? (long)(args[-3].m_data.num) : (long)(0), (count > 4) ? &args[-4].m_data : (Value*)(&defVal4));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_apc_bin_dumpfile(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 3 && count <= 5) {
    if ((count <= 4 || (args - 4)->m_type == KindOfObject) &&
        (count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        IS_STRING_TYPE((args - 2)->m_type) &&
        (args - 0)->m_type == KindOfInt64) {
      Object defVal4 = uninit_null();
      fh_apc_bin_dumpfile(rv, (long)(args[-0].m_data.num), (args-1), &args[-2].m_data, (count > 3) ? (long)(args[-3].m_data.num) : (long)(0), (count > 4) ? &args[-4].m_data : (Value*)(&defVal4));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_apc_bin_dumpfile(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_bin_dumpfile", count, 3, 5, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 5);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_apc_bin_loadfile(Value* filename, Value* context, long flags, long cache_id) asm("_ZN4HPHP18f_apc_bin_loadfileERKNS_6StringERKNS_6ObjectEll");

void fg1_apc_bin_loadfile(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_apc_bin_loadfile(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfObject) {
      tvCastToObjectInPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  Object defVal1 = uninit_null();
  rv->m_data.num = (fh_apc_bin_loadfile(&args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&defVal1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
}

TypedValue* fg_apc_bin_loadfile(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfObject) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfBoolean;
      Object defVal1 = uninit_null();
      rv->m_data.num = (fh_apc_bin_loadfile(&args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&defVal1), (count > 2) ? (long)(args[-2].m_data.num) : (long)(0), (count > 3) ? (long)(args[-3].m_data.num) : (long)(0))) ? 1LL : 0LL;
    } else {
      fg1_apc_bin_loadfile(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("apc_bin_loadfile", count, 1, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

} // namespace HPHP
