let contact = {
    _age: 22,
   firstName : "Astro",
    lastName : "Nis",
    get fullName() {return `${this.firstName} ${ this.lastName}`;},
    get age() { return this._age;},
    set age(a) { if( a > 0) this._age = a;},
    get properties() {return Object.keys(this)}
};
console.log(contact.fullName);
contact.age = -20;
console.log(contact.age);
console.log(contact.properties);
