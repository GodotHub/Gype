#ifndef __DICTIONARY_WRAPPER_H__
#define __DICTIONARY_WRAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

typedef struct DictionaryWrapper DictionaryWrapper;
typedef struct ArrayWrapper ArrayWrapper;
typedef struct VariantWrapper VariantWrapper;

DictionaryWrapper *gd_new_empty_Dictionary_wrapper();
void gd_Dictionary_set_value(DictionaryWrapper *dictw, VariantWrapper *keyw, VariantWrapper *varw);
void *gd_Dictionary_get_opaque(DictionaryWrapper *wrapper);

#ifdef __cplusplus
}
#endif // __cplusplus
#endif // __DICTIONARY_WRAPPER_H__