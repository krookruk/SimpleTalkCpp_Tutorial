#pragma once

#include <stdio.h>
#include <windows.h>
#include <windowsx.h>
#include <Commctrl.h>
#include <stdint.h>

template<class T>
inline void my_bzero(T& s) {
	memset(&s, 0, sizeof(s));
}

class MyNonCopyable {
public:
	MyNonCopyable() {}

private:
	MyNonCopyable(const MyNonCopyable &) = delete;
	void operator=(const MyNonCopyable &) = delete;
};