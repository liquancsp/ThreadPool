//
// Created by quan li on 16/6/13.
//

#ifndef THREADPOOL_NONCOPYABLE_H
#define THREADPOOL_NONCOPYABLE_H

namespace threadpool {
    namespace base {

        class noncopyable {
        protected:
            noncopyable() { }

            ~noncopyable() { }

        private:
            noncopyable(const noncopyable &);

            const noncopyable &operator=(const noncopyable &);
        };
    }
}

typedef threadpool::base::noncopyable noncapyable;
#endif //THREADPOOL_NONCOPYABLE_H
