#ifndef _DFSAN_HOOK_H_
#define _DFSAN_HOOK_H_

#include "dfsan.h"
#include "dfsan_union_t.h"
void dfsan_hook_load_inst(dfsan_label_info *label_info, dfsan_label label);

#endif