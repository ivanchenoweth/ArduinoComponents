#ifndef __TIMEDDISPATCH_H__
#define __TIMEDDISPATCH_H__

#include "VoidCallback.h"
#include "../Components/BaseComponent.h"

namespace components {
	class TimedDispatch : public BaseComponent {
	public:
		TimedDispatch(VoidCallback callback) : TimedDispatch(nullptr, callback) {}
		TimedDispatch(Ref<BaseComponent> parent, VoidCallback callback);
		void disptach_delayed(unsigned long delay);
		void cancel();

	private:
		void privateLoop();

		VoidCallback timeoutCallback;
		unsigned long timeLeft;
		unsigned long lastMillis;
		bool timerRunning;
	};
};

#endif
