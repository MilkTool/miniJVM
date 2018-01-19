#include <stdio.h>
#include <string.h>

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#define NK_IMPLEMENTATION
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_DEFAULT_FONT
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_STANDARD_VARARGS
#include <nuklear.h>

#define NK_GLFW_GL2_IMPLEMENTATION
#include <nuklear_glfw_gl2.h>

#include "../mini_jvm/jvm/jvm.h"
#include "jni_gui.h"



int org_mini_nk_NK_nk_init_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_init_default((struct nk_context*)parg0, (const struct nk_user_font*)parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_init_fixed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_init_fixed((struct nk_context*)parg0, (void*)pmemory, *(nk_size*)&psize, (const struct nk_user_font*)parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_init((struct nk_context*)parg0, (struct nk_allocator*)parg1, (const struct nk_user_font*)parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_init_custom(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pcmds = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t ppool = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_init_custom((struct nk_context*)parg0, (struct nk_buffer*)pcmds, (struct nk_buffer*)ppool, (const struct nk_user_font*)parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_clear((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_free(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_free((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_input_begin((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_motion(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 px = env->localvar_getInt(runtime, pos++);
    s32 py = env->localvar_getInt(runtime, pos++);

    nk_input_motion((struct nk_context*)parg0, *(int*)&px, *(int*)&py);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_key(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 pdown = env->localvar_getInt(runtime, pos++);

    nk_input_key((struct nk_context*)parg0, *(enum nk_keys*)&parg1, *(int*)&pdown);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_button(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 px = env->localvar_getInt(runtime, pos++);
    s32 py = env->localvar_getInt(runtime, pos++);
    s32 pdown = env->localvar_getInt(runtime, pos++);

    nk_input_button((struct nk_context*)parg0, *(enum nk_buttons*)&parg1, *(int*)&px, *(int*)&py, *(int*)&pdown);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_scroll(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }

    nk_input_scroll((struct nk_context*)parg0, *(struct nk_vec2*)(ptr_pval));
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_input_char((struct nk_context*)parg0, (char)parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_glyph(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_input_glyph((struct nk_context*)parg0, *(const nk_glyph*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_unicode(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_input_unicode((struct nk_context*)parg0, *(nk_rune*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_input_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk__begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_command* _re_val = nk__begin((struct nk_context*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__next(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_command* _re_val = nk__next((struct nk_context*)parg0, (const struct nk_command*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_convert(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pcmds = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pvertices = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pelements = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg4 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_flags _re_val = nk_convert((struct nk_context*)parg0, (struct nk_buffer*)pcmds, (struct nk_buffer*)pvertices, (struct nk_buffer*)pelements, (const struct nk_convert_config*)parg4);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__draw_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_begin((const struct nk_context*)parg0, (const struct nk_buffer*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__draw_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_end((const struct nk_context*)parg0, (const struct nk_buffer*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__draw_next(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_next((const struct nk_draw_command*)parg0, (const struct nk_buffer*)parg1, (const struct nk_context*)parg2);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    Instance *pbounds = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbounds = NULL;
    if(pbounds){
        ptr_pbounds = pbounds->arr_body;
    }
    s32 pflags = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_begin((struct nk_context*)pctx, (const char*)(ptr_ptitle), *(struct nk_rect*)(ptr_pbounds), *(nk_flags*)&pflags);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_begin_titled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    Instance *pbounds = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbounds = NULL;
    if(pbounds){
        ptr_pbounds = pbounds->arr_body;
    }
    s32 pflags = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_begin_titled((struct nk_context*)pctx, (const char*)(ptr_pname), (const char*)(ptr_ptitle), *(struct nk_rect*)(ptr_pbounds), *(nk_flags*)&pflags);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pname);env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_end((struct nk_context*)pctx);
    
    
    return 0;
}

int org_mini_nk_NK_nk_window_find(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }

    struct nk_window* _re_val = nk_window_find((struct nk_context*)pctx, (const char*)(ptr_pname));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_get_bounds(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_rect _re_val = nk_window_get_bounds((const struct nk_context*)pctx);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_position(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_window_get_position((const struct nk_context*)pctx);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_size(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_window_get_size((const struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_width(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    f64 ret_value = (f64)nk_window_get_width((const struct nk_context*)parg0);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_height(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    f64 ret_value = (f64)nk_window_get_height((const struct nk_context*)parg0);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_panel(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_panel* _re_val = nk_window_get_panel((struct nk_context*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_content_region(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_rect _re_val = nk_window_get_content_region((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_content_region_min(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_window_get_content_region_min((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_content_region_max(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_window_get_content_region_max((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_content_region_size(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_window_get_content_region_size((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_window_get_canvas(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_command_buffer* _re_val = nk_window_get_canvas((struct nk_context*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_has_focus(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_window_has_focus((const struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_is_collapsed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }

    int _re_val = nk_window_is_collapsed((struct nk_context*)pctx, (const char*)(ptr_pname));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_is_closed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    int _re_val = nk_window_is_closed((struct nk_context*)parg0, (const char*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_window_is_hidden(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    int _re_val = nk_window_is_hidden((struct nk_context*)parg0, (const char*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_window_is_active(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    int _re_val = nk_window_is_active((struct nk_context*)parg0, (const char*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_window_is_hovered(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_window_is_hovered((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_is_any_hovered(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_window_is_any_hovered((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_item_is_any_active(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_item_is_any_active((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_window_set_bounds(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Instance *pbounds = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbounds = NULL;
    if(pbounds){
        ptr_pbounds = pbounds->arr_body;
    }

    nk_window_set_bounds((struct nk_context*)parg0, (const char*)(ptr_pname), *(struct nk_rect*)(ptr_pbounds));
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_set_position(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Instance *ppos = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppos = NULL;
    if(ppos){
        ptr_ppos = ppos->arr_body;
    }

    nk_window_set_position((struct nk_context*)parg0, (const char*)(ptr_pname), *(struct nk_vec2*)(ptr_ppos));
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_set_size(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    nk_window_set_size((struct nk_context*)parg0, (const char*)(ptr_pname), *(struct nk_vec2*)(ptr_parg2));
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_set_focus(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }

    nk_window_set_focus((struct nk_context*)parg0, (const char*)(ptr_pname));
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_close(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }

    nk_window_close((struct nk_context*)pctx, (const char*)(ptr_pname));
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_collapse(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 pstate = env->localvar_getInt(runtime, pos++);

    nk_window_collapse((struct nk_context*)parg0, (const char*)(ptr_pname), *(enum nk_collapse_states*)&pstate);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_collapse_if(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pcond = env->localvar_getInt(runtime, pos++);

    nk_window_collapse_if((struct nk_context*)parg0, (const char*)(ptr_pname), *(enum nk_collapse_states*)&parg2, *(int*)&pcond);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_show(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_window_show((struct nk_context*)parg0, (const char*)(ptr_pname), *(enum nk_show_states*)&parg2);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_window_show_if(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pcond = env->localvar_getInt(runtime, pos++);

    nk_window_show_if((struct nk_context*)parg0, (const char*)(ptr_pname), *(enum nk_show_states*)&parg2, *(int*)&pcond);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_layout_set_min_row_height(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);

    nk_layout_set_min_row_height((struct nk_context*)parg0, (float)pheight.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_reset_min_row_height(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_layout_reset_min_row_height((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_widget_bounds(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_rect _re_val = nk_layout_widget_bounds((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_layout_ratio_from_pixel(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float ppixel_width;ppixel_width.i = env->localvar_getInt(runtime, pos++);

    f64 ret_value = (f64)nk_layout_ratio_from_pixel((struct nk_context*)parg0, (float)ppixel_width.f);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_dynamic(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    s32 pcols = env->localvar_getInt(runtime, pos++);

    nk_layout_row_dynamic((struct nk_context*)pctx, (float)pheight.f, *(int*)&pcols);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_static(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    s32 pitem_width = env->localvar_getInt(runtime, pos++);
    s32 pcols = env->localvar_getInt(runtime, pos++);

    nk_layout_row_static((struct nk_context*)pctx, (float)pheight.f, *(int*)&pitem_width, *(int*)&pcols);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pfmt = env->localvar_getInt(runtime, pos++);
    Int2Float prow_height;prow_height.i = env->localvar_getInt(runtime, pos++);
    s32 pcols = env->localvar_getInt(runtime, pos++);

    nk_layout_row_begin((struct nk_context*)pctx, *(enum nk_layout_format*)&pfmt, (float)prow_height.f, *(int*)&pcols);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pvalue;pvalue.i = env->localvar_getInt(runtime, pos++);

    nk_layout_row_push((struct nk_context*)parg0, (float)pvalue.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_layout_row_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    s32 pcols = env->localvar_getInt(runtime, pos++);
    Instance *pratio = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pratio = NULL;
    if(pratio){
        ptr_pratio = pratio->arr_body;
    }

    nk_layout_row((struct nk_context*)parg0, *(enum nk_layout_format*)&parg1, (float)pheight.f, *(int*)&pcols, (const float*)(ptr_pratio));
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_template_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float prow_height;prow_height.i = env->localvar_getInt(runtime, pos++);

    nk_layout_row_template_begin((struct nk_context*)parg0, (float)prow_height.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_template_push_dynamic(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_layout_row_template_push_dynamic((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_template_push_variable(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pmin_width;pmin_width.i = env->localvar_getInt(runtime, pos++);

    nk_layout_row_template_push_variable((struct nk_context*)parg0, (float)pmin_width.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_template_push_static(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pwidth;pwidth.i = env->localvar_getInt(runtime, pos++);

    nk_layout_row_template_push_static((struct nk_context*)parg0, (float)pwidth.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_row_template_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_layout_row_template_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    s32 pwidget_count = env->localvar_getInt(runtime, pos++);

    nk_layout_space_begin((struct nk_context*)parg0, *(enum nk_layout_format*)&parg1, (float)pheight.f, *(int*)&pwidget_count);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    nk_layout_space_push((struct nk_context*)parg0, *(struct nk_rect*)(ptr_parg1));
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_layout_space_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_bounds(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_rect _re_val = nk_layout_space_bounds((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_to_screen(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    struct nk_vec2 _re_val = nk_layout_space_to_screen((struct nk_context*)parg0, *(struct nk_vec2*)(ptr_parg1));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_to_local(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    struct nk_vec2 _re_val = nk_layout_space_to_local((struct nk_context*)parg0, *(struct nk_vec2*)(ptr_parg1));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_rect_to_screen(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    struct nk_rect _re_val = nk_layout_space_rect_to_screen((struct nk_context*)parg0, *(struct nk_rect*)(ptr_parg1));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_layout_space_rect_to_local(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    struct nk_rect _re_val = nk_layout_space_rect_to_local((struct nk_context*)parg0, *(struct nk_rect*)(ptr_parg1));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_group_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_group_begin((struct nk_context*)parg0, (const char*)(ptr_ptitle), *(nk_flags*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_group_scrolled_offset_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *px_offset = env->localvar_getRefer(runtime, pos++);
    __refer ptr_px_offset = NULL;
    if(px_offset){
        ptr_px_offset = px_offset->arr_body;
    }
    Instance *py_offset = env->localvar_getRefer(runtime, pos++);
    __refer ptr_py_offset = NULL;
    if(py_offset){
        ptr_py_offset = py_offset->arr_body;
    }
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg3 = NULL;
    Utf8String *u_parg3;
    if(parg3){
        u_parg3 = env->utf8_create();
        env->jstring_2_utf8(parg3, u_parg3);
        ptr_parg3 = env->utf8_cstr(u_parg3);
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_group_scrolled_offset_begin((struct nk_context*)parg0, (nk_uint*)(ptr_px_offset), (nk_uint*)(ptr_py_offset), (const char*)(ptr_parg3), *(nk_flags*)&parg4);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg3);
    return 0;
}

int org_mini_nk_NK_nk_group_scrolled_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_group_scrolled_begin((struct nk_context*)parg0, (struct nk_scroll*)parg1, (const char*)(ptr_ptitle), *(nk_flags*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_group_scrolled_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_group_scrolled_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_group_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_group_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_list_view_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pout = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pid = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pid = NULL;
    Utf8String *u_pid;
    if(pid){
        u_pid = env->utf8_create();
        env->jstring_2_utf8(pid, u_pid);
        ptr_pid = env->utf8_cstr(u_pid);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 prow_height = env->localvar_getInt(runtime, pos++);
    s32 prow_count = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_list_view_begin((struct nk_context*)parg0, (struct nk_list_view*)pout, (const char*)(ptr_pid), *(nk_flags*)&parg3, *(int*)&prow_height, *(int*)&prow_count);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pid);
    return 0;
}

int org_mini_nk_NK_nk_list_view_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_list_view_end((struct nk_list_view*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_tree_push_hashed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 pinitial_state = env->localvar_getInt(runtime, pos++);
    Instance *phash = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phash = NULL;
    Utf8String *u_phash;
    if(phash){
        u_phash = env->utf8_create();
        env->jstring_2_utf8(phash, u_phash);
        ptr_phash = env->utf8_cstr(u_phash);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    s32 pseed = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_tree_push_hashed((struct nk_context*)parg0, *(enum nk_tree_type*)&parg1, (const char*)(ptr_ptitle), *(enum nk_collapse_states*)&pinitial_state, (const char*)(ptr_phash), *(int*)&plen, *(int*)&pseed);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);env->utf8_destory(u_phash);
    return 0;
}

int org_mini_nk_NK_nk_tree_image_push_hashed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 pinitial_state = env->localvar_getInt(runtime, pos++);
    Instance *phash = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phash = NULL;
    Utf8String *u_phash;
    if(phash){
        u_phash = env->utf8_create();
        env->jstring_2_utf8(phash, u_phash);
        ptr_phash = env->utf8_cstr(u_phash);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    s32 pseed = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_tree_image_push_hashed((struct nk_context*)parg0, *(enum nk_tree_type*)&parg1, *(struct nk_image*)(((Instance*)parg2)->arr_body), (const char*)(ptr_ptitle), *(enum nk_collapse_states*)&pinitial_state, (const char*)(ptr_phash), *(int*)&plen, *(int*)&pseed);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);env->utf8_destory(u_phash);
    return 0;
}

int org_mini_nk_NK_nk_tree_pop(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_tree_pop((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_tree_state_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    Instance *pstate = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstate = NULL;
    if(pstate){
        ptr_pstate = pstate->arr_body;
    }

    int _re_val = nk_tree_state_push((struct nk_context*)parg0, *(enum nk_tree_type*)&parg1, (const char*)(ptr_ptitle), (enum nk_collapse_states*)(ptr_pstate));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_tree_state_image_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    Instance *pstate = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstate = NULL;
    if(pstate){
        ptr_pstate = pstate->arr_body;
    }

    int _re_val = nk_tree_state_image_push((struct nk_context*)parg0, *(enum nk_tree_type*)&parg1, *(struct nk_image*)(((Instance*)parg2)->arr_body), (const char*)(ptr_ptitle), (enum nk_collapse_states*)(ptr_pstate));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_tree_state_pop(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_tree_state_pop((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_widget(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    if(parg0){
        ptr_parg0 = parg0->arr_body;
    }
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    enum nk_widget_layout_states _re_val = nk_widget((struct nk_rect*)(ptr_parg0), (const struct nk_context*)parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_fitting(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    if(parg0){
        ptr_parg0 = parg0->arr_body;
    }
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    enum nk_widget_layout_states _re_val = nk_widget_fitting((struct nk_rect*)(ptr_parg0), (struct nk_context*)parg1, *(struct nk_vec2*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_bounds(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_rect _re_val = nk_widget_bounds((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_widget_position(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_widget_position((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_widget_size(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_vec2 _re_val = nk_widget_size((struct nk_context*)parg0);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_widget_width(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    f64 ret_value = (f64)nk_widget_width((struct nk_context*)parg0);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_height(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    f64 ret_value = (f64)nk_widget_height((struct nk_context*)parg0);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_is_hovered(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_widget_is_hovered((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_is_mouse_clicked(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_widget_is_mouse_clicked((struct nk_context*)parg0, *(enum nk_buttons*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_widget_has_mouse_click_down(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 pdown = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_widget_has_mouse_click_down((struct nk_context*)parg0, *(enum nk_buttons*)&parg1, *(int*)&pdown);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_spacing(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pcols = env->localvar_getInt(runtime, pos++);

    nk_spacing((struct nk_context*)parg0, *(int*)&pcols);
    
    
    return 0;
}

int org_mini_nk_NK_nk_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&parg3);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_text_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_text_colored((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&parg3, *(struct nk_color*)&parg4);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_text_wrap(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_text_wrap((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_text_wrap_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_text_wrap_colored((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(struct nk_color*)&parg3);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);

    nk_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_label_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_label_colored((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, *(struct nk_color*)&parg3);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_label_wrap(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    nk_label_wrap((struct nk_context*)parg0, (const char*)(ptr_parg1));
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_label_colored_wrap(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_label_colored_wrap((struct nk_context*)parg0, (const char*)(ptr_parg1), *(struct nk_color*)&parg2);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_image((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body));
    
    
    return 0;
}

int org_mini_nk_NK_nk_labelf(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_parg3 = NULL;
    if(parg3){
        ptr_parg3 = env->cstringarr_create(parg3);
    }

    nk_labelf((struct nk_context*)parg0, *(nk_flags*)&parg1, (const char*)(ptr_parg2), /*todo Despair for runtime parse unlimited para*/(ptr_parg3->arr_body));
    
    env->utf8_destory(u_parg2);env->cstringarr_destory(ptr_parg3);
    return 0;
}

int org_mini_nk_NK_nk_labelf_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg3 = NULL;
    Utf8String *u_parg3;
    if(parg3){
        u_parg3 = env->utf8_create();
        env->jstring_2_utf8(parg3, u_parg3);
        ptr_parg3 = env->utf8_cstr(u_parg3);
    }
    Instance *parg4 = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_parg4 = NULL;
    if(parg4){
        ptr_parg4 = env->cstringarr_create(parg4);
    }

    nk_labelf_colored((struct nk_context*)parg0, *(nk_flags*)&palign, *(struct nk_color*)&parg2, (const char*)(ptr_parg3), /*todo Despair for runtime parse unlimited para*/(ptr_parg4->arr_body));
    
    env->utf8_destory(u_parg3);env->cstringarr_destory(ptr_parg4);
    return 0;
}

int org_mini_nk_NK_nk_labelf_wrap(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = env->cstringarr_create(parg2);
    }

    nk_labelf_wrap((struct nk_context*)parg0, (const char*)(ptr_parg1), /*todo Despair for runtime parse unlimited para*/(ptr_parg2->arr_body));
    
    env->utf8_destory(u_parg1);env->cstringarr_destory(ptr_parg2);
    return 0;
}

int org_mini_nk_NK_nk_labelf_colored_wrap(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_parg3 = NULL;
    if(parg3){
        ptr_parg3 = env->cstringarr_create(parg3);
    }

    nk_labelf_colored_wrap((struct nk_context*)parg0, *(struct nk_color*)&parg1, (const char*)(ptr_parg2), /*todo Despair for runtime parse unlimited para*/(ptr_parg3->arr_body));
    
    env->utf8_destory(u_parg2);env->cstringarr_destory(ptr_parg3);
    return 0;
}

int org_mini_nk_NK_nk_value_bool(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_bool((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(int*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_int(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_int((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(int*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_uint(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_uint((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(unsigned int*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    Int2Float parg2;parg2.i = env->localvar_getInt(runtime, pos++);

    nk_value_float((struct nk_context*)parg0, (const char*)(ptr_pprefix), (float)parg2.f);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_color_byte(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_color_byte((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(struct nk_color*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_color_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_color_float((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(struct nk_color*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_value_color_hex(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pprefix = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pprefix = NULL;
    Utf8String *u_pprefix;
    if(pprefix){
        u_pprefix = env->utf8_create();
        env->jstring_2_utf8(pprefix, u_pprefix);
        ptr_pprefix = env->utf8_cstr(u_pprefix);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_value_color_hex((struct nk_context*)parg0, (const char*)(ptr_pprefix), *(struct nk_color*)&parg2);
    
    env->utf8_destory(u_pprefix);
    return 0;
}

int org_mini_nk_NK_nk_button_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_text((struct nk_context*)parg0, (const char*)(ptr_ptitle), *(int*)&plen);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_button_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }

    int _re_val = nk_button_label((struct nk_context*)parg0, (const char*)(ptr_ptitle));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_button_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_color((struct nk_context*)parg0, *(struct nk_color*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_symbol(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_button_image((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)pimg)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 ptext_alignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol_label((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(nk_flags*)&ptext_alignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_button_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol_text((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_button_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 ptext_alignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)pimg)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&ptext_alignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_button_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)pimg)->arr_body), (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_button_text_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_text_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, (const char*)(ptr_ptitle), *(int*)&plen);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_button_label_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }

    int _re_val = nk_button_label_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, (const char*)(ptr_ptitle));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_button_symbol_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, *(enum nk_symbol_type*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_image_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_button_image_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, *(struct nk_image*)(((Instance*)pimg)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_symbol_text_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg3 = NULL;
    Utf8String *u_parg3;
    if(parg3){
        u_parg3 = env->utf8_create();
        env->jstring_2_utf8(parg3, u_parg3);
        ptr_parg3 = env->utf8_cstr(u_parg3);
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol_text_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, *(enum nk_symbol_type*)&parg2, (const char*)(ptr_parg3), *(int*)&parg4, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg3);
    return 0;
}

int org_mini_nk_NK_nk_button_symbol_label_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pstyle = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psymbol = env->localvar_getInt(runtime, pos++);
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_symbol_label_styled((struct nk_context*)pctx, (const struct nk_style_button*)pstyle, *(enum nk_symbol_type*)&psymbol, (const char*)(ptr_ptitle), *(nk_flags*)&palign);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_button_image_label_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg3 = NULL;
    Utf8String *u_parg3;
    if(parg3){
        u_parg3 = env->utf8_create();
        env->jstring_2_utf8(parg3, u_parg3);
        ptr_parg3 = env->utf8_cstr(u_parg3);
    }
    s32 ptext_alignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_image_label_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, *(struct nk_image*)(((Instance*)pimg)->arr_body), (const char*)(ptr_parg3), *(nk_flags*)&ptext_alignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg3);
    return 0;
}

int org_mini_nk_NK_nk_button_image_text_styled(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg3 = NULL;
    Utf8String *u_parg3;
    if(parg3){
        u_parg3 = env->utf8_create();
        env->jstring_2_utf8(parg3, u_parg3);
        ptr_parg3 = env->utf8_cstr(u_parg3);
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_image_text_styled((struct nk_context*)parg0, (const struct nk_style_button*)parg1, *(struct nk_image*)(((Instance*)pimg)->arr_body), (const char*)(ptr_parg3), *(int*)&parg4, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg3);
    return 0;
}

int org_mini_nk_NK_nk_button_set_behavior(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_button_set_behavior((struct nk_context*)parg0, *(enum nk_button_behavior*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_button_push_behavior(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_button_push_behavior((struct nk_context*)parg0, *(enum nk_button_behavior*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_button_pop_behavior(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_button_pop_behavior((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_check_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 pactive = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_check_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&pactive);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_check_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pactive = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_check_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(int*)&pactive);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_check_flags_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 pflags = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    unsigned _re_val = nk_check_flags_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(unsigned int*)&pflags, *(unsigned int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_check_flags_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pflags = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    unsigned _re_val = nk_check_flags_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(unsigned int*)&pflags, *(unsigned int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_checkbox_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    Instance *pactive = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pactive = NULL;
    if(pactive){
        ptr_pactive = pactive->arr_body;
    }

    int _re_val = nk_checkbox_label((struct nk_context*)parg0, (const char*)(ptr_parg1), (int*)(ptr_pactive));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_checkbox_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *pactive = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pactive = NULL;
    if(pactive){
        ptr_pactive = pactive->arr_body;
    }

    int _re_val = nk_checkbox_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, (int*)(ptr_pactive));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_checkbox_flags_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    Instance *pflags = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pflags = NULL;
    if(pflags){
        ptr_pflags = pflags->arr_body;
    }
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_checkbox_flags_label((struct nk_context*)parg0, (const char*)(ptr_parg1), (unsigned int*)(ptr_pflags), *(unsigned int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_checkbox_flags_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *pflags = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pflags = NULL;
    if(pflags){
        ptr_pflags = pflags->arr_body;
    }
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_checkbox_flags_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, (unsigned int*)(ptr_pflags), *(unsigned int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_radio_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    Instance *pactive = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pactive = NULL;
    if(pactive){
        ptr_pactive = pactive->arr_body;
    }

    int _re_val = nk_radio_label((struct nk_context*)parg0, (const char*)(ptr_parg1), (int*)(ptr_pactive));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_radio_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *pactive = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pactive = NULL;
    if(pactive){
        ptr_pactive = pactive->arr_body;
    }

    int _re_val = nk_radio_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, (int*)(ptr_pactive));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_option_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 pactive = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_option_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&pactive);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_option_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pactive = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_option_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(int*)&pactive);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_selectable_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *pvalue = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pvalue = NULL;
    if(pvalue){
        ptr_pvalue = pvalue->arr_body;
    }

    int _re_val = nk_selectable_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, (int*)(ptr_pvalue));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_selectable_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *pvalue = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pvalue = NULL;
    if(pvalue){
        ptr_pvalue = pvalue->arr_body;
    }

    int _re_val = nk_selectable_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign, (int*)(ptr_pvalue));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_selectable_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *pvalue = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pvalue = NULL;
    if(pvalue){
        ptr_pvalue = pvalue->arr_body;
    }

    int _re_val = nk_selectable_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&palign, (int*)(ptr_pvalue));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_selectable_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *pvalue = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pvalue = NULL;
    if(pvalue){
        ptr_pvalue = pvalue->arr_body;
    }

    int _re_val = nk_selectable_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palign, (int*)(ptr_pvalue));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_select_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_select_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, *(int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_select_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_select_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign, *(int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_select_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_select_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&palign, *(int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_select_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 pvalue = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_select_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palign, *(int*)&pvalue);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_slide_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Int2Float pval;pval.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);
    Int2Float pstep;pstep.i = env->localvar_getInt(runtime, pos++);

    f64 ret_value = (f64)nk_slide_float((struct nk_context*)parg0, (float)pmin.f, (float)pval.f, (float)pmax.f, (float)pstep.f);
    env->push_float(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_slide_int(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pmin = env->localvar_getInt(runtime, pos++);
    s32 pval = env->localvar_getInt(runtime, pos++);
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pstep = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_slide_int((struct nk_context*)parg0, *(int*)&pmin, *(int*)&pval, *(int*)&pmax, *(int*)&pstep);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_slider_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);
    Int2Float pstep;pstep.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_slider_float((struct nk_context*)parg0, (float)pmin.f, (float*)(ptr_pval), (float)pmax.f, (float)pstep.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_slider_int(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pmin = env->localvar_getInt(runtime, pos++);
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pstep = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_slider_int((struct nk_context*)parg0, *(int*)&pmin, (int*)(ptr_pval), *(int*)&pmax, *(int*)&pstep);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_progress(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pcur = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcur = NULL;
    if(pcur){
        ptr_pcur = pcur->arr_body;
    }
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pmodifyable = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_progress((struct nk_context*)parg0, (nk_size*)(ptr_pcur), *(nk_size*)&pmax, *(int*)&pmodifyable);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_prog(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pcur = env->localvar_getInt(runtime, pos++);
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pmodifyable = env->localvar_getInt(runtime, pos++);

    nk_size _re_val = nk_prog((struct nk_context*)parg0, *(nk_size*)&pcur, *(nk_size*)&pmax, *(int*)&pmodifyable);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_color_picker(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_color_picker((struct nk_context*)parg0, *(struct nk_color*)&parg1, *(enum nk_color_format*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_color_pick(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_color_pick((struct nk_context*)parg0, (struct nk_color*)(ptr_parg1), *(enum nk_color_format*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_property_int(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 pmin = env->localvar_getInt(runtime, pos++);
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pstep = env->localvar_getInt(runtime, pos++);
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    nk_property_int((struct nk_context*)parg0, (const char*)(ptr_pname), *(int*)&pmin, (int*)(ptr_pval), *(int*)&pmax, *(int*)&pstep, (float)pinc_per_pixel.f);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_property_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);
    Int2Float pstep;pstep.i = env->localvar_getInt(runtime, pos++);
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    nk_property_float((struct nk_context*)parg0, (const char*)(ptr_pname), (float)pmin.f, (float*)(ptr_pval), (float)pmax.f, (float)pstep.f, (float)pinc_per_pixel.f);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_property_double(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Long2Double pmin;pmin.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pval = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pval = NULL;
    if(pval){
        ptr_pval = pval->arr_body;
    }
    Long2Double pmax;pmax.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pstep;pstep.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    nk_property_double((struct nk_context*)parg0, (const char*)(ptr_pname), (double)pmin.d, (double*)(ptr_pval), (double)pmax.d, (double)pstep.d, (float)pinc_per_pixel.f);
    
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_propertyi(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    s32 pmin = env->localvar_getInt(runtime, pos++);
    s32 pval = env->localvar_getInt(runtime, pos++);
    s32 pmax = env->localvar_getInt(runtime, pos++);
    s32 pstep = env->localvar_getInt(runtime, pos++);
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_propertyi((struct nk_context*)parg0, (const char*)(ptr_pname), *(int*)&pmin, *(int*)&pval, *(int*)&pmax, *(int*)&pstep, (float)pinc_per_pixel.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_propertyf(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Int2Float pval;pval.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);
    Int2Float pstep;pstep.i = env->localvar_getInt(runtime, pos++);
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    f64 ret_value = (f64)nk_propertyf((struct nk_context*)parg0, (const char*)(ptr_pname), (float)pmin.f, (float)pval.f, (float)pmax.f, (float)pstep.f, (float)pinc_per_pixel.f);
    env->push_float(runtime->stack, ret_value);
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_propertyd(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pname = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pname = NULL;
    Utf8String *u_pname;
    if(pname){
        u_pname = env->utf8_create();
        env->jstring_2_utf8(pname, u_pname);
        ptr_pname = env->utf8_cstr(u_pname);
    }
    Long2Double pmin;pmin.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pval;pval.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pmax;pmax.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pstep;pstep.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pinc_per_pixel;pinc_per_pixel.i = env->localvar_getInt(runtime, pos++);

    f64 ret_value = (f64)nk_propertyd((struct nk_context*)parg0, (const char*)(ptr_pname), (double)pmin.d, (double)pval.d, (double)pmax.d, (double)pstep.d, (float)pinc_per_pixel.f);
    env->push_double(runtime->stack, ret_value);
    env->utf8_destory(u_pname);
    return 0;
}

int org_mini_nk_NK_nk_edit_string(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *pbuffer = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbuffer = NULL;
    Utf8String *u_pbuffer;
    if(pbuffer){
        u_pbuffer = env->utf8_create();
        env->jstring_2_utf8(pbuffer, u_pbuffer);
        ptr_pbuffer = env->utf8_cstr(u_pbuffer);
    }
    Instance *plen = env->localvar_getRefer(runtime, pos++);
    __refer ptr_plen = NULL;
    if(plen){
        ptr_plen = plen->arr_body;
    }
    s32 pmax = env->localvar_getInt(runtime, pos++);
    intptr_t parg5 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_flags _re_val = nk_edit_string((struct nk_context*)parg0, *(nk_flags*)&parg1, (char*)(ptr_pbuffer), (int*)(ptr_plen), *(int*)&pmax, *(nk_plugin_filter*)(((Instance*)parg5)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pbuffer);
    return 0;
}

int org_mini_nk_NK_nk_edit_string_zero_terminated(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *pbuffer = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbuffer = NULL;
    Utf8String *u_pbuffer;
    if(pbuffer){
        u_pbuffer = env->utf8_create();
        env->jstring_2_utf8(pbuffer, u_pbuffer);
        ptr_pbuffer = env->utf8_cstr(u_pbuffer);
    }
    s32 pmax = env->localvar_getInt(runtime, pos++);
    intptr_t parg4 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_flags _re_val = nk_edit_string_zero_terminated((struct nk_context*)parg0, *(nk_flags*)&parg1, (char*)(ptr_pbuffer), *(int*)&pmax, *(nk_plugin_filter*)(((Instance*)parg4)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pbuffer);
    return 0;
}

int org_mini_nk_NK_nk_edit_buffer(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_flags _re_val = nk_edit_buffer((struct nk_context*)parg0, *(nk_flags*)&parg1, (struct nk_text_edit*)parg2, *(nk_plugin_filter*)(((Instance*)parg3)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_edit_focus(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pflags = env->localvar_getInt(runtime, pos++);

    nk_edit_focus((struct nk_context*)parg0, *(nk_flags*)&pflags);
    
    
    return 0;
}

int org_mini_nk_NK_nk_edit_unfocus(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_edit_unfocus((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_chart_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 pnum = env->localvar_getInt(runtime, pos++);
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_chart_begin((struct nk_context*)parg0, *(enum nk_chart_type*)&parg1, *(int*)&pnum, (float)pmin.f, (float)pmax.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_chart_begin_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pactive = env->localvar_getInt(runtime, pos++);
    s32 pnum = env->localvar_getInt(runtime, pos++);
    Int2Float pmin;pmin.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax;pmax.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_chart_begin_colored((struct nk_context*)parg0, *(enum nk_chart_type*)&parg1, *(struct nk_color*)&parg2, *(struct nk_color*)&pactive, *(int*)&pnum, (float)pmin.f, (float)pmax.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_chart_add_slot(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 pcount = env->localvar_getInt(runtime, pos++);
    Int2Float pmin_value;pmin_value.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax_value;pmax_value.i = env->localvar_getInt(runtime, pos++);

    nk_chart_add_slot((struct nk_context*)pctx, *(const enum nk_chart_type*)&parg1, *(int*)&pcount, (float)pmin_value.f, (float)pmax_value.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_chart_add_slot_colored(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pctx = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 pactive = env->localvar_getInt(runtime, pos++);
    s32 pcount = env->localvar_getInt(runtime, pos++);
    Int2Float pmin_value;pmin_value.i = env->localvar_getInt(runtime, pos++);
    Int2Float pmax_value;pmax_value.i = env->localvar_getInt(runtime, pos++);

    nk_chart_add_slot_colored((struct nk_context*)pctx, *(const enum nk_chart_type*)&parg1, *(struct nk_color*)&parg2, *(struct nk_color*)&pactive, *(int*)&pcount, (float)pmin_value.f, (float)pmax_value.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_chart_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float parg1;parg1.i = env->localvar_getInt(runtime, pos++);

    nk_flags _re_val = nk_chart_push((struct nk_context*)parg0, (float)parg1.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_chart_push_slot(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float parg1;parg1.i = env->localvar_getInt(runtime, pos++);
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_flags _re_val = nk_chart_push_slot((struct nk_context*)parg0, (float)parg1.f, *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_chart_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_chart_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_plot(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *pvalues = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pvalues = NULL;
    if(pvalues){
        ptr_pvalues = pvalues->arr_body;
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 poffset = env->localvar_getInt(runtime, pos++);

    nk_plot((struct nk_context*)parg0, *(enum nk_chart_type*)&parg1, (const float*)(ptr_pvalues), *(int*)&pcount, *(int*)&poffset);
    
    
    return 0;
}

int org_mini_nk_NK_nk_plot_function(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    intptr_t puserdata = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 poffset = env->localvar_getInt(runtime, pos++);

    nk_plot_function((struct nk_context*)parg0, *(enum nk_chart_type*)&parg1, (void*)puserdata, (void*)parg3, *(int*)&pcount, *(int*)&poffset);
    
    
    return 0;
}

int org_mini_nk_NK_nk_popup_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    Instance *pbounds = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbounds = NULL;
    if(pbounds){
        ptr_pbounds = pbounds->arr_body;
    }

    int _re_val = nk_popup_begin((struct nk_context*)parg0, *(enum nk_popup_type*)&parg1, (const char*)(ptr_parg2), *(nk_flags*)&parg3, *(struct nk_rect*)(ptr_pbounds));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_popup_close(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_popup_close((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_popup_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_popup_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_combo(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_pitems = NULL;
    if(pitems){
        ptr_pitems = env->cstringarr_create(pitems);
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pselected = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo((struct nk_context*)parg0, (const char**)(ptr_pitems->arr_body), *(int*)&pcount, *(int*)&pselected, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->cstringarr_destory(ptr_pitems);
    return 0;
}

int org_mini_nk_NK_nk_combo_separator(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems_separated_by_separator = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pitems_separated_by_separator = NULL;
    Utf8String *u_pitems_separated_by_separator;
    if(pitems_separated_by_separator){
        u_pitems_separated_by_separator = env->utf8_create();
        env->jstring_2_utf8(pitems_separated_by_separator, u_pitems_separated_by_separator);
        ptr_pitems_separated_by_separator = env->utf8_cstr(u_pitems_separated_by_separator);
    }
    s32 pseparator = env->localvar_getInt(runtime, pos++);
    s32 pselected = env->localvar_getInt(runtime, pos++);
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_separator((struct nk_context*)parg0, (const char*)(ptr_pitems_separated_by_separator), *(int*)&pseparator, *(int*)&pselected, *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pitems_separated_by_separator);
    return 0;
}

int org_mini_nk_NK_nk_combo_string(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems_separated_by_zeros = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pitems_separated_by_zeros = NULL;
    Utf8String *u_pitems_separated_by_zeros;
    if(pitems_separated_by_zeros){
        u_pitems_separated_by_zeros = env->utf8_create();
        env->jstring_2_utf8(pitems_separated_by_zeros, u_pitems_separated_by_zeros);
        ptr_pitems_separated_by_zeros = env->utf8_cstr(u_pitems_separated_by_zeros);
    }
    s32 pselected = env->localvar_getInt(runtime, pos++);
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_string((struct nk_context*)parg0, (const char*)(ptr_pitems_separated_by_zeros), *(int*)&pselected, *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pitems_separated_by_zeros);
    return 0;
}

int org_mini_nk_NK_nk_combo_callback(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t puserdata = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pselected = env->localvar_getInt(runtime, pos++);
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_callback((struct nk_context*)parg0, (void*)parg1, (void*)puserdata, *(int*)&pselected, *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_combobox(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_pitems = NULL;
    if(pitems){
        ptr_pitems = env->cstringarr_create(pitems);
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    if(pselected){
        ptr_pselected = pselected->arr_body;
    }
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    nk_combobox((struct nk_context*)parg0, (const char**)(ptr_pitems->arr_body), *(int*)&pcount, (int*)(ptr_pselected), *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    
    env->cstringarr_destory(ptr_pitems);
    return 0;
}

int org_mini_nk_NK_nk_combobox_string(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems_separated_by_zeros = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pitems_separated_by_zeros = NULL;
    Utf8String *u_pitems_separated_by_zeros;
    if(pitems_separated_by_zeros){
        u_pitems_separated_by_zeros = env->utf8_create();
        env->jstring_2_utf8(pitems_separated_by_zeros, u_pitems_separated_by_zeros);
        ptr_pitems_separated_by_zeros = env->utf8_cstr(u_pitems_separated_by_zeros);
    }
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    if(pselected){
        ptr_pselected = pselected->arr_body;
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    nk_combobox_string((struct nk_context*)parg0, (const char*)(ptr_pitems_separated_by_zeros), (int*)(ptr_pselected), *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    
    env->utf8_destory(u_pitems_separated_by_zeros);
    return 0;
}

int org_mini_nk_NK_nk_combobox_separator(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pitems_separated_by_separator = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pitems_separated_by_separator = NULL;
    Utf8String *u_pitems_separated_by_separator;
    if(pitems_separated_by_separator){
        u_pitems_separated_by_separator = env->utf8_create();
        env->jstring_2_utf8(pitems_separated_by_separator, u_pitems_separated_by_separator);
        ptr_pitems_separated_by_separator = env->utf8_cstr(u_pitems_separated_by_separator);
    }
    s32 pseparator = env->localvar_getInt(runtime, pos++);
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    if(pselected){
        ptr_pselected = pselected->arr_body;
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    nk_combobox_separator((struct nk_context*)parg0, (const char*)(ptr_pitems_separated_by_separator), *(int*)&pseparator, (int*)(ptr_pselected), *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    
    env->utf8_destory(u_pitems_separated_by_separator);
    return 0;
}

int org_mini_nk_NK_nk_combobox_callback(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    if(pselected){
        ptr_pselected = pselected->arr_body;
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 pitem_height = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    nk_combobox_callback((struct nk_context*)parg0, (void*)parg1, (void*)parg2, (int*)(ptr_pselected), *(int*)&pcount, *(int*)&pitem_height, *(struct nk_vec2*)(ptr_psize));
    
    
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_text((struct nk_context*)parg0, (const char*)(ptr_pselected), *(int*)&parg2, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_label((struct nk_context*)parg0, (const char*)(ptr_pselected), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pcolor = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_color((struct nk_context*)parg0, *(struct nk_color*)&pcolor, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_symbol(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_symbol((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_symbol_label((struct nk_context*)parg0, (const char*)(ptr_pselected), *(enum nk_symbol_type*)&parg2, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_symbol_text((struct nk_context*)parg0, (const char*)(ptr_pselected), *(int*)&parg2, *(enum nk_symbol_type*)&parg3, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_image((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)pimg)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_image_label((struct nk_context*)parg0, (const char*)(ptr_pselected), *(struct nk_image*)(((Instance*)parg2)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_begin_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pselected = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pselected = NULL;
    Utf8String *u_pselected;
    if(pselected){
        u_pselected = env->utf8_create();
        env->jstring_2_utf8(pselected, u_pselected);
        ptr_pselected = env->utf8_cstr(u_pselected);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_combo_begin_image_text((struct nk_context*)parg0, (const char*)(ptr_pselected), *(int*)&parg2, *(struct nk_image*)(((Instance*)parg3)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pselected);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_symbol_label((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_combo_item_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_combo_item_symbol_text((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_combo_close(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_combo_close((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_combo_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_combo_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_contextual_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }
    Instance *ptrigger_bounds = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptrigger_bounds = NULL;
    if(ptrigger_bounds){
        ptr_ptrigger_bounds = ptrigger_bounds->arr_body;
    }

    int _re_val = nk_contextual_begin((struct nk_context*)parg0, *(nk_flags*)&parg1, *(struct nk_vec2*)(ptr_parg2), *(struct nk_rect*)(ptr_ptrigger_bounds));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(int*)&plen, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_symbol_label((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_contextual_item_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_contextual_item_symbol_text((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_contextual_close(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_contextual_close((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_contextual_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_contextual_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_tooltip(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    nk_tooltip((struct nk_context*)parg0, (const char*)(ptr_parg1));
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_tooltipf(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = env->cstringarr_create(parg2);
    }

    nk_tooltipf((struct nk_context*)parg0, (const char*)(ptr_parg1), /*todo Despair for runtime parse unlimited para*/(ptr_parg2->arr_body));
    
    env->utf8_destory(u_parg1);env->cstringarr_destory(ptr_parg2);
    return 0;
}

int org_mini_nk_NK_nk_tooltip_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pwidth;pwidth.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_tooltip_begin((struct nk_context*)parg0, (float)pwidth.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_tooltip_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_tooltip_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_menubar_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_menubar_begin((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_menubar_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_menubar_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ptitle = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptitle = NULL;
    Utf8String *u_ptitle;
    if(ptitle){
        u_ptitle = env->utf8_create();
        env->jstring_2_utf8(ptitle, u_ptitle);
        ptr_ptitle = env->utf8_cstr(u_ptitle);
    }
    s32 ptitle_len = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_text((struct nk_context*)parg0, (const char*)(ptr_ptitle), *(int*)&ptitle_len, *(nk_flags*)&palign, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptitle);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_image((struct nk_context*)parg0, (const char*)(ptr_parg1), *(struct nk_image*)(((Instance*)parg2)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    intptr_t parg4 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_image_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign, *(struct nk_image*)(((Instance*)parg4)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    intptr_t parg3 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_image_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, *(struct nk_image*)(((Instance*)parg3)->arr_body), *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_symbol(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_symbol((struct nk_context*)parg0, (const char*)(ptr_parg1), *(enum nk_symbol_type*)&parg2, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_symbol_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign, *(enum nk_symbol_type*)&parg4, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_begin_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palign = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    int _re_val = nk_menu_begin_symbol_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palign, *(enum nk_symbol_type*)&parg3, *(struct nk_vec2*)(ptr_psize));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_text((struct nk_context*)parg0, (const char*)(ptr_parg1), *(int*)&parg2, *(nk_flags*)&palign);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_label((struct nk_context*)parg0, (const char*)(ptr_parg1), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_image_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_image_label((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_image_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_image_text((struct nk_context*)parg0, *(struct nk_image*)(((Instance*)parg1)->arr_body), (const char*)(ptr_parg2), *(int*)&plen, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_symbol_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_symbol_text((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(int*)&parg3, *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_menu_item_symbol_label(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 palignment = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_menu_item_symbol_label((struct nk_context*)parg0, *(enum nk_symbol_type*)&parg1, (const char*)(ptr_parg2), *(nk_flags*)&palignment);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_menu_close(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_menu_close((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_menu_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_menu_end((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_default((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_from_table(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    nk_style_from_table((struct nk_context*)parg0, (const struct nk_color*)(ptr_parg1));
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_load_cursor(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_load_cursor((struct nk_context*)parg0, *(enum nk_style_cursor*)&parg1, (const struct nk_cursor*)parg2);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_load_all_cursors(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_load_all_cursors((struct nk_context*)parg0, (struct nk_cursor*)parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_get_color_by_name(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    c8* _cstr = (c8*)nk_style_get_color_by_name(*(enum nk_style_colors*)&parg0);
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_style_set_font(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_set_font((struct nk_context*)parg0, (const struct nk_user_font*)parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_set_cursor(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_style_set_cursor((struct nk_context*)parg0, *(enum nk_style_cursor*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_show_cursor(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_show_cursor((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_hide_cursor(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_style_hide_cursor((struct nk_context*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_font(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_push_font((struct nk_context*)parg0, (const struct nk_user_font*)parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Int2Float parg2;parg2.i = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_style_push_float((struct nk_context*)parg0, (float*)(ptr_parg1), (float)parg2.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_vec2(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    int _re_val = nk_style_push_vec2((struct nk_context*)parg0, (struct nk_vec2*)(ptr_parg1), *(struct nk_vec2*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_style_item(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_push_style_item((struct nk_context*)parg0, (struct nk_style_item*)parg1, *(struct nk_style_item*)(((Instance*)parg2)->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_flags(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_style_push_flags((struct nk_context*)parg0, (nk_flags*)(ptr_parg1), *(nk_flags*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_push_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_style_push_color((struct nk_context*)parg0, (struct nk_color*)(ptr_parg1), *(struct nk_color*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_font(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_font((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_float((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_vec2(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_vec2((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_style_item(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_style_item((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_flags(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_flags((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_pop_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_style_pop_color((struct nk_context*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 pr = env->localvar_getInt(runtime, pos++);
    s32 pg = env->localvar_getInt(runtime, pos++);
    s32 pb = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_rgb(*(int*)&pr, *(int*)&pg, *(int*)&pb);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgb = NULL;
    if(prgb){
        ptr_prgb = prgb->arr_body;
    }

    struct nk_color _re_val = nk_rgb_iv((const int*)(ptr_prgb));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgb = NULL;
    if(prgb){
        ptr_prgb = prgb->arr_body;
    }

    struct nk_color _re_val = nk_rgb_bv((const nk_byte*)(ptr_prgb));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float pr;pr.i = env->localvar_getInt(runtime, pos++);
    Int2Float pg;pg.i = env->localvar_getInt(runtime, pos++);
    Int2Float pb;pb.i = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_rgb_f((float)pr.f, (float)pg.f, (float)pb.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgb = NULL;
    if(prgb){
        ptr_prgb = prgb->arr_body;
    }

    struct nk_color _re_val = nk_rgb_fv((const float*)(ptr_prgb));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgb_hex(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgb = NULL;
    Utf8String *u_prgb;
    if(prgb){
        u_prgb = env->utf8_create();
        env->jstring_2_utf8(prgb, u_prgb);
        ptr_prgb = env->utf8_cstr(u_prgb);
    }

    struct nk_color _re_val = nk_rgb_hex((const char*)(ptr_prgb));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_prgb);
    return 0;
}

int org_mini_nk_NK_nk_rgba(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 pr = env->localvar_getInt(runtime, pos++);
    s32 pg = env->localvar_getInt(runtime, pos++);
    s32 pb = env->localvar_getInt(runtime, pos++);
    s32 pa = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_rgba(*(int*)&pr, *(int*)&pg, *(int*)&pb, *(int*)&pa);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_u32(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_rgba_u32(*(nk_uint*)&parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgba = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgba = NULL;
    if(prgba){
        ptr_prgba = prgba->arr_body;
    }

    struct nk_color _re_val = nk_rgba_iv((const int*)(ptr_prgba));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgba = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgba = NULL;
    if(prgba){
        ptr_prgba = prgba->arr_body;
    }

    struct nk_color _re_val = nk_rgba_bv((const nk_byte*)(ptr_prgba));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float pr;pr.i = env->localvar_getInt(runtime, pos++);
    Int2Float pg;pg.i = env->localvar_getInt(runtime, pos++);
    Int2Float pb;pb.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa;pa.i = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_rgba_f((float)pr.f, (float)pg.f, (float)pb.f, (float)pa.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgba = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgba = NULL;
    if(prgba){
        ptr_prgba = prgba->arr_body;
    }

    struct nk_color _re_val = nk_rgba_fv((const float*)(ptr_prgba));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_rgba_hex(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgb = NULL;
    Utf8String *u_prgb;
    if(prgb){
        u_prgb = env->utf8_create();
        env->jstring_2_utf8(prgb, u_prgb);
        ptr_prgb = env->utf8_cstr(u_prgb);
    }

    struct nk_color _re_val = nk_rgba_hex((const char*)(ptr_prgb));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_prgb);
    return 0;
}

int org_mini_nk_NK_nk_hsv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 ph = env->localvar_getInt(runtime, pos++);
    s32 ps = env->localvar_getInt(runtime, pos++);
    s32 pv = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_hsv(*(int*)&ph, *(int*)&ps, *(int*)&pv);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsv_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv = NULL;
    if(phsv){
        ptr_phsv = phsv->arr_body;
    }

    struct nk_color _re_val = nk_hsv_iv((const int*)(ptr_phsv));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsv_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv = NULL;
    if(phsv){
        ptr_phsv = phsv->arr_body;
    }

    struct nk_color _re_val = nk_hsv_bv((const nk_byte*)(ptr_phsv));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsv_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float ph;ph.i = env->localvar_getInt(runtime, pos++);
    Int2Float ps;ps.i = env->localvar_getInt(runtime, pos++);
    Int2Float pv;pv.i = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_hsv_f((float)ph.f, (float)ps.f, (float)pv.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsv_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv = NULL;
    if(phsv){
        ptr_phsv = phsv->arr_body;
    }

    struct nk_color _re_val = nk_hsv_fv((const float*)(ptr_phsv));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsva(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 ph = env->localvar_getInt(runtime, pos++);
    s32 ps = env->localvar_getInt(runtime, pos++);
    s32 pv = env->localvar_getInt(runtime, pos++);
    s32 pa = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_hsva(*(int*)&ph, *(int*)&ps, *(int*)&pv, *(int*)&pa);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsva_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva = NULL;
    if(phsva){
        ptr_phsva = phsva->arr_body;
    }

    struct nk_color _re_val = nk_hsva_iv((const int*)(ptr_phsva));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsva_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva = NULL;
    if(phsva){
        ptr_phsva = phsva->arr_body;
    }

    struct nk_color _re_val = nk_hsva_bv((const nk_byte*)(ptr_phsva));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsva_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float ph;ph.i = env->localvar_getInt(runtime, pos++);
    Int2Float ps;ps.i = env->localvar_getInt(runtime, pos++);
    Int2Float pv;pv.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa;pa.i = env->localvar_getInt(runtime, pos++);

    struct nk_color _re_val = nk_hsva_f((float)ph.f, (float)ps.f, (float)pv.f, (float)pa.f);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_hsva_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva = NULL;
    if(phsva){
        ptr_phsva = phsva->arr_body;
    }

    struct nk_color _re_val = nk_hsva_fv((const float*)(ptr_phsva));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_color_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pr = NULL;
    if(pr){
        ptr_pr = pr->arr_body;
    }
    Instance *pg = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pg = NULL;
    if(pg){
        ptr_pg = pg->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_color_f((float*)(ptr_pr), (float*)(ptr_pg), (float*)(ptr_pb), (float*)(ptr_pa), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgba_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgba_out = NULL;
    if(prgba_out){
        ptr_prgba_out = prgba_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_fv((float*)(ptr_prgba_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_d(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pr = NULL;
    if(pr){
        ptr_pr = pr->arr_body;
    }
    Instance *pg = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pg = NULL;
    if(pg){
        ptr_pg = pg->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_color_d((double*)(ptr_pr), (double*)(ptr_pg), (double*)(ptr_pb), (double*)(ptr_pa), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_dv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *prgba_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prgba_out = NULL;
    if(prgba_out){
        ptr_prgba_out = prgba_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_dv((double*)(ptr_prgba_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_u32(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    nk_uint _re_val = nk_color_u32(*(struct nk_color*)&parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_color_hex_rgba(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *poutput = env->localvar_getRefer(runtime, pos++);
    __refer ptr_poutput = NULL;
    Utf8String *u_poutput;
    if(poutput){
        u_poutput = env->utf8_create();
        env->jstring_2_utf8(poutput, u_poutput);
        ptr_poutput = env->utf8_cstr(u_poutput);
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hex_rgba((char*)(ptr_poutput), *(struct nk_color*)&parg1);
    
    env->utf8_destory(u_poutput);
    return 0;
}

int org_mini_nk_NK_nk_color_hex_rgb(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *poutput = env->localvar_getRefer(runtime, pos++);
    __refer ptr_poutput = NULL;
    Utf8String *u_poutput;
    if(poutput){
        u_poutput = env->utf8_create();
        env->jstring_2_utf8(poutput, u_poutput);
        ptr_poutput = env->utf8_cstr(u_poutput);
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hex_rgb((char*)(ptr_poutput), *(struct nk_color*)&parg1);
    
    env->utf8_destory(u_poutput);
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_i(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pout_h = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_h = NULL;
    if(pout_h){
        ptr_pout_h = pout_h->arr_body;
    }
    Instance *pout_s = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_s = NULL;
    if(pout_s){
        ptr_pout_s = pout_s->arr_body;
    }
    Instance *pout_v = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_v = NULL;
    if(pout_v){
        ptr_pout_v = pout_v->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_i((int*)(ptr_pout_h), (int*)(ptr_pout_s), (int*)(ptr_pout_v), *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_b(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pout_h = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_h = NULL;
    if(pout_h){
        ptr_pout_h = pout_h->arr_body;
    }
    Instance *pout_s = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_s = NULL;
    if(pout_s){
        ptr_pout_s = pout_s->arr_body;
    }
    Instance *pout_v = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_v = NULL;
    if(pout_v){
        ptr_pout_v = pout_v->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_b((nk_byte*)(ptr_pout_h), (nk_byte*)(ptr_pout_s), (nk_byte*)(ptr_pout_v), *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv_out = NULL;
    if(phsv_out){
        ptr_phsv_out = phsv_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_iv((int*)(ptr_phsv_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv_out = NULL;
    if(phsv_out){
        ptr_phsv_out = phsv_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_bv((nk_byte*)(ptr_phsv_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pout_h = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_h = NULL;
    if(pout_h){
        ptr_pout_h = pout_h->arr_body;
    }
    Instance *pout_s = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_s = NULL;
    if(pout_s){
        ptr_pout_s = pout_s->arr_body;
    }
    Instance *pout_v = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_v = NULL;
    if(pout_v){
        ptr_pout_v = pout_v->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_f((float*)(ptr_pout_h), (float*)(ptr_pout_s), (float*)(ptr_pout_v), *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsv_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsv_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsv_out = NULL;
    if(phsv_out){
        ptr_phsv_out = phsv_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsv_fv((float*)(ptr_phsv_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_i(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ph = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ph = NULL;
    if(ph){
        ptr_ph = ph->arr_body;
    }
    Instance *ps = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps = NULL;
    if(ps){
        ptr_ps = ps->arr_body;
    }
    Instance *pv = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pv = NULL;
    if(pv){
        ptr_pv = pv->arr_body;
    }
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_i((int*)(ptr_ph), (int*)(ptr_ps), (int*)(ptr_pv), (int*)(ptr_pa), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_b(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ph = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ph = NULL;
    if(ph){
        ptr_ph = ph->arr_body;
    }
    Instance *ps = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps = NULL;
    if(ps){
        ptr_ps = ps->arr_body;
    }
    Instance *pv = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pv = NULL;
    if(pv){
        ptr_pv = pv->arr_body;
    }
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_b((nk_byte*)(ptr_ph), (nk_byte*)(ptr_ps), (nk_byte*)(ptr_pv), (nk_byte*)(ptr_pa), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva_out = NULL;
    if(phsva_out){
        ptr_phsva_out = phsva_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_iv((int*)(ptr_phsva_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_bv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva_out = NULL;
    if(phsva_out){
        ptr_phsva_out = phsva_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_bv((nk_byte*)(ptr_phsva_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_f(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pout_h = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_h = NULL;
    if(pout_h){
        ptr_pout_h = pout_h->arr_body;
    }
    Instance *pout_s = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_s = NULL;
    if(pout_s){
        ptr_pout_s = pout_s->arr_body;
    }
    Instance *pout_v = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_v = NULL;
    if(pout_v){
        ptr_pout_v = pout_v->arr_body;
    }
    Instance *pout_a = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_a = NULL;
    if(pout_a){
        ptr_pout_a = pout_a->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_f((float*)(ptr_pout_h), (float*)(ptr_pout_s), (float*)(ptr_pout_v), (float*)(ptr_pout_a), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_color_hsva_fv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *phsva_out = env->localvar_getRefer(runtime, pos++);
    __refer ptr_phsva_out = NULL;
    if(phsva_out){
        ptr_phsva_out = phsva_out->arr_body;
    }
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_color_hsva_fv((float*)(ptr_phsva_out), *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_handle_ptr(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_handle _re_val = nk_handle_ptr((void*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_handle_id(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    nk_handle _re_val = nk_handle_id(*(int*)&parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_image_handle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_image _re_val = nk_image_handle(*(nk_handle*)(((Instance*)parg0)->arr_body));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_image_ptr(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_image _re_val = nk_image_ptr((void*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_image_id(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    struct nk_image _re_val = nk_image_id(*(int*)&parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_image_is_subimage(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_image_is_subimage((const struct nk_image*)pimg);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_subimage_ptr(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pw = env->localvar_getInt(runtime, pos++);
    s32 ph = env->localvar_getInt(runtime, pos++);
    Instance *psub_region = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psub_region = NULL;
    if(psub_region){
        ptr_psub_region = psub_region->arr_body;
    }

    struct nk_image _re_val = nk_subimage_ptr((void*)parg0, (unsigned short)pw, (unsigned short)ph, *(struct nk_rect*)(ptr_psub_region));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_subimage_id(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);
    s32 pw = env->localvar_getInt(runtime, pos++);
    s32 ph = env->localvar_getInt(runtime, pos++);
    Instance *psub_region = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psub_region = NULL;
    if(psub_region){
        ptr_psub_region = psub_region->arr_body;
    }

    struct nk_image _re_val = nk_subimage_id(*(int*)&parg0, (unsigned short)pw, (unsigned short)ph, *(struct nk_rect*)(ptr_psub_region));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_subimage_handle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pw = env->localvar_getInt(runtime, pos++);
    s32 ph = env->localvar_getInt(runtime, pos++);
    Instance *psub_region = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psub_region = NULL;
    if(psub_region){
        ptr_psub_region = psub_region->arr_body;
    }

    struct nk_image _re_val = nk_subimage_handle(*(nk_handle*)(((Instance*)parg0)->arr_body), (unsigned short)pw, (unsigned short)ph, *(struct nk_rect*)(ptr_psub_region));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_murmur_hash(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pkey = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 plen = env->localvar_getInt(runtime, pos++);
    s32 pseed = env->localvar_getInt(runtime, pos++);

    nk_hash _re_val = nk_murmur_hash((const void*)pkey, *(int*)&plen, *(nk_hash*)&pseed);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_triangle_from_direction(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *presult = env->localvar_getRefer(runtime, pos++);
    __refer ptr_presult = NULL;
    if(presult){
        ptr_presult = presult->arr_body;
    }
    Instance *pr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pr = NULL;
    if(pr){
        ptr_pr = pr->arr_body;
    }
    Int2Float ppad_x;ppad_x.i = env->localvar_getInt(runtime, pos++);
    Int2Float ppad_y;ppad_y.i = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_triangle_from_direction((struct nk_vec2*)(ptr_presult), *(struct nk_rect*)(ptr_pr), (float)ppad_x.f, (float)ppad_y.f, *(enum nk_heading*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_vec2(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float px;px.i = env->localvar_getInt(runtime, pos++);
    Int2Float py;py.i = env->localvar_getInt(runtime, pos++);

    struct nk_vec2 _re_val = nk_vec2((float)px.f, (float)py.f);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_vec2i(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 px = env->localvar_getInt(runtime, pos++);
    s32 py = env->localvar_getInt(runtime, pos++);

    struct nk_vec2 _re_val = nk_vec2i(*(int*)&px, *(int*)&py);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_vec2v(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pxy = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pxy = NULL;
    if(pxy){
        ptr_pxy = pxy->arr_body;
    }

    struct nk_vec2 _re_val = nk_vec2v((const float*)(ptr_pxy));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_vec2iv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pxy = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pxy = NULL;
    if(pxy){
        ptr_pxy = pxy->arr_body;
    }

    struct nk_vec2 _re_val = nk_vec2iv((const int*)(ptr_pxy));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_get_null_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    struct nk_rect _re_val = nk_get_null_rect();
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float px;px.i = env->localvar_getInt(runtime, pos++);
    Int2Float py;py.i = env->localvar_getInt(runtime, pos++);
    Int2Float pw;pw.i = env->localvar_getInt(runtime, pos++);
    Int2Float ph;ph.i = env->localvar_getInt(runtime, pos++);

    struct nk_rect _re_val = nk_rect((float)px.f, (float)py.f, (float)pw.f, (float)ph.f);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_recti(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 px = env->localvar_getInt(runtime, pos++);
    s32 py = env->localvar_getInt(runtime, pos++);
    s32 pw = env->localvar_getInt(runtime, pos++);
    s32 ph = env->localvar_getInt(runtime, pos++);

    struct nk_rect _re_val = nk_recti(*(int*)&px, *(int*)&py, *(int*)&pw, *(int*)&ph);
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_recta(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ppos = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppos = NULL;
    if(ppos){
        ptr_ppos = ppos->arr_body;
    }
    Instance *psize = env->localvar_getRefer(runtime, pos++);
    __refer ptr_psize = NULL;
    if(psize){
        ptr_psize = psize->arr_body;
    }

    struct nk_rect _re_val = nk_recta(*(struct nk_vec2*)(ptr_ppos), *(struct nk_vec2*)(ptr_psize));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_rectv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pxywh = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pxywh = NULL;
    if(pxywh){
        ptr_pxywh = pxywh->arr_body;
    }

    struct nk_rect _re_val = nk_rectv((const float*)(ptr_pxywh));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_rectiv(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pxywh = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pxywh = NULL;
    if(pxywh){
        ptr_pxywh = pxywh->arr_body;
    }

    struct nk_rect _re_val = nk_rectiv((const int*)(ptr_pxywh));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_rect);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_rect_pos(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    if(parg0){
        ptr_parg0 = parg0->arr_body;
    }

    struct nk_vec2 _re_val = nk_rect_pos(*(struct nk_rect*)(ptr_parg0));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_rect_size(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    if(parg0){
        ptr_parg0 = parg0->arr_body;
    }

    struct nk_vec2 _re_val = nk_rect_size(*(struct nk_rect*)(ptr_parg0));
    f32* _ptr_re_val = (f32*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_vec2);
        s32 j_t_bytes = sizeof(f32);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_FLOAT, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_strlen(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pstr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstr = NULL;
    Utf8String *u_pstr;
    if(pstr){
        u_pstr = env->utf8_create();
        env->jstring_2_utf8(pstr, u_pstr);
        ptr_pstr = env->utf8_cstr(u_pstr);
    }

    int _re_val = nk_strlen((const char*)(ptr_pstr));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pstr);
    return 0;
}

int org_mini_nk_NK_nk_stricmp(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ps1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps1 = NULL;
    Utf8String *u_ps1;
    if(ps1){
        u_ps1 = env->utf8_create();
        env->jstring_2_utf8(ps1, u_ps1);
        ptr_ps1 = env->utf8_cstr(u_ps1);
    }
    Instance *ps2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps2 = NULL;
    Utf8String *u_ps2;
    if(ps2){
        u_ps2 = env->utf8_create();
        env->jstring_2_utf8(ps2, u_ps2);
        ptr_ps2 = env->utf8_cstr(u_ps2);
    }

    int _re_val = nk_stricmp((const char*)(ptr_ps1), (const char*)(ptr_ps2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ps1);env->utf8_destory(u_ps2);
    return 0;
}

int org_mini_nk_NK_nk_stricmpn(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ps1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps1 = NULL;
    Utf8String *u_ps1;
    if(ps1){
        u_ps1 = env->utf8_create();
        env->jstring_2_utf8(ps1, u_ps1);
        ptr_ps1 = env->utf8_cstr(u_ps1);
    }
    Instance *ps2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ps2 = NULL;
    Utf8String *u_ps2;
    if(ps2){
        u_ps2 = env->utf8_create();
        env->jstring_2_utf8(ps2, u_ps2);
        ptr_ps2 = env->utf8_cstr(u_ps2);
    }
    s32 pn = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_stricmpn((const char*)(ptr_ps1), (const char*)(ptr_ps2), *(int*)&pn);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ps1);env->utf8_destory(u_ps2);
    return 0;
}

int org_mini_nk_NK_nk_strtoi(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pstr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstr = NULL;
    Utf8String *u_pstr;
    if(pstr){
        u_pstr = env->utf8_create();
        env->jstring_2_utf8(pstr, u_pstr);
        ptr_pstr = env->utf8_cstr(u_pstr);
    }
    Instance *pendptr = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_pendptr = NULL;
    if(pendptr){
        ptr_pendptr = env->cstringarr_create(pendptr);
    }

    int _re_val = nk_strtoi((const char*)(ptr_pstr), (const char**)(ptr_pendptr->arr_body));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pstr);env->cstringarr_destory(ptr_pendptr);
    return 0;
}

int org_mini_nk_NK_nk_strtof(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pstr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstr = NULL;
    Utf8String *u_pstr;
    if(pstr){
        u_pstr = env->utf8_create();
        env->jstring_2_utf8(pstr, u_pstr);
        ptr_pstr = env->utf8_cstr(u_pstr);
    }
    Instance *pendptr = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_pendptr = NULL;
    if(pendptr){
        ptr_pendptr = env->cstringarr_create(pendptr);
    }

    f64 ret_value = (f64)nk_strtof((const char*)(ptr_pstr), (const char**)(ptr_pendptr->arr_body));
    env->push_float(runtime->stack, ret_value);
    env->utf8_destory(u_pstr);env->cstringarr_destory(ptr_pendptr);
    return 0;
}

int org_mini_nk_NK_nk_strtod(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pstr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstr = NULL;
    Utf8String *u_pstr;
    if(pstr){
        u_pstr = env->utf8_create();
        env->jstring_2_utf8(pstr, u_pstr);
        ptr_pstr = env->utf8_cstr(u_pstr);
    }
    Instance *pendptr = env->localvar_getRefer(runtime, pos++);
    CStringArr *ptr_pendptr = NULL;
    if(pendptr){
        ptr_pendptr = env->cstringarr_create(pendptr);
    }

    f64 ret_value = (f64)nk_strtod((const char*)(ptr_pstr), (const char**)(ptr_pendptr->arr_body));
    env->push_double(runtime->stack, ret_value);
    env->utf8_destory(u_pstr);env->cstringarr_destory(ptr_pendptr);
    return 0;
}

int org_mini_nk_NK_nk_strfilter(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ptext = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptext = NULL;
    Utf8String *u_ptext;
    if(ptext){
        u_ptext = env->utf8_create();
        env->jstring_2_utf8(ptext, u_ptext);
        ptr_ptext = env->utf8_cstr(u_ptext);
    }
    Instance *pregexp = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pregexp = NULL;
    Utf8String *u_pregexp;
    if(pregexp){
        u_pregexp = env->utf8_create();
        env->jstring_2_utf8(pregexp, u_pregexp);
        ptr_pregexp = env->utf8_cstr(u_pregexp);
    }

    int _re_val = nk_strfilter((const char*)(ptr_ptext), (const char*)(ptr_pregexp));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptext);env->utf8_destory(u_pregexp);
    return 0;
}

int org_mini_nk_NK_nk_strmatch_fuzzy_string(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pstr = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pstr = NULL;
    Utf8String *u_pstr;
    if(pstr){
        u_pstr = env->utf8_create();
        env->jstring_2_utf8(pstr, u_pstr);
        ptr_pstr = env->utf8_cstr(u_pstr);
    }
    Instance *ppattern = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppattern = NULL;
    Utf8String *u_ppattern;
    if(ppattern){
        u_ppattern = env->utf8_create();
        env->jstring_2_utf8(ppattern, u_ppattern);
        ptr_ppattern = env->utf8_cstr(u_ppattern);
    }
    Instance *pout_score = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_score = NULL;
    if(pout_score){
        ptr_pout_score = pout_score->arr_body;
    }

    int _re_val = nk_strmatch_fuzzy_string((char const*)(ptr_pstr), (char const*)(ptr_ppattern), (int*)(ptr_pout_score));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_pstr);env->utf8_destory(u_ppattern);
    return 0;
}

int org_mini_nk_NK_nk_strmatch_fuzzy_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *ptxt = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptxt = NULL;
    Utf8String *u_ptxt;
    if(ptxt){
        u_ptxt = env->utf8_create();
        env->jstring_2_utf8(ptxt, u_ptxt);
        ptr_ptxt = env->utf8_cstr(u_ptxt);
    }
    s32 ptxt_len = env->localvar_getInt(runtime, pos++);
    Instance *ppattern = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppattern = NULL;
    Utf8String *u_ppattern;
    if(ppattern){
        u_ppattern = env->utf8_create();
        env->jstring_2_utf8(ppattern, u_ppattern);
        ptr_ppattern = env->utf8_cstr(u_ppattern);
    }
    Instance *pout_score = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pout_score = NULL;
    if(pout_score){
        ptr_pout_score = pout_score->arr_body;
    }

    int _re_val = nk_strmatch_fuzzy_text((const char*)(ptr_ptxt), *(int*)&ptxt_len, (const char*)(ptr_ppattern), (int*)(ptr_pout_score));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_ptxt);env->utf8_destory(u_ppattern);
    return 0;
}

int org_mini_nk_NK_nk_utf_decode(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    Utf8String *u_parg0;
    if(parg0){
        u_parg0 = env->utf8_create();
        env->jstring_2_utf8(parg0, u_parg0);
        ptr_parg0 = env->utf8_cstr(u_parg0);
    }
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_utf_decode((const char*)(ptr_parg0), (nk_rune*)parg1, *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg0);
    return 0;
}

int org_mini_nk_NK_nk_utf_encode(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_utf_encode(*(nk_rune*)&parg0, (char*)(ptr_parg1), *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_utf_len(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *parg0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg0 = NULL;
    Utf8String *u_parg0;
    if(parg0){
        u_parg0 = env->utf8_create();
        env->jstring_2_utf8(parg0, u_parg0);
        ptr_parg0 = env->utf8_cstr(u_parg0);
    }
    s32 pbyte_len = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_utf_len((const char*)(ptr_parg0), *(int*)&pbyte_len);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg0);
    return 0;
}

int org_mini_nk_NK_nk_utf_at(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *pbuffer = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pbuffer = NULL;
    Utf8String *u_pbuffer;
    if(pbuffer){
        u_pbuffer = env->utf8_create();
        env->jstring_2_utf8(pbuffer, u_pbuffer);
        ptr_pbuffer = env->utf8_cstr(u_pbuffer);
    }
    s32 plength = env->localvar_getInt(runtime, pos++);
    s32 pindex = env->localvar_getInt(runtime, pos++);
    intptr_t punicode = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *plen = env->localvar_getRefer(runtime, pos++);
    __refer ptr_plen = NULL;
    if(plen){
        ptr_plen = plen->arr_body;
    }

    c8* _cstr = (c8*)nk_utf_at((const char*)(ptr_pbuffer), *(int*)&plength, *(int*)&pindex, (nk_rune*)punicode, (int*)(ptr_plen));
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    env->utf8_destory(u_pbuffer);
    return 0;
}

int org_mini_nk_NK_nk_font_default_glyph_ranges(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    const nk_rune* _re_val = nk_font_default_glyph_ranges();
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_chinese_glyph_ranges(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    const nk_rune* _re_val = nk_font_chinese_glyph_ranges();
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_cyrillic_glyph_ranges(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    const nk_rune* _re_val = nk_font_cyrillic_glyph_ranges();
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_korean_glyph_ranges(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    const nk_rune* _re_val = nk_font_korean_glyph_ranges();
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_init_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_init_default((struct nk_font_atlas*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_init((struct nk_font_atlas*)parg0, (struct nk_allocator*)parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_init_custom(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t ppersistent = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t ptransient = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_init_custom((struct nk_font_atlas*)parg0, (struct nk_allocator*)ppersistent, (struct nk_allocator*)ptransient);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_begin((struct nk_font_atlas*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_config(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Int2Float ppixel_height;ppixel_height.i = env->localvar_getInt(runtime, pos++);

    struct nk_font_config _re_val = nk_font_config((float)ppixel_height.f);
    c8* _ptr_re_val = (c8*)&_re_val;
    if (_ptr_re_val) {
        s32 bytes = sizeof(struct nk_font_config);
        s32 j_t_bytes = sizeof(c8);
        Instance *_arr = env->jarray_create(bytes / j_t_bytes, DATATYPE_BYTE, NULL);
        memcpy(_arr->arr_body, _ptr_re_val,bytes);
        env->push_ref(runtime->stack, _arr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_add(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_font* _re_val = nk_font_atlas_add((struct nk_font_atlas*)parg0, (const struct nk_font_config*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_add_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_font* _re_val = nk_font_atlas_add_default((struct nk_font_atlas*)parg0, (float)pheight.f, (const struct nk_font_config*)parg2);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_add_from_memory(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t patlas = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    intptr_t pconfig = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_font* _re_val = nk_font_atlas_add_from_memory((struct nk_font_atlas*)patlas, (void*)pmemory, *(nk_size*)&psize, (float)pheight.f, (const struct nk_font_config*)pconfig);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_add_compressed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    intptr_t parg4 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_font* _re_val = nk_font_atlas_add_compressed((struct nk_font_atlas*)parg0, (void*)pmemory, *(nk_size*)&psize, (float)pheight.f, (const struct nk_font_config*)parg4);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_add_compressed_base85(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pdata = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pdata = NULL;
    Utf8String *u_pdata;
    if(pdata){
        u_pdata = env->utf8_create();
        env->jstring_2_utf8(pdata, u_pdata);
        ptr_pdata = env->utf8_cstr(u_pdata);
    }
    Int2Float pheight;pheight.i = env->localvar_getInt(runtime, pos++);
    intptr_t pconfig = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_font* _re_val = nk_font_atlas_add_compressed_base85((struct nk_font_atlas*)parg0, (const char*)(ptr_pdata), (float)pheight.f, (const struct nk_font_config*)pconfig);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    env->utf8_destory(u_pdata);
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_bake(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pwidth = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pwidth = NULL;
    if(pwidth){
        ptr_pwidth = pwidth->arr_body;
    }
    Instance *pheight = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pheight = NULL;
    if(pheight){
        ptr_pheight = pheight->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    const void* _re_val = nk_font_atlas_bake((struct nk_font_atlas*)parg0, (int*)(ptr_pwidth), (int*)(ptr_pheight), *(enum nk_font_atlas_format*)&parg3);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t ptex = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_end((struct nk_font_atlas*)parg0, *(nk_handle*)(((Instance*)ptex)->arr_body), (struct nk_draw_null_texture*)parg2);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_find_glyph(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    const struct nk_font_glyph* _re_val = nk_font_find_glyph((struct nk_font*)parg0, *(nk_rune*)&punicode);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_cleanup(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t patlas = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_cleanup((struct nk_font_atlas*)patlas);
    
    
    return 0;
}

int org_mini_nk_NK_nk_font_atlas_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_font_atlas_clear((struct nk_font_atlas*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_init_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_buffer_init_default((struct nk_buffer*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_buffer_init((struct nk_buffer*)parg0, (const struct nk_allocator*)parg1, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_init_fixed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_buffer_init_fixed((struct nk_buffer*)parg0, (void*)pmemory, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_info(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_buffer_info((struct nk_memory_status*)parg0, (struct nk_buffer*)parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_push(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ptype = env->localvar_getInt(runtime, pos++);
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);
    s32 palign = env->localvar_getInt(runtime, pos++);

    nk_buffer_push((struct nk_buffer*)parg0, *(enum nk_buffer_allocation_type*)&ptype, (const void*)pmemory, *(nk_size*)&psize, *(nk_size*)&palign);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_mark(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ptype = env->localvar_getInt(runtime, pos++);

    nk_buffer_mark((struct nk_buffer*)parg0, *(enum nk_buffer_allocation_type*)&ptype);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_reset(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ptype = env->localvar_getInt(runtime, pos++);

    nk_buffer_reset((struct nk_buffer*)parg0, *(enum nk_buffer_allocation_type*)&ptype);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_buffer_clear((struct nk_buffer*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_free(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_buffer_free((struct nk_buffer*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_memory(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    void* _re_val = nk_buffer_memory((struct nk_buffer*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_memory_const(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const void* _re_val = nk_buffer_memory_const((const struct nk_buffer*)parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_buffer_total(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_size _re_val = nk_buffer_total((struct nk_buffer*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_init_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_str_init_default((struct nk_str*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_str_init((struct nk_str*)parg0, (const struct nk_allocator*)parg1, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_init_fixed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_str_init_fixed((struct nk_str*)parg0, (void*)pmemory, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_str_clear((struct nk_str*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_free(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_str_free((struct nk_str*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_append_text_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_append_text_char((struct nk_str*)parg0, (const char*)(ptr_parg1), *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_str_append_str_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    int _re_val = nk_str_append_str_char((struct nk_str*)parg0, (const char*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_str_append_text_utf8(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_append_text_utf8((struct nk_str*)parg0, (const char*)(ptr_parg1), *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_str_append_str_utf8(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }

    int _re_val = nk_str_append_str_utf8((struct nk_str*)parg0, (const char*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_str_append_text_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_append_text_runes((struct nk_str*)parg0, (const nk_rune*)parg1, *(int*)&parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_append_str_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_str_append_str_runes((struct nk_str*)parg0, (const nk_rune*)parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_insert_at_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_insert_at_char((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2), *(int*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_at_rune(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_insert_at_rune((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2), *(int*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_text_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_insert_text_char((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2), *(int*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_str_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }

    int _re_val = nk_str_insert_str_char((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_text_utf8(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_insert_text_utf8((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2), *(int*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_str_utf8(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    Utf8String *u_parg2;
    if(parg2){
        u_parg2 = env->utf8_create();
        env->jstring_2_utf8(parg2, u_parg2);
        ptr_parg2 = env->utf8_cstr(u_parg2);
    }

    int _re_val = nk_str_insert_str_utf8((struct nk_str*)parg0, *(int*)&ppos, (const char*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg2);
    return 0;
}

int org_mini_nk_NK_nk_str_insert_text_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_str_insert_text_runes((struct nk_str*)parg0, *(int*)&ppos, (const nk_rune*)parg2, *(int*)&parg3);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_insert_str_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_str_insert_str_runes((struct nk_str*)parg0, *(int*)&ppos, (const nk_rune*)parg2);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_remove_chars(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 plen = env->localvar_getInt(runtime, pos++);

    nk_str_remove_chars((struct nk_str*)parg0, *(int*)&plen);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_remove_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pstr = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 plen = env->localvar_getInt(runtime, pos++);

    nk_str_remove_runes((struct nk_str*)pstr, *(int*)&plen);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_delete_chars(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    s32 plen = env->localvar_getInt(runtime, pos++);

    nk_str_delete_chars((struct nk_str*)parg0, *(int*)&ppos, *(int*)&plen);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_delete_runes(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    s32 plen = env->localvar_getInt(runtime, pos++);

    nk_str_delete_runes((struct nk_str*)parg0, *(int*)&ppos, *(int*)&plen);
    
    
    return 0;
}

int org_mini_nk_NK_nk_str_at_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);

    c8* _cstr = (c8*)nk_str_at_char((struct nk_str*)parg0, *(int*)&ppos);
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_at_rune(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    intptr_t punicode = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *plen = env->localvar_getRefer(runtime, pos++);
    __refer ptr_plen = NULL;
    if(plen){
        ptr_plen = plen->arr_body;
    }

    c8* _cstr = (c8*)nk_str_at_rune((struct nk_str*)parg0, *(int*)&ppos, (nk_rune*)punicode, (int*)(ptr_plen));
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_rune_at(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);

    nk_rune _re_val = nk_str_rune_at((const struct nk_str*)parg0, *(int*)&ppos);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_at_char_const(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);

    c8* _cstr = (c8*)nk_str_at_char_const((const struct nk_str*)parg0, *(int*)&ppos);
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_at_const(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 ppos = env->localvar_getInt(runtime, pos++);
    intptr_t punicode = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *plen = env->localvar_getRefer(runtime, pos++);
    __refer ptr_plen = NULL;
    if(plen){
        ptr_plen = plen->arr_body;
    }

    c8* _cstr = (c8*)nk_str_at_const((const struct nk_str*)parg0, *(int*)&ppos, (nk_rune*)punicode, (int*)(ptr_plen));
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_get(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    c8* _cstr = (c8*)nk_str_get((struct nk_str*)parg0);
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_get_const(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    c8* _cstr = (c8*)nk_str_get_const((const struct nk_str*)parg0);
    if (_cstr) {
        Instance *jstr = env->jstring_create_cstr(_cstr, runtime);
        env->push_ref(runtime->stack, jstr);
    } else {
        env->push_ref(runtime->stack, NULL);
    }
    
    return 0;
}

int org_mini_nk_NK_nk_str_len(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_str_len((struct nk_str*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_str_len_char(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_str_len_char((struct nk_str*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_default((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_ascii(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_ascii((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_float(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_float((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_decimal(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_decimal((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_hex(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_hex((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_oct(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_oct((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_filter_binary(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 punicode = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_filter_binary((const struct nk_text_edit*)parg0, *(nk_rune*)&punicode);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_init_default(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_init_default((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_textedit_init((struct nk_text_edit*)parg0, (struct nk_allocator*)parg1, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_init_fixed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pmemory = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 psize = env->localvar_getInt(runtime, pos++);

    nk_textedit_init_fixed((struct nk_text_edit*)parg0, (void*)pmemory, *(nk_size*)&psize);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_free(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_free((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 ptotal_len = env->localvar_getInt(runtime, pos++);

    nk_textedit_text((struct nk_text_edit*)parg0, (const char*)(ptr_parg1), *(int*)&ptotal_len);
    
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_textedit_delete(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pwhere = env->localvar_getInt(runtime, pos++);
    s32 plen = env->localvar_getInt(runtime, pos++);

    nk_textedit_delete((struct nk_text_edit*)parg0, *(int*)&pwhere, *(int*)&plen);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_delete_selection(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_delete_selection((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_select_all(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_select_all((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_cut(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    int _re_val = nk_textedit_cut((struct nk_text_edit*)parg0);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_paste(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    Utf8String *u_parg1;
    if(parg1){
        u_parg1 = env->utf8_create();
        env->jstring_2_utf8(parg1, u_parg1);
        ptr_parg1 = env->utf8_cstr(u_parg1);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_textedit_paste((struct nk_text_edit*)parg0, (char const*)(ptr_parg1), *(int*)&plen);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    env->utf8_destory(u_parg1);
    return 0;
}

int org_mini_nk_NK_nk_textedit_undo(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_undo((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_textedit_redo(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_textedit_redo((struct nk_text_edit*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_line(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pb = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float px0;px0.i = env->localvar_getInt(runtime, pos++);
    Int2Float py0;py0.i = env->localvar_getInt(runtime, pos++);
    Int2Float px1;px1.i = env->localvar_getInt(runtime, pos++);
    Int2Float py1;py1.i = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg6 = env->localvar_getInt(runtime, pos++);

    nk_stroke_line((struct nk_command_buffer*)pb, (float)px0.f, (float)py0.f, (float)px1.f, (float)py1.f, (float)pline_thickness.f, *(struct nk_color*)&parg6);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_curve(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float parg1;parg1.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg2;parg2.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg3;parg3.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg4;parg4.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg5;parg5.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg6;parg6.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg7;parg7.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg8;parg8.i = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg10 = env->localvar_getInt(runtime, pos++);

    nk_stroke_curve((struct nk_command_buffer*)parg0, (float)parg1.f, (float)parg2.f, (float)parg3.f, (float)parg4.f, (float)parg5.f, (float)parg6.f, (float)parg7.f, (float)parg8.f, (float)pline_thickness.f, *(struct nk_color*)&parg10);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Int2Float prounding;prounding.i = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_stroke_rect((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), (float)prounding.f, (float)pline_thickness.f, *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_circle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_stroke_circle((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), (float)pline_thickness.f, *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_arc(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pcx;pcx.i = env->localvar_getInt(runtime, pos++);
    Int2Float pcy;pcy.i = env->localvar_getInt(runtime, pos++);
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_min;pa_min.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_max;pa_max.i = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg7 = env->localvar_getInt(runtime, pos++);

    nk_stroke_arc((struct nk_command_buffer*)parg0, (float)pcx.f, (float)pcy.f, (float)pradius.f, (float)pa_min.f, (float)pa_max.f, (float)pline_thickness.f, *(struct nk_color*)&parg7);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_triangle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float parg1;parg1.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg2;parg2.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg3;parg3.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg4;parg4.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg5;parg5.i = env->localvar_getInt(runtime, pos++);
    Int2Float parg6;parg6.i = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thichness;pline_thichness.i = env->localvar_getInt(runtime, pos++);
    s32 parg8 = env->localvar_getInt(runtime, pos++);

    nk_stroke_triangle((struct nk_command_buffer*)parg0, (float)parg1.f, (float)parg2.f, (float)parg3.f, (float)parg4.f, (float)parg5.f, (float)parg6.f, (float)pline_thichness.f, *(struct nk_color*)&parg8);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_polyline(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ppoints = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppoints = NULL;
    if(ppoints){
        ptr_ppoints = ppoints->arr_body;
    }
    s32 ppoint_count = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 pcol = env->localvar_getInt(runtime, pos++);

    nk_stroke_polyline((struct nk_command_buffer*)parg0, (float*)(ptr_ppoints), *(int*)&ppoint_count, (float)pline_thickness.f, *(struct nk_color*)&pcol);
    
    
    return 0;
}

int org_mini_nk_NK_nk_stroke_polygon(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 ppoint_count = env->localvar_getInt(runtime, pos++);
    Int2Float pline_thickness;pline_thickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_stroke_polygon((struct nk_command_buffer*)parg0, (float*)(ptr_parg1), *(int*)&ppoint_count, (float)pline_thickness.f, *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Int2Float prounding;prounding.i = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_fill_rect((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), (float)prounding.f, *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_rect_multi_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 pleft = env->localvar_getInt(runtime, pos++);
    s32 ptop = env->localvar_getInt(runtime, pos++);
    s32 pright = env->localvar_getInt(runtime, pos++);
    s32 pbottom = env->localvar_getInt(runtime, pos++);

    nk_fill_rect_multi_color((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), *(struct nk_color*)&pleft, *(struct nk_color*)&ptop, *(struct nk_color*)&pright, *(struct nk_color*)&pbottom);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_circle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);

    nk_fill_circle((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), *(struct nk_color*)&parg2);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_arc(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float pcx;pcx.i = env->localvar_getInt(runtime, pos++);
    Int2Float pcy;pcy.i = env->localvar_getInt(runtime, pos++);
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_min;pa_min.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_max;pa_max.i = env->localvar_getInt(runtime, pos++);
    s32 parg6 = env->localvar_getInt(runtime, pos++);

    nk_fill_arc((struct nk_command_buffer*)parg0, (float)pcx.f, (float)pcy.f, (float)pradius.f, (float)pa_min.f, (float)pa_max.f, *(struct nk_color*)&parg6);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_triangle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Int2Float px0;px0.i = env->localvar_getInt(runtime, pos++);
    Int2Float py0;py0.i = env->localvar_getInt(runtime, pos++);
    Int2Float px1;px1.i = env->localvar_getInt(runtime, pos++);
    Int2Float py1;py1.i = env->localvar_getInt(runtime, pos++);
    Int2Float px2;px2.i = env->localvar_getInt(runtime, pos++);
    Int2Float py2;py2.i = env->localvar_getInt(runtime, pos++);
    s32 parg7 = env->localvar_getInt(runtime, pos++);

    nk_fill_triangle((struct nk_command_buffer*)parg0, (float)px0.f, (float)py0.f, (float)px1.f, (float)py1.f, (float)px2.f, (float)py2.f, *(struct nk_color*)&parg7);
    
    
    return 0;
}

int org_mini_nk_NK_nk_fill_polygon(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    s32 ppoint_count = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_fill_polygon((struct nk_command_buffer*)parg0, (float*)(ptr_parg1), *(int*)&ppoint_count, *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_draw_image((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), (const struct nk_image*)parg2, *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    Instance *ptext = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptext = NULL;
    Utf8String *u_ptext;
    if(ptext){
        u_ptext = env->utf8_create();
        env->jstring_2_utf8(ptext, u_ptext);
        ptr_ptext = env->utf8_cstr(u_ptext);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    intptr_t parg4 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg5 = env->localvar_getInt(runtime, pos++);
    s32 parg6 = env->localvar_getInt(runtime, pos++);

    nk_draw_text((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), (const char*)(ptr_ptext), *(int*)&plen, (const struct nk_user_font*)parg4, *(struct nk_color*)&parg5, *(struct nk_color*)&parg6);
    
    env->utf8_destory(u_ptext);
    return 0;
}

int org_mini_nk_NK_nk_push_scissor(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    nk_push_scissor((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1));
    
    
    return 0;
}

int org_mini_nk_NK_nk_push_custom(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pusr = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_push_custom((struct nk_command_buffer*)parg0, *(struct nk_rect*)(ptr_parg1), *(nk_command_custom_callback*)(((Instance*)parg2)->arr_body), *(nk_handle*)(((Instance*)pusr)->arr_body));
    
    
    return 0;
}

int org_mini_nk_NK_nk_input_has_mouse_click(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_has_mouse_click((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_has_mouse_click_in_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    int _re_val = nk_input_has_mouse_click_in_rect((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1, *(struct nk_rect*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_has_mouse_click_down_in_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }
    s32 pdown = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_has_mouse_click_down_in_rect((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1, *(struct nk_rect*)(ptr_parg2), *(int*)&pdown);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_click_in_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    int _re_val = nk_input_is_mouse_click_in_rect((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1, *(struct nk_rect*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_click_down_in_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pi = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pid = env->localvar_getInt(runtime, pos++);
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    s32 pdown = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_mouse_click_down_in_rect((const struct nk_input*)pi, *(enum nk_buttons*)&pid, *(struct nk_rect*)(ptr_pb), *(int*)&pdown);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_any_mouse_click_in_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    int _re_val = nk_input_any_mouse_click_in_rect((const struct nk_input*)parg0, *(struct nk_rect*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_prev_hovering_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    int _re_val = nk_input_is_mouse_prev_hovering_rect((const struct nk_input*)parg0, *(struct nk_rect*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_hovering_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg1 = NULL;
    if(parg1){
        ptr_parg1 = parg1->arr_body;
    }

    int _re_val = nk_input_is_mouse_hovering_rect((const struct nk_input*)parg0, *(struct nk_rect*)(ptr_parg1));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_mouse_clicked(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }

    int _re_val = nk_input_mouse_clicked((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1, *(struct nk_rect*)(ptr_parg2));
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_down(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_mouse_down((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_pressed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_mouse_pressed((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_mouse_released(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_mouse_released((const struct nk_input*)parg0, *(enum nk_buttons*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_key_pressed(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_key_pressed((const struct nk_input*)parg0, *(enum nk_keys*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_key_released(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_key_released((const struct nk_input*)parg0, *(enum nk_keys*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_input_is_key_down(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    int _re_val = nk_input_is_key_down((const struct nk_input*)parg0, *(enum nk_keys*)&parg1);
    s32 ret_value = *((s32*)&_re_val);env->push_int(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_draw_list_init((struct nk_draw_list*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_setup(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pcmds = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pvertices = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t pelements = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pline_aa = env->localvar_getInt(runtime, pos++);
    s32 pshape_aa = env->localvar_getInt(runtime, pos++);

    nk_draw_list_setup((struct nk_draw_list*)parg0, (const struct nk_convert_config*)parg1, (struct nk_buffer*)pcmds, (struct nk_buffer*)pvertices, (struct nk_buffer*)pelements, *(enum nk_anti_aliasing*)&pline_aa, *(enum nk_anti_aliasing*)&pshape_aa);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_draw_list_clear((struct nk_draw_list*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk__draw_list_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_list_begin((const struct nk_draw_list*)parg0, (const struct nk_buffer*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__draw_list_next(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg2 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_list_next((const struct nk_draw_command*)parg0, (const struct nk_buffer*)parg1, (const struct nk_draw_list*)parg2);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk__draw_list_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    const struct nk_draw_command* _re_val = nk__draw_list_end((const struct nk_draw_list*)parg0, (const struct nk_buffer*)parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_clear(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_draw_list_path_clear((struct nk_draw_list*)parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_line_to(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ppos = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppos = NULL;
    if(ppos){
        ptr_ppos = ppos->arr_body;
    }

    nk_draw_list_path_line_to((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_ppos));
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_arc_to_fast(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pcenter = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcenter = NULL;
    if(pcenter){
        ptr_pcenter = pcenter->arr_body;
    }
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    s32 pa_min = env->localvar_getInt(runtime, pos++);
    s32 pa_max = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_arc_to_fast((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pcenter), (float)pradius.f, *(int*)&pa_min, *(int*)&pa_max);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_arc_to(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pcenter = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcenter = NULL;
    if(pcenter){
        ptr_pcenter = pcenter->arr_body;
    }
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_min;pa_min.i = env->localvar_getInt(runtime, pos++);
    Int2Float pa_max;pa_max.i = env->localvar_getInt(runtime, pos++);
    s32 psegments = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_arc_to((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pcenter), (float)pradius.f, (float)pa_min.f, (float)pa_max.f, *(unsigned int*)&psegments);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_rect_to(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    Int2Float prounding;prounding.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_rect_to((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pa), *(struct nk_vec2*)(ptr_pb), (float)prounding.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_curve_to(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pp2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pp2 = NULL;
    if(pp2){
        ptr_pp2 = pp2->arr_body;
    }
    Instance *pp3 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pp3 = NULL;
    if(pp3){
        ptr_pp3 = pp3->arr_body;
    }
    Instance *pp4 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pp4 = NULL;
    if(pp4){
        ptr_pp4 = pp4->arr_body;
    }
    s32 pnum_segments = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_curve_to((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pp2), *(struct nk_vec2*)(ptr_pp3), *(struct nk_vec2*)(ptr_pp4), *(unsigned int*)&pnum_segments);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_fill(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_fill((struct nk_draw_list*)parg0, *(struct nk_color*)&parg1);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_path_stroke(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);
    s32 pclosed = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_path_stroke((struct nk_draw_list*)parg0, *(struct nk_color*)&parg1, *(enum nk_draw_list_stroke*)&pclosed, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_line(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_line((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pa), *(struct nk_vec2*)(ptr_pb), *(struct nk_color*)&parg3, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *prect = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prect = NULL;
    if(prect){
        ptr_prect = prect->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Int2Float prounding;prounding.i = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_rect((struct nk_draw_list*)parg0, *(struct nk_rect*)(ptr_prect), *(struct nk_color*)&parg2, (float)prounding.f, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_triangle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    Instance *pc = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pc = NULL;
    if(pc){
        ptr_pc = pc->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_triangle((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pa), *(struct nk_vec2*)(ptr_pb), *(struct nk_vec2*)(ptr_pc), *(struct nk_color*)&parg4, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_circle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pcenter = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcenter = NULL;
    if(pcenter){
        ptr_pcenter = pcenter->arr_body;
    }
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 psegs = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_circle((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pcenter), (float)pradius.f, *(struct nk_color*)&parg3, *(unsigned int*)&psegs, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_curve(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pp0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pp0 = NULL;
    if(pp0){
        ptr_pp0 = pp0->arr_body;
    }
    Instance *pcp0 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcp0 = NULL;
    if(pcp0){
        ptr_pcp0 = pcp0->arr_body;
    }
    Instance *pcp1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcp1 = NULL;
    if(pcp1){
        ptr_pcp1 = pcp1->arr_body;
    }
    Instance *pp1 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pp1 = NULL;
    if(pp1){
        ptr_pp1 = pp1->arr_body;
    }
    s32 parg5 = env->localvar_getInt(runtime, pos++);
    s32 psegments = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_curve((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pp0), *(struct nk_vec2*)(ptr_pcp0), *(struct nk_vec2*)(ptr_pcp1), *(struct nk_vec2*)(ptr_pp1), *(struct nk_color*)&parg5, *(unsigned int*)&psegments, (float)pthickness.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_stroke_poly_line(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ppnts = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppnts = NULL;
    if(ppnts){
        ptr_ppnts = ppnts->arr_body;
    }
    s32 pcnt = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);
    Int2Float pthickness;pthickness.i = env->localvar_getInt(runtime, pos++);
    s32 parg6 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_stroke_poly_line((struct nk_draw_list*)parg0, (const struct nk_vec2*)(ptr_ppnts), *(const unsigned int*)&pcnt, *(struct nk_color*)&parg3, *(enum nk_draw_list_stroke*)&parg4, (float)pthickness.f, *(enum nk_anti_aliasing*)&parg6);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_fill_rect(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *prect = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prect = NULL;
    if(prect){
        ptr_prect = prect->arr_body;
    }
    s32 parg2 = env->localvar_getInt(runtime, pos++);
    Int2Float prounding;prounding.i = env->localvar_getInt(runtime, pos++);

    nk_draw_list_fill_rect((struct nk_draw_list*)parg0, *(struct nk_rect*)(ptr_prect), *(struct nk_color*)&parg2, (float)prounding.f);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_fill_rect_multi_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *prect = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prect = NULL;
    if(prect){
        ptr_prect = prect->arr_body;
    }
    s32 pleft = env->localvar_getInt(runtime, pos++);
    s32 ptop = env->localvar_getInt(runtime, pos++);
    s32 pright = env->localvar_getInt(runtime, pos++);
    s32 pbottom = env->localvar_getInt(runtime, pos++);

    nk_draw_list_fill_rect_multi_color((struct nk_draw_list*)parg0, *(struct nk_rect*)(ptr_prect), *(struct nk_color*)&pleft, *(struct nk_color*)&ptop, *(struct nk_color*)&pright, *(struct nk_color*)&pbottom);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_fill_triangle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pa = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pa = NULL;
    if(pa){
        ptr_pa = pa->arr_body;
    }
    Instance *pb = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pb = NULL;
    if(pb){
        ptr_pb = pb->arr_body;
    }
    Instance *pc = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pc = NULL;
    if(pc){
        ptr_pc = pc->arr_body;
    }
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_fill_triangle((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pa), *(struct nk_vec2*)(ptr_pb), *(struct nk_vec2*)(ptr_pc), *(struct nk_color*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_fill_circle(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *pcenter = env->localvar_getRefer(runtime, pos++);
    __refer ptr_pcenter = NULL;
    if(pcenter){
        ptr_pcenter = pcenter->arr_body;
    }
    Int2Float pradius;pradius.i = env->localvar_getInt(runtime, pos++);
    s32 pcol = env->localvar_getInt(runtime, pos++);
    s32 psegs = env->localvar_getInt(runtime, pos++);

    nk_draw_list_fill_circle((struct nk_draw_list*)parg0, *(struct nk_vec2*)(ptr_pcenter), (float)pradius.f, *(struct nk_color*)&pcol, *(unsigned int*)&psegs);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_fill_poly_convex(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *ppoints = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ppoints = NULL;
    if(ppoints){
        ptr_ppoints = ppoints->arr_body;
    }
    s32 pcount = env->localvar_getInt(runtime, pos++);
    s32 parg3 = env->localvar_getInt(runtime, pos++);
    s32 parg4 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_fill_poly_convex((struct nk_draw_list*)parg0, (const struct nk_vec2*)(ptr_ppoints), *(const unsigned int*)&pcount, *(struct nk_color*)&parg3, *(enum nk_anti_aliasing*)&parg4);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_add_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t ptexture = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *prect = env->localvar_getRefer(runtime, pos++);
    __refer ptr_prect = NULL;
    if(prect){
        ptr_prect = prect->arr_body;
    }
    s32 parg3 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_add_image((struct nk_draw_list*)parg0, *(struct nk_image*)(((Instance*)ptexture)->arr_body), *(struct nk_rect*)(ptr_prect), *(struct nk_color*)&parg3);
    
    
    return 0;
}

int org_mini_nk_NK_nk_draw_list_add_text(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t parg0 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    intptr_t parg1 = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Instance *parg2 = env->localvar_getRefer(runtime, pos++);
    __refer ptr_parg2 = NULL;
    if(parg2){
        ptr_parg2 = parg2->arr_body;
    }
    Instance *ptext = env->localvar_getRefer(runtime, pos++);
    __refer ptr_ptext = NULL;
    Utf8String *u_ptext;
    if(ptext){
        u_ptext = env->utf8_create();
        env->jstring_2_utf8(ptext, u_ptext);
        ptr_ptext = env->utf8_cstr(u_ptext);
    }
    s32 plen = env->localvar_getInt(runtime, pos++);
    Int2Float pfont_height;pfont_height.i = env->localvar_getInt(runtime, pos++);
    s32 parg6 = env->localvar_getInt(runtime, pos++);

    nk_draw_list_add_text((struct nk_draw_list*)parg0, (const struct nk_user_font*)parg1, *(struct nk_rect*)(ptr_parg2), (const char*)(ptr_ptext), *(int*)&plen, (float)pfont_height.f, *(struct nk_color*)&parg6);
    
    env->utf8_destory(u_ptext);
    return 0;
}

int org_mini_nk_NK_nk_style_item_image(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pimg = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    struct nk_style_item _re_val = nk_style_item_image(*(struct nk_image*)(((Instance*)pimg)->arr_body));
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_item_color(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    struct nk_style_item _re_val = nk_style_item_color(*(struct nk_color*)&parg0);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_style_item_hide(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    struct nk_style_item _re_val = nk_style_item_hide();
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_init(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pwin = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 parg1 = env->localvar_getInt(runtime, pos++);

    struct nk_context* _re_val = nk_glfw3_init((GLFWwindow*)pwin, *(enum nk_glfw_init_state*)&parg1);
    s64 ret_value = *((s64*)&_re_val);env->push_long(runtime->stack, ret_value);
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_font_stash_begin(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    Instance *patlas = env->localvar_getRefer(runtime, pos++);
    __refer ptr_patlas = NULL;
    if(patlas){
        ptr_patlas = patlas->arr_body;
    }

    nk_glfw3_font_stash_begin((struct nk_font_atlas**)(ptr_patlas));
    
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_font_stash_end(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    nk_glfw3_font_stash_end();
    
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_new_frame(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    nk_glfw3_new_frame();
    
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_render(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    s32 parg0 = env->localvar_getInt(runtime, pos++);

    nk_glfw3_render(*(enum nk_anti_aliasing*)&parg0);
    
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_shutdown(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    

    nk_glfw3_shutdown();
    
    
    return 0;
}

int org_mini_nk_NK_nk_glfw3_char_callback(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pwin = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    s32 pcodepoint = env->localvar_getInt(runtime, pos++);

    nk_glfw3_char_callback((GLFWwindow*)pwin, *(unsigned int*)&pcodepoint);
    
    
    return 0;
}

int org_mini_nk_NK_nk_gflw3_scroll_callback(Runtime *runtime, Class *clazz) {
    JniEnv *env = runtime->jnienv;
    s32 pos = 0;
    
    intptr_t pwin = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pxoff;pxoff.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;
    Long2Double pyoff;pyoff.l = env->localvar_getLong_2slot(runtime, pos);pos += 2;

    nk_gflw3_scroll_callback((GLFWwindow*)pwin, (double)pxoff.d, (double)pyoff.d);
    
    
    return 0;
}




static java_native_method method_nkclear_table[] = {

{"org/mini/nk/NK",  "nk_init_default",  "(JJ)I",  org_mini_nk_NK_nk_init_default},
{"org/mini/nk/NK",  "nk_init_fixed",  "(JJIJ)I",  org_mini_nk_NK_nk_init_fixed},
{"org/mini/nk/NK",  "nk_init",  "(JJJ)I",  org_mini_nk_NK_nk_init},
{"org/mini/nk/NK",  "nk_init_custom",  "(JJJJ)I",  org_mini_nk_NK_nk_init_custom},
{"org/mini/nk/NK",  "nk_clear",  "(J)V",  org_mini_nk_NK_nk_clear},
{"org/mini/nk/NK",  "nk_free",  "(J)V",  org_mini_nk_NK_nk_free},
{"org/mini/nk/NK",  "nk_input_begin",  "(J)V",  org_mini_nk_NK_nk_input_begin},
{"org/mini/nk/NK",  "nk_input_motion",  "(JII)V",  org_mini_nk_NK_nk_input_motion},
{"org/mini/nk/NK",  "nk_input_key",  "(JII)V",  org_mini_nk_NK_nk_input_key},
{"org/mini/nk/NK",  "nk_input_button",  "(JIIII)V",  org_mini_nk_NK_nk_input_button},
{"org/mini/nk/NK",  "nk_input_scroll",  "(J[F)V",  org_mini_nk_NK_nk_input_scroll},
{"org/mini/nk/NK",  "nk_input_char",  "(JB)V",  org_mini_nk_NK_nk_input_char},
{"org/mini/nk/NK",  "nk_input_glyph",  "(JI)V",  org_mini_nk_NK_nk_input_glyph},
{"org/mini/nk/NK",  "nk_input_unicode",  "(JI)V",  org_mini_nk_NK_nk_input_unicode},
{"org/mini/nk/NK",  "nk_input_end",  "(J)V",  org_mini_nk_NK_nk_input_end},
{"org/mini/nk/NK",  "nk__begin",  "(J)J",  org_mini_nk_NK_nk__begin},
{"org/mini/nk/NK",  "nk__next",  "(JJ)J",  org_mini_nk_NK_nk__next},
{"org/mini/nk/NK",  "nk_convert",  "(JJJJJ)I",  org_mini_nk_NK_nk_convert},
{"org/mini/nk/NK",  "nk__draw_begin",  "(JJ)J",  org_mini_nk_NK_nk__draw_begin},
{"org/mini/nk/NK",  "nk__draw_end",  "(JJ)J",  org_mini_nk_NK_nk__draw_end},
{"org/mini/nk/NK",  "nk__draw_next",  "(JJJ)J",  org_mini_nk_NK_nk__draw_next},
{"org/mini/nk/NK",  "nk_begin",  "(JLjava/lang/String;[FI)I",  org_mini_nk_NK_nk_begin},
{"org/mini/nk/NK",  "nk_begin_titled",  "(JLjava/lang/String;Ljava/lang/String;[FI)I",  org_mini_nk_NK_nk_begin_titled},
{"org/mini/nk/NK",  "nk_end",  "(J)V",  org_mini_nk_NK_nk_end},
{"org/mini/nk/NK",  "nk_window_find",  "(JLjava/lang/String;)J",  org_mini_nk_NK_nk_window_find},
{"org/mini/nk/NK",  "nk_window_get_bounds",  "(J)[F",  org_mini_nk_NK_nk_window_get_bounds},
{"org/mini/nk/NK",  "nk_window_get_position",  "(J)[F",  org_mini_nk_NK_nk_window_get_position},
{"org/mini/nk/NK",  "nk_window_get_size",  "(J)[F",  org_mini_nk_NK_nk_window_get_size},
{"org/mini/nk/NK",  "nk_window_get_width",  "(J)D",  org_mini_nk_NK_nk_window_get_width},
{"org/mini/nk/NK",  "nk_window_get_height",  "(J)D",  org_mini_nk_NK_nk_window_get_height},
{"org/mini/nk/NK",  "nk_window_get_panel",  "(J)J",  org_mini_nk_NK_nk_window_get_panel},
{"org/mini/nk/NK",  "nk_window_get_content_region",  "(J)[F",  org_mini_nk_NK_nk_window_get_content_region},
{"org/mini/nk/NK",  "nk_window_get_content_region_min",  "(J)[F",  org_mini_nk_NK_nk_window_get_content_region_min},
{"org/mini/nk/NK",  "nk_window_get_content_region_max",  "(J)[F",  org_mini_nk_NK_nk_window_get_content_region_max},
{"org/mini/nk/NK",  "nk_window_get_content_region_size",  "(J)[F",  org_mini_nk_NK_nk_window_get_content_region_size},
{"org/mini/nk/NK",  "nk_window_get_canvas",  "(J)J",  org_mini_nk_NK_nk_window_get_canvas},
{"org/mini/nk/NK",  "nk_window_has_focus",  "(J)I",  org_mini_nk_NK_nk_window_has_focus},
{"org/mini/nk/NK",  "nk_window_is_collapsed",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_window_is_collapsed},
{"org/mini/nk/NK",  "nk_window_is_closed",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_window_is_closed},
{"org/mini/nk/NK",  "nk_window_is_hidden",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_window_is_hidden},
{"org/mini/nk/NK",  "nk_window_is_active",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_window_is_active},
{"org/mini/nk/NK",  "nk_window_is_hovered",  "(J)I",  org_mini_nk_NK_nk_window_is_hovered},
{"org/mini/nk/NK",  "nk_window_is_any_hovered",  "(J)I",  org_mini_nk_NK_nk_window_is_any_hovered},
{"org/mini/nk/NK",  "nk_item_is_any_active",  "(J)I",  org_mini_nk_NK_nk_item_is_any_active},
{"org/mini/nk/NK",  "nk_window_set_bounds",  "(JLjava/lang/String;[F)V",  org_mini_nk_NK_nk_window_set_bounds},
{"org/mini/nk/NK",  "nk_window_set_position",  "(JLjava/lang/String;[F)V",  org_mini_nk_NK_nk_window_set_position},
{"org/mini/nk/NK",  "nk_window_set_size",  "(JLjava/lang/String;[F)V",  org_mini_nk_NK_nk_window_set_size},
{"org/mini/nk/NK",  "nk_window_set_focus",  "(JLjava/lang/String;)V",  org_mini_nk_NK_nk_window_set_focus},
{"org/mini/nk/NK",  "nk_window_close",  "(JLjava/lang/String;)V",  org_mini_nk_NK_nk_window_close},
{"org/mini/nk/NK",  "nk_window_collapse",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_window_collapse},
{"org/mini/nk/NK",  "nk_window_collapse_if",  "(JLjava/lang/String;II)V",  org_mini_nk_NK_nk_window_collapse_if},
{"org/mini/nk/NK",  "nk_window_show",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_window_show},
{"org/mini/nk/NK",  "nk_window_show_if",  "(JLjava/lang/String;II)V",  org_mini_nk_NK_nk_window_show_if},
{"org/mini/nk/NK",  "nk_layout_set_min_row_height",  "(JF)V",  org_mini_nk_NK_nk_layout_set_min_row_height},
{"org/mini/nk/NK",  "nk_layout_reset_min_row_height",  "(J)V",  org_mini_nk_NK_nk_layout_reset_min_row_height},
{"org/mini/nk/NK",  "nk_layout_widget_bounds",  "(J)[F",  org_mini_nk_NK_nk_layout_widget_bounds},
{"org/mini/nk/NK",  "nk_layout_ratio_from_pixel",  "(JF)D",  org_mini_nk_NK_nk_layout_ratio_from_pixel},
{"org/mini/nk/NK",  "nk_layout_row_dynamic",  "(JFI)V",  org_mini_nk_NK_nk_layout_row_dynamic},
{"org/mini/nk/NK",  "nk_layout_row_static",  "(JFII)V",  org_mini_nk_NK_nk_layout_row_static},
{"org/mini/nk/NK",  "nk_layout_row_begin",  "(JIFI)V",  org_mini_nk_NK_nk_layout_row_begin},
{"org/mini/nk/NK",  "nk_layout_row_push",  "(JF)V",  org_mini_nk_NK_nk_layout_row_push},
{"org/mini/nk/NK",  "nk_layout_row_end",  "(J)V",  org_mini_nk_NK_nk_layout_row_end},
{"org/mini/nk/NK",  "nk_layout_row",  "(JIFI[F)V",  org_mini_nk_NK_nk_layout_row},
{"org/mini/nk/NK",  "nk_layout_row_template_begin",  "(JF)V",  org_mini_nk_NK_nk_layout_row_template_begin},
{"org/mini/nk/NK",  "nk_layout_row_template_push_dynamic",  "(J)V",  org_mini_nk_NK_nk_layout_row_template_push_dynamic},
{"org/mini/nk/NK",  "nk_layout_row_template_push_variable",  "(JF)V",  org_mini_nk_NK_nk_layout_row_template_push_variable},
{"org/mini/nk/NK",  "nk_layout_row_template_push_static",  "(JF)V",  org_mini_nk_NK_nk_layout_row_template_push_static},
{"org/mini/nk/NK",  "nk_layout_row_template_end",  "(J)V",  org_mini_nk_NK_nk_layout_row_template_end},
{"org/mini/nk/NK",  "nk_layout_space_begin",  "(JIFI)V",  org_mini_nk_NK_nk_layout_space_begin},
{"org/mini/nk/NK",  "nk_layout_space_push",  "(J[F)V",  org_mini_nk_NK_nk_layout_space_push},
{"org/mini/nk/NK",  "nk_layout_space_end",  "(J)V",  org_mini_nk_NK_nk_layout_space_end},
{"org/mini/nk/NK",  "nk_layout_space_bounds",  "(J)[F",  org_mini_nk_NK_nk_layout_space_bounds},
{"org/mini/nk/NK",  "nk_layout_space_to_screen",  "(J[F)[F",  org_mini_nk_NK_nk_layout_space_to_screen},
{"org/mini/nk/NK",  "nk_layout_space_to_local",  "(J[F)[F",  org_mini_nk_NK_nk_layout_space_to_local},
{"org/mini/nk/NK",  "nk_layout_space_rect_to_screen",  "(J[F)[F",  org_mini_nk_NK_nk_layout_space_rect_to_screen},
{"org/mini/nk/NK",  "nk_layout_space_rect_to_local",  "(J[F)[F",  org_mini_nk_NK_nk_layout_space_rect_to_local},
{"org/mini/nk/NK",  "nk_group_begin",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_group_begin},
{"org/mini/nk/NK",  "nk_group_scrolled_offset_begin",  "(J[I[ILjava/lang/String;I)I",  org_mini_nk_NK_nk_group_scrolled_offset_begin},
{"org/mini/nk/NK",  "nk_group_scrolled_begin",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_group_scrolled_begin},
{"org/mini/nk/NK",  "nk_group_scrolled_end",  "(J)V",  org_mini_nk_NK_nk_group_scrolled_end},
{"org/mini/nk/NK",  "nk_group_end",  "(J)V",  org_mini_nk_NK_nk_group_end},
{"org/mini/nk/NK",  "nk_list_view_begin",  "(JJLjava/lang/String;III)I",  org_mini_nk_NK_nk_list_view_begin},
{"org/mini/nk/NK",  "nk_list_view_end",  "(J)V",  org_mini_nk_NK_nk_list_view_end},
{"org/mini/nk/NK",  "nk_tree_push_hashed",  "(JILjava/lang/String;ILjava/lang/String;II)I",  org_mini_nk_NK_nk_tree_push_hashed},
{"org/mini/nk/NK",  "nk_tree_image_push_hashed",  "(JIJLjava/lang/String;ILjava/lang/String;II)I",  org_mini_nk_NK_nk_tree_image_push_hashed},
{"org/mini/nk/NK",  "nk_tree_pop",  "(J)V",  org_mini_nk_NK_nk_tree_pop},
{"org/mini/nk/NK",  "nk_tree_state_push",  "(JILjava/lang/String;[I)I",  org_mini_nk_NK_nk_tree_state_push},
{"org/mini/nk/NK",  "nk_tree_state_image_push",  "(JIJLjava/lang/String;[I)I",  org_mini_nk_NK_nk_tree_state_image_push},
{"org/mini/nk/NK",  "nk_tree_state_pop",  "(J)V",  org_mini_nk_NK_nk_tree_state_pop},
{"org/mini/nk/NK",  "nk_widget",  "([FJ)I",  org_mini_nk_NK_nk_widget},
{"org/mini/nk/NK",  "nk_widget_fitting",  "([FJ[F)I",  org_mini_nk_NK_nk_widget_fitting},
{"org/mini/nk/NK",  "nk_widget_bounds",  "(J)[F",  org_mini_nk_NK_nk_widget_bounds},
{"org/mini/nk/NK",  "nk_widget_position",  "(J)[F",  org_mini_nk_NK_nk_widget_position},
{"org/mini/nk/NK",  "nk_widget_size",  "(J)[F",  org_mini_nk_NK_nk_widget_size},
{"org/mini/nk/NK",  "nk_widget_width",  "(J)D",  org_mini_nk_NK_nk_widget_width},
{"org/mini/nk/NK",  "nk_widget_height",  "(J)D",  org_mini_nk_NK_nk_widget_height},
{"org/mini/nk/NK",  "nk_widget_is_hovered",  "(J)I",  org_mini_nk_NK_nk_widget_is_hovered},
{"org/mini/nk/NK",  "nk_widget_is_mouse_clicked",  "(JI)I",  org_mini_nk_NK_nk_widget_is_mouse_clicked},
{"org/mini/nk/NK",  "nk_widget_has_mouse_click_down",  "(JII)I",  org_mini_nk_NK_nk_widget_has_mouse_click_down},
{"org/mini/nk/NK",  "nk_spacing",  "(JI)V",  org_mini_nk_NK_nk_spacing},
{"org/mini/nk/NK",  "nk_text",  "(JLjava/lang/String;II)V",  org_mini_nk_NK_nk_text},
{"org/mini/nk/NK",  "nk_text_colored",  "(JLjava/lang/String;III)V",  org_mini_nk_NK_nk_text_colored},
{"org/mini/nk/NK",  "nk_text_wrap",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_text_wrap},
{"org/mini/nk/NK",  "nk_text_wrap_colored",  "(JLjava/lang/String;II)V",  org_mini_nk_NK_nk_text_wrap_colored},
{"org/mini/nk/NK",  "nk_label",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_label},
{"org/mini/nk/NK",  "nk_label_colored",  "(JLjava/lang/String;II)V",  org_mini_nk_NK_nk_label_colored},
{"org/mini/nk/NK",  "nk_label_wrap",  "(JLjava/lang/String;)V",  org_mini_nk_NK_nk_label_wrap},
{"org/mini/nk/NK",  "nk_label_colored_wrap",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_label_colored_wrap},
{"org/mini/nk/NK",  "nk_image",  "(JJ)V",  org_mini_nk_NK_nk_image},
{"org/mini/nk/NK",  "nk_labelf",  "(JILjava/lang/String;[Ljava/lang/String;)V",  org_mini_nk_NK_nk_labelf},
{"org/mini/nk/NK",  "nk_labelf_colored",  "(JIILjava/lang/String;[Ljava/lang/String;)V",  org_mini_nk_NK_nk_labelf_colored},
{"org/mini/nk/NK",  "nk_labelf_wrap",  "(JLjava/lang/String;[Ljava/lang/String;)V",  org_mini_nk_NK_nk_labelf_wrap},
{"org/mini/nk/NK",  "nk_labelf_colored_wrap",  "(JILjava/lang/String;[Ljava/lang/String;)V",  org_mini_nk_NK_nk_labelf_colored_wrap},
{"org/mini/nk/NK",  "nk_value_bool",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_bool},
{"org/mini/nk/NK",  "nk_value_int",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_int},
{"org/mini/nk/NK",  "nk_value_uint",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_uint},
{"org/mini/nk/NK",  "nk_value_float",  "(JLjava/lang/String;F)V",  org_mini_nk_NK_nk_value_float},
{"org/mini/nk/NK",  "nk_value_color_byte",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_color_byte},
{"org/mini/nk/NK",  "nk_value_color_float",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_color_float},
{"org/mini/nk/NK",  "nk_value_color_hex",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_value_color_hex},
{"org/mini/nk/NK",  "nk_button_text",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_button_text},
{"org/mini/nk/NK",  "nk_button_label",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_button_label},
{"org/mini/nk/NK",  "nk_button_color",  "(JI)I",  org_mini_nk_NK_nk_button_color},
{"org/mini/nk/NK",  "nk_button_symbol",  "(JI)I",  org_mini_nk_NK_nk_button_symbol},
{"org/mini/nk/NK",  "nk_button_image",  "(JJ)I",  org_mini_nk_NK_nk_button_image},
{"org/mini/nk/NK",  "nk_button_symbol_label",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_button_symbol_label},
{"org/mini/nk/NK",  "nk_button_symbol_text",  "(JILjava/lang/String;II)I",  org_mini_nk_NK_nk_button_symbol_text},
{"org/mini/nk/NK",  "nk_button_image_label",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_button_image_label},
{"org/mini/nk/NK",  "nk_button_image_text",  "(JJLjava/lang/String;II)I",  org_mini_nk_NK_nk_button_image_text},
{"org/mini/nk/NK",  "nk_button_text_styled",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_button_text_styled},
{"org/mini/nk/NK",  "nk_button_label_styled",  "(JJLjava/lang/String;)I",  org_mini_nk_NK_nk_button_label_styled},
{"org/mini/nk/NK",  "nk_button_symbol_styled",  "(JJI)I",  org_mini_nk_NK_nk_button_symbol_styled},
{"org/mini/nk/NK",  "nk_button_image_styled",  "(JJJ)I",  org_mini_nk_NK_nk_button_image_styled},
{"org/mini/nk/NK",  "nk_button_symbol_text_styled",  "(JJILjava/lang/String;II)I",  org_mini_nk_NK_nk_button_symbol_text_styled},
{"org/mini/nk/NK",  "nk_button_symbol_label_styled",  "(JJILjava/lang/String;I)I",  org_mini_nk_NK_nk_button_symbol_label_styled},
{"org/mini/nk/NK",  "nk_button_image_label_styled",  "(JJJLjava/lang/String;I)I",  org_mini_nk_NK_nk_button_image_label_styled},
{"org/mini/nk/NK",  "nk_button_image_text_styled",  "(JJJLjava/lang/String;II)I",  org_mini_nk_NK_nk_button_image_text_styled},
{"org/mini/nk/NK",  "nk_button_set_behavior",  "(JI)V",  org_mini_nk_NK_nk_button_set_behavior},
{"org/mini/nk/NK",  "nk_button_push_behavior",  "(JI)I",  org_mini_nk_NK_nk_button_push_behavior},
{"org/mini/nk/NK",  "nk_button_pop_behavior",  "(J)I",  org_mini_nk_NK_nk_button_pop_behavior},
{"org/mini/nk/NK",  "nk_check_label",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_check_label},
{"org/mini/nk/NK",  "nk_check_text",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_check_text},
{"org/mini/nk/NK",  "nk_check_flags_label",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_check_flags_label},
{"org/mini/nk/NK",  "nk_check_flags_text",  "(JLjava/lang/String;III)I",  org_mini_nk_NK_nk_check_flags_text},
{"org/mini/nk/NK",  "nk_checkbox_label",  "(JLjava/lang/String;[I)I",  org_mini_nk_NK_nk_checkbox_label},
{"org/mini/nk/NK",  "nk_checkbox_text",  "(JLjava/lang/String;I[I)I",  org_mini_nk_NK_nk_checkbox_text},
{"org/mini/nk/NK",  "nk_checkbox_flags_label",  "(JLjava/lang/String;[II)I",  org_mini_nk_NK_nk_checkbox_flags_label},
{"org/mini/nk/NK",  "nk_checkbox_flags_text",  "(JLjava/lang/String;I[II)I",  org_mini_nk_NK_nk_checkbox_flags_text},
{"org/mini/nk/NK",  "nk_radio_label",  "(JLjava/lang/String;[I)I",  org_mini_nk_NK_nk_radio_label},
{"org/mini/nk/NK",  "nk_radio_text",  "(JLjava/lang/String;I[I)I",  org_mini_nk_NK_nk_radio_text},
{"org/mini/nk/NK",  "nk_option_label",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_option_label},
{"org/mini/nk/NK",  "nk_option_text",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_option_text},
{"org/mini/nk/NK",  "nk_selectable_label",  "(JLjava/lang/String;I[I)I",  org_mini_nk_NK_nk_selectable_label},
{"org/mini/nk/NK",  "nk_selectable_text",  "(JLjava/lang/String;II[I)I",  org_mini_nk_NK_nk_selectable_text},
{"org/mini/nk/NK",  "nk_selectable_image_label",  "(JJLjava/lang/String;I[I)I",  org_mini_nk_NK_nk_selectable_image_label},
{"org/mini/nk/NK",  "nk_selectable_image_text",  "(JJLjava/lang/String;II[I)I",  org_mini_nk_NK_nk_selectable_image_text},
{"org/mini/nk/NK",  "nk_select_label",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_select_label},
{"org/mini/nk/NK",  "nk_select_text",  "(JLjava/lang/String;III)I",  org_mini_nk_NK_nk_select_text},
{"org/mini/nk/NK",  "nk_select_image_label",  "(JJLjava/lang/String;II)I",  org_mini_nk_NK_nk_select_image_label},
{"org/mini/nk/NK",  "nk_select_image_text",  "(JJLjava/lang/String;III)I",  org_mini_nk_NK_nk_select_image_text},
{"org/mini/nk/NK",  "nk_slide_float",  "(JFFFF)D",  org_mini_nk_NK_nk_slide_float},
{"org/mini/nk/NK",  "nk_slide_int",  "(JIIII)I",  org_mini_nk_NK_nk_slide_int},
{"org/mini/nk/NK",  "nk_slider_float",  "(JF[FFF)I",  org_mini_nk_NK_nk_slider_float},
{"org/mini/nk/NK",  "nk_slider_int",  "(JI[III)I",  org_mini_nk_NK_nk_slider_int},
{"org/mini/nk/NK",  "nk_progress",  "(J[III)I",  org_mini_nk_NK_nk_progress},
{"org/mini/nk/NK",  "nk_prog",  "(JIII)I",  org_mini_nk_NK_nk_prog},
{"org/mini/nk/NK",  "nk_color_picker",  "(JII)I",  org_mini_nk_NK_nk_color_picker},
{"org/mini/nk/NK",  "nk_color_pick",  "(J[II)I",  org_mini_nk_NK_nk_color_pick},
{"org/mini/nk/NK",  "nk_property_int",  "(JLjava/lang/String;I[IIIF)V",  org_mini_nk_NK_nk_property_int},
{"org/mini/nk/NK",  "nk_property_float",  "(JLjava/lang/String;F[FFFF)V",  org_mini_nk_NK_nk_property_float},
{"org/mini/nk/NK",  "nk_property_double",  "(JLjava/lang/String;D[DDDF)V",  org_mini_nk_NK_nk_property_double},
{"org/mini/nk/NK",  "nk_propertyi",  "(JLjava/lang/String;IIIIF)I",  org_mini_nk_NK_nk_propertyi},
{"org/mini/nk/NK",  "nk_propertyf",  "(JLjava/lang/String;FFFFF)D",  org_mini_nk_NK_nk_propertyf},
{"org/mini/nk/NK",  "nk_propertyd",  "(JLjava/lang/String;DDDDF)F",  org_mini_nk_NK_nk_propertyd},
{"org/mini/nk/NK",  "nk_edit_string",  "(JILjava/lang/String;[IIJ)I",  org_mini_nk_NK_nk_edit_string},
{"org/mini/nk/NK",  "nk_edit_string_zero_terminated",  "(JILjava/lang/String;IJ)I",  org_mini_nk_NK_nk_edit_string_zero_terminated},
{"org/mini/nk/NK",  "nk_edit_buffer",  "(JIJJ)I",  org_mini_nk_NK_nk_edit_buffer},
{"org/mini/nk/NK",  "nk_edit_focus",  "(JI)V",  org_mini_nk_NK_nk_edit_focus},
{"org/mini/nk/NK",  "nk_edit_unfocus",  "(J)V",  org_mini_nk_NK_nk_edit_unfocus},
{"org/mini/nk/NK",  "nk_chart_begin",  "(JIIFF)I",  org_mini_nk_NK_nk_chart_begin},
{"org/mini/nk/NK",  "nk_chart_begin_colored",  "(JIIIIFF)I",  org_mini_nk_NK_nk_chart_begin_colored},
{"org/mini/nk/NK",  "nk_chart_add_slot",  "(JIIFF)V",  org_mini_nk_NK_nk_chart_add_slot},
{"org/mini/nk/NK",  "nk_chart_add_slot_colored",  "(JIIIIFF)V",  org_mini_nk_NK_nk_chart_add_slot_colored},
{"org/mini/nk/NK",  "nk_chart_push",  "(JF)I",  org_mini_nk_NK_nk_chart_push},
{"org/mini/nk/NK",  "nk_chart_push_slot",  "(JFI)I",  org_mini_nk_NK_nk_chart_push_slot},
{"org/mini/nk/NK",  "nk_chart_end",  "(J)V",  org_mini_nk_NK_nk_chart_end},
{"org/mini/nk/NK",  "nk_plot",  "(JI[FII)V",  org_mini_nk_NK_nk_plot},
{"org/mini/nk/NK",  "nk_plot_function",  "(JIJJII)V",  org_mini_nk_NK_nk_plot_function},
{"org/mini/nk/NK",  "nk_popup_begin",  "(JILjava/lang/String;I[F)I",  org_mini_nk_NK_nk_popup_begin},
{"org/mini/nk/NK",  "nk_popup_close",  "(J)V",  org_mini_nk_NK_nk_popup_close},
{"org/mini/nk/NK",  "nk_popup_end",  "(J)V",  org_mini_nk_NK_nk_popup_end},
{"org/mini/nk/NK",  "nk_combo",  "(J[Ljava/lang/String;III[F)I",  org_mini_nk_NK_nk_combo},
{"org/mini/nk/NK",  "nk_combo_separator",  "(JLjava/lang/String;IIII[F)I",  org_mini_nk_NK_nk_combo_separator},
{"org/mini/nk/NK",  "nk_combo_string",  "(JLjava/lang/String;III[F)I",  org_mini_nk_NK_nk_combo_string},
{"org/mini/nk/NK",  "nk_combo_callback",  "(JJJIII[F)I",  org_mini_nk_NK_nk_combo_callback},
{"org/mini/nk/NK",  "nk_combobox",  "(J[Ljava/lang/String;I[II[F)V",  org_mini_nk_NK_nk_combobox},
{"org/mini/nk/NK",  "nk_combobox_string",  "(JLjava/lang/String;[III[F)V",  org_mini_nk_NK_nk_combobox_string},
{"org/mini/nk/NK",  "nk_combobox_separator",  "(JLjava/lang/String;I[III[F)V",  org_mini_nk_NK_nk_combobox_separator},
{"org/mini/nk/NK",  "nk_combobox_callback",  "(JJJ[III[F)V",  org_mini_nk_NK_nk_combobox_callback},
{"org/mini/nk/NK",  "nk_combo_begin_text",  "(JLjava/lang/String;I[F)I",  org_mini_nk_NK_nk_combo_begin_text},
{"org/mini/nk/NK",  "nk_combo_begin_label",  "(JLjava/lang/String;[F)I",  org_mini_nk_NK_nk_combo_begin_label},
{"org/mini/nk/NK",  "nk_combo_begin_color",  "(JI[F)I",  org_mini_nk_NK_nk_combo_begin_color},
{"org/mini/nk/NK",  "nk_combo_begin_symbol",  "(JI[F)I",  org_mini_nk_NK_nk_combo_begin_symbol},
{"org/mini/nk/NK",  "nk_combo_begin_symbol_label",  "(JLjava/lang/String;I[F)I",  org_mini_nk_NK_nk_combo_begin_symbol_label},
{"org/mini/nk/NK",  "nk_combo_begin_symbol_text",  "(JLjava/lang/String;II[F)I",  org_mini_nk_NK_nk_combo_begin_symbol_text},
{"org/mini/nk/NK",  "nk_combo_begin_image",  "(JJ[F)I",  org_mini_nk_NK_nk_combo_begin_image},
{"org/mini/nk/NK",  "nk_combo_begin_image_label",  "(JLjava/lang/String;J[F)I",  org_mini_nk_NK_nk_combo_begin_image_label},
{"org/mini/nk/NK",  "nk_combo_begin_image_text",  "(JLjava/lang/String;IJ[F)I",  org_mini_nk_NK_nk_combo_begin_image_text},
{"org/mini/nk/NK",  "nk_combo_item_label",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_combo_item_label},
{"org/mini/nk/NK",  "nk_combo_item_text",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_combo_item_text},
{"org/mini/nk/NK",  "nk_combo_item_image_label",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_combo_item_image_label},
{"org/mini/nk/NK",  "nk_combo_item_image_text",  "(JJLjava/lang/String;II)I",  org_mini_nk_NK_nk_combo_item_image_text},
{"org/mini/nk/NK",  "nk_combo_item_symbol_label",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_combo_item_symbol_label},
{"org/mini/nk/NK",  "nk_combo_item_symbol_text",  "(JILjava/lang/String;II)I",  org_mini_nk_NK_nk_combo_item_symbol_text},
{"org/mini/nk/NK",  "nk_combo_close",  "(J)V",  org_mini_nk_NK_nk_combo_close},
{"org/mini/nk/NK",  "nk_combo_end",  "(J)V",  org_mini_nk_NK_nk_combo_end},
{"org/mini/nk/NK",  "nk_contextual_begin",  "(JI[F[F)I",  org_mini_nk_NK_nk_contextual_begin},
{"org/mini/nk/NK",  "nk_contextual_item_text",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_contextual_item_text},
{"org/mini/nk/NK",  "nk_contextual_item_label",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_contextual_item_label},
{"org/mini/nk/NK",  "nk_contextual_item_image_label",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_contextual_item_image_label},
{"org/mini/nk/NK",  "nk_contextual_item_image_text",  "(JJLjava/lang/String;II)I",  org_mini_nk_NK_nk_contextual_item_image_text},
{"org/mini/nk/NK",  "nk_contextual_item_symbol_label",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_contextual_item_symbol_label},
{"org/mini/nk/NK",  "nk_contextual_item_symbol_text",  "(JILjava/lang/String;II)I",  org_mini_nk_NK_nk_contextual_item_symbol_text},
{"org/mini/nk/NK",  "nk_contextual_close",  "(J)V",  org_mini_nk_NK_nk_contextual_close},
{"org/mini/nk/NK",  "nk_contextual_end",  "(J)V",  org_mini_nk_NK_nk_contextual_end},
{"org/mini/nk/NK",  "nk_tooltip",  "(JLjava/lang/String;)V",  org_mini_nk_NK_nk_tooltip},
{"org/mini/nk/NK",  "nk_tooltipf",  "(JLjava/lang/String;[Ljava/lang/String;)V",  org_mini_nk_NK_nk_tooltipf},
{"org/mini/nk/NK",  "nk_tooltip_begin",  "(JF)I",  org_mini_nk_NK_nk_tooltip_begin},
{"org/mini/nk/NK",  "nk_tooltip_end",  "(J)V",  org_mini_nk_NK_nk_tooltip_end},
{"org/mini/nk/NK",  "nk_menubar_begin",  "(J)V",  org_mini_nk_NK_nk_menubar_begin},
{"org/mini/nk/NK",  "nk_menubar_end",  "(J)V",  org_mini_nk_NK_nk_menubar_end},
{"org/mini/nk/NK",  "nk_menu_begin_text",  "(JLjava/lang/String;II[F)I",  org_mini_nk_NK_nk_menu_begin_text},
{"org/mini/nk/NK",  "nk_menu_begin_label",  "(JLjava/lang/String;I[F)I",  org_mini_nk_NK_nk_menu_begin_label},
{"org/mini/nk/NK",  "nk_menu_begin_image",  "(JLjava/lang/String;J[F)I",  org_mini_nk_NK_nk_menu_begin_image},
{"org/mini/nk/NK",  "nk_menu_begin_image_text",  "(JLjava/lang/String;IIJ[F)I",  org_mini_nk_NK_nk_menu_begin_image_text},
{"org/mini/nk/NK",  "nk_menu_begin_image_label",  "(JLjava/lang/String;IJ[F)I",  org_mini_nk_NK_nk_menu_begin_image_label},
{"org/mini/nk/NK",  "nk_menu_begin_symbol",  "(JLjava/lang/String;I[F)I",  org_mini_nk_NK_nk_menu_begin_symbol},
{"org/mini/nk/NK",  "nk_menu_begin_symbol_text",  "(JLjava/lang/String;III[F)I",  org_mini_nk_NK_nk_menu_begin_symbol_text},
{"org/mini/nk/NK",  "nk_menu_begin_symbol_label",  "(JLjava/lang/String;II[F)I",  org_mini_nk_NK_nk_menu_begin_symbol_label},
{"org/mini/nk/NK",  "nk_menu_item_text",  "(JLjava/lang/String;II)I",  org_mini_nk_NK_nk_menu_item_text},
{"org/mini/nk/NK",  "nk_menu_item_label",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_menu_item_label},
{"org/mini/nk/NK",  "nk_menu_item_image_label",  "(JJLjava/lang/String;I)I",  org_mini_nk_NK_nk_menu_item_image_label},
{"org/mini/nk/NK",  "nk_menu_item_image_text",  "(JJLjava/lang/String;II)I",  org_mini_nk_NK_nk_menu_item_image_text},
{"org/mini/nk/NK",  "nk_menu_item_symbol_text",  "(JILjava/lang/String;II)I",  org_mini_nk_NK_nk_menu_item_symbol_text},
{"org/mini/nk/NK",  "nk_menu_item_symbol_label",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_menu_item_symbol_label},
{"org/mini/nk/NK",  "nk_menu_close",  "(J)V",  org_mini_nk_NK_nk_menu_close},
{"org/mini/nk/NK",  "nk_menu_end",  "(J)V",  org_mini_nk_NK_nk_menu_end},
{"org/mini/nk/NK",  "nk_style_default",  "(J)V",  org_mini_nk_NK_nk_style_default},
{"org/mini/nk/NK",  "nk_style_from_table",  "(J[I)V",  org_mini_nk_NK_nk_style_from_table},
{"org/mini/nk/NK",  "nk_style_load_cursor",  "(JIJ)V",  org_mini_nk_NK_nk_style_load_cursor},
{"org/mini/nk/NK",  "nk_style_load_all_cursors",  "(JJ)V",  org_mini_nk_NK_nk_style_load_all_cursors},
{"org/mini/nk/NK",  "nk_style_get_color_by_name",  "(I)Ljava/lang/String;",  org_mini_nk_NK_nk_style_get_color_by_name},
{"org/mini/nk/NK",  "nk_style_set_font",  "(JJ)V",  org_mini_nk_NK_nk_style_set_font},
{"org/mini/nk/NK",  "nk_style_set_cursor",  "(JI)I",  org_mini_nk_NK_nk_style_set_cursor},
{"org/mini/nk/NK",  "nk_style_show_cursor",  "(J)V",  org_mini_nk_NK_nk_style_show_cursor},
{"org/mini/nk/NK",  "nk_style_hide_cursor",  "(J)V",  org_mini_nk_NK_nk_style_hide_cursor},
{"org/mini/nk/NK",  "nk_style_push_font",  "(JJ)I",  org_mini_nk_NK_nk_style_push_font},
{"org/mini/nk/NK",  "nk_style_push_float",  "(J[FF)I",  org_mini_nk_NK_nk_style_push_float},
{"org/mini/nk/NK",  "nk_style_push_vec2",  "(J[F[F)I",  org_mini_nk_NK_nk_style_push_vec2},
{"org/mini/nk/NK",  "nk_style_push_style_item",  "(JJJ)I",  org_mini_nk_NK_nk_style_push_style_item},
{"org/mini/nk/NK",  "nk_style_push_flags",  "(J[II)I",  org_mini_nk_NK_nk_style_push_flags},
{"org/mini/nk/NK",  "nk_style_push_color",  "(J[II)I",  org_mini_nk_NK_nk_style_push_color},
{"org/mini/nk/NK",  "nk_style_pop_font",  "(J)I",  org_mini_nk_NK_nk_style_pop_font},
{"org/mini/nk/NK",  "nk_style_pop_float",  "(J)I",  org_mini_nk_NK_nk_style_pop_float},
{"org/mini/nk/NK",  "nk_style_pop_vec2",  "(J)I",  org_mini_nk_NK_nk_style_pop_vec2},
{"org/mini/nk/NK",  "nk_style_pop_style_item",  "(J)I",  org_mini_nk_NK_nk_style_pop_style_item},
{"org/mini/nk/NK",  "nk_style_pop_flags",  "(J)I",  org_mini_nk_NK_nk_style_pop_flags},
{"org/mini/nk/NK",  "nk_style_pop_color",  "(J)I",  org_mini_nk_NK_nk_style_pop_color},
{"org/mini/nk/NK",  "nk_rgb",  "(III)I",  org_mini_nk_NK_nk_rgb},
{"org/mini/nk/NK",  "nk_rgb_iv",  "([I)I",  org_mini_nk_NK_nk_rgb_iv},
{"org/mini/nk/NK",  "nk_rgb_bv",  "([B)I",  org_mini_nk_NK_nk_rgb_bv},
{"org/mini/nk/NK",  "nk_rgb_f",  "(FFF)I",  org_mini_nk_NK_nk_rgb_f},
{"org/mini/nk/NK",  "nk_rgb_fv",  "([F)I",  org_mini_nk_NK_nk_rgb_fv},
{"org/mini/nk/NK",  "nk_rgb_hex",  "(Ljava/lang/String;)I",  org_mini_nk_NK_nk_rgb_hex},
{"org/mini/nk/NK",  "nk_rgba",  "(IIII)I",  org_mini_nk_NK_nk_rgba},
{"org/mini/nk/NK",  "nk_rgba_u32",  "(I)I",  org_mini_nk_NK_nk_rgba_u32},
{"org/mini/nk/NK",  "nk_rgba_iv",  "([I)I",  org_mini_nk_NK_nk_rgba_iv},
{"org/mini/nk/NK",  "nk_rgba_bv",  "([B)I",  org_mini_nk_NK_nk_rgba_bv},
{"org/mini/nk/NK",  "nk_rgba_f",  "(FFFF)I",  org_mini_nk_NK_nk_rgba_f},
{"org/mini/nk/NK",  "nk_rgba_fv",  "([F)I",  org_mini_nk_NK_nk_rgba_fv},
{"org/mini/nk/NK",  "nk_rgba_hex",  "(Ljava/lang/String;)I",  org_mini_nk_NK_nk_rgba_hex},
{"org/mini/nk/NK",  "nk_hsv",  "(III)I",  org_mini_nk_NK_nk_hsv},
{"org/mini/nk/NK",  "nk_hsv_iv",  "([I)I",  org_mini_nk_NK_nk_hsv_iv},
{"org/mini/nk/NK",  "nk_hsv_bv",  "([B)I",  org_mini_nk_NK_nk_hsv_bv},
{"org/mini/nk/NK",  "nk_hsv_f",  "(FFF)I",  org_mini_nk_NK_nk_hsv_f},
{"org/mini/nk/NK",  "nk_hsv_fv",  "([F)I",  org_mini_nk_NK_nk_hsv_fv},
{"org/mini/nk/NK",  "nk_hsva",  "(IIII)I",  org_mini_nk_NK_nk_hsva},
{"org/mini/nk/NK",  "nk_hsva_iv",  "([I)I",  org_mini_nk_NK_nk_hsva_iv},
{"org/mini/nk/NK",  "nk_hsva_bv",  "([B)I",  org_mini_nk_NK_nk_hsva_bv},
{"org/mini/nk/NK",  "nk_hsva_f",  "(FFFF)I",  org_mini_nk_NK_nk_hsva_f},
{"org/mini/nk/NK",  "nk_hsva_fv",  "([F)I",  org_mini_nk_NK_nk_hsva_fv},
{"org/mini/nk/NK",  "nk_color_f",  "([F[F[F[FI)V",  org_mini_nk_NK_nk_color_f},
{"org/mini/nk/NK",  "nk_color_fv",  "([FI)V",  org_mini_nk_NK_nk_color_fv},
{"org/mini/nk/NK",  "nk_color_d",  "([D[D[D[DI)V",  org_mini_nk_NK_nk_color_d},
{"org/mini/nk/NK",  "nk_color_dv",  "([DI)V",  org_mini_nk_NK_nk_color_dv},
{"org/mini/nk/NK",  "nk_color_u32",  "(I)I",  org_mini_nk_NK_nk_color_u32},
{"org/mini/nk/NK",  "nk_color_hex_rgba",  "(Ljava/lang/String;I)V",  org_mini_nk_NK_nk_color_hex_rgba},
{"org/mini/nk/NK",  "nk_color_hex_rgb",  "(Ljava/lang/String;I)V",  org_mini_nk_NK_nk_color_hex_rgb},
{"org/mini/nk/NK",  "nk_color_hsv_i",  "([I[I[II)V",  org_mini_nk_NK_nk_color_hsv_i},
{"org/mini/nk/NK",  "nk_color_hsv_b",  "([B[B[BI)V",  org_mini_nk_NK_nk_color_hsv_b},
{"org/mini/nk/NK",  "nk_color_hsv_iv",  "([II)V",  org_mini_nk_NK_nk_color_hsv_iv},
{"org/mini/nk/NK",  "nk_color_hsv_bv",  "([BI)V",  org_mini_nk_NK_nk_color_hsv_bv},
{"org/mini/nk/NK",  "nk_color_hsv_f",  "([F[F[FI)V",  org_mini_nk_NK_nk_color_hsv_f},
{"org/mini/nk/NK",  "nk_color_hsv_fv",  "([FI)V",  org_mini_nk_NK_nk_color_hsv_fv},
{"org/mini/nk/NK",  "nk_color_hsva_i",  "([I[I[I[II)V",  org_mini_nk_NK_nk_color_hsva_i},
{"org/mini/nk/NK",  "nk_color_hsva_b",  "([B[B[B[BI)V",  org_mini_nk_NK_nk_color_hsva_b},
{"org/mini/nk/NK",  "nk_color_hsva_iv",  "([II)V",  org_mini_nk_NK_nk_color_hsva_iv},
{"org/mini/nk/NK",  "nk_color_hsva_bv",  "([BI)V",  org_mini_nk_NK_nk_color_hsva_bv},
{"org/mini/nk/NK",  "nk_color_hsva_f",  "([F[F[F[FI)V",  org_mini_nk_NK_nk_color_hsva_f},
{"org/mini/nk/NK",  "nk_color_hsva_fv",  "([FI)V",  org_mini_nk_NK_nk_color_hsva_fv},
{"org/mini/nk/NK",  "nk_handle_ptr",  "(J)J",  org_mini_nk_NK_nk_handle_ptr},
{"org/mini/nk/NK",  "nk_handle_id",  "(I)J",  org_mini_nk_NK_nk_handle_id},
{"org/mini/nk/NK",  "nk_image_handle",  "(J)J",  org_mini_nk_NK_nk_image_handle},
{"org/mini/nk/NK",  "nk_image_ptr",  "(J)J",  org_mini_nk_NK_nk_image_ptr},
{"org/mini/nk/NK",  "nk_image_id",  "(I)J",  org_mini_nk_NK_nk_image_id},
{"org/mini/nk/NK",  "nk_image_is_subimage",  "(J)I",  org_mini_nk_NK_nk_image_is_subimage},
{"org/mini/nk/NK",  "nk_subimage_ptr",  "(JSS[F)J",  org_mini_nk_NK_nk_subimage_ptr},
{"org/mini/nk/NK",  "nk_subimage_id",  "(ISS[F)J",  org_mini_nk_NK_nk_subimage_id},
{"org/mini/nk/NK",  "nk_subimage_handle",  "(JSS[F)J",  org_mini_nk_NK_nk_subimage_handle},
{"org/mini/nk/NK",  "nk_murmur_hash",  "(JII)I",  org_mini_nk_NK_nk_murmur_hash},
{"org/mini/nk/NK",  "nk_triangle_from_direction",  "([F[FFFI)V",  org_mini_nk_NK_nk_triangle_from_direction},
{"org/mini/nk/NK",  "nk_vec2",  "(FF)[F",  org_mini_nk_NK_nk_vec2},
{"org/mini/nk/NK",  "nk_vec2i",  "(II)[F",  org_mini_nk_NK_nk_vec2i},
{"org/mini/nk/NK",  "nk_vec2v",  "([F)[F",  org_mini_nk_NK_nk_vec2v},
{"org/mini/nk/NK",  "nk_vec2iv",  "([I)[F",  org_mini_nk_NK_nk_vec2iv},
{"org/mini/nk/NK",  "nk_get_null_rect",  "()[F",  org_mini_nk_NK_nk_get_null_rect},
{"org/mini/nk/NK",  "nk_rect",  "(FFFF)[F",  org_mini_nk_NK_nk_rect},
{"org/mini/nk/NK",  "nk_recti",  "(IIII)[F",  org_mini_nk_NK_nk_recti},
{"org/mini/nk/NK",  "nk_recta",  "([F[F)[F",  org_mini_nk_NK_nk_recta},
{"org/mini/nk/NK",  "nk_rectv",  "([F)[F",  org_mini_nk_NK_nk_rectv},
{"org/mini/nk/NK",  "nk_rectiv",  "([I)[F",  org_mini_nk_NK_nk_rectiv},
{"org/mini/nk/NK",  "nk_rect_pos",  "([F)[F",  org_mini_nk_NK_nk_rect_pos},
{"org/mini/nk/NK",  "nk_rect_size",  "([F)[F",  org_mini_nk_NK_nk_rect_size},
{"org/mini/nk/NK",  "nk_strlen",  "(Ljava/lang/String;)I",  org_mini_nk_NK_nk_strlen},
{"org/mini/nk/NK",  "nk_stricmp",  "(Ljava/lang/String;Ljava/lang/String;)I",  org_mini_nk_NK_nk_stricmp},
{"org/mini/nk/NK",  "nk_stricmpn",  "(Ljava/lang/String;Ljava/lang/String;I)I",  org_mini_nk_NK_nk_stricmpn},
{"org/mini/nk/NK",  "nk_strtoi",  "(Ljava/lang/String;[Ljava/lang/String;)I",  org_mini_nk_NK_nk_strtoi},
{"org/mini/nk/NK",  "nk_strtof",  "(Ljava/lang/String;[Ljava/lang/String;)D",  org_mini_nk_NK_nk_strtof},
{"org/mini/nk/NK",  "nk_strtod",  "(Ljava/lang/String;[Ljava/lang/String;)F",  org_mini_nk_NK_nk_strtod},
{"org/mini/nk/NK",  "nk_strfilter",  "(Ljava/lang/String;Ljava/lang/String;)I",  org_mini_nk_NK_nk_strfilter},
{"org/mini/nk/NK",  "nk_strmatch_fuzzy_string",  "(Ljava/lang/String;Ljava/lang/String;[I)I",  org_mini_nk_NK_nk_strmatch_fuzzy_string},
{"org/mini/nk/NK",  "nk_strmatch_fuzzy_text",  "(Ljava/lang/String;ILjava/lang/String;[I)I",  org_mini_nk_NK_nk_strmatch_fuzzy_text},
{"org/mini/nk/NK",  "nk_utf_decode",  "(Ljava/lang/String;JI)I",  org_mini_nk_NK_nk_utf_decode},
{"org/mini/nk/NK",  "nk_utf_encode",  "(ILjava/lang/String;I)I",  org_mini_nk_NK_nk_utf_encode},
{"org/mini/nk/NK",  "nk_utf_len",  "(Ljava/lang/String;I)I",  org_mini_nk_NK_nk_utf_len},
{"org/mini/nk/NK",  "nk_utf_at",  "(Ljava/lang/String;IIJ[I)Ljava/lang/String;",  org_mini_nk_NK_nk_utf_at},
{"org/mini/nk/NK",  "nk_font_default_glyph_ranges",  "()J",  org_mini_nk_NK_nk_font_default_glyph_ranges},
{"org/mini/nk/NK",  "nk_font_chinese_glyph_ranges",  "()J",  org_mini_nk_NK_nk_font_chinese_glyph_ranges},
{"org/mini/nk/NK",  "nk_font_cyrillic_glyph_ranges",  "()J",  org_mini_nk_NK_nk_font_cyrillic_glyph_ranges},
{"org/mini/nk/NK",  "nk_font_korean_glyph_ranges",  "()J",  org_mini_nk_NK_nk_font_korean_glyph_ranges},
{"org/mini/nk/NK",  "nk_font_atlas_init_default",  "(J)V",  org_mini_nk_NK_nk_font_atlas_init_default},
{"org/mini/nk/NK",  "nk_font_atlas_init",  "(JJ)V",  org_mini_nk_NK_nk_font_atlas_init},
{"org/mini/nk/NK",  "nk_font_atlas_init_custom",  "(JJJ)V",  org_mini_nk_NK_nk_font_atlas_init_custom},
{"org/mini/nk/NK",  "nk_font_atlas_begin",  "(J)V",  org_mini_nk_NK_nk_font_atlas_begin},
{"org/mini/nk/NK",  "nk_font_config",  "(F)[B",  org_mini_nk_NK_nk_font_config},
{"org/mini/nk/NK",  "nk_font_atlas_add",  "(JJ)J",  org_mini_nk_NK_nk_font_atlas_add},
{"org/mini/nk/NK",  "nk_font_atlas_add_default",  "(JFJ)J",  org_mini_nk_NK_nk_font_atlas_add_default},
{"org/mini/nk/NK",  "nk_font_atlas_add_from_memory",  "(JJIFJ)J",  org_mini_nk_NK_nk_font_atlas_add_from_memory},
{"org/mini/nk/NK",  "nk_font_atlas_add_compressed",  "(JJIFJ)J",  org_mini_nk_NK_nk_font_atlas_add_compressed},
{"org/mini/nk/NK",  "nk_font_atlas_add_compressed_base85",  "(JLjava/lang/String;FJ)J",  org_mini_nk_NK_nk_font_atlas_add_compressed_base85},
{"org/mini/nk/NK",  "nk_font_atlas_bake",  "(J[I[II)J",  org_mini_nk_NK_nk_font_atlas_bake},
{"org/mini/nk/NK",  "nk_font_atlas_end",  "(JJJ)V",  org_mini_nk_NK_nk_font_atlas_end},
{"org/mini/nk/NK",  "nk_font_find_glyph",  "(JI)J",  org_mini_nk_NK_nk_font_find_glyph},
{"org/mini/nk/NK",  "nk_font_atlas_cleanup",  "(J)V",  org_mini_nk_NK_nk_font_atlas_cleanup},
{"org/mini/nk/NK",  "nk_font_atlas_clear",  "(J)V",  org_mini_nk_NK_nk_font_atlas_clear},
{"org/mini/nk/NK",  "nk_buffer_init_default",  "(J)V",  org_mini_nk_NK_nk_buffer_init_default},
{"org/mini/nk/NK",  "nk_buffer_init",  "(JJI)V",  org_mini_nk_NK_nk_buffer_init},
{"org/mini/nk/NK",  "nk_buffer_init_fixed",  "(JJI)V",  org_mini_nk_NK_nk_buffer_init_fixed},
{"org/mini/nk/NK",  "nk_buffer_info",  "(JJ)V",  org_mini_nk_NK_nk_buffer_info},
{"org/mini/nk/NK",  "nk_buffer_push",  "(JIJII)V",  org_mini_nk_NK_nk_buffer_push},
{"org/mini/nk/NK",  "nk_buffer_mark",  "(JI)V",  org_mini_nk_NK_nk_buffer_mark},
{"org/mini/nk/NK",  "nk_buffer_reset",  "(JI)V",  org_mini_nk_NK_nk_buffer_reset},
{"org/mini/nk/NK",  "nk_buffer_clear",  "(J)V",  org_mini_nk_NK_nk_buffer_clear},
{"org/mini/nk/NK",  "nk_buffer_free",  "(J)V",  org_mini_nk_NK_nk_buffer_free},
{"org/mini/nk/NK",  "nk_buffer_memory",  "(J)J",  org_mini_nk_NK_nk_buffer_memory},
{"org/mini/nk/NK",  "nk_buffer_memory_const",  "(J)J",  org_mini_nk_NK_nk_buffer_memory_const},
{"org/mini/nk/NK",  "nk_buffer_total",  "(J)I",  org_mini_nk_NK_nk_buffer_total},
{"org/mini/nk/NK",  "nk_str_init_default",  "(J)V",  org_mini_nk_NK_nk_str_init_default},
{"org/mini/nk/NK",  "nk_str_init",  "(JJI)V",  org_mini_nk_NK_nk_str_init},
{"org/mini/nk/NK",  "nk_str_init_fixed",  "(JJI)V",  org_mini_nk_NK_nk_str_init_fixed},
{"org/mini/nk/NK",  "nk_str_clear",  "(J)V",  org_mini_nk_NK_nk_str_clear},
{"org/mini/nk/NK",  "nk_str_free",  "(J)V",  org_mini_nk_NK_nk_str_free},
{"org/mini/nk/NK",  "nk_str_append_text_char",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_str_append_text_char},
{"org/mini/nk/NK",  "nk_str_append_str_char",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_str_append_str_char},
{"org/mini/nk/NK",  "nk_str_append_text_utf8",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_str_append_text_utf8},
{"org/mini/nk/NK",  "nk_str_append_str_utf8",  "(JLjava/lang/String;)I",  org_mini_nk_NK_nk_str_append_str_utf8},
{"org/mini/nk/NK",  "nk_str_append_text_runes",  "(JJI)I",  org_mini_nk_NK_nk_str_append_text_runes},
{"org/mini/nk/NK",  "nk_str_append_str_runes",  "(JJ)I",  org_mini_nk_NK_nk_str_append_str_runes},
{"org/mini/nk/NK",  "nk_str_insert_at_char",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_str_insert_at_char},
{"org/mini/nk/NK",  "nk_str_insert_at_rune",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_str_insert_at_rune},
{"org/mini/nk/NK",  "nk_str_insert_text_char",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_str_insert_text_char},
{"org/mini/nk/NK",  "nk_str_insert_str_char",  "(JILjava/lang/String;)I",  org_mini_nk_NK_nk_str_insert_str_char},
{"org/mini/nk/NK",  "nk_str_insert_text_utf8",  "(JILjava/lang/String;I)I",  org_mini_nk_NK_nk_str_insert_text_utf8},
{"org/mini/nk/NK",  "nk_str_insert_str_utf8",  "(JILjava/lang/String;)I",  org_mini_nk_NK_nk_str_insert_str_utf8},
{"org/mini/nk/NK",  "nk_str_insert_text_runes",  "(JIJI)I",  org_mini_nk_NK_nk_str_insert_text_runes},
{"org/mini/nk/NK",  "nk_str_insert_str_runes",  "(JIJ)I",  org_mini_nk_NK_nk_str_insert_str_runes},
{"org/mini/nk/NK",  "nk_str_remove_chars",  "(JI)V",  org_mini_nk_NK_nk_str_remove_chars},
{"org/mini/nk/NK",  "nk_str_remove_runes",  "(JI)V",  org_mini_nk_NK_nk_str_remove_runes},
{"org/mini/nk/NK",  "nk_str_delete_chars",  "(JII)V",  org_mini_nk_NK_nk_str_delete_chars},
{"org/mini/nk/NK",  "nk_str_delete_runes",  "(JII)V",  org_mini_nk_NK_nk_str_delete_runes},
{"org/mini/nk/NK",  "nk_str_at_char",  "(JI)Ljava/lang/String;",  org_mini_nk_NK_nk_str_at_char},
{"org/mini/nk/NK",  "nk_str_at_rune",  "(JIJ[I)Ljava/lang/String;",  org_mini_nk_NK_nk_str_at_rune},
{"org/mini/nk/NK",  "nk_str_rune_at",  "(JI)I",  org_mini_nk_NK_nk_str_rune_at},
{"org/mini/nk/NK",  "nk_str_at_char_const",  "(JI)Ljava/lang/String;",  org_mini_nk_NK_nk_str_at_char_const},
{"org/mini/nk/NK",  "nk_str_at_const",  "(JIJ[I)Ljava/lang/String;",  org_mini_nk_NK_nk_str_at_const},
{"org/mini/nk/NK",  "nk_str_get",  "(J)Ljava/lang/String;",  org_mini_nk_NK_nk_str_get},
{"org/mini/nk/NK",  "nk_str_get_const",  "(J)Ljava/lang/String;",  org_mini_nk_NK_nk_str_get_const},
{"org/mini/nk/NK",  "nk_str_len",  "(J)I",  org_mini_nk_NK_nk_str_len},
{"org/mini/nk/NK",  "nk_str_len_char",  "(J)I",  org_mini_nk_NK_nk_str_len_char},
{"org/mini/nk/NK",  "nk_filter_default",  "(JI)I",  org_mini_nk_NK_nk_filter_default},
{"org/mini/nk/NK",  "nk_filter_ascii",  "(JI)I",  org_mini_nk_NK_nk_filter_ascii},
{"org/mini/nk/NK",  "nk_filter_float",  "(JI)I",  org_mini_nk_NK_nk_filter_float},
{"org/mini/nk/NK",  "nk_filter_decimal",  "(JI)I",  org_mini_nk_NK_nk_filter_decimal},
{"org/mini/nk/NK",  "nk_filter_hex",  "(JI)I",  org_mini_nk_NK_nk_filter_hex},
{"org/mini/nk/NK",  "nk_filter_oct",  "(JI)I",  org_mini_nk_NK_nk_filter_oct},
{"org/mini/nk/NK",  "nk_filter_binary",  "(JI)I",  org_mini_nk_NK_nk_filter_binary},
{"org/mini/nk/NK",  "nk_textedit_init_default",  "(J)V",  org_mini_nk_NK_nk_textedit_init_default},
{"org/mini/nk/NK",  "nk_textedit_init",  "(JJI)V",  org_mini_nk_NK_nk_textedit_init},
{"org/mini/nk/NK",  "nk_textedit_init_fixed",  "(JJI)V",  org_mini_nk_NK_nk_textedit_init_fixed},
{"org/mini/nk/NK",  "nk_textedit_free",  "(J)V",  org_mini_nk_NK_nk_textedit_free},
{"org/mini/nk/NK",  "nk_textedit_text",  "(JLjava/lang/String;I)V",  org_mini_nk_NK_nk_textedit_text},
{"org/mini/nk/NK",  "nk_textedit_delete",  "(JII)V",  org_mini_nk_NK_nk_textedit_delete},
{"org/mini/nk/NK",  "nk_textedit_delete_selection",  "(J)V",  org_mini_nk_NK_nk_textedit_delete_selection},
{"org/mini/nk/NK",  "nk_textedit_select_all",  "(J)V",  org_mini_nk_NK_nk_textedit_select_all},
{"org/mini/nk/NK",  "nk_textedit_cut",  "(J)I",  org_mini_nk_NK_nk_textedit_cut},
{"org/mini/nk/NK",  "nk_textedit_paste",  "(JLjava/lang/String;I)I",  org_mini_nk_NK_nk_textedit_paste},
{"org/mini/nk/NK",  "nk_textedit_undo",  "(J)V",  org_mini_nk_NK_nk_textedit_undo},
{"org/mini/nk/NK",  "nk_textedit_redo",  "(J)V",  org_mini_nk_NK_nk_textedit_redo},
{"org/mini/nk/NK",  "nk_stroke_line",  "(JFFFFFI)V",  org_mini_nk_NK_nk_stroke_line},
{"org/mini/nk/NK",  "nk_stroke_curve",  "(JFFFFFFFFFI)V",  org_mini_nk_NK_nk_stroke_curve},
{"org/mini/nk/NK",  "nk_stroke_rect",  "(J[FFFI)V",  org_mini_nk_NK_nk_stroke_rect},
{"org/mini/nk/NK",  "nk_stroke_circle",  "(J[FFI)V",  org_mini_nk_NK_nk_stroke_circle},
{"org/mini/nk/NK",  "nk_stroke_arc",  "(JFFFFFFI)V",  org_mini_nk_NK_nk_stroke_arc},
{"org/mini/nk/NK",  "nk_stroke_triangle",  "(JFFFFFFFI)V",  org_mini_nk_NK_nk_stroke_triangle},
{"org/mini/nk/NK",  "nk_stroke_polyline",  "(J[FIFI)V",  org_mini_nk_NK_nk_stroke_polyline},
{"org/mini/nk/NK",  "nk_stroke_polygon",  "(J[FIFI)V",  org_mini_nk_NK_nk_stroke_polygon},
{"org/mini/nk/NK",  "nk_fill_rect",  "(J[FFI)V",  org_mini_nk_NK_nk_fill_rect},
{"org/mini/nk/NK",  "nk_fill_rect_multi_color",  "(J[FIIII)V",  org_mini_nk_NK_nk_fill_rect_multi_color},
{"org/mini/nk/NK",  "nk_fill_circle",  "(J[FI)V",  org_mini_nk_NK_nk_fill_circle},
{"org/mini/nk/NK",  "nk_fill_arc",  "(JFFFFFI)V",  org_mini_nk_NK_nk_fill_arc},
{"org/mini/nk/NK",  "nk_fill_triangle",  "(JFFFFFFI)V",  org_mini_nk_NK_nk_fill_triangle},
{"org/mini/nk/NK",  "nk_fill_polygon",  "(J[FII)V",  org_mini_nk_NK_nk_fill_polygon},
{"org/mini/nk/NK",  "nk_draw_image",  "(J[FJI)V",  org_mini_nk_NK_nk_draw_image},
{"org/mini/nk/NK",  "nk_draw_text",  "(J[FLjava/lang/String;IJII)V",  org_mini_nk_NK_nk_draw_text},
{"org/mini/nk/NK",  "nk_push_scissor",  "(J[F)V",  org_mini_nk_NK_nk_push_scissor},
{"org/mini/nk/NK",  "nk_push_custom",  "(J[FJJ)V",  org_mini_nk_NK_nk_push_custom},
{"org/mini/nk/NK",  "nk_input_has_mouse_click",  "(JI)I",  org_mini_nk_NK_nk_input_has_mouse_click},
{"org/mini/nk/NK",  "nk_input_has_mouse_click_in_rect",  "(JI[F)I",  org_mini_nk_NK_nk_input_has_mouse_click_in_rect},
{"org/mini/nk/NK",  "nk_input_has_mouse_click_down_in_rect",  "(JI[FI)I",  org_mini_nk_NK_nk_input_has_mouse_click_down_in_rect},
{"org/mini/nk/NK",  "nk_input_is_mouse_click_in_rect",  "(JI[F)I",  org_mini_nk_NK_nk_input_is_mouse_click_in_rect},
{"org/mini/nk/NK",  "nk_input_is_mouse_click_down_in_rect",  "(JI[FI)I",  org_mini_nk_NK_nk_input_is_mouse_click_down_in_rect},
{"org/mini/nk/NK",  "nk_input_any_mouse_click_in_rect",  "(J[F)I",  org_mini_nk_NK_nk_input_any_mouse_click_in_rect},
{"org/mini/nk/NK",  "nk_input_is_mouse_prev_hovering_rect",  "(J[F)I",  org_mini_nk_NK_nk_input_is_mouse_prev_hovering_rect},
{"org/mini/nk/NK",  "nk_input_is_mouse_hovering_rect",  "(J[F)I",  org_mini_nk_NK_nk_input_is_mouse_hovering_rect},
{"org/mini/nk/NK",  "nk_input_mouse_clicked",  "(JI[F)I",  org_mini_nk_NK_nk_input_mouse_clicked},
{"org/mini/nk/NK",  "nk_input_is_mouse_down",  "(JI)I",  org_mini_nk_NK_nk_input_is_mouse_down},
{"org/mini/nk/NK",  "nk_input_is_mouse_pressed",  "(JI)I",  org_mini_nk_NK_nk_input_is_mouse_pressed},
{"org/mini/nk/NK",  "nk_input_is_mouse_released",  "(JI)I",  org_mini_nk_NK_nk_input_is_mouse_released},
{"org/mini/nk/NK",  "nk_input_is_key_pressed",  "(JI)I",  org_mini_nk_NK_nk_input_is_key_pressed},
{"org/mini/nk/NK",  "nk_input_is_key_released",  "(JI)I",  org_mini_nk_NK_nk_input_is_key_released},
{"org/mini/nk/NK",  "nk_input_is_key_down",  "(JI)I",  org_mini_nk_NK_nk_input_is_key_down},
{"org/mini/nk/NK",  "nk_draw_list_init",  "(J)V",  org_mini_nk_NK_nk_draw_list_init},
{"org/mini/nk/NK",  "nk_draw_list_setup",  "(JJJJJII)V",  org_mini_nk_NK_nk_draw_list_setup},
{"org/mini/nk/NK",  "nk_draw_list_clear",  "(J)V",  org_mini_nk_NK_nk_draw_list_clear},
{"org/mini/nk/NK",  "nk__draw_list_begin",  "(JJ)J",  org_mini_nk_NK_nk__draw_list_begin},
{"org/mini/nk/NK",  "nk__draw_list_next",  "(JJJ)J",  org_mini_nk_NK_nk__draw_list_next},
{"org/mini/nk/NK",  "nk__draw_list_end",  "(JJ)J",  org_mini_nk_NK_nk__draw_list_end},
{"org/mini/nk/NK",  "nk_draw_list_path_clear",  "(J)V",  org_mini_nk_NK_nk_draw_list_path_clear},
{"org/mini/nk/NK",  "nk_draw_list_path_line_to",  "(J[F)V",  org_mini_nk_NK_nk_draw_list_path_line_to},
{"org/mini/nk/NK",  "nk_draw_list_path_arc_to_fast",  "(J[FFII)V",  org_mini_nk_NK_nk_draw_list_path_arc_to_fast},
{"org/mini/nk/NK",  "nk_draw_list_path_arc_to",  "(J[FFFFI)V",  org_mini_nk_NK_nk_draw_list_path_arc_to},
{"org/mini/nk/NK",  "nk_draw_list_path_rect_to",  "(J[F[FF)V",  org_mini_nk_NK_nk_draw_list_path_rect_to},
{"org/mini/nk/NK",  "nk_draw_list_path_curve_to",  "(J[F[F[FI)V",  org_mini_nk_NK_nk_draw_list_path_curve_to},
{"org/mini/nk/NK",  "nk_draw_list_path_fill",  "(JI)V",  org_mini_nk_NK_nk_draw_list_path_fill},
{"org/mini/nk/NK",  "nk_draw_list_path_stroke",  "(JIIF)V",  org_mini_nk_NK_nk_draw_list_path_stroke},
{"org/mini/nk/NK",  "nk_draw_list_stroke_line",  "(J[F[FIF)V",  org_mini_nk_NK_nk_draw_list_stroke_line},
{"org/mini/nk/NK",  "nk_draw_list_stroke_rect",  "(J[FIFF)V",  org_mini_nk_NK_nk_draw_list_stroke_rect},
{"org/mini/nk/NK",  "nk_draw_list_stroke_triangle",  "(J[F[F[FIF)V",  org_mini_nk_NK_nk_draw_list_stroke_triangle},
{"org/mini/nk/NK",  "nk_draw_list_stroke_circle",  "(J[FFIIF)V",  org_mini_nk_NK_nk_draw_list_stroke_circle},
{"org/mini/nk/NK",  "nk_draw_list_stroke_curve",  "(J[F[F[F[FIIF)V",  org_mini_nk_NK_nk_draw_list_stroke_curve},
{"org/mini/nk/NK",  "nk_draw_list_stroke_poly_line",  "(J[FIIIFI)V",  org_mini_nk_NK_nk_draw_list_stroke_poly_line},
{"org/mini/nk/NK",  "nk_draw_list_fill_rect",  "(J[FIF)V",  org_mini_nk_NK_nk_draw_list_fill_rect},
{"org/mini/nk/NK",  "nk_draw_list_fill_rect_multi_color",  "(J[FIIII)V",  org_mini_nk_NK_nk_draw_list_fill_rect_multi_color},
{"org/mini/nk/NK",  "nk_draw_list_fill_triangle",  "(J[F[F[FI)V",  org_mini_nk_NK_nk_draw_list_fill_triangle},
{"org/mini/nk/NK",  "nk_draw_list_fill_circle",  "(J[FFII)V",  org_mini_nk_NK_nk_draw_list_fill_circle},
{"org/mini/nk/NK",  "nk_draw_list_fill_poly_convex",  "(J[FIII)V",  org_mini_nk_NK_nk_draw_list_fill_poly_convex},
{"org/mini/nk/NK",  "nk_draw_list_add_image",  "(JJ[FI)V",  org_mini_nk_NK_nk_draw_list_add_image},
{"org/mini/nk/NK",  "nk_draw_list_add_text",  "(JJ[FLjava/lang/String;IFI)V",  org_mini_nk_NK_nk_draw_list_add_text},
{"org/mini/nk/NK",  "nk_style_item_image",  "(J)J",  org_mini_nk_NK_nk_style_item_image},
{"org/mini/nk/NK",  "nk_style_item_color",  "(I)J",  org_mini_nk_NK_nk_style_item_color},
{"org/mini/nk/NK",  "nk_style_item_hide",  "()J",  org_mini_nk_NK_nk_style_item_hide},
{"org/mini/nk/NK",  "nk_glfw3_init",  "(JI)J",  org_mini_nk_NK_nk_glfw3_init},
{"org/mini/nk/NK",  "nk_glfw3_font_stash_begin",  "([J)V",  org_mini_nk_NK_nk_glfw3_font_stash_begin},
{"org/mini/nk/NK",  "nk_glfw3_font_stash_end",  "()V",  org_mini_nk_NK_nk_glfw3_font_stash_end},
{"org/mini/nk/NK",  "nk_glfw3_new_frame",  "()V",  org_mini_nk_NK_nk_glfw3_new_frame},
{"org/mini/nk/NK",  "nk_glfw3_render",  "(I)V",  org_mini_nk_NK_nk_glfw3_render},
{"org/mini/nk/NK",  "nk_glfw3_shutdown",  "()V",  org_mini_nk_NK_nk_glfw3_shutdown},
{"org/mini/nk/NK",  "nk_glfw3_char_callback",  "(JI)V",  org_mini_nk_NK_nk_glfw3_char_callback},
{"org/mini/nk/NK",  "nk_gflw3_scroll_callback",  "(JDD)V",  org_mini_nk_NK_nk_gflw3_scroll_callback},
};

s32 count_NkFuncTable() {
    return sizeof(method_nkclear_table) / sizeof(java_native_method);
}

__refer ptr_NkFuncTable() {
    return &method_nkclear_table[0];
}