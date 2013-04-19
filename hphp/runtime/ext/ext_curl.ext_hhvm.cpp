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

TypedValue* fh_curl_init(TypedValue* _rv, Value* url) asm("_ZN4HPHP11f_curl_initERKNS_6StringE");

void fg1_curl_init(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_init(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToStringInPlace(args-0);
  fh_curl_init(rv, (count > 0) ? &args[-0].m_data : (Value*)(&null_string));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_init(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 1) {
    if ((count <= 0 || IS_STRING_TYPE((args - 0)->m_type))) {
      fh_curl_init(rv, (count > 0) ? &args[-0].m_data : (Value*)(&null_string));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_init(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("curl_init", 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_copy_handle(TypedValue* _rv, Value* ch) asm("_ZN4HPHP18f_curl_copy_handleERKNS_6ObjectE");

void fg1_curl_copy_handle(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_copy_handle(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_copy_handle(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_copy_handle(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_copy_handle(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_copy_handle(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_copy_handle", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_version(TypedValue* _rv, int uversion) asm("_ZN4HPHP14f_curl_versionEi");

void fg1_curl_version(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_version(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToInt64InPlace(args-0);
  fh_curl_version(rv, (count > 0) ? (int)(args[-0].m_data.num) : (int)(k_CURLVERSION_NOW));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_version(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count <= 1) {
    if ((count <= 0 || (args - 0)->m_type == KindOfInt64)) {
      fh_curl_version(rv, (count > 0) ? (int)(args[-0].m_data.num) : (int)(k_CURLVERSION_NOW));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_version(rv, ar, count);
    }
  } else {
    throw_toomany_arguments_nr("curl_version", 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_curl_setopt(Value* ch, int option, TypedValue* value) asm("_ZN4HPHP13f_curl_setoptERKNS_6ObjectEiRKNS_7VariantE");

void fg1_curl_setopt(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_setopt(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_curl_setopt(&args[-0].m_data, (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
}

TypedValue* fg_curl_setopt(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 3) {
    if ((args - 1)->m_type == KindOfInt64 &&
        (args - 0)->m_type == KindOfObject) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_curl_setopt(&args[-0].m_data, (int)(args[-1].m_data.num), (args-2))) ? 1LL : 0LL;
    } else {
      fg1_curl_setopt(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_setopt", count, 3, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

bool fh_curl_setopt_array(Value* ch, Value* options) asm("_ZN4HPHP19f_curl_setopt_arrayERKNS_6ObjectERKNS_5ArrayE");

void fg1_curl_setopt_array(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_setopt_array(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfArray) {
    tvCastToArrayInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  rv->m_type = KindOfBoolean;
  rv->m_data.num = (fh_curl_setopt_array(&args[-0].m_data, &args[-1].m_data)) ? 1LL : 0LL;
}

TypedValue* fg_curl_setopt_array(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 2) {
    if ((args - 1)->m_type == KindOfArray &&
        (args - 0)->m_type == KindOfObject) {
      rv->m_type = KindOfBoolean;
      rv->m_data.num = (fh_curl_setopt_array(&args[-0].m_data, &args[-1].m_data)) ? 1LL : 0LL;
    } else {
      fg1_curl_setopt_array(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_setopt_array", count, 2, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_fb_curl_getopt(TypedValue* _rv, Value* ch, int opt) asm("_ZN4HPHP16f_fb_curl_getoptERKNS_6ObjectEi");

void fg1_fb_curl_getopt(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_fb_curl_getopt(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 2
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    break;
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_fb_curl_getopt(rv, &args[-0].m_data, (count > 1) ? (int)(args[-1].m_data.num) : (int)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_fb_curl_getopt(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfInt64) &&
        (args - 0)->m_type == KindOfObject) {
      fh_fb_curl_getopt(rv, &args[-0].m_data, (count > 1) ? (int)(args[-1].m_data.num) : (int)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_fb_curl_getopt(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("fb_curl_getopt", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_exec(TypedValue* _rv, Value* ch) asm("_ZN4HPHP11f_curl_execERKNS_6ObjectE");

void fg1_curl_exec(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_exec(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_exec(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_exec(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_exec(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_exec(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_exec", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_getinfo(TypedValue* _rv, Value* ch, int opt) asm("_ZN4HPHP14f_curl_getinfoERKNS_6ObjectEi");

void fg1_curl_getinfo(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_getinfo(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 2
    if ((args-1)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-1);
    }
  case 1:
    break;
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_curl_getinfo(rv, &args[-0].m_data, (count > 1) ? (int)(args[-1].m_data.num) : (int)(0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_getinfo(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfInt64) &&
        (args - 0)->m_type == KindOfObject) {
      fh_curl_getinfo(rv, &args[-0].m_data, (count > 1) ? (int)(args[-1].m_data.num) : (int)(0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_getinfo(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_getinfo", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_errno(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_errnoERKNS_6ObjectE");

void fg1_curl_errno(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_errno(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_errno(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_errno(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_errno(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_errno(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_errno", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_error(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_errorERKNS_6ObjectE");

void fg1_curl_error(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_error(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_error(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_error(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_error(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_error(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_error", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_close(TypedValue* _rv, Value* ch) asm("_ZN4HPHP12f_curl_closeERKNS_6ObjectE");

void fg1_curl_close(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_close(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_close(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_close(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_close(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_close(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_close", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

Value* fh_curl_multi_init(Value* _rv) asm("_ZN4HPHP17f_curl_multi_initEv");

TypedValue* fg_curl_multi_init(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 0) {
    rv->m_type = KindOfObject;
    fh_curl_multi_init(&(rv->m_data));
    if (rv->m_data.num == 0LL) rv->m_type = KindOfNull;
  } else {
    throw_toomany_arguments_nr("curl_multi_init", 0, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 0);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_add_handle(TypedValue* _rv, Value* mh, Value* ch) asm("_ZN4HPHP23f_curl_multi_add_handleERKNS_6ObjectES2_");

void fg1_curl_multi_add_handle(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_add_handle(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_curl_multi_add_handle(rv, &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_add_handle(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 2) {
    if ((args - 1)->m_type == KindOfObject &&
        (args - 0)->m_type == KindOfObject) {
      fh_curl_multi_add_handle(rv, &args[-0].m_data, &args[-1].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_add_handle(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_add_handle", count, 2, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_remove_handle(TypedValue* _rv, Value* mh, Value* ch) asm("_ZN4HPHP26f_curl_multi_remove_handleERKNS_6ObjectES2_");

void fg1_curl_multi_remove_handle(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_remove_handle(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if ((args-1)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-1);
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_curl_multi_remove_handle(rv, &args[-0].m_data, &args[-1].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_remove_handle(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 2) {
    if ((args - 1)->m_type == KindOfObject &&
        (args - 0)->m_type == KindOfObject) {
      fh_curl_multi_remove_handle(rv, &args[-0].m_data, &args[-1].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_remove_handle(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_remove_handle", count, 2, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_exec(TypedValue* _rv, Value* mh, TypedValue* still_running) asm("_ZN4HPHP17f_curl_multi_execERKNS_6ObjectERKNS_14VRefParamValueE");

void fg1_curl_multi_exec(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_exec(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_multi_exec(rv, &args[-0].m_data, (args-1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_exec(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 2) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_multi_exec(rv, &args[-0].m_data, (args-1));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_exec(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_exec", count, 2, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_select(TypedValue* _rv, Value* mh, double timeout) asm("_ZN4HPHP19f_curl_multi_selectERKNS_6ObjectEd");

void fg1_curl_multi_select(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_select(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 2
    if ((args-1)->m_type != KindOfDouble) {
      tvCastToDoubleInPlace(args-1);
    }
  case 1:
    break;
  }
  if ((args-0)->m_type != KindOfObject) {
    tvCastToObjectInPlace(args-0);
  }
  fh_curl_multi_select(rv, &args[-0].m_data, (count > 1) ? (args[-1].m_data.dbl) : (double)(1.0));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_select(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((count <= 1 || (args - 1)->m_type == KindOfDouble) &&
        (args - 0)->m_type == KindOfObject) {
      fh_curl_multi_select(rv, &args[-0].m_data, (count > 1) ? (args[-1].m_data.dbl) : (double)(1.0));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_select(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_select", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_getcontent(TypedValue* _rv, Value* ch) asm("_ZN4HPHP23f_curl_multi_getcontentERKNS_6ObjectE");

void fg1_curl_multi_getcontent(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_getcontent(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_multi_getcontent(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_getcontent(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_multi_getcontent(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_getcontent(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_getcontent", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_fb_curl_multi_fdset(TypedValue* _rv, Value* mh, TypedValue* read_fd_set, TypedValue* write_fd_set, TypedValue* exc_fd_set, TypedValue* max_fd) asm("_ZN4HPHP21f_fb_curl_multi_fdsetERKNS_6ObjectERKNS_14VRefParamValueES5_S5_S5_");

void fg1_fb_curl_multi_fdset(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_fb_curl_multi_fdset(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  VRefParamValue defVal4 = null_object;
  fh_fb_curl_multi_fdset(rv, &args[-0].m_data, (args-1), (args-2), (args-3), (count > 4) ? (args-4) : (TypedValue*)(&defVal4));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_fb_curl_multi_fdset(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 4 && count <= 5) {
    if ((args - 0)->m_type == KindOfObject) {
      VRefParamValue defVal4 = null_object;
      fh_fb_curl_multi_fdset(rv, &args[-0].m_data, (args-1), (args-2), (args-3), (count > 4) ? (args-4) : (TypedValue*)(&defVal4));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_fb_curl_multi_fdset(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("fb_curl_multi_fdset", count, 4, 5, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 5);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_info_read(TypedValue* _rv, Value* mh, TypedValue* msgs_in_queue) asm("_ZN4HPHP22f_curl_multi_info_readERKNS_6ObjectERKNS_14VRefParamValueE");

void fg1_curl_multi_info_read(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_info_read(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  VRefParamValue defVal1 = uninit_null();
  fh_curl_multi_info_read(rv, &args[-0].m_data, (count > 1) ? (args-1) : (TypedValue*)(&defVal1));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_info_read(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 2) {
    if ((args - 0)->m_type == KindOfObject) {
      VRefParamValue defVal1 = uninit_null();
      fh_curl_multi_info_read(rv, &args[-0].m_data, (count > 1) ? (args-1) : (TypedValue*)(&defVal1));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_info_read(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_info_read", count, 1, 2, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 2);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_curl_multi_close(TypedValue* _rv, Value* mh) asm("_ZN4HPHP18f_curl_multi_closeERKNS_6ObjectE");

void fg1_curl_multi_close(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_curl_multi_close(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_curl_multi_close(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_curl_multi_close(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_curl_multi_close(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_curl_multi_close(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("curl_multi_close", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

void fh_evhttp_set_cache(Value* address, int max_conn, int port) asm("_ZN4HPHP18f_evhttp_set_cacheERKNS_6StringEii");

void fg1_evhttp_set_cache(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_set_cache(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    break;
  }
  if ((args-1)->m_type != KindOfInt64) {
    tvCastToInt64InPlace(args-1);
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  rv->m_type = KindOfNull;
  fh_evhttp_set_cache(&args[-0].m_data, (int)(args[-1].m_data.num), (count > 2) ? (int)(args[-2].m_data.num) : (int)(80));
}

TypedValue* fg_evhttp_set_cache(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (args - 1)->m_type == KindOfInt64 &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      rv->m_type = KindOfNull;
      fh_evhttp_set_cache(&args[-0].m_data, (int)(args[-1].m_data.num), (count > 2) ? (int)(args[-2].m_data.num) : (int)(80));
    } else {
      fg1_evhttp_set_cache(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_set_cache", count, 2, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_evhttp_get(TypedValue* _rv, Value* url, Value* headers, int timeout) asm("_ZN4HPHP12f_evhttp_getERKNS_6StringERKNS_5ArrayEi");

void fg1_evhttp_get(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_get(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  fh_evhttp_get(rv, &args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_array), (count > 2) ? (int)(args[-2].m_data.num) : (int)(5));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_evhttp_get(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfArray) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      fh_evhttp_get(rv, &args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_array), (count > 2) ? (int)(args[-2].m_data.num) : (int)(5));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_evhttp_get(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_get", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_evhttp_post(TypedValue* _rv, Value* url, Value* data, Value* headers, int timeout) asm("_ZN4HPHP13f_evhttp_postERKNS_6StringES2_RKNS_5ArrayEi");

void fg1_evhttp_post(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_post(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-2);
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
  fh_evhttp_post(rv, &args[-0].m_data, &args[-1].m_data, (count > 2) ? &args[-2].m_data : (Value*)(&null_array), (count > 3) ? (int)(args[-3].m_data.num) : (int)(5));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_evhttp_post(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfArray) &&
        IS_STRING_TYPE((args - 1)->m_type) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      fh_evhttp_post(rv, &args[-0].m_data, &args[-1].m_data, (count > 2) ? &args[-2].m_data : (Value*)(&null_array), (count > 3) ? (int)(args[-3].m_data.num) : (int)(5));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_evhttp_post(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_post", count, 2, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_evhttp_async_get(TypedValue* _rv, Value* url, Value* headers, int timeout) asm("_ZN4HPHP18f_evhttp_async_getERKNS_6StringERKNS_5ArrayEi");

void fg1_evhttp_async_get(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_async_get(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 3
    if ((args-2)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-2);
    }
  case 2:
    if ((args-1)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-1);
    }
  case 1:
    break;
  }
  if (!IS_STRING_TYPE((args-0)->m_type)) {
    tvCastToStringInPlace(args-0);
  }
  fh_evhttp_async_get(rv, &args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_array), (count > 2) ? (int)(args[-2].m_data.num) : (int)(5));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_evhttp_async_get(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 1 && count <= 3) {
    if ((count <= 2 || (args - 2)->m_type == KindOfInt64) &&
        (count <= 1 || (args - 1)->m_type == KindOfArray) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      fh_evhttp_async_get(rv, &args[-0].m_data, (count > 1) ? &args[-1].m_data : (Value*)(&null_array), (count > 2) ? (int)(args[-2].m_data.num) : (int)(5));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_evhttp_async_get(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_async_get", count, 1, 3, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 3);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_evhttp_async_post(TypedValue* _rv, Value* url, Value* data, Value* headers, int timeout) asm("_ZN4HPHP19f_evhttp_async_postERKNS_6StringES2_RKNS_5ArrayEi");

void fg1_evhttp_async_post(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_async_post(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  switch (count) {
  default: // count >= 4
    if ((args-3)->m_type != KindOfInt64) {
      tvCastToInt64InPlace(args-3);
    }
  case 3:
    if ((args-2)->m_type != KindOfArray) {
      tvCastToArrayInPlace(args-2);
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
  fh_evhttp_async_post(rv, &args[-0].m_data, &args[-1].m_data, (count > 2) ? &args[-2].m_data : (Value*)(&null_array), (count > 3) ? (int)(args[-3].m_data.num) : (int)(5));
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_evhttp_async_post(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count >= 2 && count <= 4) {
    if ((count <= 3 || (args - 3)->m_type == KindOfInt64) &&
        (count <= 2 || (args - 2)->m_type == KindOfArray) &&
        IS_STRING_TYPE((args - 1)->m_type) &&
        IS_STRING_TYPE((args - 0)->m_type)) {
      fh_evhttp_async_post(rv, &args[-0].m_data, &args[-1].m_data, (count > 2) ? &args[-2].m_data : (Value*)(&null_array), (count > 3) ? (int)(args[-3].m_data.num) : (int)(5));
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_evhttp_async_post(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_async_post", count, 2, 4, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 4);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

TypedValue* fh_evhttp_recv(TypedValue* _rv, Value* handle) asm("_ZN4HPHP13f_evhttp_recvERKNS_6ObjectE");

void fg1_evhttp_recv(TypedValue* rv, ActRec* ar, int32_t count) __attribute__((noinline,cold));
void fg1_evhttp_recv(TypedValue* rv, ActRec* ar, int32_t count) {
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  tvCastToObjectInPlace(args-0);
  fh_evhttp_recv(rv, &args[-0].m_data);
  if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
}

TypedValue* fg_evhttp_recv(ActRec* ar) {
  TypedValue rvSpace;
  TypedValue* rv = &rvSpace;
  int32_t count = ar->numArgs();
  TypedValue* args UNUSED = ((TypedValue*)ar) - 1;
  if (count == 1) {
    if ((args - 0)->m_type == KindOfObject) {
      fh_evhttp_recv(rv, &args[-0].m_data);
      if (rv->m_type == KindOfUninit) rv->m_type = KindOfNull;
    } else {
      fg1_evhttp_recv(rv, ar, count);
    }
  } else {
    throw_wrong_arguments_nr("evhttp_recv", count, 1, 1, 1);
    rv->m_data.num = 0LL;
    rv->m_type = KindOfNull;
  }
  frame_free_locals_no_this_inl(ar, 1);
  memcpy(&ar->m_r, rv, sizeof(TypedValue));
  return &ar->m_r;
}

} // namespace HPHP
