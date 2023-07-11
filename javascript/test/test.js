const foo = () => {
    var a = b = 2
    a++
    return a
}

console.log(foo());
console.log(typeof a);
console.log(typeof b);