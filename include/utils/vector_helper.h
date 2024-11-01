#ifndef __TUPLE_HELPER_H__
#define __TUPLE_HELPER_H__

#include <vector>

// 辅助函数：将 vector 转换为 tuple
template <typename T>
auto vector_to_tuple(const std::vector<T> &vec) {
	return std::apply([&](auto &&...args) { return std::make_tuple(args...); }, vec);
}

// 辅助函数：展开 vector 并传递给可变参函数
template <typename Func, typename T>
auto unpack_vector(const std::vector<T> &vec, Func func) {
	// 将 vector 转换为 tuple
	// auto tuple = std::make_tuple(vec.begin(), vec.end());
	auto tuple = vector_to_tuple(vec);
	// 使用 apply 展开 tuple 并传递给 func
	return std::apply(func, tuple);
}

#endif // __TUPLE_HELPER_H__