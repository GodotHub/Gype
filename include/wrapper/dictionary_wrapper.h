#ifndef __DICTIONARY_WRAPPER_H__
#define __DICTIONARY_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct DictionaryWrapper DictionaryWrapper;
typedef struct ArrayWrapper ArrayWrapper;
typedef struct VariantWrapper VariantWrapper;

DictionaryWrapper *gd_convert_to_slowArray(ArrayWrapper *arrw);
void gd_dict_set_value(DictionaryWrapper *dictw, VariantWrapper *varw);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __DICTIONARY_WRAPPER_H__