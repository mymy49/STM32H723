/*
 * Copyright (c) 2024 Yoon-Ki Hong
 *
 * This file is subject to the terms and conditions of the MIT License.
 * See the file "LICENSE" in the main directory of this archive for more details.
 */

#ifndef TASK__H_
#define TASK__H_

#include <util/FunctionQueue.h>

class Frame;

// FunctionQueue에 의해 순차 수행되는 task의 함수 프로토타입 선언부이다.
namespace Task
{
	// task.cpp
	void setFunctionQueue(FunctionQueue &obj);
	void lock(void);
	void unlock(void);
	void addThread(void (*func)(void), uint32_t stackSize);
	void clearTask(void);
	void setFrame(Frame *obj);
}

#endif

