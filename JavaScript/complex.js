user = {
    fname: "James",
    lname: "Bond",
    roll: 7,
    code: "007"
}
delete user.code
user.code = NaN
console.log(`Name: ${user.fname+' '+user.lname}\nRoll.no: ${user.roll}\nCode: ${user.code}`);

days = [];
days[1] = "Mon";
days[2] = "Tue";
days[3] = "Wed";
days[4] = "Thu";
days[5] = "Fri";
days[6] = "Sat";
days[7] = "Sun";
console.log(days[0]);
delete days[7];
console.log(days[7]);
days[0] = "Sun";
console.log(days[0]);

let users =[
    {
    name: "Calvin",
    surname: "Hart",
    age: 66,
    email: "CalvinMHart@teleworm.us"
    },
    {
    name: "Mateus",
    surname: "Pinto",
    age: 21,
    email: "MateusPinto@dayrep.com"
    }
];
users[2] = {
    name: "Irene",
    surname: "Purnell",
    age: 32,
    email: "IreneHPurnell@rhyta.com"
   
}
console.log(users[0].name,users[1].surname,users[2].age);
console.log(users instanceof Array);
console.log(users[0] instanceof Array);
console.log(users instanceof Object);
console.log(users[0] instanceof Object);
console.log(days.length,days.indexOf("Wed"));
console.log(days);
days.pop();
console.log(days);
days.push("end");
days.unshift("beginning")
console.log(days);
days.pop();
days.shift();
console.log(days);
console.log(days.reverse());
console.log(days.reverse().slice(1,6));