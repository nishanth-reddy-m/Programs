let contact = {
    _age: 36,
    firstName : "Astro",
    lastName : "Nis",
    get fullName() {return `${this.firstName} ${ this.lastName}`;},
    get age() { return this._age;},
    set age(a) { if( a > 0) this._age = a;}
};
for(let props in contact)
{
    console.log(`${props}`);
    let desc = Object.getOwnPropertyDescriptor(contact, props);
    for(let data in desc)
    {
        console.log(`${data}: ${desc[data]}`);
    }
    console.log();
}
contact._age = 22;
Object.defineProperty(contact,"_age",{writable: false});
contact._age = 13;
let desc = Object.getOwnPropertyDescriptor(contact, "_age");
console.log("_age");
for(let data in desc)
{
    console.log(`${data}: ${desc[data]}`);
}
console.log();