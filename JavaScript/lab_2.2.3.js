//1
metro = {
    from:"uppal",
    to:"kphb",
    price:59
}
console.log(`${metro.from} -> ${metro.to} = ${metro.price}`);

//2,3,4,5
user = {}
user.name = "John";
user.surname = "Wick";
console.log(`Hello ${user.name} ${user.surname}`)

library = [
    {
        title:"Speaking JavaScript",
        author:"Axel Rauschmayer",
        pages:460
    },
    {
        title:"Programming JavaScript Applications",
        author:"Eric Elliott",
        pages:254
    },
    {
        title:"Understanding ECMAScript 6",
        author:"Nicholas C. Zakas",
        pages:352
    }
]
let book = {
    title: "Learning JavaScript Design Patterns",
    author: "Addy Osmani",
    pages: 254
}
library.push(book);
console.log(`${library.length}\n${library[0].title}\n${library[1].title}\n${library[2].title}\n${library[3].title}`);
new_library = library.slice(-2);
library.shift();
console.log(`${library.length}\n${library[0].title}\n${library[1].title}\n${library[2].title}`);
console.log(library[0].pages+library[1].pages+library[2].pages);