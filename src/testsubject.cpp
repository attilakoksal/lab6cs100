#include "../lib/testsubject.h"

bool TestSubject::isEven(int x) {
    return (x % 2 == 0);
}

int TestSubject::square(int x) {
    if (isEven(x)) {
        return x * x;
    } else {
        return x * x;
    }
}
