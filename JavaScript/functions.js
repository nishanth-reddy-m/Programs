// function show(message)
// {
//     console.log(message);
// }
// let print = show;
// print("This is working");

// Calculate

function add(a,b)
{
    return a+b;
}

function subtract(a,b)
{
    return a-b;
}

function multiply(a,b)
{
    return a*b;
}

function divide(a,b)
{
    return a/b;
}

function op(Function,a,b)
{
    return Function(a,b);
}

let a = 5,b = 3;
let operations = {"Addition":add,"Subtraction":subtract,"Multiplication":multiply,"Division":divide};
for (operation in operations)
{
    console.log(`${operation} of ${a} and ${b} = ${op(operations[operation],a,b)}`);
}
console.log(`Modulo of ${a} and ${b} = ${op(function(a,b){return a%b;},a,b)}`);