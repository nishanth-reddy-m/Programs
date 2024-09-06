function avg(temp)
{
    if (!(temp instanceof Array))
    {
        return NaN;
    }
    else
    {
        let sum = 0;
        for(let i=0;i<temp.length;i++)
        {
            sum += temp[i]
        }
        return sum/temp.length
    }
}

let temps1 = [17, 16, 14, 12, 10, 10, 10, 11, 13, 14, 15, 17, 22, 27, 29, 29, 27, 26, 24, 21, 19, 18, 17, 16];
let temps2 = [12, 12, 11, 11, 10, 9, 9, 10, 12, 13, 15, 18, 21, 24, 24, 23, 25, 25, 23, 21, 20, 19, 17, 16];
console.log("temps1 Average = ",avg(temps1));
console.log("temps2 Average = ",avg(temps2));