#ifndef GODOT_CPP_TEMPLATES_VARARG_H
#define GODOT_CPP_TEMPLATES_VARARG_H

#include <vector>

template <typename T>
struct rest : std::vector<T> {
	using std::vector<T>::vector;
	using std::vector<T>::operator=;
};

// 为了解决循环依赖,将rest从qjspp中抽出
#endif