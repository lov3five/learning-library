const caculator = (a, b) => {
    const add = a + b
    const subtract = a - b
    const multiply = a * b
    const divide = a / b
    return [add, subtract, multiply, divide]
}

const [add, subtract, multiply, divide] = caculator(10,5)

console.log(add);
console.log(subtract);
console.log(multiply);
console.log(divide);
