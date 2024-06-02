#ifndef GODOT_VARARG_HPP
#define GODOT_VARARG_HPP

#include <vector>

template <typename T>
struct rest : std::vector<T> {
	using std::vector<T>::vector;
	using std::vector<T>::operator=;
};

#endif