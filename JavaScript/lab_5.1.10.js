// 1
let numbers = [50, 10, 40, 30, 20];
let ascending = array => array.sort((a,b) => a-b);
let descending = array => array.sort((a,b) => b-a);
console.log(ascending(numbers));
console.log(descending(numbers));
console.log(numbers);

// 2
// function check(a,b)
// {
//     if (!Number.isInteger(a) || !Number.isInteger(b))
//         return NaN;
//     return true;
// }
// function add(a,b)
// {
//     if(check(a,b))
//         return a+b;
//     return NaN;
// }
// function sub(a,b)
// {
//     if(check(a,b))
//         return a-b;
//     return NaN;
// }
// function mul(a,b)
// {
//     if(check(a,b))
//         return a*b;
//     return NaN;
// }

// 3
let add = (a,b) => (Number.isInteger(a) && Number.isInteger(b))?a+b:NaN;
let sub = (a,b) => (Number.isInteger(a) && Number.isInteger(b))?a-b:NaN;
let mul = (a,b) => (Number.isInteger(a) && Number.isInteger(b))?a*b:NaN;

// op = [add,sub,mul];
// op.forEach(element => {
//     console.log(element(6,5));
// });

// 4
let action = (callback,a,b) => callback(a,b);

op = [add,sub,mul];
op.forEach(element => {
    console.log(action(element,6,3));
});

// 5
// let counter = 1;
// let time = 2000;
// let timer = setInterval(() => console.log(counter++),time);
// setTimeout(() => clearInterval(timer),time*10);

// 6
// function fib(f)
// {
//     if (f <= 2)
//     {
//         return 1;
//     }
//     return fib(f-1) + fib(f-2)
// }
f = 4;

// 7
let fib = f => f<=2?1:fib(f-1) + fib(f-2);
console.log("Fibonacci at "+f+" = "+fib(f));

// 8
let Fibonacci = function(f){
    let temp = 0;
    for(let i = j = 1;f>0;f--)
    {
        temp = i;
        i = j;
        j += temp;
    }
    console.log(`Fibonacci = ${temp}`);
}
Fibonacci(f);