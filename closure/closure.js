function Outer() {
    let x = 0;
    return function Inner(){
        return ++x;
    }
}

let closureFunc = Outer()
console.log(closureFunc())      //1
console.log(closureFunc())      //2
console.log(closureFunc())      //3
console.log(closureFunc())      //4