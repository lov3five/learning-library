const print = (s) => console.log(s);

// Normal function
hello = function() {
    return 'Hello world!!!'
}
print(hello())

// Arrow function
goodbye = () => {
    return 'Goodbye :)'
}
print(goodbye())

// Or this may lie on 1 line
coding = () => 'Code to fix bug ;))'
print(coding())