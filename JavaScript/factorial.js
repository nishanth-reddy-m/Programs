function factorial(num)
{
    return num > 1 ? num * factorial(num-1) : 1;
}
for(let i=1;i<6;i++)
{
    console.log(factorial(i));
}