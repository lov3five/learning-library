function pairValue<S, T>(s1: S, t1: T): [S, T] {
    return [s1, t1];
}

console.log(pairValue<string, number>('hello', 2));


